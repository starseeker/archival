/* Generated from compiler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:17
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: compiler.scm -output-file compiler.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: compiler
*/

#include "chicken.h"


#ifndef C_USE_C_DEFAULTS
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_DEFAULT_TARGET_STACK_SIZE
# define C_DEFAULT_TARGET_STACK_SIZE 0
#endif

#ifndef C_DEFAULT_TARGET_HEAP_SIZE
# define C_DEFAULT_TARGET_HEAP_SIZE 0
#endif


static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[785];


C_noret_decl(C_compiler_toplevel)
C_externexport void C_ccall C_compiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10084)
static void C_ccall f_10084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11091)
static void C_ccall f_11091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11094)
static void C_ccall f_11094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11097)
static void C_ccall f_11097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11103)
static void C_ccall f_11103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10921)
static void C_fcall f_10921(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10927)
static void C_ccall f_10927(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10174)
static void C_fcall f_10174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10910)
static void C_ccall f_10910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10894)
static void C_ccall f_10894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10907)
static void C_ccall f_10907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10888)
static void C_ccall f_10888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10864)
static void C_ccall f_10864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10812)
static void C_fcall f_10812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10815)
static void C_ccall f_10815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10769)
static void C_ccall f_10769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10781)
static void C_fcall f_10781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10772)
static void C_fcall f_10772(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10775)
static void C_ccall f_10775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10649)
static void C_ccall f_10649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10750)
static void C_ccall f_10750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10738)
static void C_ccall f_10738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10677)
static void C_ccall f_10677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10683)
static void C_fcall f_10683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10707)
static void C_ccall f_10707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10699)
static void C_ccall f_10699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10665)
static void C_ccall f_10665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10608)
static void C_ccall f_10608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10620)
static void C_ccall f_10620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10624)
static void C_ccall f_10624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10612)
static void C_ccall f_10612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10424)
static void C_ccall f_10424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10545)
static void C_ccall f_10545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10551)
static void C_ccall f_10551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10576)
static void C_ccall f_10576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10557)
static void C_fcall f_10557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10431)
static void C_ccall f_10431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10536)
static void C_ccall f_10536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10434)
static void C_ccall f_10434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10437)
static void C_ccall f_10437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10440)
static void C_ccall f_10440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10478)
static void C_ccall f_10478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10504)
static void C_ccall f_10504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10485)
static void C_fcall f_10485(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10489)
static void C_ccall f_10489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10462)
static void C_ccall f_10462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10368)
static void C_ccall f_10368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10377)
static void C_fcall f_10377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10371)
static void C_fcall f_10371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10352)
static void C_ccall f_10352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10325)
static void C_ccall f_10325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10304)
static void C_ccall f_10304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10297)
static void C_ccall f_10297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10280)
static void C_ccall f_10280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10276)
static void C_ccall f_10276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10252)
static void C_ccall f_10252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10232)
static void C_ccall f_10232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10087)
static void C_fcall f_10087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10091)
static void C_ccall f_10091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10106)
static void C_ccall f_10106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10116)
static void C_ccall f_10116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10121)
static void C_fcall f_10121(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10166)
static void C_ccall f_10166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10131)
static void C_fcall f_10131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10141)
static void C_ccall f_10141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10933)
static void C_fcall f_10933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10978)
static void C_ccall f_10978(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10946)
static void C_ccall f_10946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10955)
static void C_ccall f_10955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11010)
static void C_fcall f_11010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11026)
static void C_ccall f_11026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11033)
static void C_ccall f_11033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11014)
static void C_ccall f_11014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11024)
static void C_ccall f_11024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10996)
static void C_fcall f_10996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11004)
static void C_ccall f_11004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11042)
static void C_fcall f_11042(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11046)
static void C_ccall f_11046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10075)
static void C_ccall f_10075(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10057)
static void C_ccall f_10057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10048)
static void C_ccall f_10048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10039)
static void C_ccall f_10039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10030)
static void C_ccall f_10030(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10021)
static void C_ccall f_10021(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10012)
static void C_ccall f_10012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10003)
static void C_ccall f_10003(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9994)
static void C_ccall f_9994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9985)
static void C_ccall f_9985(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9976)
static void C_ccall f_9976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9967)
static void C_ccall f_9967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9958)
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9949)
static void C_ccall f_9949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9940)
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9931)
static void C_ccall f_9931(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9922)
static void C_ccall f_9922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9913)
static void C_ccall f_9913(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9904)
static void C_ccall f_9904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9895)
static void C_ccall f_9895(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9886)
static void C_ccall f_9886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9868)
static void C_ccall f_9868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9841)
static void C_ccall f_9841(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9832)
static void C_ccall f_9832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9823)
static void C_ccall f_9823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9814)
static void C_ccall f_9814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9808)
static void C_ccall f_9808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9802)
static void C_ccall f_9802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15,C_word t16) C_noret;
C_noret_decl(f_8568)
static void C_ccall f_8568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9769)
static void C_ccall f_9769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9772)
static void C_ccall f_9772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9778)
static void C_ccall f_9778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9796)
static void C_ccall f_9796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9794)
static void C_ccall f_9794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9784)
static void C_ccall f_9784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9621)
static void C_fcall f_9621(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9627)
static void C_ccall f_9627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8932)
static void C_fcall f_8932(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8951)
static void C_fcall f_8951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8984)
static void C_fcall f_8984(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9511)
static void C_ccall f_9511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9507)
static void C_ccall f_9507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9500)
static void C_fcall f_9500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9351)
static void C_ccall f_9351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9357)
static void C_ccall f_9357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9427)
static void C_ccall f_9427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9457)
static void C_ccall f_9457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9440)
static void C_ccall f_9440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9444)
static void C_ccall f_9444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9366)
static void C_ccall f_9366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9413)
static void C_ccall f_9413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9417)
static void C_ccall f_9417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9393)
static void C_ccall f_9393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9389)
static void C_ccall f_9389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9080)
static void C_ccall f_9080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9084)
static void C_ccall f_9084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9327)
static void C_ccall f_9327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9087)
static void C_ccall f_9087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9090)
static void C_ccall f_9090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9096)
static void C_ccall f_9096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9108)
static void C_fcall f_9108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9294)
static void C_ccall f_9294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9297)
static void C_ccall f_9297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9111)
static void C_ccall f_9111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9255)
static void C_ccall f_9255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9251)
static void C_ccall f_9251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9185)
static void C_ccall f_9185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9216)
static void C_ccall f_9216(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9227)
static void C_ccall f_9227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9214)
static void C_ccall f_9214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9196)
static void C_ccall f_9196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9173)
static void C_ccall f_9173(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9134)
static void C_ccall f_9134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9164)
static void C_ccall f_9164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9152)
static void C_ccall f_9152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9148)
static void C_ccall f_9148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9005)
static void C_ccall f_9005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9008)
static void C_ccall f_9008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9060)
static void C_ccall f_9060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9024)
static void C_ccall f_9024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9045)
static void C_ccall f_9045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8990)
static void C_ccall f_8990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8963)
static void C_ccall f_8963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8969)
static void C_ccall f_8969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9633)
static void C_fcall f_9633(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9640)
static void C_ccall f_9640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9656)
static void C_ccall f_9656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8598)
static void C_fcall f_8598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8617)
static void C_fcall f_8617(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8896)
static void C_ccall f_8896(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8857)
static void C_ccall f_8857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9710)
static void C_fcall f_9710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9722)
static void C_fcall f_9722(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9701)
static void C_ccall f_9701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9670)
static void C_ccall f_9670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8870)
static void C_ccall f_8870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8873)
static void C_ccall f_8873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8884)
static void C_ccall f_8884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8713)
static void C_ccall f_8713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8719)
static void C_fcall f_8719(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8731)
static void C_ccall f_8731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8734)
static void C_ccall f_8734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8737)
static void C_fcall f_8737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8755)
static void C_fcall f_8755(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8762)
static void C_ccall f_8762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8740)
static void C_ccall f_8740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8743)
static void C_ccall f_8743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8707)
static void C_fcall f_8707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8697)
static void C_fcall f_8697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8680)
static void C_ccall f_8680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8685)
static void C_ccall f_8685(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8638)
static void C_ccall f_8638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8655)
static void C_ccall f_8655(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8642)
static void C_ccall f_8642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8628)
static void C_ccall f_8628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8587)
static void C_fcall f_8587(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8596)
static void C_ccall f_8596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8577)
static void C_fcall f_8577(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8582)
static void C_ccall f_8582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8571)
static void C_fcall f_8571(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7053)
static void C_ccall f_7053(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7814)
static void C_ccall f_7814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7830)
static void C_ccall f_7830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8420)
static void C_fcall f_8420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8379)
static void C_ccall f_8379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8391)
static void C_fcall f_8391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8385)
static void C_fcall f_8385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8351)
static void C_ccall f_8351(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8325)
static void C_fcall f_8325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8281)
static void C_fcall f_8281(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8290)
static void C_ccall f_8290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8293)
static void C_fcall f_8293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8182)
static void C_fcall f_8182(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8250)
static void C_fcall f_8250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8253)
static void C_ccall f_8253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8210)
static void C_fcall f_8210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8146)
static void C_fcall f_8146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8153)
static void C_ccall f_8153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8134)
static void C_fcall f_8134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8119)
static void C_fcall f_8119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8095)
static void C_ccall f_8095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8083)
static void C_ccall f_8083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8040)
static void C_fcall f_8040(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7890)
static void C_fcall f_7890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7911)
static void C_fcall f_7911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7932)
static void C_fcall f_7932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7938)
static void C_ccall f_7938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7871)
static void C_fcall f_7871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7875)
static void C_ccall f_7875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7820)
static void C_ccall f_7820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_fcall f_7827(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7782)
static void C_fcall f_7782(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7800)
static void C_ccall f_7800(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7768)
static void C_fcall f_7768(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7776)
static void C_ccall f_7776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7647)
static void C_fcall f_7647(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7653)
static void C_ccall f_7653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7066)
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7088)
static void C_fcall f_7088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7603)
static void C_ccall f_7603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7576)
static void C_ccall f_7576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7585)
static void C_ccall f_7585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7524)
static void C_fcall f_7524(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7539)
static void C_fcall f_7539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7530)
static void C_fcall f_7530(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7507)
static void C_ccall f_7507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7477)
static void C_ccall f_7477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7467)
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7471)
static void C_ccall f_7471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7404)
static void C_fcall f_7404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7437)
static void C_fcall f_7437(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7407)
static void C_fcall f_7407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7434)
static void C_ccall f_7434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7410)
static void C_ccall f_7410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7341)
static void C_ccall f_7341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7358)
static void C_ccall f_7358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7279)
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7297)
static void C_ccall f_7297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7250)
static void C_ccall f_7250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7213)
static void C_ccall f_7213(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7143)
static void C_ccall f_7143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7100)
static void C_ccall f_7100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7131)
static void C_ccall f_7131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7659)
static void C_fcall f_7659(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7672)
static void C_fcall f_7672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7732)
static void C_ccall f_7732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7681)
static void C_fcall f_7681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7762)
static void C_fcall f_7762(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7059)
static C_word C_fcall f_7059(C_word t0);
C_noret_decl(f_7044)
static void C_ccall f_7044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7026)
static void C_ccall f_7026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7008)
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6972)
static void C_ccall f_6972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6276)
static void C_ccall f_6276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6838)
static void C_fcall f_6838(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6844)
static void C_fcall f_6844(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6882)
static void C_ccall f_6882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6905)
static void C_ccall f_6905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6822)
static void C_fcall f_6822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6828)
static void C_ccall f_6828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6697)
static void C_fcall f_6697(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6735)
static void C_ccall f_6735(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6323)
static void C_fcall f_6323(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6345)
static void C_fcall f_6345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6611)
static void C_fcall f_6611(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6816)
static void C_ccall f_6816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6576)
static void C_ccall f_6576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6526)
static void C_ccall f_6526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6563)
static void C_ccall f_6563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6559)
static void C_ccall f_6559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_fcall f_6451(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6416)
static void C_ccall f_6416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6395)
static void C_ccall f_6395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6361)
static void C_ccall f_6361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6279)
static void C_fcall f_6279(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6317)
static void C_ccall f_6317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6218)
static void C_fcall f_6218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6243)
static void C_ccall f_6243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6189)
static void C_fcall f_6189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6195)
static void C_fcall f_6195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6109)
static void C_fcall f_6109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6112)
static void C_fcall f_6112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6115)
static void C_fcall f_6115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6118)
static void C_ccall f_6118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6124)
static void C_ccall f_6124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6091)
static void C_ccall f_6091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6041)
static void C_ccall f_6041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6047)
static void C_ccall f_6047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5941)
static void C_ccall f_5941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5813)
static void C_fcall f_5813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5652)
static void C_ccall f_5652(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4653)
static void C_fcall f_4653(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5578)
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5554)
static void C_ccall f_5554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5352)
static void C_fcall f_5352(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5361)
static void C_fcall f_5361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_fcall f_5313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5021)
static void C_fcall f_5021(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5003)
static void C_ccall f_5003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4738)
static void C_fcall f_4738(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4602)
static void C_fcall f_4602(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_fcall f_4615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4560)
static void C_ccall f_4560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4544)
static void C_fcall f_4544(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2004)
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_fcall f_4420(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4441)
static void C_fcall f_4441(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_fcall f_2344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_fcall f_4205(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_ccall f_4218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_fcall f_4154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_fcall f_4104(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static C_word C_fcall f_4025(C_word *a,C_word t0);
C_noret_decl(f_4020)
static void C_fcall f_4020(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static C_word C_fcall f_3983(C_word *a,C_word t0);
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3758)
static void C_ccall f_3758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3568)
static void C_fcall f_3568(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3552)
static void C_ccall f_3552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3493)
static void C_ccall f_3493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_fcall f_3465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2883)
static void C_fcall f_2883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2777)
static void C_ccall f_2777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2760)
static void C_fcall f_2760(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_fcall f_2677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_fcall f_2634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2391)
static void C_fcall f_2391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_fcall f_2439(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2356)
static void C_ccall f_2356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2359)
static void C_ccall f_2359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2327)
static void C_ccall f_2327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2092)
static void C_ccall f_2092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2102)
static void C_ccall f_2102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1969)
static void C_fcall f_1969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1938)
static void C_fcall f_1938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1926)
static C_word C_fcall f_1926(C_word t0,C_word t1);
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1921)
static void C_ccall f_1921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_10921)
static void C_fcall trf_10921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10921(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_10921(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_10174)
static void C_fcall trf_10174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10174(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_10174(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_10812)
static void C_fcall trf_10812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10812(t0,t1);}

C_noret_decl(trf_10781)
static void C_fcall trf_10781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10781(t0,t1);}

C_noret_decl(trf_10772)
static void C_fcall trf_10772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10772(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10772(t0,t1);}

C_noret_decl(trf_10683)
static void C_fcall trf_10683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10683(t0,t1);}

C_noret_decl(trf_10557)
static void C_fcall trf_10557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10557(t0,t1);}

C_noret_decl(trf_10485)
static void C_fcall trf_10485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10485(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10485(t0,t1);}

C_noret_decl(trf_10377)
static void C_fcall trf_10377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10377(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10377(t0,t1);}

C_noret_decl(trf_10371)
static void C_fcall trf_10371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10371(t0,t1);}

C_noret_decl(trf_10087)
static void C_fcall trf_10087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10087(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10087(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10121)
static void C_fcall trf_10121(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10121(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10121(t0,t1,t2,t3);}

C_noret_decl(trf_10131)
static void C_fcall trf_10131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10131(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10131(t0,t1);}

C_noret_decl(trf_10933)
static void C_fcall trf_10933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10933(t0,t1,t2);}

C_noret_decl(trf_11010)
static void C_fcall trf_11010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11010(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11010(t0,t1,t2);}

C_noret_decl(trf_10996)
static void C_fcall trf_10996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10996(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10996(t0,t1,t2);}

C_noret_decl(trf_11042)
static void C_fcall trf_11042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11042(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11042(t0,t1);}

C_noret_decl(trf_9621)
static void C_fcall trf_9621(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9621(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9621(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8932)
static void C_fcall trf_8932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8932(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8932(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8951)
static void C_fcall trf_8951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8951(t0,t1);}

C_noret_decl(trf_8984)
static void C_fcall trf_8984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8984(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8984(t0,t1);}

C_noret_decl(trf_9500)
static void C_fcall trf_9500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9500(t0,t1);}

C_noret_decl(trf_9108)
static void C_fcall trf_9108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9108(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9108(t0,t1);}

C_noret_decl(trf_9633)
static void C_fcall trf_9633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9633(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9633(t0,t1,t2,t3);}

C_noret_decl(trf_8598)
static void C_fcall trf_8598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8598(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8598(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8617)
static void C_fcall trf_8617(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8617(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8617(t0,t1);}

C_noret_decl(trf_9710)
static void C_fcall trf_9710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9710(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9710(t0,t1);}

C_noret_decl(trf_9722)
static void C_fcall trf_9722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9722(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9722(t0,t1);}

C_noret_decl(trf_8719)
static void C_fcall trf_8719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8719(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8719(t0,t1);}

C_noret_decl(trf_8737)
static void C_fcall trf_8737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8737(t0,t1);}

C_noret_decl(trf_8755)
static void C_fcall trf_8755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8755(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8755(t0,t1);}

C_noret_decl(trf_8707)
static void C_fcall trf_8707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8707(t0,t1);}

C_noret_decl(trf_8697)
static void C_fcall trf_8697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8697(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8697(t0,t1);}

C_noret_decl(trf_8587)
static void C_fcall trf_8587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8587(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8587(t0,t1,t2);}

C_noret_decl(trf_8577)
static void C_fcall trf_8577(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8577(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8577(t0,t1,t2,t3);}

C_noret_decl(trf_8571)
static void C_fcall trf_8571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8571(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8571(t0,t1,t2,t3);}

C_noret_decl(trf_8420)
static void C_fcall trf_8420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8420(t0,t1);}

C_noret_decl(trf_8391)
static void C_fcall trf_8391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8391(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8391(t0,t1);}

C_noret_decl(trf_8385)
static void C_fcall trf_8385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8385(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8385(t0,t1);}

C_noret_decl(trf_8325)
static void C_fcall trf_8325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8325(t0,t1);}

C_noret_decl(trf_8281)
static void C_fcall trf_8281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8281(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8281(t0,t1);}

C_noret_decl(trf_8293)
static void C_fcall trf_8293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8293(t0,t1);}

C_noret_decl(trf_8182)
static void C_fcall trf_8182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8182(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8182(t0,t1);}

C_noret_decl(trf_8250)
static void C_fcall trf_8250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8250(t0,t1);}

C_noret_decl(trf_8210)
static void C_fcall trf_8210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8210(t0,t1);}

C_noret_decl(trf_8146)
static void C_fcall trf_8146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8146(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8146(t0,t1);}

C_noret_decl(trf_8134)
static void C_fcall trf_8134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8134(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8134(t0,t1);}

C_noret_decl(trf_8119)
static void C_fcall trf_8119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8119(t0,t1);}

C_noret_decl(trf_8040)
static void C_fcall trf_8040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8040(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8040(t0,t1);}

C_noret_decl(trf_7890)
static void C_fcall trf_7890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7890(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7890(t0,t1);}

C_noret_decl(trf_7911)
static void C_fcall trf_7911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7911(t0,t1);}

C_noret_decl(trf_7932)
static void C_fcall trf_7932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7932(t0,t1);}

C_noret_decl(trf_7871)
static void C_fcall trf_7871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7871(t0,t1);}

C_noret_decl(trf_7827)
static void C_fcall trf_7827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7827(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7827(t0,t1);}

C_noret_decl(trf_7782)
static void C_fcall trf_7782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7782(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7782(t0,t1,t2,t3);}

C_noret_decl(trf_7768)
static void C_fcall trf_7768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7768(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7768(t0,t1,t2,t3);}

C_noret_decl(trf_7647)
static void C_fcall trf_7647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7647(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_7647(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7066)
static void C_fcall trf_7066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7066(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_7066(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7088)
static void C_fcall trf_7088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7088(t0,t1);}

C_noret_decl(trf_7524)
static void C_fcall trf_7524(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7524(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7524(t0,t1);}

C_noret_decl(trf_7539)
static void C_fcall trf_7539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7539(t0,t1);}

C_noret_decl(trf_7530)
static void C_fcall trf_7530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7530(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7530(t0,t1);}

C_noret_decl(trf_7404)
static void C_fcall trf_7404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7404(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7404(t0,t1);}

C_noret_decl(trf_7437)
static void C_fcall trf_7437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7437(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7437(t0,t1);}

C_noret_decl(trf_7407)
static void C_fcall trf_7407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7407(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7407(t0,t1);}

C_noret_decl(trf_7279)
static void C_fcall trf_7279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7279(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7279(t0,t1,t2,t3);}

C_noret_decl(trf_7659)
static void C_fcall trf_7659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7659(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_7659(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7672)
static void C_fcall trf_7672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7672(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7672(t0,t1);}

C_noret_decl(trf_7681)
static void C_fcall trf_7681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7681(t0,t1);}

C_noret_decl(trf_7762)
static void C_fcall trf_7762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7762(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7762(t0,t1,t2,t3);}

C_noret_decl(trf_6838)
static void C_fcall trf_6838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6838(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6838(t0,t1,t2,t3);}

C_noret_decl(trf_6844)
static void C_fcall trf_6844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6844(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6844(t0,t1,t2,t3);}

C_noret_decl(trf_6822)
static void C_fcall trf_6822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6822(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6822(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6697)
static void C_fcall trf_6697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6697(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6697(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6323)
static void C_fcall trf_6323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6323(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6323(t0,t1,t2,t3);}

C_noret_decl(trf_6345)
static void C_fcall trf_6345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6345(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6345(t0,t1);}

C_noret_decl(trf_6611)
static void C_fcall trf_6611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6611(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6611(t0,t1);}

C_noret_decl(trf_6451)
static void C_fcall trf_6451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6451(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6451(t0,t1,t2,t3);}

C_noret_decl(trf_6279)
static void C_fcall trf_6279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6279(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6279(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6218)
static void C_fcall trf_6218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6218(t0,t1,t2);}

C_noret_decl(trf_6189)
static void C_fcall trf_6189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6189(t0,t1,t2);}

C_noret_decl(trf_6195)
static void C_fcall trf_6195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6195(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6195(t0,t1,t2);}

C_noret_decl(trf_6109)
static void C_fcall trf_6109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6109(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6109(t0,t1);}

C_noret_decl(trf_6112)
static void C_fcall trf_6112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6112(t0,t1);}

C_noret_decl(trf_6115)
static void C_fcall trf_6115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6115(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6115(t0,t1);}

C_noret_decl(trf_5813)
static void C_fcall trf_5813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5813(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5813(t0,t1);}

C_noret_decl(trf_4653)
static void C_fcall trf_4653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4653(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4653(t0,t1);}

C_noret_decl(trf_5352)
static void C_fcall trf_5352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5352(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5352(t0,t1);}

C_noret_decl(trf_5361)
static void C_fcall trf_5361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5361(t0,t1);}

C_noret_decl(trf_5313)
static void C_fcall trf_5313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5313(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5313(t0,t1);}

C_noret_decl(trf_5021)
static void C_fcall trf_5021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5021(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5021(t0,t1);}

C_noret_decl(trf_4738)
static void C_fcall trf_4738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4738(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4738(t0,t1);}

C_noret_decl(trf_4602)
static void C_fcall trf_4602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4602(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4602(t0,t1,t2,t3);}

C_noret_decl(trf_4615)
static void C_fcall trf_4615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4615(t0,t1);}

C_noret_decl(trf_4544)
static void C_fcall trf_4544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4544(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4544(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2004)
static void C_fcall trf_2004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2004(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2004(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4420)
static void C_fcall trf_4420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4420(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4420(t0,t1);}

C_noret_decl(trf_4441)
static void C_fcall trf_4441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4441(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4441(t0,t1);}

C_noret_decl(trf_2344)
static void C_fcall trf_2344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2344(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2344(t0,t1);}

C_noret_decl(trf_4205)
static void C_fcall trf_4205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4205(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4205(t0,t1);}

C_noret_decl(trf_4154)
static void C_fcall trf_4154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4154(t0,t1);}

C_noret_decl(trf_4104)
static void C_fcall trf_4104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4104(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4104(t0,t1,t2,t3);}

C_noret_decl(trf_4020)
static void C_fcall trf_4020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4020(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4020(t0,t1);}

C_noret_decl(trf_3568)
static void C_fcall trf_3568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3568(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3568(t0,t1);}

C_noret_decl(trf_3465)
static void C_fcall trf_3465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3465(t0,t1);}

C_noret_decl(trf_3197)
static void C_fcall trf_3197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3197(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3197(t0,t1,t2);}

C_noret_decl(trf_2883)
static void C_fcall trf_2883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2883(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2883(t0,t1);}

C_noret_decl(trf_2760)
static void C_fcall trf_2760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2760(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2760(t0,t1);}

C_noret_decl(trf_2644)
static void C_fcall trf_2644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2644(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2644(t0,t1);}

C_noret_decl(trf_2677)
static void C_fcall trf_2677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2677(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2677(t0,t1);}

C_noret_decl(trf_2634)
static void C_fcall trf_2634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2634(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2634(t0,t1,t2);}

C_noret_decl(trf_2391)
static void C_fcall trf_2391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2391(t0,t1,t2);}

C_noret_decl(trf_2439)
static void C_fcall trf_2439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2439(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2439(t0,t1);}

C_noret_decl(trf_1969)
static void C_fcall trf_1969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1969(t0,t1);}

C_noret_decl(trf_1938)
static void C_fcall trf_1938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1938(t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(tr17)
static void C_fcall tr17(C_proc17 k) C_regparm C_noret;
C_regparm static void C_fcall tr17(C_proc17 k){
C_word t16=C_pick(0);
C_word t15=C_pick(1);
C_word t14=C_pick(2);
C_word t13=C_pick(3);
C_word t12=C_pick(4);
C_word t11=C_pick(5);
C_word t10=C_pick(6);
C_word t9=C_pick(7);
C_word t8=C_pick(8);
C_word t7=C_pick(9);
C_word t6=C_pick(10);
C_word t5=C_pick(11);
C_word t4=C_pick(12);
C_word t3=C_pick(13);
C_word t2=C_pick(14);
C_word t1=C_pick(15);
C_word t0=C_pick(16);
C_adjust_stack(-17);
(k)(17,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16);}

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
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_compiler_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("compiler_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(5574)){
C_save(t1);
C_rereclaim2(5574*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,785);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],17,"user-options-pass");
lf[3]=C_h_intern(&lf[3],14,"user-read-pass");
lf[4]=C_h_intern(&lf[4],22,"user-preprocessor-pass");
lf[5]=C_h_intern(&lf[5],9,"user-pass");
lf[6]=C_h_intern(&lf[6],11,"user-pass-2");
lf[7]=C_h_intern(&lf[7],23,"user-post-analysis-pass");
lf[8]=C_h_intern(&lf[8],18,"\010compilerunit-name");
lf[9]=C_h_intern(&lf[9],11,"number-type");
lf[10]=C_h_intern(&lf[10],7,"generic");
lf[11]=C_h_intern(&lf[11],17,"standard-bindings");
lf[12]=C_h_intern(&lf[12],17,"extended-bindings");
lf[13]=C_h_intern(&lf[13],28,"\010compilerinsert-timer-checks");
lf[14]=C_h_intern(&lf[14],19,"\010compilerused-units");
lf[15]=C_h_intern(&lf[15],6,"unsafe");
lf[16]=C_h_intern(&lf[16],12,"always-bound");
lf[17]=C_h_intern(&lf[17],34,"\010compileralways-bound-to-procedure");
lf[18]=C_h_intern(&lf[18],29,"\010compilerforeign-declarations");
lf[19]=C_h_intern(&lf[19],24,"\010compileremit-trace-info");
lf[20]=C_h_intern(&lf[20],26,"\010compilerblock-compilation");
lf[21]=C_h_intern(&lf[21],34,"\010compilerline-number-database-size");
lf[22]=C_h_intern(&lf[22],25,"\010compilertarget-heap-size");
lf[23]=C_h_intern(&lf[23],33,"\010compilertarget-initial-heap-size");
lf[24]=C_h_intern(&lf[24],26,"\010compilertarget-stack-size");
lf[25]=C_h_intern(&lf[25],22,"optimize-leaf-routines");
lf[26]=C_h_intern(&lf[26],21,"\010compileremit-profile");
lf[27]=C_h_intern(&lf[27],15,"no-bound-checks");
lf[28]=C_h_intern(&lf[28],14,"no-argc-checks");
lf[29]=C_h_intern(&lf[29],19,"no-procedure-checks");
lf[30]=C_h_intern(&lf[30],22,"\010compilerblock-globals");
lf[31]=C_h_intern(&lf[31],24,"\010compilersource-filename");
lf[32]=C_h_intern(&lf[32],20,"\010compilerexport-list");
lf[33]=C_h_intern(&lf[33],28,"\010compilercompressed-literals");
lf[34]=C_h_intern(&lf[34],38,"\010compilerliteral-compression-threshold");
lf[35]=C_h_intern(&lf[35],40,"\010compilercompressed-literals-initializer");
lf[36]=C_h_intern(&lf[36],26,"\010compilersafe-globals-flag");
lf[37]=C_h_intern(&lf[37],26,"\010compilerexplicit-use-flag");
lf[38]=C_h_intern(&lf[38],40,"\010compilerdisable-stack-overflow-checking");
lf[39]=C_h_intern(&lf[39],24,"\010compilernamespace-table");
lf[40]=C_h_intern(&lf[40],29,"\010compilerrequire-imports-flag");
lf[41]=C_h_intern(&lf[41],27,"\010compileremit-unsafe-marker");
lf[42]=C_h_intern(&lf[42],30,"\010compilerexternal-protos-first");
lf[43]=C_h_intern(&lf[43],26,"\010compilerdo-lambda-lifting");
lf[44]=C_h_intern(&lf[44],24,"\010compilerinline-max-size");
lf[45]=C_h_intern(&lf[45],26,"\010compileremit-closure-info");
lf[46]=C_h_intern(&lf[46],23,"\010compileremit-line-info");
lf[47]=C_h_intern(&lf[47],25,"\010compilerexport-file-name");
lf[48]=C_h_intern(&lf[48],21,"\010compilerimport-table");
lf[49]=C_h_intern(&lf[49],25,"\010compileruse-import-table");
lf[50]=C_h_intern(&lf[50],33,"\010compilerundefine-shadowed-macros");
lf[51]=C_h_intern(&lf[51],30,"\010compilerconstant-declarations");
lf[52]=C_h_intern(&lf[52],41,"\010compilerdefault-default-target-heap-size");
lf[53]=C_h_intern(&lf[53],42,"\010compilerdefault-default-target-stack-size");
lf[54]=C_h_intern(&lf[54],21,"\010compilerverbose-mode");
lf[55]=C_h_intern(&lf[55],30,"\010compileroriginal-program-size");
lf[56]=C_h_intern(&lf[56],29,"\010compilercurrent-program-size");
lf[57]=C_h_intern(&lf[57],31,"\010compilerline-number-database-2");
lf[58]=C_h_intern(&lf[58],28,"\010compilerimmutable-constants");
lf[59]=C_h_intern(&lf[59],43,"\010compilerrest-parameters-promoted-to-vector");
lf[60]=C_h_intern(&lf[60],21,"\010compilerinline-table");
lf[61]=C_h_intern(&lf[61],26,"\010compilerinline-table-used");
lf[62]=C_h_intern(&lf[62],23,"\010compilerconstant-table");
lf[63]=C_h_intern(&lf[63],23,"\010compilerconstants-used");
lf[64]=C_h_intern(&lf[64],26,"\010compilermutable-constants");
lf[65]=C_h_intern(&lf[65],30,"\010compilerbroken-constant-nodes");
lf[66]=C_h_intern(&lf[66],37,"\010compilerinline-substitutions-enabled");
lf[67]=C_h_intern(&lf[67],24,"\010compilerdirect-call-ids");
lf[68]=C_h_intern(&lf[68],23,"\010compilerfirst-analysis");
lf[69]=C_h_intern(&lf[69],27,"\010compilerforeign-type-table");
lf[70]=C_h_intern(&lf[70],26,"\010compilerforeign-variables");
lf[71]=C_h_intern(&lf[71],29,"\010compilerforeign-lambda-stubs");
lf[72]=C_h_intern(&lf[72],22,"foreign-callback-stubs");
lf[73]=C_h_intern(&lf[73],27,"\010compilerexternal-variables");
lf[74]=C_h_intern(&lf[74],26,"\010compilerloop-lambda-names");
lf[75]=C_h_intern(&lf[75],28,"\010compilerprofile-lambda-list");
lf[76]=C_h_intern(&lf[76],29,"\010compilerprofile-lambda-index");
lf[77]=C_h_intern(&lf[77],33,"\010compilerprofile-info-vector-name");
lf[78]=C_h_intern(&lf[78],28,"\010compilerexternal-to-pointer");
lf[79]=C_h_intern(&lf[79],34,"\010compilererror-is-extended-binding");
lf[80]=C_h_intern(&lf[80],24,"\010compilerreal-name-table");
lf[81]=C_h_intern(&lf[81],29,"\010compilerlocation-pointer-map");
lf[82]=C_h_intern(&lf[82],34,"\010compilerpending-canonicalizations");
lf[83]=C_h_intern(&lf[83],29,"\010compilerdefconstant-bindings");
lf[84]=C_h_intern(&lf[84],23,"\010compilercallback-names");
lf[85]=C_h_intern(&lf[85],23,"\010compilertoplevel-scope");
lf[86]=C_h_intern(&lf[86],27,"\010compilertoplevel-lambda-id");
lf[87]=C_h_intern(&lf[87],29,"\010compilercustom-declare-alist");
lf[88]=C_h_intern(&lf[88],25,"\010compilercsc-control-file");
lf[89]=C_h_intern(&lf[89],26,"\010compilerdata-declarations");
lf[90]=C_h_intern(&lf[90],20,"\010compilerinline-list");
lf[91]=C_h_intern(&lf[91],24,"\010compilernot-inline-list");
lf[92]=C_h_intern(&lf[92],26,"\010compilerfile-requirements");
lf[93]=C_h_intern(&lf[93],28,"\010compilerpostponed-initforms");
lf[94]=C_h_intern(&lf[94],28,"\010compilerinitialize-compiler");
lf[95]=C_h_intern(&lf[95],12,"vector-fill!");
lf[96]=C_h_intern(&lf[96],11,"make-vector");
lf[97]=C_h_intern(&lf[97],15,"make-hash-table");
lf[98]=C_h_intern(&lf[98],3,"eq\077");
lf[99]=C_h_intern(&lf[99],25,"\010compilermake-random-name");
lf[100]=C_h_intern(&lf[100],12,"profile-info");
lf[101]=C_static_lambda_info(C_heaptop,32,"(##compiler#initialize-compiler)");
lf[102]=C_h_intern(&lf[102],32,"\010compilercanonicalize-expression");
lf[103]=C_static_lambda_info(C_heaptop,14,"(resolve ae21)");
lf[104]=C_h_intern(&lf[104],23,"\010compilerset-real-name!");
lf[105]=C_static_lambda_info(C_heaptop,15,"(a1943 a26 n27)");
lf[106]=C_h_intern(&lf[106],8,"for-each");
lf[107]=C_static_lambda_info(C_heaptop,27,"(set-real-names! as24 ns25)");
lf[108]=C_h_intern(&lf[108],5,"quote");
lf[109]=C_static_lambda_info(C_heaptop,17,"(unquotify g3132)");
lf[110]=C_h_intern(&lf[110],23,"\003sysmacroexpand-1-local");
lf[111]=C_h_intern(&lf[111],15,"\004coreinline_ref");
lf[112]=C_h_intern(&lf[112],36,"\010compilerforeign-type-convert-result");
lf[113]=C_h_intern(&lf[113],30,"\010compilerfinish-foreign-result");
lf[114]=C_h_intern(&lf[114],27,"\010compilerfinal-foreign-type");
lf[115]=C_h_intern(&lf[115],19,"\004coreinline_loc_ref");
lf[116]=C_h_intern(&lf[116],18,"\003syshash-table-ref");
lf[117]=C_h_intern(&lf[117],12,"syntax-error");
lf[118]=C_static_string(C_heaptop,19,"illegal atomic form");
lf[119]=C_h_intern(&lf[119],24,"\003syssyntax-error-culprit");
lf[120]=C_h_intern(&lf[120],2,"if");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[121]=C_h_pair(C_restore,tmp);
lf[122]=C_h_intern(&lf[122],16,"\003syscheck-syntax");
tmp=C_intern(C_heaptop,2,"if");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_vector(1,C_pick(0));
C_drop(1);
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
lf[123]=C_h_pair(C_restore,tmp);
lf[124]=C_h_intern(&lf[124],10,"alist-cons");
lf[125]=C_h_intern(&lf[125],17,"get-output-string");
lf[126]=C_h_intern(&lf[126],5,"write");
lf[127]=C_h_intern(&lf[127],18,"open-output-string");
lf[128]=C_h_intern(&lf[128],18,"\010compilerdebugging");
lf[129]=C_h_intern(&lf[129],1,"o");
lf[130]=C_static_string(C_heaptop,27,"compressing literal of size");
lf[131]=C_h_intern(&lf[131],6,"gensym");
lf[132]=C_h_intern(&lf[132],2,"lf");
lf[133]=C_h_intern(&lf[133],29,"\010compilercompressable-literal");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[134]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[135]=C_h_intern(&lf[135],10,"\004corecheck");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
lf[136]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[137]=C_h_intern(&lf[137],14,"\004coreimmutable");
lf[138]=C_h_intern(&lf[138],1,"c");
lf[139]=C_h_intern(&lf[139],6,"cadadr");
lf[140]=C_h_intern(&lf[140],14,"\004coreundefined");
lf[141]=C_h_intern(&lf[141],23,"\004corerequire-for-syntax");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[142]=C_h_pair(C_restore,tmp);
lf[143]=C_h_intern(&lf[143],10,"lset-union");
lf[144]=C_static_lambda_info(C_heaptop,15,"(a2360 g101102)");
lf[145]=C_static_lambda_info(C_heaptop,7,"(a2366)");
lf[146]=C_h_intern(&lf[146],18,"hash-table-update!");
lf[147]=C_h_intern(&lf[147],19,"syntax-requirements");
lf[148]=C_h_intern(&lf[148],11,"\003sysrequire");
lf[149]=C_h_intern(&lf[149],7,"\003sysmap");
lf[150]=C_h_intern(&lf[150],4,"eval");
lf[151]=C_h_intern(&lf[151],22,"\004corerequire-extension");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[152]=C_h_pair(C_restore,tmp);
lf[153]=C_h_intern(&lf[153],22,"\003sysdo-the-right-thing");
lf[154]=C_static_lambda_info(C_heaptop,7,"(a2405)");
lf[155]=C_h_intern(&lf[155],5,"begin");
lf[156]=C_h_intern(&lf[156],28,"\010compilerlookup-exports-file");
lf[157]=C_h_intern(&lf[157],7,"exports");
lf[158]=C_h_intern(&lf[158],19,"\003syshash-table-set!");
lf[159]=C_static_lambda_info(C_heaptop,15,"(a2464 g120121)");
lf[160]=C_h_intern(&lf[160],12,"\003sysfor-each");
lf[161]=C_h_intern(&lf[161],25,"\003sysextension-information");
lf[162]=C_h_intern(&lf[162],25,"\010compilercompiler-warning");
lf[163]=C_h_intern(&lf[163],3,"ext");
lf[164]=C_static_string(C_heaptop,41,"extension `~A\047 is currently not installed");
lf[165]=C_h_intern(&lf[165],18,"\003sysfind-extension");
lf[166]=C_h_intern(&lf[166],31,"\003syscanonicalize-extension-path");
lf[167]=C_h_intern(&lf[167],17,"require-extension");
lf[168]=C_h_intern(&lf[168],8,"feature\077");
lf[169]=C_static_lambda_info(C_heaptop,25,"(a2411 exp108110 f109111)");
lf[170]=C_h_intern(&lf[170],5,"cadar");
lf[171]=C_static_lambda_info(C_heaptop,13,"(loop ids106)");
lf[172]=C_h_intern(&lf[172],3,"let");
lf[173]=C_static_lambda_info(C_heaptop,15,"(a2540 g131132)");
lf[174]=C_h_intern(&lf[174],21,"\003syscanonicalize-body");
lf[175]=C_static_lambda_info(C_heaptop,21,"(a2546 alias129 b130)");
lf[176]=C_h_intern(&lf[176],3,"map");
lf[177]=C_h_intern(&lf[177],6,"append");
lf[178]=C_h_intern(&lf[178],4,"cons");
lf[179]=C_h_intern(&lf[179],6,"unzip1");
tmp=C_intern(C_heaptop,3,"let");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
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
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[180]=C_h_pair(C_restore,tmp);
lf[181]=C_h_intern(&lf[181],6,"lambda");
lf[182]=C_h_intern(&lf[182],20,"\004coreinternal-lambda");
lf[183]=C_h_intern(&lf[183],30,"\010compilerexpand-profile-lambda");
lf[184]=C_h_intern(&lf[184],37,"\010compilerprocess-lambda-documentation");
lf[185]=C_static_lambda_info(C_heaptop,13,"(g155 doc159)");
lf[186]=C_h_intern(&lf[186],6,"cddadr");
lf[187]=C_h_intern(&lf[187],5,"cdadr");
lf[188]=C_h_intern(&lf[188],5,"caadr");
lf[189]=C_h_intern(&lf[189],26,"\010compilerbuild-lambda-list");
lf[190]=C_h_intern(&lf[190],13,"\010compilerposq");
lf[191]=C_static_lambda_info(C_heaptop,15,"(a2768 g150151)");
lf[192]=C_static_lambda_info(C_heaptop,31,"(a2592 vars144 argc145 rest146)");
lf[193]=C_h_intern(&lf[193],30,"\010compilerdecompose-lambda-list");
lf[194]=C_h_intern(&lf[194],31,"\003sysexpand-extended-lambda-list");
lf[195]=C_h_intern(&lf[195],9,"\003syserror");
lf[196]=C_static_lambda_info(C_heaptop,7,"(a2784)");
lf[197]=C_static_lambda_info(C_heaptop,31,"(a2790 llist139141 obody140142)");
lf[198]=C_h_intern(&lf[198],25,"\003sysextended-lambda-list\077");
tmp=C_intern(C_heaptop,1,"_");
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
lf[199]=C_h_pair(C_restore,tmp);
lf[200]=C_h_intern(&lf[200],17,"\004corenamed-lambda");
lf[201]=C_h_intern(&lf[201],16,"\004coreloop-lambda");
lf[202]=C_static_lambda_info(C_heaptop,15,"(a2847 g170171)");
lf[203]=C_h_intern(&lf[203],4,"set!");
lf[204]=C_h_intern(&lf[204],9,"\004coreset!");
lf[205]=C_h_intern(&lf[205],18,"\004coreinline_update");
lf[206]=C_h_intern(&lf[206],27,"\010compilerforeign-type-check");
lf[207]=C_h_intern(&lf[207],38,"\010compilerforeign-type-convert-argument");
lf[208]=C_h_intern(&lf[208],22,"\004coreinline_loc_update");
lf[209]=C_h_intern(&lf[209],6,"syntax");
lf[210]=C_static_string(C_heaptop,26,"assignment to keyword `~S\047");
lf[211]=C_h_intern(&lf[211],8,"keyword\077");
lf[212]=C_h_intern(&lf[212],15,"undefine-macro!");
lf[213]=C_h_intern(&lf[213],3,"var");
lf[214]=C_static_string(C_heaptop,43,"assigned global variable `~S\047 is a macro ~A");
lf[215]=C_h_intern(&lf[215],7,"sprintf");
lf[216]=C_static_string(C_heaptop,10,"in line ~S");
lf[217]=C_static_string(C_heaptop,0,"");
lf[218]=C_h_intern(&lf[218],6,"macro\077");
lf[219]=C_h_intern(&lf[219],11,"lset-adjoin");
lf[220]=C_h_intern(&lf[220],17,"\010compilerget-line");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[221]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[222]=C_h_intern(&lf[222],11,"\004coreinline");
lf[223]=C_h_intern(&lf[223],20,"\004coreinline_allocate");
lf[224]=C_h_intern(&lf[224],19,"\004corecompiletimetoo");
lf[225]=C_h_intern(&lf[225],23,"\004coreelaborationtimetoo");
lf[226]=C_h_intern(&lf[226],20,"\004corecompiletimeonly");
lf[227]=C_h_intern(&lf[227],24,"\004coreelaborationtimeonly");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[228]=C_h_pair(C_restore,tmp);
lf[229]=C_h_intern(&lf[229],32,"\010compilercanonicalize-begin-body");
lf[230]=C_static_lambda_info(C_heaptop,12,"(fold xs203)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[231]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[232]=C_h_pair(C_restore,tmp);
lf[233]=C_h_intern(&lf[233],19,"\004coreforeign-lambda");
lf[234]=C_h_intern(&lf[234],30,"\010compilerexpand-foreign-lambda");
lf[235]=C_h_intern(&lf[235],28,"\004coreforeign-callback-lambda");
lf[236]=C_h_intern(&lf[236],39,"\010compilerexpand-foreign-callback-lambda");
lf[237]=C_h_intern(&lf[237],20,"\004coreforeign-lambda*");
lf[238]=C_h_intern(&lf[238],31,"\010compilerexpand-foreign-lambda*");
lf[239]=C_h_intern(&lf[239],29,"\004coreforeign-callback-lambda*");
lf[240]=C_h_intern(&lf[240],40,"\010compilerexpand-foreign-callback-lambda*");
lf[241]=C_h_intern(&lf[241],22,"\004coreforeign-primitive");
lf[242]=C_h_intern(&lf[242],33,"\010compilerexpand-foreign-primitive");
lf[243]=C_h_intern(&lf[243],28,"\004coredefine-foreign-variable");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[244]=C_h_pair(C_restore,tmp);
lf[245]=C_h_intern(&lf[245],14,"symbol->string");
lf[246]=C_h_intern(&lf[246],24,"\004coredefine-foreign-type");
lf[247]=C_h_intern(&lf[247],10,"\003sysvalues");
lf[248]=C_h_intern(&lf[248],5,"cons*");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[249]=C_h_pair(C_restore,tmp);
lf[250]=C_h_intern(&lf[250],29,"\004coredefine-external-variable");
lf[251]=C_h_intern(&lf[251],9,"c-pointer");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[252]=C_h_pair(C_restore,tmp);
lf[253]=C_h_intern(&lf[253],13,"string-append");
lf[254]=C_static_string(C_heaptop,1,"&");
lf[255]=C_h_intern(&lf[255],5,"fifth");
lf[256]=C_h_intern(&lf[256],17,"\004corelet-location");
lf[257]=C_static_string(C_heaptop,16,"C_a_i_bytevector");
lf[258]=C_h_intern(&lf[258],10,"\003sysappend");
lf[259]=C_h_intern(&lf[259],14,"\010compilerwords");
lf[260]=C_h_intern(&lf[260],46,"\010compilerestimate-foreign-result-location-size");
lf[261]=C_h_intern(&lf[261],18,"\004coredefine-inline");
lf[262]=C_h_intern(&lf[262],34,"\010compilerextract-mutable-constants");
lf[263]=C_static_lambda_info(C_heaptop,7,"(a3654)");
lf[264]=C_static_lambda_info(C_heaptop,12,"(a3694 m242)");
lf[265]=C_static_lambda_info(C_heaptop,24,"(a3672 val2240 mlist241)");
lf[266]=C_h_intern(&lf[266],20,"\004coredefine-constant");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[267]=C_h_pair(C_restore,tmp);
lf[268]=C_static_string(C_heaptop,8,"constant");
lf[269]=C_h_intern(&lf[269],5,"const");
lf[270]=C_static_string(C_heaptop,64,"value for constant binding appears not to be a valid literal: ~s");
lf[271]=C_h_intern(&lf[271],23,"\010compilerbasic-literal\077");
lf[272]=C_h_intern(&lf[272],29,"\010compilercollapsable-literal\077");
lf[273]=C_h_intern(&lf[273],4,"quit");
lf[274]=C_static_string(C_heaptop,56,"error in constant evaluation of ~S for named constant ~S");
lf[275]=C_static_lambda_info(C_heaptop,7,"(a3818)");
lf[276]=C_static_lambda_info(C_heaptop,13,"(a3812 ex252)");
lf[277]=C_static_lambda_info(C_heaptop,7,"(a3830)");
lf[278]=C_static_lambda_info(C_heaptop,7,"(a3852)");
lf[279]=C_static_lambda_info(C_heaptop,17,"(a3846 . g250253)");
lf[280]=C_static_lambda_info(C_heaptop,7,"(a3824)");
lf[281]=C_h_intern(&lf[281],22,"with-exception-handler");
lf[282]=C_static_lambda_info(C_heaptop,15,"(a3806 g249251)");
lf[283]=C_h_intern(&lf[283],30,"call-with-current-continuation");
lf[284]=C_h_intern(&lf[284],12,"\004coredeclare");
lf[285]=C_h_intern(&lf[285],28,"\010compilerprocess-declaration");
lf[286]=C_static_lambda_info(C_heaptop,12,"(a3879 d263)");
lf[287]=C_h_intern(&lf[287],29,"\004coreforeign-callback-wrapper");
lf[288]=C_h_intern(&lf[288],8,"split-at");
lf[289]=C_static_lambda_info(C_heaptop,7,"(a3902)");
lf[290]=C_h_intern(&lf[290],1,"r");
lf[291]=C_h_intern(&lf[291],17,"\003sysmake-c-string");
lf[292]=C_h_intern(&lf[292],3,"and");
lf[293]=C_static_string(C_heaptop,62,"`c-string*\047 is not a valid result type for callback procedures");
lf[294]=C_static_lambda_info(C_heaptop,6,"(g288)");
tmp=C_intern(C_heaptop,5,"const");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"nonnull-c-string");
C_save(tmp);
lf[295]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[296]=C_h_intern(&lf[296],16,"nonnull-c-string");
tmp=C_intern(C_heaptop,5,"const");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"c-string*");
C_save(tmp);
lf[297]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[298]=C_h_intern(&lf[298],9,"c-string*");
lf[299]=C_h_intern(&lf[299],8,"c-string");
tmp=C_intern(C_heaptop,5,"const");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"c-string");
C_save(tmp);
lf[300]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[301]=C_static_lambda_info(C_heaptop,23,"(loop vars281 types282)");
lf[302]=C_static_string(C_heaptop,65,"non-matching or invalid argument list to foreign callback-wrapper");
lf[303]=C_static_string(C_heaptop,60,"name `~S\047 of external definition is not a valid C identifier");
lf[304]=C_h_intern(&lf[304],28,"\010compilervalid-c-identifier\077");
lf[305]=C_static_lambda_info(C_heaptop,28,"(a3912 args264266 lam265267)");
lf[306]=C_static_lambda_info(C_heaptop,13,"(handle-call)");
lf[307]=C_h_intern(&lf[307],8,"location");
lf[308]=C_h_intern(&lf[308],17,"\003sysmake-locative");
tmp=C_intern(C_heaptop,8,"location");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[309]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[310]=C_h_intern(&lf[310],13,"\004corecallunit");
lf[311]=C_h_intern(&lf[311],14,"\004coreprimitive");
lf[312]=C_h_intern(&lf[312],37,"\010compilerupdate-line-number-database!");
lf[313]=C_static_string(C_heaptop,35,"(in line ~s) - malformed expression");
lf[314]=C_static_string(C_heaptop,20,"malformed expression");
lf[315]=C_h_intern(&lf[315],31,"\010compileremit-syntax-trace-info");
lf[316]=C_static_string(C_heaptop,32,"literal in operator position: ~S");
lf[317]=C_h_intern(&lf[317],4,"list");
lf[318]=C_h_intern(&lf[318],1,"t");
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
lf[319]=C_h_pair(C_restore,tmp);
lf[320]=C_h_intern(&lf[320],4,"caar");
lf[321]=C_h_intern(&lf[321],18,"\010compilerconstant\077");
lf[322]=C_static_string(C_heaptop,20,"malformed expression");
lf[323]=C_static_lambda_info(C_heaptop,27,"(walk x39 ae40 me41 dest42)");
lf[324]=C_static_lambda_info(C_heaptop,12,"(a4549 x325)");
lf[325]=C_static_lambda_info(C_heaptop,27,"(mapwalk xs322 ae323 me324)");
lf[326]=C_h_intern(&lf[326],26,"\010compilerinternal-bindings");
lf[327]=C_h_intern(&lf[327],38,"\003syscompiler-toplevel-macroexpand-hook");
lf[328]=C_h_intern(&lf[328],7,"reverse");
lf[329]=C_h_intern(&lf[329],22,"\003sysclear-trace-buffer");
lf[330]=C_h_intern(&lf[330],26,"\010compilerdebugging-chicken");
lf[331]=C_h_intern(&lf[331],12,"pretty-print");
lf[332]=C_h_intern(&lf[332],7,"newline");
lf[333]=C_static_lambda_info(C_heaptop,42,"(##compiler#canonicalize-expression exp13)");
lf[334]=C_static_string(C_heaptop,19,"invalid declaration");
lf[335]=C_static_lambda_info(C_heaptop,40,"(check-decl spec341 minlen342 maxlen343)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[336]=C_h_pair(C_restore,tmp);
lf[337]=C_h_intern(&lf[337],4,"uses");
lf[338]=C_h_intern(&lf[338],29,"\010compilerstring->c-identifier");
lf[339]=C_h_intern(&lf[339],18,"\010compilerstringify");
lf[340]=C_static_lambda_info(C_heaptop,12,"(a4692 u357)");
lf[341]=C_static_lambda_info(C_heaptop,15,"(a4702 g354355)");
lf[342]=C_static_lambda_info(C_heaptop,7,"(a4708)");
lf[343]=C_h_intern(&lf[343],17,"register-feature!");
lf[344]=C_h_intern(&lf[344],4,"unit");
lf[345]=C_h_intern(&lf[345],5,"usage");
lf[346]=C_static_string(C_heaptop,51,"unit was already given a name (new name is ignored)");
lf[347]=C_h_intern(&lf[347],15,"hash-table-set!");
lf[348]=C_h_intern(&lf[348],34,"\010compilerdefault-standard-bindings");
lf[349]=C_h_intern(&lf[349],34,"\010compilerdefault-extended-bindings");
lf[350]=C_h_intern(&lf[350],18,"usual-integrations");
lf[351]=C_h_intern(&lf[351],17,"lset-intersection");
lf[352]=C_h_intern(&lf[352],6,"fixnum");
lf[353]=C_h_intern(&lf[353],17,"fixnum-arithmetic");
lf[354]=C_h_intern(&lf[354],23,"\005matchset-error-control");
lf[355]=C_h_intern(&lf[355],12,"\000unspecified");
lf[356]=C_h_intern(&lf[356],4,"safe");
lf[357]=C_h_intern(&lf[357],18,"interrupts-enabled");
lf[358]=C_h_intern(&lf[358],18,"disable-interrupts");
lf[359]=C_h_intern(&lf[359],15,"disable-warning");
lf[360]=C_h_intern(&lf[360],26,"\010compilerdisabled-warnings");
lf[361]=C_h_intern(&lf[361],12,"safe-globals");
lf[362]=C_h_intern(&lf[362],38,"no-procedure-checks-for-usual-bindings");
lf[363]=C_h_intern(&lf[363],18,"bound-to-procedure");
lf[364]=C_h_intern(&lf[364],15,"foreign-declare");
lf[365]=C_static_string(C_heaptop,19,"invalid declaration");
lf[366]=C_h_intern(&lf[366],5,"every");
lf[367]=C_h_intern(&lf[367],7,"string\077");
lf[368]=C_h_intern(&lf[368],14,"custom-declare");
lf[369]=C_static_string(C_heaptop,19,"invalid declaration");
lf[370]=C_h_intern(&lf[370],35,"\010compilerprocess-custom-declaration");
lf[371]=C_h_intern(&lf[371],9,"c-options");
lf[372]=C_h_intern(&lf[372],31,"\010compileremit-control-file-item");
lf[373]=C_h_intern(&lf[373],12,"link-options");
lf[374]=C_h_intern(&lf[374],12,"post-process");
lf[375]=C_h_intern(&lf[375],17,"string-substitute");
lf[376]=C_static_string(C_heaptop,3,"\134$@");
lf[377]=C_static_lambda_info(C_heaptop,15,"(a5119 g381382)");
lf[378]=C_h_intern(&lf[378],24,"pathname-strip-extension");
lf[379]=C_h_intern(&lf[379],5,"block");
lf[380]=C_h_intern(&lf[380],8,"separate");
lf[381]=C_h_intern(&lf[381],20,"keep-shadowed-macros");
lf[382]=C_h_intern(&lf[382],3,"not");
lf[383]=C_h_intern(&lf[383],15,"lset-difference");
lf[384]=C_h_intern(&lf[384],6,"inline");
lf[385]=C_static_string(C_heaptop,34,"illegal declaration specifier `~s\047");
lf[386]=C_h_intern(&lf[386],15,"run-time-macros");
lf[387]=C_h_intern(&lf[387],25,"\003sysenable-runtime-macros");
lf[388]=C_h_intern(&lf[388],12,"block-global");
lf[389]=C_h_intern(&lf[389],4,"hide");
lf[390]=C_h_intern(&lf[390],6,"export");
lf[391]=C_h_intern(&lf[391],17,"compress-literals");
lf[392]=C_h_intern(&lf[392],12,"emit-exports");
lf[393]=C_static_string(C_heaptop,34,"invalid `emit-exports\047 declaration");
lf[394]=C_h_intern(&lf[394],30,"emit-external-prototypes-first");
lf[395]=C_h_intern(&lf[395],11,"lambda-lift");
lf[396]=C_h_intern(&lf[396],12,"inline-limit");
lf[397]=C_static_string(C_heaptop,46,"invalid argument to `inline-limit\047 declaration");
lf[398]=C_h_intern(&lf[398],9,"namespace");
lf[399]=C_h_intern(&lf[399],13,"alist-update!");
lf[400]=C_static_string(C_heaptop,48,"invalid arguments to `namespace\047 declaration: ~S");
lf[401]=C_h_intern(&lf[401],7,"symbol\077");
lf[402]=C_h_intern(&lf[402],8,"constant");
lf[403]=C_static_string(C_heaptop,47,"invalid arguments to `constant\047 declaration: ~S");
lf[404]=C_h_intern(&lf[404],6,"import");
lf[405]=C_static_string(C_heaptop,58,"argument to `import\047 declaration is not a string or symbol");
lf[406]=C_static_lambda_info(C_heaptop,12,"(a5577 x416)");
lf[407]=C_h_intern(&lf[407],9,"partition");
lf[408]=C_static_lambda_info(C_heaptop,7,"(a5571)");
lf[409]=C_static_string(C_heaptop,6,"<here>");
lf[410]=C_static_lambda_info(C_heaptop,15,"(a5609 g421422)");
lf[411]=C_static_lambda_info(C_heaptop,29,"(a5599 syms414417 strs415418)");
lf[412]=C_static_string(C_heaptop,34,"illegal declaration specifier `~s\047");
lf[413]=C_static_string(C_heaptop,33,"invalid declaration specification");
lf[414]=C_static_lambda_info(C_heaptop,7,"(a4652)");
lf[415]=C_static_lambda_info(C_heaptop,40,"(##compiler#process-declaration spec339)");
lf[416]=C_h_intern(&lf[416],17,"make-foreign-stub");
lf[417]=C_h_intern(&lf[417],12,"foreign-stub");
lf[418]=C_static_lambda_info(C_heaptop,111,"(make-foreign-stub id428 return-type429 name430 argument-types431 argument-names"
"432 body433 cps434 callback435)");
lf[419]=C_h_intern(&lf[419],13,"foreign-stub\077");
lf[420]=C_static_lambda_info(C_heaptop,20,"(foreign-stub\077 x436)");
lf[421]=C_h_intern(&lf[421],20,"foreign-stub-id-set!");
lf[422]=C_h_intern(&lf[422],14,"\003sysblock-set!");
lf[423]=C_static_lambda_info(C_heaptop,34,"(foreign-stub-id-set! x437 val438)");
lf[424]=C_h_intern(&lf[424],15,"foreign-stub-id");
lf[425]=C_static_lambda_info(C_heaptop,22,"(foreign-stub-id x440)");
lf[426]=C_h_intern(&lf[426],29,"foreign-stub-return-type-set!");
lf[427]=C_static_lambda_info(C_heaptop,43,"(foreign-stub-return-type-set! x443 val444)");
lf[428]=C_h_intern(&lf[428],24,"foreign-stub-return-type");
lf[429]=C_static_lambda_info(C_heaptop,31,"(foreign-stub-return-type x446)");
lf[430]=C_h_intern(&lf[430],22,"foreign-stub-name-set!");
lf[431]=C_static_lambda_info(C_heaptop,36,"(foreign-stub-name-set! x449 val450)");
lf[432]=C_h_intern(&lf[432],17,"foreign-stub-name");
lf[433]=C_static_lambda_info(C_heaptop,24,"(foreign-stub-name x452)");
lf[434]=C_h_intern(&lf[434],32,"foreign-stub-argument-types-set!");
lf[435]=C_static_lambda_info(C_heaptop,46,"(foreign-stub-argument-types-set! x455 val456)");
lf[436]=C_h_intern(&lf[436],27,"foreign-stub-argument-types");
lf[437]=C_static_lambda_info(C_heaptop,34,"(foreign-stub-argument-types x458)");
lf[438]=C_h_intern(&lf[438],32,"foreign-stub-argument-names-set!");
lf[439]=C_static_lambda_info(C_heaptop,46,"(foreign-stub-argument-names-set! x461 val462)");
lf[440]=C_h_intern(&lf[440],27,"foreign-stub-argument-names");
lf[441]=C_static_lambda_info(C_heaptop,34,"(foreign-stub-argument-names x464)");
lf[442]=C_h_intern(&lf[442],22,"foreign-stub-body-set!");
lf[443]=C_static_lambda_info(C_heaptop,36,"(foreign-stub-body-set! x467 val468)");
lf[444]=C_h_intern(&lf[444],17,"foreign-stub-body");
lf[445]=C_static_lambda_info(C_heaptop,24,"(foreign-stub-body x470)");
lf[446]=C_h_intern(&lf[446],21,"foreign-stub-cps-set!");
lf[447]=C_static_lambda_info(C_heaptop,35,"(foreign-stub-cps-set! x473 val474)");
lf[448]=C_h_intern(&lf[448],16,"foreign-stub-cps");
lf[449]=C_static_lambda_info(C_heaptop,23,"(foreign-stub-cps x476)");
lf[450]=C_h_intern(&lf[450],26,"foreign-stub-callback-set!");
lf[451]=C_static_lambda_info(C_heaptop,40,"(foreign-stub-callback-set! x479 val480)");
lf[452]=C_h_intern(&lf[452],21,"foreign-stub-callback");
lf[453]=C_static_lambda_info(C_heaptop,28,"(foreign-stub-callback x482)");
lf[454]=C_h_intern(&lf[454],28,"\010compilercreate-foreign-stub");
tmp=C_intern(C_heaptop,6,"\003sysgc");
C_save(tmp);
tmp=C_SCHEME_FALSE;
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[455]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[456]=C_h_pair(C_restore,tmp);
lf[457]=C_static_string(C_heaptop,16,"C_a_i_bytevector");
lf[458]=C_static_lambda_info(C_heaptop,17,"(a5903 p509 t510)");
lf[459]=C_h_intern(&lf[459],37,"\010compilerestimate-foreign-result-size");
lf[460]=C_h_intern(&lf[460],4,"stub");
lf[461]=C_h_intern(&lf[461],1,"a");
lf[462]=C_static_lambda_info(C_heaptop,12,"(a5934 x502)");
lf[463]=C_h_intern(&lf[463],13,"list-tabulate");
lf[464]=C_static_lambda_info(C_heaptop,101,"(##compiler#create-foreign-stub rtype494 sname495 argtypes496 argnames497 body49"
"8 callback499 cps500)");
lf[465]=C_h_intern(&lf[465],6,"second");
lf[466]=C_static_string(C_heaptop,45,"name `~s\047 of foreign procedure has wrong type");
lf[467]=C_static_lambda_info(C_heaptop,41,"(##compiler#expand-foreign-lambda exp515)");
lf[468]=C_static_string(C_heaptop,45,"name `~s\047 of foreign procedure has wrong type");
lf[469]=C_static_lambda_info(C_heaptop,50,"(##compiler#expand-foreign-callback-lambda exp520)");
lf[470]=C_h_intern(&lf[470],4,"cadr");
lf[471]=C_h_intern(&lf[471],3,"car");
lf[472]=C_static_lambda_info(C_heaptop,42,"(##compiler#expand-foreign-lambda* exp525)");
lf[473]=C_static_lambda_info(C_heaptop,51,"(##compiler#expand-foreign-callback-lambda* exp531)");
lf[474]=C_h_intern(&lf[474],4,"void");
lf[475]=C_static_lambda_info(C_heaptop,44,"(##compiler#expand-foreign-primitive exp537)");
lf[476]=C_static_lambda_info(C_heaptop,12,"(loop xs550)");
lf[477]=C_static_lambda_info(C_heaptop,17,"(mapupdate xs548)");
lf[478]=C_h_intern(&lf[478],24,"\003sysline-number-database");
lf[479]=C_static_lambda_info(C_heaptop,11,"(walk x553)");
lf[480]=C_static_lambda_info(C_heaptop,54,"(##compiler#update-line-number-database! exp544 ln545)");
lf[481]=C_h_intern(&lf[481],31,"\010compilerperform-cps-conversion");
lf[482]=C_h_intern(&lf[482],4,"node");
lf[483]=C_h_intern(&lf[483],11,"\004corelambda");
lf[484]=C_h_intern(&lf[484],9,"\004corecall");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[485]=C_h_pair(C_restore,tmp);
lf[486]=C_h_intern(&lf[486],16,"\010compilervarnode");
lf[487]=C_static_lambda_info(C_heaptop,12,"(a6305 r579)");
lf[488]=C_h_intern(&lf[488],1,"k");
lf[489]=C_static_lambda_info(C_heaptop,40,"(cps-lambda id571 llist572 subs573 k574)");
lf[490]=C_h_intern(&lf[490],13,"\004corevariable");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[491]=C_h_pair(C_restore,tmp);
lf[492]=C_static_lambda_info(C_heaptop,9,"(k1 r605)");
lf[493]=C_static_lambda_info(C_heaptop,12,"(a6400 v615)");
lf[494]=C_h_intern(&lf[494],2,"f_");
lf[495]=C_static_lambda_info(C_heaptop,12,"(a6473 r622)");
lf[496]=C_static_lambda_info(C_heaptop,22,"(loop vars620 vals621)");
lf[497]=C_static_lambda_info(C_heaptop,12,"(a6534 r628)");
lf[498]=C_h_intern(&lf[498],26,"make-foreign-callback-stub");
lf[499]=C_h_intern(&lf[499],13,"\010compilerbomb");
lf[500]=C_static_string(C_heaptop,14,"bad node (cps)");
lf[501]=C_h_intern(&lf[501],15,"\004coreglobal-ref");
lf[502]=C_static_lambda_info(C_heaptop,16,"(walk n583 k584)");
lf[503]=C_static_lambda_info(C_heaptop,12,"(a6734 r663)");
lf[504]=C_static_lambda_info(C_heaptop,15,"(a6728 vars662)");
lf[505]=C_static_lambda_info(C_heaptop,40,"(walk-call fn650 args651 params652 k653)");
lf[506]=C_static_lambda_info(C_heaptop,15,"(a6827 vars684)");
lf[507]=C_static_lambda_info(C_heaptop,46,"(walk-inline-call class680 op681 args682 k683)");
lf[508]=C_static_lambda_info(C_heaptop,12,"(a6890 r694)");
lf[509]=C_static_lambda_info(C_heaptop,22,"(loop args691 vars692)");
lf[510]=C_static_lambda_info(C_heaptop,30,"(walk-arguments args688 wk689)");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"\004corevariable");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"\004coreglobal-ref");
C_save(tmp);
lf[511]=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
lf[512]=C_static_lambda_info(C_heaptop,14,"(atomic\077 n699)");
lf[513]=C_h_intern(&lf[513],6,"values");
lf[514]=C_static_lambda_info(C_heaptop,43,"(##compiler#perform-cps-conversion node563)");
lf[515]=C_h_intern(&lf[515],21,"foreign-callback-stub");
lf[516]=C_static_lambda_info(C_heaptop,89,"(make-foreign-callback-stub id712 name713 qualifiers714 return-type715 argument-"
"types716)");
lf[517]=C_h_intern(&lf[517],22,"foreign-callback-stub\077");
lf[518]=C_static_lambda_info(C_heaptop,29,"(foreign-callback-stub\077 x717)");
lf[519]=C_h_intern(&lf[519],29,"foreign-callback-stub-id-set!");
lf[520]=C_static_lambda_info(C_heaptop,43,"(foreign-callback-stub-id-set! x718 val719)");
lf[521]=C_h_intern(&lf[521],24,"foreign-callback-stub-id");
lf[522]=C_static_lambda_info(C_heaptop,31,"(foreign-callback-stub-id x721)");
lf[523]=C_h_intern(&lf[523],31,"foreign-callback-stub-name-set!");
lf[524]=C_static_lambda_info(C_heaptop,45,"(foreign-callback-stub-name-set! x724 val725)");
lf[525]=C_h_intern(&lf[525],26,"foreign-callback-stub-name");
lf[526]=C_static_lambda_info(C_heaptop,33,"(foreign-callback-stub-name x727)");
lf[527]=C_h_intern(&lf[527],37,"foreign-callback-stub-qualifiers-set!");
lf[528]=C_static_lambda_info(C_heaptop,51,"(foreign-callback-stub-qualifiers-set! x730 val731)");
lf[529]=C_h_intern(&lf[529],32,"foreign-callback-stub-qualifiers");
lf[530]=C_static_lambda_info(C_heaptop,39,"(foreign-callback-stub-qualifiers x733)");
lf[531]=C_h_intern(&lf[531],38,"foreign-callback-stub-return-type-set!");
lf[532]=C_static_lambda_info(C_heaptop,52,"(foreign-callback-stub-return-type-set! x736 val737)");
lf[533]=C_h_intern(&lf[533],33,"foreign-callback-stub-return-type");
lf[534]=C_static_lambda_info(C_heaptop,40,"(foreign-callback-stub-return-type x739)");
lf[535]=C_h_intern(&lf[535],41,"foreign-callback-stub-argument-types-set!");
lf[536]=C_static_lambda_info(C_heaptop,55,"(foreign-callback-stub-argument-types-set! x742 val743)");
lf[537]=C_h_intern(&lf[537],36,"foreign-callback-stub-argument-types");
lf[538]=C_static_lambda_info(C_heaptop,43,"(foreign-callback-stub-argument-types x745)");
lf[539]=C_h_intern(&lf[539],27,"\010compileranalyze-expression");
lf[540]=C_static_lambda_info(C_heaptop,6,"(grow)");
lf[541]=C_h_intern(&lf[541],17,"\010compilercollect!");
lf[542]=C_h_intern(&lf[542],10,"references");
lf[543]=C_static_lambda_info(C_heaptop,20,"(ref var885 node886)");
lf[544]=C_h_intern(&lf[544],13,"\010compilerput!");
lf[545]=C_h_intern(&lf[545],9,"undefined");
lf[546]=C_h_intern(&lf[546],7,"unknown");
lf[547]=C_h_intern(&lf[547],5,"value");
lf[548]=C_h_intern(&lf[548],12,"\010compilerget");
lf[549]=C_h_intern(&lf[549],4,"home");
lf[550]=C_h_intern(&lf[550],16,"\010compilerget-all");
lf[551]=C_static_lambda_info(C_heaptop,37,"(assign var866 val867 env868 here869)");
lf[552]=C_h_intern(&lf[552],8,"captured");
lf[553]=C_h_intern(&lf[553],6,"global");
lf[554]=C_h_intern(&lf[554],12,"\004corerecurse");
lf[555]=C_h_intern(&lf[555],44,"\010compileroptimizable-rest-argument-operators");
lf[556]=C_h_intern(&lf[556],15,"\010compilercount!");
lf[557]=C_h_intern(&lf[557],16,"o-r/access-count");
lf[558]=C_h_intern(&lf[558],14,"rest-parameter");
lf[559]=C_static_lambda_info(C_heaptop,14,"(a7212 arg795)");
lf[560]=C_h_intern(&lf[560],16,"standard-binding");
lf[561]=C_h_intern(&lf[561],10,"call-sites");
lf[562]=C_static_lambda_info(C_heaptop,22,"(loop vars805 vals806)");
lf[563]=C_static_lambda_info(C_heaptop,14,"(a7359 var816)");
lf[564]=C_static_lambda_info(C_heaptop,31,"(a7340 vars813 argc814 rest815)");
lf[565]=C_h_intern(&lf[565],18,"\004coredirect_lambda");
lf[566]=C_h_intern(&lf[566],6,"simple");
lf[567]=C_h_intern(&lf[567],28,"\010compilersimple-lambda-node\077");
lf[568]=C_h_intern(&lf[568],6,"vector");
lf[569]=C_static_lambda_info(C_heaptop,14,"(a7466 var830)");
lf[570]=C_h_intern(&lf[570],12,"contained-in");
lf[571]=C_h_intern(&lf[571],8,"contains");
lf[572]=C_static_lambda_info(C_heaptop,31,"(a7384 vars824 argc825 rest826)");
lf[573]=C_h_intern(&lf[573],8,"assigned");
lf[574]=C_h_intern(&lf[574],16,"assigned-locally");
lf[575]=C_h_intern(&lf[575],15,"potential-value");
lf[576]=C_h_intern(&lf[576],5,"redef");
lf[577]=C_static_string(C_heaptop,37,"redefinition of standard binding `~S\047");
lf[578]=C_static_string(C_heaptop,37,"redefinition of extended binding `~S\047");
lf[579]=C_h_intern(&lf[579],16,"extended-binding");
lf[580]=C_h_intern(&lf[580],9,"\004coreproc");
lf[581]=C_static_lambda_info(C_heaptop,38,"(walk n765 env766 localenv767 here768)");
lf[582]=C_static_lambda_info(C_heaptop,12,"(a7652 x865)");
lf[583]=C_static_lambda_info(C_heaptop,39,"(walkeach xs860 env861 lenv862 here863)");
lf[584]=C_static_lambda_info(C_heaptop,36,"(quick-put! plist887 prop888 val889)");
lf[585]=C_static_lambda_info(C_heaptop,14,"(a7799 id2895)");
lf[586]=C_h_intern(&lf[586],3,"any");
lf[587]=C_static_lambda_info(C_heaptop,30,"(contains\077 id890 other-ids891)");
lf[588]=C_h_intern(&lf[588],9,"replacing");
lf[589]=C_h_intern(&lf[589],10,"replacable");
lf[590]=C_h_intern(&lf[590],9,"removable");
lf[591]=C_h_intern(&lf[591],37,"\010compilerexpression-has-side-effects\077");
lf[592]=C_h_intern(&lf[592],21,"has-unused-parameters");
lf[593]=C_h_intern(&lf[593],13,"explicit-rest");
lf[594]=C_h_intern(&lf[594],6,"unused");
lf[595]=C_static_lambda_info(C_heaptop,14,"(a8242 var945)");
lf[596]=C_static_lambda_info(C_heaptop,31,"(a8199 vars942 argc943 rest944)");
lf[597]=C_h_intern(&lf[597],11,"collapsable");
lf[598]=C_h_intern(&lf[598],12,"contractable");
lf[599]=C_h_intern(&lf[599],9,"inlinable");
lf[600]=C_static_lambda_info(C_heaptop,12,"(a8350 v932)");
lf[601]=C_h_intern(&lf[601],28,"\010compilerscan-free-variables");
lf[602]=C_h_intern(&lf[602],5,"boxed");
lf[603]=C_static_string(C_heaptop,34,"global variable `~S\047 is never used");
lf[604]=C_static_string(C_heaptop,58,"local assignment to unused variable `~S\047 may be unintended");
lf[605]=C_static_lambda_info(C_heaptop,15,"(a8454 prop912)");
lf[606]=C_static_lambda_info(C_heaptop,23,"(a7829 sym896 plist897)");
lf[607]=C_h_intern(&lf[607],23,"\003syshash-table-for-each");
lf[608]=C_h_intern(&lf[608],1,"p");
lf[609]=C_static_string(C_heaptop,27,"analysis gathering phase...");
lf[610]=C_static_string(C_heaptop,27,"analysis traversal phase...");
lf[611]=C_h_intern(&lf[611],37,"\010compilerinitialize-analysis-database");
lf[612]=C_static_lambda_info(C_heaptop,39,"(##compiler#analyze-expression node754)");
lf[613]=C_h_intern(&lf[613],35,"\010compilerperform-closure-conversion");
lf[614]=C_static_lambda_info(C_heaptop,23,"(test sym1021 item1022)");
lf[615]=C_h_intern(&lf[615],12,"customizable");
lf[616]=C_static_lambda_info(C_heaptop,39,"(register-customizable! var1023 id1024)");
lf[617]=C_static_lambda_info(C_heaptop,30,"(register-direct-call! id1026)");
lf[618]=C_static_lambda_info(C_heaptop,7,"(a8627)");
lf[619]=C_static_lambda_info(C_heaptop,13,"(a8654 n1050)");
lf[620]=C_static_lambda_info(C_heaptop,25,"(a8637 vals1048 body1049)");
lf[621]=C_static_lambda_info(C_heaptop,13,"(a8684 n1073)");
lf[622]=C_h_intern(&lf[622],20,"node-parameters-set!");
lf[623]=C_h_intern(&lf[623],4,"call");
lf[624]=C_static_string(C_heaptop,57,"known procedure called with wrong number of arguments: ~A");
lf[625]=C_h_intern(&lf[625],28,"\010compilersource-info->string");
lf[626]=C_h_intern(&lf[626],8,"toplevel");
lf[627]=C_h_intern(&lf[627],18,"captured-variables");
lf[628]=C_h_intern(&lf[628],12,"closure-size");
lf[629]=C_static_lambda_info(C_heaptop,12,"(walk n1250)");
lf[630]=C_static_lambda_info(C_heaptop,34,"(a8856 vars1077 argc1078 rest1079)");
lf[631]=C_static_lambda_info(C_heaptop,13,"(a8895 n1085)");
lf[632]=C_static_lambda_info(C_heaptop,31,"(gather n1028 here1029 env1030)");
lf[633]=C_h_intern(&lf[633],8,"\004coreref");
lf[634]=C_static_lambda_info(C_heaptop,36,"(ref-var n1235 here1236 closure1237)");
lf[635]=C_h_intern(&lf[635],10,"\004coreunbox");
lf[636]=C_h_intern(&lf[636],8,"\004corebox");
lf[637]=C_h_intern(&lf[637],12,"\004coreclosure");
lf[638]=C_h_intern(&lf[638],14,"\010compilerqnode");
lf[639]=C_h_intern(&lf[639],20,"\003sysmake-lambda-info");
lf[640]=C_h_intern(&lf[640],1,"\077");
lf[641]=C_h_intern(&lf[641],8,"->string");
lf[642]=C_h_intern(&lf[642],18,"\010compilerreal-name");
lf[643]=C_static_lambda_info(C_heaptop,13,"(a9172 v1195)");
lf[644]=C_static_lambda_info(C_heaptop,34,"(a9195 alias1184 val1185 body1186)");
lf[645]=C_h_intern(&lf[645],10,"fold-right");
lf[646]=C_static_lambda_info(C_heaptop,13,"(a9215 a1190)");
lf[647]=C_static_lambda_info(C_heaptop,13,"(a9269 v1178)");
lf[648]=C_h_intern(&lf[648],10,"boxed-rest");
lf[649]=C_static_lambda_info(C_heaptop,13,"(a9328 v1160)");
lf[650]=C_h_intern(&lf[650],6,"filter");
lf[651]=C_static_lambda_info(C_heaptop,34,"(a9079 vars1156 argc1157 rest1158)");
lf[652]=C_h_intern(&lf[652],16,"\004coreupdatebox_i");
lf[653]=C_h_intern(&lf[653],14,"\004coreupdatebox");
lf[654]=C_h_intern(&lf[654],13,"\004coreupdate_i");
lf[655]=C_h_intern(&lf[655],11,"\004coreupdate");
lf[656]=C_h_intern(&lf[656],19,"\010compilerimmediate\077");
lf[657]=C_static_string(C_heaptop,19,"bad node (closure2)");
lf[658]=C_h_intern(&lf[658],11,"\004coreswitch");
lf[659]=C_h_intern(&lf[659],9,"\004corecond");
lf[660]=C_h_intern(&lf[660],16,"\004coredirect_call");
lf[661]=C_h_intern(&lf[661],11,"\004corereturn");
lf[662]=C_static_lambda_info(C_heaptop,38,"(transform n1086 here1087 closure1088)");
lf[663]=C_static_lambda_info(C_heaptop,13,"(a9626 x1234)");
lf[664]=C_static_lambda_info(C_heaptop,42,"(maptransform xs1231 here1232 closure1233)");
lf[665]=C_static_string(C_heaptop,22,"calls to known targets");
lf[666]=C_static_lambda_info(C_heaptop,7,"(a9795)");
lf[667]=C_h_intern(&lf[667],16,"\003sysmake-promise");
lf[668]=C_static_string(C_heaptop,42,"closure conversion transformation phase...");
lf[669]=C_static_string(C_heaptop,23,"customizable procedures");
lf[670]=C_static_string(C_heaptop,37,"closure conversion gathering phase...");
lf[671]=C_static_lambda_info(C_heaptop,55,"(##compiler#perform-closure-conversion node1009 db1010)");
lf[672]=C_h_intern(&lf[672],19,"make-lambda-literal");
lf[673]=C_h_intern(&lf[673],14,"lambda-literal");
lf[674]=C_static_lambda_info(C_heaptop,253,"(make-lambda-literal id1287 external1288 arguments1289 argument-count1290 rest-a"
"rgument1291 temporaries1292 callee-signatures1293 allocated1294 directly-called1"
"295 closure-size1296 looping1297 customizable1298 rest-argument-mode1299 body130"
"0 direct1301)");
lf[675]=C_h_intern(&lf[675],15,"lambda-literal\077");
lf[676]=C_static_lambda_info(C_heaptop,23,"(lambda-literal\077 x1302)");
lf[677]=C_h_intern(&lf[677],22,"lambda-literal-id-set!");
lf[678]=C_static_lambda_info(C_heaptop,38,"(lambda-literal-id-set! x1303 val1304)");
lf[679]=C_h_intern(&lf[679],17,"lambda-literal-id");
lf[680]=C_static_lambda_info(C_heaptop,25,"(lambda-literal-id x1306)");
lf[681]=C_h_intern(&lf[681],28,"lambda-literal-external-set!");
lf[682]=C_static_lambda_info(C_heaptop,44,"(lambda-literal-external-set! x1309 val1310)");
lf[683]=C_h_intern(&lf[683],23,"lambda-literal-external");
lf[684]=C_static_lambda_info(C_heaptop,31,"(lambda-literal-external x1312)");
lf[685]=C_h_intern(&lf[685],29,"lambda-literal-arguments-set!");
lf[686]=C_static_lambda_info(C_heaptop,45,"(lambda-literal-arguments-set! x1315 val1316)");
lf[687]=C_h_intern(&lf[687],24,"lambda-literal-arguments");
lf[688]=C_static_lambda_info(C_heaptop,32,"(lambda-literal-arguments x1318)");
lf[689]=C_h_intern(&lf[689],34,"lambda-literal-argument-count-set!");
lf[690]=C_static_lambda_info(C_heaptop,50,"(lambda-literal-argument-count-set! x1321 val1322)");
lf[691]=C_h_intern(&lf[691],29,"lambda-literal-argument-count");
lf[692]=C_static_lambda_info(C_heaptop,37,"(lambda-literal-argument-count x1324)");
lf[693]=C_h_intern(&lf[693],33,"lambda-literal-rest-argument-set!");
lf[694]=C_static_lambda_info(C_heaptop,49,"(lambda-literal-rest-argument-set! x1327 val1328)");
lf[695]=C_h_intern(&lf[695],28,"lambda-literal-rest-argument");
lf[696]=C_static_lambda_info(C_heaptop,36,"(lambda-literal-rest-argument x1330)");
lf[697]=C_h_intern(&lf[697],31,"lambda-literal-temporaries-set!");
lf[698]=C_static_lambda_info(C_heaptop,47,"(lambda-literal-temporaries-set! x1333 val1334)");
lf[699]=C_h_intern(&lf[699],26,"lambda-literal-temporaries");
lf[700]=C_static_lambda_info(C_heaptop,34,"(lambda-literal-temporaries x1336)");
lf[701]=C_h_intern(&lf[701],37,"lambda-literal-callee-signatures-set!");
lf[702]=C_static_lambda_info(C_heaptop,53,"(lambda-literal-callee-signatures-set! x1339 val1340)");
lf[703]=C_h_intern(&lf[703],32,"lambda-literal-callee-signatures");
lf[704]=C_static_lambda_info(C_heaptop,40,"(lambda-literal-callee-signatures x1342)");
lf[705]=C_h_intern(&lf[705],29,"lambda-literal-allocated-set!");
lf[706]=C_static_lambda_info(C_heaptop,45,"(lambda-literal-allocated-set! x1345 val1346)");
lf[707]=C_h_intern(&lf[707],24,"lambda-literal-allocated");
lf[708]=C_static_lambda_info(C_heaptop,32,"(lambda-literal-allocated x1348)");
lf[709]=C_h_intern(&lf[709],35,"lambda-literal-directly-called-set!");
lf[710]=C_static_lambda_info(C_heaptop,51,"(lambda-literal-directly-called-set! x1351 val1352)");
lf[711]=C_h_intern(&lf[711],30,"lambda-literal-directly-called");
lf[712]=C_static_lambda_info(C_heaptop,38,"(lambda-literal-directly-called x1354)");
lf[713]=C_h_intern(&lf[713],32,"lambda-literal-closure-size-set!");
lf[714]=C_static_lambda_info(C_heaptop,48,"(lambda-literal-closure-size-set! x1357 val1358)");
lf[715]=C_h_intern(&lf[715],27,"lambda-literal-closure-size");
lf[716]=C_static_lambda_info(C_heaptop,35,"(lambda-literal-closure-size x1360)");
lf[717]=C_h_intern(&lf[717],27,"lambda-literal-looping-set!");
lf[718]=C_static_lambda_info(C_heaptop,43,"(lambda-literal-looping-set! x1363 val1364)");
lf[719]=C_h_intern(&lf[719],22,"lambda-literal-looping");
lf[720]=C_static_lambda_info(C_heaptop,30,"(lambda-literal-looping x1366)");
lf[721]=C_h_intern(&lf[721],32,"lambda-literal-customizable-set!");
lf[722]=C_static_lambda_info(C_heaptop,48,"(lambda-literal-customizable-set! x1369 val1370)");
lf[723]=C_h_intern(&lf[723],27,"lambda-literal-customizable");
lf[724]=C_static_lambda_info(C_heaptop,35,"(lambda-literal-customizable x1372)");
lf[725]=C_h_intern(&lf[725],38,"lambda-literal-rest-argument-mode-set!");
lf[726]=C_static_lambda_info(C_heaptop,54,"(lambda-literal-rest-argument-mode-set! x1375 val1376)");
lf[727]=C_h_intern(&lf[727],33,"lambda-literal-rest-argument-mode");
lf[728]=C_static_lambda_info(C_heaptop,41,"(lambda-literal-rest-argument-mode x1378)");
lf[729]=C_h_intern(&lf[729],24,"lambda-literal-body-set!");
lf[730]=C_static_lambda_info(C_heaptop,40,"(lambda-literal-body-set! x1381 val1382)");
lf[731]=C_h_intern(&lf[731],19,"lambda-literal-body");
lf[732]=C_static_lambda_info(C_heaptop,27,"(lambda-literal-body x1384)");
lf[733]=C_h_intern(&lf[733],26,"lambda-literal-direct-set!");
lf[734]=C_static_lambda_info(C_heaptop,42,"(lambda-literal-direct-set! x1387 val1388)");
lf[735]=C_h_intern(&lf[735],21,"lambda-literal-direct");
lf[736]=C_static_lambda_info(C_heaptop,29,"(lambda-literal-direct x1390)");
lf[737]=C_h_intern(&lf[737],36,"\010compilerprepare-for-code-generation");
lf[738]=C_h_intern(&lf[738],14,"\004coreimmediate");
lf[739]=C_h_intern(&lf[739],3,"fix");
lf[740]=C_h_intern(&lf[740],4,"bool");
lf[741]=C_h_intern(&lf[741],4,"char");
tmp=C_intern(C_heaptop,3,"nil");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[742]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"eof");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[743]=C_h_pair(C_restore,tmp);
lf[744]=C_static_string(C_heaptop,23,"bad immediate (prepare)");
lf[745]=C_static_lambda_info(C_heaptop,25,"(immediate-literal x1618)");
lf[746]=C_static_lambda_info(C_heaptop,19,"(new-literal x1611)");
lf[747]=C_h_intern(&lf[747],36,"\010compilermake-block-variable-literal");
lf[748]=C_h_intern(&lf[748],36,"\010compilerblock-variable-literal-name");
lf[749]=C_h_intern(&lf[749],32,"\010compilerblock-variable-literal\077");
lf[750]=C_static_lambda_info(C_heaptop,16,"(a11025 lit1617)");
lf[751]=C_h_intern(&lf[751],10,"list-index");
lf[752]=C_static_lambda_info(C_heaptop,26,"(blockvar-literal var1614)");
lf[753]=C_static_lambda_info(C_heaptop,14,"(a10977 y1609)");
lf[754]=C_static_lambda_info(C_heaptop,15,"(literal x1605)");
lf[755]=C_h_intern(&lf[755],11,"\004coreglobal");
lf[756]=C_static_lambda_info(C_heaptop,28,"(walk-global var1440 sf1441)");
lf[757]=C_h_intern(&lf[757],10,"\004corelocal");
lf[758]=C_h_intern(&lf[758],12,"\004coreliteral");
lf[759]=C_static_lambda_info(C_heaptop,31,"(walk-var var1428 e1429 sf1430)");
lf[760]=C_static_string(C_heaptop,33,"identified direct recursive calls");
lf[761]=C_static_string(C_heaptop,17,"bad direct lambda");
lf[762]=C_h_intern(&lf[762],4,"none");
lf[763]=C_static_string(C_heaptop,20,"unused rest argument");
lf[764]=C_static_string(C_heaptop,32,"rest argument accessed as vector");
lf[765]=C_h_intern(&lf[765],7,"butlast");
lf[766]=C_static_lambda_info(C_heaptop,35,"(a10423 vars1511 argc1512 rest1513)");
lf[767]=C_h_intern(&lf[767],9,"\004corebind");
lf[768]=C_h_intern(&lf[768],13,"\004coresetlocal");
lf[769]=C_h_intern(&lf[769],16,"\004coresetglobal_i");
lf[770]=C_h_intern(&lf[770],14,"\004coresetglobal");
lf[771]=C_h_intern(&lf[771],1,"=");
lf[772]=C_h_intern(&lf[772],4,"type");
lf[773]=C_static_string(C_heaptop,48,"coerced inexact literal number `~S\047 to fixnum ~S");
lf[774]=C_static_string(C_heaptop,45,"can not coerce inexact literal `~S\047 to fixnum");
lf[775]=C_static_lambda_info(C_heaptop,37,"(walk n1458 e1459 here1460 boxes1461)");
lf[776]=C_static_lambda_info(C_heaptop,14,"(a10926 x1604)");
lf[777]=C_static_lambda_info(C_heaptop,41,"(mapwalk xs1600 e1601 here1602 boxes1603)");
lf[778]=C_static_string(C_heaptop,23,"fast global assignments");
lf[779]=C_static_string(C_heaptop,22,"fast global references");
lf[780]=C_static_string(C_heaptop,24,"fast box initializations");
lf[781]=C_static_string(C_heaptop,20,"preparation phase...");
lf[782]=C_static_lambda_info(C_heaptop,56,"(##compiler#prepare-for-code-generation node1409 db1410)");
lf[783]=C_h_intern(&lf[783],14,"make-parameter");
lf[784]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,785,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1751,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 319  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1749 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1751,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 320  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1753 in k1749 */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1755,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 321  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1757 in k1753 in k1749 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 322  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=C_mutate((C_word*)lf[5]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 323  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 324  make-parameter */
t4=C_retrieve(lf[783]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_FALSE);}

/* k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1771(C_word c,C_word t0,C_word t1){
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
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word ab[228],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1771,2,t0,t1);}
t2=C_mutate((C_word*)lf[7]+1,t1);
t3=C_set_block_item(lf[8],0,C_SCHEME_FALSE);
t4=C_mutate((C_word*)lf[9]+1,lf[10]);
t5=C_set_block_item(lf[11],0,C_SCHEME_END_OF_LIST);
t6=C_set_block_item(lf[12],0,C_SCHEME_END_OF_LIST);
t7=C_set_block_item(lf[13],0,C_SCHEME_TRUE);
t8=C_set_block_item(lf[14],0,C_SCHEME_END_OF_LIST);
t9=C_set_block_item(lf[15],0,C_SCHEME_FALSE);
t10=C_set_block_item(lf[16],0,C_SCHEME_END_OF_LIST);
t11=C_set_block_item(lf[17],0,C_SCHEME_END_OF_LIST);
t12=C_set_block_item(lf[18],0,C_SCHEME_END_OF_LIST);
t13=C_set_block_item(lf[19],0,C_SCHEME_FALSE);
t14=C_set_block_item(lf[20],0,C_SCHEME_FALSE);
t15=C_set_block_item(lf[21],0,C_fix(997));
t16=C_set_block_item(lf[22],0,C_SCHEME_FALSE);
t17=C_set_block_item(lf[23],0,C_SCHEME_FALSE);
t18=C_set_block_item(lf[24],0,C_SCHEME_FALSE);
t19=C_set_block_item(lf[25],0,C_SCHEME_FALSE);
t20=C_set_block_item(lf[26],0,C_SCHEME_FALSE);
t21=C_set_block_item(lf[27],0,C_SCHEME_FALSE);
t22=C_set_block_item(lf[28],0,C_SCHEME_FALSE);
t23=C_set_block_item(lf[29],0,C_SCHEME_FALSE);
t24=C_set_block_item(lf[30],0,C_SCHEME_END_OF_LIST);
t25=C_set_block_item(lf[31],0,C_SCHEME_FALSE);
t26=C_set_block_item(lf[32],0,C_SCHEME_FALSE);
t27=C_set_block_item(lf[33],0,C_SCHEME_END_OF_LIST);
t28=C_set_block_item(lf[34],0,C_SCHEME_FALSE);
t29=C_set_block_item(lf[35],0,C_SCHEME_FALSE);
t30=C_set_block_item(lf[36],0,C_SCHEME_FALSE);
t31=C_set_block_item(lf[37],0,C_SCHEME_FALSE);
t32=C_set_block_item(lf[38],0,C_SCHEME_FALSE);
t33=C_set_block_item(lf[39],0,C_SCHEME_END_OF_LIST);
t34=C_set_block_item(lf[40],0,C_SCHEME_FALSE);
t35=C_set_block_item(lf[41],0,C_SCHEME_FALSE);
t36=C_set_block_item(lf[42],0,C_SCHEME_FALSE);
t37=C_set_block_item(lf[43],0,C_SCHEME_FALSE);
t38=C_set_block_item(lf[44],0,C_fix(-1));
t39=C_set_block_item(lf[45],0,C_SCHEME_TRUE);
t40=C_set_block_item(lf[46],0,C_SCHEME_FALSE);
t41=C_set_block_item(lf[47],0,C_SCHEME_FALSE);
t42=C_set_block_item(lf[48],0,C_SCHEME_FALSE);
t43=C_set_block_item(lf[49],0,C_SCHEME_FALSE);
t44=C_set_block_item(lf[50],0,C_SCHEME_TRUE);
t45=C_set_block_item(lf[51],0,C_SCHEME_END_OF_LIST);
t46=C_mutate((C_word*)lf[52]+1,C_fix((C_word)C_DEFAULT_TARGET_HEAP_SIZE));
t47=C_mutate((C_word*)lf[53]+1,C_fix((C_word)C_DEFAULT_TARGET_STACK_SIZE));
t48=C_set_block_item(lf[54],0,C_SCHEME_FALSE);
t49=C_set_block_item(lf[55],0,C_SCHEME_FALSE);
t50=C_set_block_item(lf[56],0,C_fix(0));
t51=C_set_block_item(lf[57],0,C_SCHEME_FALSE);
t52=C_set_block_item(lf[58],0,C_SCHEME_END_OF_LIST);
t53=C_set_block_item(lf[59],0,C_SCHEME_END_OF_LIST);
t54=C_set_block_item(lf[60],0,C_SCHEME_FALSE);
t55=C_set_block_item(lf[61],0,C_SCHEME_FALSE);
t56=C_set_block_item(lf[62],0,C_SCHEME_FALSE);
t57=C_set_block_item(lf[63],0,C_SCHEME_FALSE);
t58=C_set_block_item(lf[64],0,C_SCHEME_END_OF_LIST);
t59=C_set_block_item(lf[65],0,C_SCHEME_END_OF_LIST);
t60=C_set_block_item(lf[66],0,C_SCHEME_FALSE);
t61=C_set_block_item(lf[67],0,C_SCHEME_END_OF_LIST);
t62=C_set_block_item(lf[68],0,C_SCHEME_TRUE);
t63=C_set_block_item(lf[69],0,C_SCHEME_FALSE);
t64=C_set_block_item(lf[70],0,C_SCHEME_END_OF_LIST);
t65=C_set_block_item(lf[71],0,C_SCHEME_END_OF_LIST);
t66=C_set_block_item(lf[72],0,C_SCHEME_END_OF_LIST);
t67=C_set_block_item(lf[73],0,C_SCHEME_END_OF_LIST);
t68=C_set_block_item(lf[74],0,C_SCHEME_END_OF_LIST);
t69=C_set_block_item(lf[75],0,C_SCHEME_END_OF_LIST);
t70=C_set_block_item(lf[76],0,C_fix(0));
t71=C_set_block_item(lf[77],0,C_SCHEME_FALSE);
t72=C_set_block_item(lf[78],0,C_SCHEME_END_OF_LIST);
t73=C_set_block_item(lf[79],0,C_SCHEME_FALSE);
t74=C_set_block_item(lf[80],0,C_SCHEME_FALSE);
t75=C_set_block_item(lf[81],0,C_SCHEME_END_OF_LIST);
t76=C_set_block_item(lf[82],0,C_SCHEME_END_OF_LIST);
t77=C_set_block_item(lf[83],0,C_SCHEME_END_OF_LIST);
t78=C_set_block_item(lf[84],0,C_SCHEME_END_OF_LIST);
t79=C_set_block_item(lf[85],0,C_SCHEME_TRUE);
t80=C_set_block_item(lf[86],0,C_SCHEME_FALSE);
t81=C_set_block_item(lf[87],0,C_SCHEME_END_OF_LIST);
t82=C_set_block_item(lf[88],0,C_SCHEME_FALSE);
t83=C_set_block_item(lf[89],0,C_SCHEME_END_OF_LIST);
t84=C_set_block_item(lf[90],0,C_SCHEME_END_OF_LIST);
t85=C_set_block_item(lf[91],0,C_SCHEME_END_OF_LIST);
t86=C_set_block_item(lf[92],0,C_SCHEME_FALSE);
t87=C_set_block_item(lf[93],0,C_SCHEME_END_OF_LIST);
t88=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=lf[101],tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[102]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1923,a[2]=lf[333],tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[285]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4599,a[2]=lf[415],tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[416]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5631,a[2]=lf[418],tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[419]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5637,a[2]=lf[420],tmp=(C_word)a,a+=3,tmp));
t93=C_mutate((C_word*)lf[421]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5643,a[2]=lf[423],tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[424]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5652,a[2]=lf[425],tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[426]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5661,a[2]=lf[427],tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[428]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5670,a[2]=lf[429],tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[430]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5679,a[2]=lf[431],tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[432]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5688,a[2]=lf[433],tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[434]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5697,a[2]=lf[435],tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[436]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=lf[437],tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[438]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5715,a[2]=lf[439],tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[440]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5724,a[2]=lf[441],tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[442]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5733,a[2]=lf[443],tmp=(C_word)a,a+=3,tmp));
t104=C_mutate((C_word*)lf[444]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5742,a[2]=lf[445],tmp=(C_word)a,a+=3,tmp));
t105=C_mutate((C_word*)lf[446]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5751,a[2]=lf[447],tmp=(C_word)a,a+=3,tmp));
t106=C_mutate((C_word*)lf[448]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5760,a[2]=lf[449],tmp=(C_word)a,a+=3,tmp));
t107=C_mutate((C_word*)lf[450]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5769,a[2]=lf[451],tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[452]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5778,a[2]=lf[453],tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[454]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5787,a[2]=lf[464],tmp=(C_word)a,a+=3,tmp));
t110=C_mutate((C_word*)lf[234]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5941,a[2]=lf[467],tmp=(C_word)a,a+=3,tmp));
t111=C_mutate((C_word*)lf[236]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5986,a[2]=lf[469],tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[238]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6031,a[2]=lf[472],tmp=(C_word)a,a+=3,tmp));
t113=C_mutate((C_word*)lf[240]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6068,a[2]=lf[473],tmp=(C_word)a,a+=3,tmp));
t114=C_mutate((C_word*)lf[242]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6105,a[2]=lf[475],tmp=(C_word)a,a+=3,tmp));
t115=C_mutate((C_word*)lf[312]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6186,a[2]=lf[480],tmp=(C_word)a,a+=3,tmp));
t116=C_mutate((C_word*)lf[481]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6276,a[2]=lf[514],tmp=(C_word)a,a+=3,tmp));
t117=C_mutate((C_word*)lf[498]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6951,a[2]=lf[516],tmp=(C_word)a,a+=3,tmp));
t118=C_mutate((C_word*)lf[517]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6957,a[2]=lf[518],tmp=(C_word)a,a+=3,tmp));
t119=C_mutate((C_word*)lf[519]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6963,a[2]=lf[520],tmp=(C_word)a,a+=3,tmp));
t120=C_mutate((C_word*)lf[521]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6972,a[2]=lf[522],tmp=(C_word)a,a+=3,tmp));
t121=C_mutate((C_word*)lf[523]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6981,a[2]=lf[524],tmp=(C_word)a,a+=3,tmp));
t122=C_mutate((C_word*)lf[525]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6990,a[2]=lf[526],tmp=(C_word)a,a+=3,tmp));
t123=C_mutate((C_word*)lf[527]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6999,a[2]=lf[528],tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[529]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7008,a[2]=lf[530],tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[531]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7017,a[2]=lf[532],tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[533]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7026,a[2]=lf[534],tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[535]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7035,a[2]=lf[536],tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[537]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7044,a[2]=lf[538],tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[539]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7053,a[2]=lf[612],tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[613]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8568,a[2]=lf[671],tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[672]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9802,a[2]=lf[674],tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[675]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9808,a[2]=lf[676],tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[677]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9814,a[2]=lf[678],tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[679]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9823,a[2]=lf[680],tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[681]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9832,a[2]=lf[682],tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[683]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9841,a[2]=lf[684],tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[685]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9850,a[2]=lf[686],tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[687]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9859,a[2]=lf[688],tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[689]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9868,a[2]=lf[690],tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[691]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9877,a[2]=lf[692],tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[693]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9886,a[2]=lf[694],tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[695]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9895,a[2]=lf[696],tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[697]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9904,a[2]=lf[698],tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[699]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9913,a[2]=lf[700],tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[701]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9922,a[2]=lf[702],tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[703]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9931,a[2]=lf[704],tmp=(C_word)a,a+=3,tmp));
t147=C_mutate((C_word*)lf[705]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9940,a[2]=lf[706],tmp=(C_word)a,a+=3,tmp));
t148=C_mutate((C_word*)lf[707]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9949,a[2]=lf[708],tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[709]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9958,a[2]=lf[710],tmp=(C_word)a,a+=3,tmp));
t150=C_mutate((C_word*)lf[711]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9967,a[2]=lf[712],tmp=(C_word)a,a+=3,tmp));
t151=C_mutate((C_word*)lf[713]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9976,a[2]=lf[714],tmp=(C_word)a,a+=3,tmp));
t152=C_mutate((C_word*)lf[715]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9985,a[2]=lf[716],tmp=(C_word)a,a+=3,tmp));
t153=C_mutate((C_word*)lf[717]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9994,a[2]=lf[718],tmp=(C_word)a,a+=3,tmp));
t154=C_mutate((C_word*)lf[719]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10003,a[2]=lf[720],tmp=(C_word)a,a+=3,tmp));
t155=C_mutate((C_word*)lf[721]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10012,a[2]=lf[722],tmp=(C_word)a,a+=3,tmp));
t156=C_mutate((C_word*)lf[723]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10021,a[2]=lf[724],tmp=(C_word)a,a+=3,tmp));
t157=C_mutate((C_word*)lf[725]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10030,a[2]=lf[726],tmp=(C_word)a,a+=3,tmp));
t158=C_mutate((C_word*)lf[727]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10039,a[2]=lf[728],tmp=(C_word)a,a+=3,tmp));
t159=C_mutate((C_word*)lf[729]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10048,a[2]=lf[730],tmp=(C_word)a,a+=3,tmp));
t160=C_mutate((C_word*)lf[731]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10057,a[2]=lf[732],tmp=(C_word)a,a+=3,tmp));
t161=C_mutate((C_word*)lf[733]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10066,a[2]=lf[734],tmp=(C_word)a,a+=3,tmp));
t162=C_mutate((C_word*)lf[735]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10075,a[2]=lf[736],tmp=(C_word)a,a+=3,tmp));
t163=C_mutate((C_word*)lf[737]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10084,a[2]=lf[782],tmp=(C_word)a,a+=3,tmp));
t164=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t164+1)))(2,t164,C_SCHEME_UNDEFINED);}

/* ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[84],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10084,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_fix(0);
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_fix(0);
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_fix(0);
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_fix(0);
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11042,a[2]=lf[745],tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10996,a[2]=t5,a[3]=lf[746],tmp=(C_word)a,a+=4,tmp);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11010,a[2]=t5,a[3]=t23,a[4]=lf[752],tmp=(C_word)a,a+=5,tmp);
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10933,a[2]=t5,a[3]=t23,a[4]=t22,a[5]=lf[754],tmp=(C_word)a,a+=6,tmp);
t26=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10121,a[2]=t3,a[3]=t19,a[4]=t25,a[5]=t24,a[6]=lf[756],tmp=(C_word)a,a+=7,tmp);
t27=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10087,a[2]=t26,a[3]=t25,a[4]=lf[759],tmp=(C_word)a,a+=5,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_10174,a[2]=t22,a[3]=t21,a[4]=t25,a[5]=t24,a[6]=t3,a[7]=t7,a[8]=t13,a[9]=t15,a[10]=t9,a[11]=t17,a[12]=t29,a[13]=t31,a[14]=t11,a[15]=t26,a[16]=t27,a[17]=lf[775],tmp=(C_word)a,a+=18,tmp));
t33=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10921,a[2]=t29,a[3]=lf[777],tmp=(C_word)a,a+=4,tmp));
t34=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11091,a[2]=t2,a[3]=t29,a[4]=t17,a[5]=t19,a[6]=t21,a[7]=t7,a[8]=t5,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 2301 ##compiler#debugging */
t35=C_retrieve(lf[128]);
((C_proc4)C_retrieve_proc(t35))(4,t35,t34,lf[608],lf[781]);}

/* k11089 in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11094,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 2302 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10174(t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);}

/* k11092 in k11089 in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 2303 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[129],lf[780],((C_word*)((C_word*)t0)[2])[1]);}

/* k11095 in k11092 in k11089 in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2304 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[129],lf[779],((C_word*)((C_word*)t0)[2])[1]);}

/* k11098 in k11095 in k11092 in k11089 in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 2305 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[129],lf[778],((C_word*)((C_word*)t0)[2])[1]);}

/* k11101 in k11098 in k11095 in k11092 in k11089 in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2306 values */
C_values(5,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* mapwalk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10921(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10921,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10927,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[776],tmp=(C_word)a,a+=7,tmp);
/* map */
t7=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t2);}

/* a10926 in mapwalk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10927(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10927,3,t0,t1,t2);}
/* compiler.scm: 2268 walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10174(t3,t1,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10174(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(137);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10174,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[140]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(t11,lf[580]));
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t2);}
else{
t14=(C_word)C_eqp(t11,lf[490]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t9);
/* compiler.scm: 2102 walk-var */
t16=((C_word*)t0)[16];
f_10087(t16,t1,t15,t3,C_SCHEME_FALSE);}
else{
t15=(C_word)C_eqp(t11,lf[501]);
if(C_truep(t15)){
t16=(C_word)C_i_car(t9);
/* compiler.scm: 2105 walk-global */
t17=((C_word*)t0)[15];
f_10121(t17,t1,t16,C_SCHEME_TRUE);}
else{
t16=(C_word)C_eqp(t11,lf[660]);
if(C_truep(t16)){
t17=(C_word)C_i_cadddr(t9);
t18=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[14])[1],t17);
t19=C_mutate(((C_word *)((C_word*)t0)[14])+1,t18);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10232,a[2]=t9,a[3]=t11,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2109 mapwalk */
t21=((C_word*)((C_word*)t0)[13])[1];
f_10921(t21,t20,t7,t3,t4,t5);}
else{
t17=(C_word)C_eqp(t11,lf[223]);
if(C_truep(t17)){
t18=(C_word)C_i_cadr(t9);
t19=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[14])[1],t18);
t20=C_mutate(((C_word *)((C_word*)t0)[14])+1,t19);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10252,a[2]=t9,a[3]=t11,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2113 mapwalk */
t22=((C_word*)((C_word*)t0)[13])[1];
f_10921(t22,t21,t7,t3,t4,t5);}
else{
t18=(C_word)C_eqp(t11,lf[111]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10276,a[2]=t9,a[3]=t11,a[4]=t1,a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10280,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
t21=(C_word)C_i_cadr(t9);
/* compiler.scm: 2116 ##compiler#estimate-foreign-result-size */
t22=C_retrieve(lf[459]);
((C_proc3)C_retrieve_proc(t22))(3,t22,t20,t21);}
else{
t19=(C_word)C_eqp(t11,lf[115]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10304,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[13],a[7]=t9,a[8]=t11,a[9]=t1,a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10308,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=(C_word)C_i_car(t9);
/* compiler.scm: 2120 ##compiler#estimate-foreign-result-size */
t23=C_retrieve(lf[459]);
((C_proc3)C_retrieve_proc(t23))(3,t23,t21,t22);}
else{
t20=(C_word)C_eqp(t11,lf[637]);
if(C_truep(t20)){
t21=(C_word)C_i_car(t9);
t22=(C_word)C_fixnum_plus((C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[14])[1],t21),C_fix(1));
t23=C_mutate(((C_word *)((C_word*)t0)[14])+1,t22);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10325,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2125 mapwalk */
t25=((C_word*)((C_word*)t0)[13])[1];
f_10921(t25,t24,t7,t3,t4,t5);}
else{
t21=(C_word)C_eqp(t11,lf[636]);
if(C_truep(t21)){
t22=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[14])[1],C_fix(2));
t23=C_mutate(((C_word *)((C_word*)t0)[14])+1,t22);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10352,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t25=(C_word)C_i_car(t7);
/* compiler.scm: 2129 walk */
t93=t24;
t94=t25;
t95=t3;
t96=t4;
t97=t5;
t1=t93;
t2=t94;
t3=t95;
t4=t96;
t5=t97;
goto loop;}
else{
t22=(C_word)C_eqp(t11,lf[653]);
if(C_truep(t22)){
t23=(C_word)C_i_car(t7);
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10368,a[2]=t5,a[3]=t23,a[4]=t11,a[5]=((C_word*)t0)[11],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2133 mapwalk */
t25=((C_word*)((C_word*)t0)[13])[1];
f_10921(t25,t24,t7,t3,t4,t5);}
else{
t23=(C_word)C_eqp(t11,lf[483]);
t24=(C_truep(t23)?t23:(C_word)C_eqp(t11,lf[565]));
if(C_truep(t24)){
t25=((C_word*)((C_word*)t0)[10])[1];
t26=((C_word*)((C_word*)t0)[9])[1];
t27=((C_word*)((C_word*)t0)[8])[1];
t28=((C_word*)((C_word*)t0)[14])[1];
t29=(C_word)C_eqp(t11,lf[565]);
t30=C_set_block_item(((C_word*)t0)[10],0,C_fix(0));
t31=C_set_block_item(((C_word*)t0)[14],0,C_fix(0));
t32=C_set_block_item(((C_word*)t0)[9],0,C_SCHEME_END_OF_LIST);
t33=C_set_block_item(((C_word*)t0)[8],0,C_fix(0));
t34=(C_word)C_i_caddr(t9);
t35=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_10424,a[2]=((C_word*)t0)[12],a[3]=t7,a[4]=((C_word*)t0)[6],a[5]=t29,a[6]=t26,a[7]=((C_word*)t0)[9],a[8]=t28,a[9]=((C_word*)t0)[14],a[10]=t25,a[11]=((C_word*)t0)[10],a[12]=t27,a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[7],a[15]=t9,a[16]=lf[766],tmp=(C_word)a,a+=17,tmp);
/* compiler.scm: 2153 ##compiler#decompose-lambda-list */
t36=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t36))(4,t36,t1,t34,t35);}
else{
t25=(C_word)C_eqp(t11,lf[172]);
if(C_truep(t25)){
t26=(C_word)C_i_car(t9);
t27=(C_word)C_i_car(t7);
t28=(C_word)C_slot(t27,C_fix(1));
t29=(C_word)C_eqp(lf[636],t28);
t30=(C_truep(t29)?(C_word)C_a_i_list(&a,1,t26):C_SCHEME_END_OF_LIST);
t31=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[10])[1]);
t32=C_mutate(((C_word *)((C_word*)t0)[10])+1,t31);
t33=(C_word)C_a_i_list(&a,1,C_fix(1));
t34=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10608,a[2]=t9,a[3]=t3,a[4]=t5,a[5]=t30,a[6]=t4,a[7]=((C_word*)t0)[12],a[8]=t7,a[9]=t33,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 2210 walk */
t93=t34;
t94=t27;
t95=t3;
t96=t4;
t97=t5;
t1=t93;
t2=t94;
t3=t95;
t4=t96;
t5=t97;
goto loop;}
else{
t26=(C_word)C_eqp(t11,lf[203]);
if(C_truep(t26)){
t27=(C_word)C_i_car(t9);
t28=(C_word)C_i_car(t7);
t29=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10649,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t7,a[7]=t27,a[8]=t5,a[9]=t4,a[10]=t3,a[11]=t28,a[12]=((C_word*)t0)[12],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
/* compiler.scm: 2216 ##compiler#posq */
t30=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t30))(4,t30,t29,t27,t3);}
else{
t27=(C_word)C_eqp(t11,lf[484]);
if(C_truep(t27)){
t28=(C_word)C_i_cdr(t7);
t29=(C_word)C_i_length(t28);
t30=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10769,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t7,a[7]=((C_word*)t0)[13],a[8]=t9,a[9]=t11,a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* compiler.scm: 2240 lset-adjoin */
t31=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t31))(5,t31,t30,*((C_word*)lf[771]+1),((C_word*)((C_word*)t0)[9])[1],t29);}
else{
t28=(C_word)C_eqp(t11,lf[554]);
if(C_truep(t28)){
t29=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10812,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[13],a[7]=t9,a[8]=t11,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_car(t9))){
t30=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[8])[1]);
t31=C_mutate(((C_word *)((C_word*)t0)[8])+1,t30);
t32=t29;
f_10812(t32,t31);}
else{
t30=t29;
f_10812(t30,C_SCHEME_UNDEFINED);}}
else{
t29=(C_word)C_eqp(t11,lf[108]);
if(C_truep(t29)){
t30=(C_word)C_i_car(t9);
if(C_truep((C_word)C_fixnump(t30))){
/* compiler.scm: 2252 immediate-literal */
f_11042(t1,t30);}
else{
if(C_truep((C_word)C_i_numberp(t30))){
t31=(C_word)C_eqp(lf[352],C_retrieve(lf[9]));
if(C_truep(t31)){
if(C_truep((C_word)C_i_integerp(t30))){
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10864,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t30,tmp=(C_word)a,a+=5,tmp);
t33=(C_word)C_i_inexact_to_exact(t30);
/* compiler.scm: 2256 ##compiler#compiler-warning */
t34=C_retrieve(lf[162]);
((C_proc6)C_retrieve_proc(t34))(6,t34,t32,lf[772],lf[773],t30,t33);}
else{
/* compiler.scm: 2260 quit */
t32=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t32))(4,t32,t1,lf[774],t30);}}
else{
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10888,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 2261 literal */
t33=((C_word*)t0)[4];
f_10933(t33,t32,t30);}}
else{
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10894,a[2]=((C_word*)t0)[4],a[3]=t30,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 2262 ##compiler#immediate? */
t32=C_retrieve(lf[656]);
((C_proc3)C_retrieve_proc(t32))(3,t32,t31,t30);}}}
else{
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10910,a[2]=t9,a[3]=t11,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2265 mapwalk */
t31=((C_word*)((C_word*)t0)[13])[1];
f_10921(t31,t30,t7,t3,t4,t5);}}}}}}}}}}}}}}}}}

/* k10908 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10910,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10892 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10894,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 2262 immediate-literal */
f_11042(((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10907,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 2263 literal */
t3=((C_word*)t0)[2];
f_10933(t3,t2,((C_word*)t0)[3]);}}

/* k10905 in k10892 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10907,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[758],t2,C_SCHEME_END_OF_LIST));}

/* k10886 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10888,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[758],t2,C_SCHEME_END_OF_LIST));}

/* k10862 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_inexact_to_exact(((C_word*)t0)[4]);
/* compiler.scm: 2259 immediate-literal */
f_11042(((C_word*)t0)[2],t2);}

/* k10810 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10812,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10815,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2247 mapwalk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_10921(t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10813 in k10810 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10815,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10767 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10769,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[11])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10781,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_length(((C_word*)t0)[8]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(C_word)C_i_caddr(((C_word*)t0)[8]);
t7=t4;
f_10781(t7,(C_word)C_eqp(((C_word*)t0)[4],t6));}
else{
t6=t4;
f_10781(t6,C_SCHEME_FALSE);}}

/* k10779 in k10767 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_10772(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_10772(t2,C_SCHEME_UNDEFINED);}}

/* k10770 in k10767 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10772(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10772,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10775,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2243 mapwalk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_10921(t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10773 in k10770 in k10767 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10775,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10649(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10649,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10665,a[2]=t2,a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2218 walk */
t4=((C_word*)((C_word*)t0)[12])[1];
f_10174(t4,t3,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[11],C_fix(1));
t3=C_retrieve(lf[27]);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10738,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[13],a[12]=t2,a[13]=((C_word*)t0)[7],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t3)){
t5=t4;
f_10738(2,t5,t3);}
else{
t5=C_retrieve(lf[15]);
if(C_truep(t5)){
t6=t4;
f_10738(2,t6,t5);}
else{
t6=(C_word)C_i_memq(((C_word*)t0)[7],C_retrieve(lf[16]));
if(C_truep(t6)){
t7=t4;
f_10738(2,t7,t6);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10750,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2224 ##compiler#get */
t8=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,((C_word*)t0)[2],((C_word*)t0)[7],lf[560]);}}}}}

/* k10748 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10738(2,t2,t1);}
else{
/* compiler.scm: 2225 ##compiler#get */
t2=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[579]);}}

/* k10736 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10738(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10738,2,t0,t1);}
t2=(C_word)C_i_not(t1);
t3=(C_word)C_i_memq(((C_word*)t0)[13],C_retrieve(lf[30]));
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_10677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t3,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[12],lf[108]);
if(C_truep(t5)){
t6=(C_word)C_slot(((C_word*)t0)[2],C_fix(2));
t7=(C_word)C_i_car(t6);
/* compiler.scm: 2227 ##compiler#immediate? */
t8=C_retrieve(lf[656]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t4,t7);}
else{
t6=t4;
f_10677(2,t6,C_SCHEME_FALSE);}}

/* k10675 in k10736 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10677,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_eqp(lf[140],((C_word*)t0)[13]));
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10683,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[12])){
t4=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t3;
f_10683(t6,t5);}
else{
t4=t3;
f_10683(t4,C_SCHEME_UNDEFINED);}}

/* k10681 in k10675 in k10736 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10683,NULL,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[12])?lf[769]:lf[770]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10707,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[11])){
/* compiler.scm: 2233 blockvar-literal */
t4=((C_word*)t0)[4];
f_11010(t4,t3,((C_word*)t0)[3]);}
else{
/* compiler.scm: 2234 literal */
t4=((C_word*)t0)[2];
f_10933(t4,t3,((C_word*)t0)[3]);}}

/* k10705 in k10681 in k10675 in k10736 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10707,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10699,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
/* compiler.scm: 2236 walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_10174(t5,t3,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10697 in k10705 in k10681 in k10675 in k10736 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10699,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k10663 in k10647 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10665,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[768],((C_word*)t0)[2],t2));}

/* k10606 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10612,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10620,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 2211 append */
t5=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10618 in k10606 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10624,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2211 append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10622 in k10618 in k10606 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2211 walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_10174(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10610 in k10606 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10612,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[767],((C_word*)t0)[2],t2));}

/* a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[26],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10424,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[15]);
t6=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_10431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t3,a[7]=t2,a[8]=t5,a[9]=((C_word*)t0)[5],a[10]=t1,a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[13],a[20]=((C_word*)t0)[14],tmp=(C_word)a,a+=21,tmp);
if(C_truep(t4)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10545,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2159 ##compiler#get */
t8=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,((C_word*)t0)[4],t4,lf[542]);}
else{
t7=t6;
f_10431(2,t7,C_SCHEME_FALSE);}}

/* k10543 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10551,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 2160 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[573]);}

/* k10549 in k10543 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10551,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_10431(2,t2,lf[317]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10557,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10576,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2161 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[4],((C_word*)t0)[3],lf[648]);}}

/* k10574 in k10549 in k10543 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_10557(t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_not(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_10557(t3,(C_truep(t2)?t2:(C_word)C_i_nullp(((C_word*)t0)[2])));}}

/* k10555 in k10549 in k10543 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10431(2,t2,lf[762]);}
else{
/* compiler.scm: 2162 ##compiler#get */
t2=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[558]);}}

/* k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_10434,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],tmp=(C_word)a,a+=20,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10536,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(lf[762],t1);
if(C_truep(t5)){
/* compiler.scm: 2166 butlast */
t6=C_retrieve(lf[765]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,((C_word*)t0)[7]);}
else{
t6=t4;
f_10536(2,t6,((C_word*)t0)[7]);}}

/* k10534 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2163 walk */
t2=((C_word*)((C_word*)t0)[5])[1];
f_10174(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_10437,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],lf[762]);
if(C_truep(t3)){
/* compiler.scm: 2171 ##compiler#debugging */
t4=C_retrieve(lf[128]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t2,lf[129],lf[763],((C_word*)t0)[4],((C_word*)t0)[7]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[3],lf[568]);
if(C_truep(t4)){
/* compiler.scm: 2172 ##compiler#debugging */
t5=C_retrieve(lf[128]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,lf[129],lf[764],((C_word*)t0)[4],((C_word*)t0)[7]);}
else{
t5=t2;
f_10437(2,t5,C_SCHEME_UNDEFINED);}}}

/* k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_10440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
t3=(C_truep(((C_word*)t0)[9])?((C_word*)t0)[5]:C_SCHEME_FALSE);
if(C_truep(t3)){
/* compiler.scm: 2174 ##compiler#bomb */
t4=C_retrieve(lf[499]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t2,lf[761],((C_word*)t0)[8],((C_word*)((C_word*)t0)[15])[1],((C_word*)t0)[5]);}
else{
t4=t2;
f_10440(2,t4,C_SCHEME_UNDEFINED);}}

/* k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10462,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[18],a[11]=((C_word*)t0)[19],a[12]=((C_word*)t0)[20],tmp=(C_word)a,a+=13,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[17])[1]);
t5=(C_truep(((C_word*)t0)[9])?((C_word*)t0)[9]:(C_word)C_i_memq(((C_word*)t0)[8],C_retrieve(lf[67])));
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_10478,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[13],a[10]=t4,a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=t3,a[15]=((C_word*)t0)[8],a[16]=t2,tmp=(C_word)a,a+=17,tmp);
/* compiler.scm: 2186 ##compiler#get */
t7=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,((C_word*)t0)[2],((C_word*)t0)[8],lf[628]);}

/* k10476 in k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10478,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_10485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t4=((C_word*)t0)[11];
if(C_truep(t4)){
t5=t3;
f_10485(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t5,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10504,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 2190 ##compiler#debugging */
t7=C_retrieve(lf[128]);
((C_proc6)C_retrieve_proc(t7))(6,t7,t6,lf[129],lf[760],((C_word*)t0)[15],((C_word*)((C_word*)t0)[2])[1]);}
else{
t6=t3;
f_10485(t6,C_SCHEME_FALSE);}}}

/* k10502 in k10476 in k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10485(t2,C_SCHEME_TRUE);}

/* k10483 in k10476 in k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10485(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10485,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_10489,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_10489(2,t3,((C_word*)t0)[3]);}
else{
/* compiler.scm: 2192 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[15],lf[615]);}}

/* k10487 in k10483 in k10476 in k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2176 make-lambda-literal */
t2=C_retrieve(lf[672]);
((C_proc17)C_retrieve_proc(t2))(17,t2,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10460 in k10438 in k10435 in k10432 in k10429 in a10423 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10462(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10462,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[12])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[12])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[11])+1,((C_word*)t0)[10]);
t5=C_mutate(((C_word *)((C_word*)t0)[9])+1,((C_word*)t0)[8]);
t6=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t0)[4]);
t8=(C_word)C_i_car(((C_word*)t0)[3]);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[482],lf[580],t9,C_SCHEME_END_OF_LIST));}

/* k10366 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10368(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10371,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t5=(C_word)C_eqp(lf[490],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
t7=(C_word)C_i_car(t6);
t8=t3;
f_10377(t8,(C_word)C_i_memq(t7,((C_word*)t0)[2]));}
else{
t6=t3;
f_10377(t6,C_SCHEME_FALSE);}}

/* k10375 in k10366 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[3];
f_10371(t4,lf[652]);}
else{
t2=((C_word*)t0)[3];
f_10371(t2,((C_word*)t0)[2]);}}

/* k10369 in k10366 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10371,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],t1,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}

/* k10350 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10352,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[636],((C_word*)t0)[2],t2));}

/* k10323 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10325,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],lf[637],((C_word*)t0)[2],t1));}

/* k10306 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2120 ##compiler#words */
t2=C_retrieve(lf[259]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k10302 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10304,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t1);
t3=C_mutate(((C_word *)((C_word*)t0)[10])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10297,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2121 mapwalk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_10921(t5,t4,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10295 in k10302 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10297,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10278 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2116 ##compiler#words */
t2=C_retrieve(lf[259]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k10274 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10276,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],t1);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST));}

/* k10250 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10252,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10230 in walk in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10232,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* walk-var in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10087,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10091,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2070 ##compiler#posq */
t6=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k10089 in walk-var in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10091,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[757],t2,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2071 keyword? */
t3=C_retrieve(lf[211]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}}

/* k10104 in k10089 in walk-var in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10106,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10116,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 2071 literal */
t3=((C_word*)t0)[5];
f_10933(t3,t2,((C_word*)t0)[4]);}
else{
/* compiler.scm: 2072 walk-global */
t2=((C_word*)t0)[3];
f_10121(t2,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k10114 in k10104 in k10089 in walk-var in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10116,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[758],t2,C_SCHEME_END_OF_LIST));}

/* walk-global in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10121(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10121,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_10125(2,t5,t3);}
else{
t5=C_retrieve(lf[27]);
if(C_truep(t5)){
t6=t4;
f_10125(2,t6,t5);}
else{
t6=C_retrieve(lf[15]);
if(C_truep(t6)){
t7=t4;
f_10125(2,t7,t6);}
else{
t7=(C_word)C_i_memq(t2,C_retrieve(lf[16]));
if(C_truep(t7)){
t8=t4;
f_10125(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10166,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2079 ##compiler#get */
t9=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t8,((C_word*)t0)[2],t2,lf[560]);}}}}}

/* k10164 in walk-global in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10125(2,t2,t1);}
else{
/* compiler.scm: 2080 ##compiler#get */
t2=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[579]);}}

/* k10123 in walk-global in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10125,2,t0,t1);}
t2=(C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[30]));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t3;
f_10131(t6,t5);}
else{
t4=t3;
f_10131(t4,C_SCHEME_UNDEFINED);}}

/* k10129 in k10123 in walk-global in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10131,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10141,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[6])){
/* compiler.scm: 2086 blockvar-literal */
t3=((C_word*)t0)[3];
f_11010(t3,t2,((C_word*)t0)[5]);}
else{
/* compiler.scm: 2087 literal */
t3=((C_word*)t0)[2];
f_10933(t3,t2,((C_word*)t0)[5]);}}

/* k10139 in k10129 in k10123 in walk-global in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10141,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[755],t2,C_SCHEME_END_OF_LIST));}

/* literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10933,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2271 ##compiler#immediate? */
t4=C_retrieve(lf[656]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k10938 in literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10940,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 2271 immediate-literal */
f_11042(((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_numberp(((C_word*)t0)[4]))){
if(C_truep((C_word)C_i_inexactp(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10978,a[2]=((C_word*)t0)[4],a[3]=lf[753],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2273 list-index */
t4=C_retrieve(lf[751]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_10946(2,t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_10946(2,t3,C_SCHEME_FALSE);}}}

/* a10977 in k10938 in literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10978(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10978,3,t0,t1,t2);}
if(C_truep((C_word)C_i_numberp(t2))){
if(C_truep((C_word)C_i_inexactp(t2))){
t3=((C_word*)t0)[2];
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(t3,t4));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10944 in k10938 in literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10946,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2275 ##compiler#posq */
t3=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}}

/* k10953 in k10944 in k10938 in literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* compiler.scm: 2276 new-literal */
t2=((C_word*)t0)[3];
f_10996(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_11010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11010,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11014,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11026,a[2]=t2,a[3]=lf[750],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2284 list-index */
t5=C_retrieve(lf[751]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* a11025 in blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11026,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11033,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2286 ##compiler#block-variable-literal? */
t4=C_retrieve(lf[749]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k11031 in a11025 in blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11033,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11040,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2287 ##compiler#block-variable-literal-name */
t3=C_retrieve(lf[748]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k11038 in k11031 in a11025 in blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* k11012 in blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11014,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11024,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2289 ##compiler#make-block-variable-literal */
t3=C_retrieve(lf[747]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k11022 in k11012 in blockvar-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2289 new-literal */
t2=((C_word*)t0)[3];
f_10996(t2,((C_word*)t0)[2],t1);}

/* new-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_10996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10996,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_length(((C_word*)((C_word*)t0)[2])[1]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11004,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_list(&a,1,t2);
/* compiler.scm: 2280 append */
t6=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)((C_word*)t0)[2])[1],t5);}

/* k11002 in new-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* immediate-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_11042(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11042,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11046,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_11046(2,t4,(C_word)C_a_i_list(&a,2,lf[739],t2));}
else{
if(C_truep((C_word)C_booleanp(t2))){
t4=t3;
f_11046(2,t4,(C_word)C_a_i_list(&a,2,lf[740],t2));}
else{
if(C_truep((C_word)C_charp(t2))){
t4=t3;
f_11046(2,t4,(C_word)C_a_i_list(&a,2,lf[741],t2));}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_11046(2,t4,lf[742]);}
else{
if(C_truep((C_word)C_eofp(t2))){
t4=t3;
f_11046(2,t4,lf[743]);}
else{
/* compiler.scm: 2298 ##compiler#bomb */
t4=C_retrieve(lf[499]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[744]);}}}}}}

/* k11044 in immediate-literal in ##compiler#prepare-for-code-generation in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_11046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11046,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],lf[738],t1,C_SCHEME_END_OF_LIST));}

/* lambda-literal-direct in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10075(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10075,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(15)));}

/* lambda-literal-direct-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10066,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(15),t3);}

/* lambda-literal-body in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10057,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(14)));}

/* lambda-literal-body-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10048,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(14),t3);}

/* lambda-literal-rest-argument-mode in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10039,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(13)));}

/* lambda-literal-rest-argument-mode-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10030(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10030,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(13),t3);}

/* lambda-literal-customizable in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10021(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10021,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(12)));}

/* lambda-literal-customizable-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10012,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(12),t3);}

/* lambda-literal-looping in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_10003(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10003,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(11)));}

/* lambda-literal-looping-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9994,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(11),t3);}

/* lambda-literal-closure-size in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9985(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9985,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(10)));}

/* lambda-literal-closure-size-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9976,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(10),t3);}

/* lambda-literal-directly-called in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9967,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(9)));}

/* lambda-literal-directly-called-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9958,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(9),t3);}

/* lambda-literal-allocated in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9949,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(8)));}

/* lambda-literal-allocated-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9940,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(8),t3);}

/* lambda-literal-callee-signatures in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9931(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9931,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(7)));}

/* lambda-literal-callee-signatures-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9922,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(7),t3);}

/* lambda-literal-temporaries in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9913(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9913,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(6)));}

/* lambda-literal-temporaries-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9904,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(6),t3);}

/* lambda-literal-rest-argument in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9895(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9895,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(5)));}

/* lambda-literal-rest-argument-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9886,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(5),t3);}

/* lambda-literal-argument-count in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9877,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(4)));}

/* lambda-literal-argument-count-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9868,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(4),t3);}

/* lambda-literal-arguments in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9859(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9859,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* lambda-literal-arguments-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9850,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* lambda-literal-external in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9841(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9841,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* lambda-literal-external-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9832,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* lambda-literal-id in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9823,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[673]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* lambda-literal-id-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9814,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[673]);
/* compiler.scm: 2041 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* lambda-literal? in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9808,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[673]));}

/* make-lambda-literal in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9802(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15,C_word t16){
C_word tmp;
C_word t17;
C_word ab[17],*a=ab;
if(c!=17) C_bad_argc_2(c,17,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr17,(void*)f_9802,17,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16);}
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,(C_word)C_a_i_record(&a,16,lf[673],t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16));}

/* ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[54],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8568,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8571,a[2]=t3,a[3]=lf[614],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8577,a[2]=t3,a[3]=t7,a[4]=lf[616],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8587,a[2]=t5,a[3]=lf[617],tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8598,a[2]=t3,a[3]=t8,a[4]=t10,a[5]=t9,a[6]=t12,a[7]=lf[632],tmp=(C_word)a,a+=8,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9633,a[2]=lf[634],tmp=(C_word)a,a+=3,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8932,a[2]=t3,a[3]=t16,a[4]=t18,a[5]=t14,a[6]=t8,a[7]=lf[662],tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9621,a[2]=t16,a[3]=lf[664],tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9769,a[2]=t12,a[3]=t7,a[4]=t2,a[5]=t16,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 2029 ##compiler#debugging */
t22=C_retrieve(lf[128]);
((C_proc4)C_retrieve_proc(t22))(4,t22,t21,lf[608],lf[670]);}

/* k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 2030 gather */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8598(t3,t2,((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);}

/* k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9775,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 2031 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[129],lf[669],((C_word*)((C_word*)t0)[2])[1]);}

/* k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 2032 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[608],lf[668]);}

/* k9776 in k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9781,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2033 transform */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8932(t3,t2,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k9779 in k9776 in k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9784,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_eqp(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
if(C_truep(t3)){
t4=t2;
f_9784(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9794,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9796,a[2]=lf[666],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 2035 ##sys#make-promise */
t6=*((C_word*)lf[667]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* a9795 in k9779 in k9776 in k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9796,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_length(C_retrieve(lf[67])));}

/* k9792 in k9779 in k9776 in k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 2035 ##compiler#debugging */
t2=C_retrieve(lf[128]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[129],lf[665],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k9782 in k9779 in k9776 in k9773 in k9770 in k9767 in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* maptransform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9621(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9621,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9627,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[663],tmp=(C_word)a,a+=6,tmp);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t2);}

/* a9626 in maptransform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9627,3,t0,t1,t2);}
/* compiler.scm: 2001 transform */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8932(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8932(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8932,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(2));
t9=t2;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(t10,lf[108]);
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t8,a[11]=t10,a[12]=t2,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t11)){
t13=t12;
f_8951(t13,t11);}
else{
t13=(C_word)C_eqp(t10,lf[140]);
if(C_truep(t13)){
t14=t12;
f_8951(t14,t13);}
else{
t14=(C_word)C_eqp(t10,lf[580]);
t15=t12;
f_8951(t15,(C_truep(t14)?t14:(C_word)C_eqp(t10,lf[501])));}}}

/* k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8951(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8951,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[12]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[11],lf[490]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8963,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[13],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1876 ref-var */
f_9633(t4,((C_word*)t0)[12],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[11],lf[120]);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t3)){
t5=t4;
f_8984(t5,t3);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[11],lf[484]);
if(C_truep(t5)){
t6=t4;
f_8984(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[11],lf[222]);
if(C_truep(t6)){
t7=t4;
f_8984(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[11],lf[223]);
if(C_truep(t7)){
t8=t4;
f_8984(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[11],lf[310]);
if(C_truep(t8)){
t9=t4;
f_8984(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[11],lf[111]);
if(C_truep(t9)){
t10=t4;
f_8984(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[11],lf[205]);
if(C_truep(t10)){
t11=t4;
f_8984(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[11],lf[658]);
if(C_truep(t11)){
t12=t4;
f_8984(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[11],lf[659]);
if(C_truep(t12)){
t13=t4;
f_8984(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[11],lf[660]);
if(C_truep(t13)){
t14=t4;
f_8984(t14,t13);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[11],lf[554]);
if(C_truep(t14)){
t15=t4;
f_8984(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[11],lf[661]);
if(C_truep(t15)){
t16=t4;
f_8984(t16,t15);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[11],lf[115]);
t17=t4;
f_8984(t17,(C_truep(t16)?t16:(C_word)C_eqp(((C_word*)t0)[11],lf[208])));}}}}}}}}}}}}}}}

/* k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8984(C_word t0,C_word t1){
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
C_word ab[63],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8984,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
t3=(C_word)C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8990,a[2]=((C_word*)t0)[11],a[3]=t3,a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1884 maptransform */
t5=((C_word*)((C_word*)t0)[10])[1];
f_9621(t5,t4,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[172]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9005,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[12],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 1888 test */
t5=((C_word*)t0)[4];
f_8571(t5,t4,t3,lf[602]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[483]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[6],lf[565]));
if(C_truep(t4)){
t5=(C_word)C_i_caddr(((C_word*)t0)[11]);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9080,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[8],a[12]=lf[651],tmp=(C_word)a,a+=13,tmp);
/* compiler.scm: 1904 ##compiler#decompose-lambda-list */
t7=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[12],t5,t6);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[6],lf[203]);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[11]);
t7=(C_word)C_i_car(((C_word*)t0)[9]);
t8=(C_word)C_slot(t7,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9351,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=t8,tmp=(C_word)a,a+=10,tmp);
t10=(C_word)C_eqp(lf[108],t8);
if(C_truep(t10)){
t11=(C_word)C_slot(t7,C_fix(2));
t12=(C_word)C_i_car(t11);
/* compiler.scm: 1964 ##compiler#immediate? */
t13=C_retrieve(lf[656]);
((C_proc3)C_retrieve_proc(t13))(3,t13,t9,t12);}
else{
t11=t9;
f_9351(2,t11,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_eqp(((C_word*)t0)[6],lf[311]);
if(C_truep(t6)){
t7=(C_truep(C_retrieve(lf[45]))?C_fix(2):C_fix(1));
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_i_car(((C_word*)t0)[11]);
t10=(C_word)C_a_i_list(&a,2,t9,C_SCHEME_TRUE);
t11=(C_word)C_a_i_record(&a,4,lf[482],lf[580],t10,C_SCHEME_END_OF_LIST);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9500,a[2]=t8,a[3]=((C_word*)t0)[12],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[45]))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9507,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9511,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(C_word)C_i_car(((C_word*)t0)[11]);
/* compiler.scm: 1995 ##sys#make-lambda-info */
t16=C_retrieve(lf[639]);
((C_proc3)C_retrieve_proc(t16))(3,t16,t14,t15);}
else{
t13=t12;
f_9500(t13,C_SCHEME_END_OF_LIST);}}
else{
/* compiler.scm: 1998 ##compiler#bomb */
t7=C_retrieve(lf[499]);
((C_proc3)C_retrieve_proc(t7))(3,t7,((C_word*)t0)[12],lf[657]);}}}}}}

/* k9509 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1995 ##compiler#qnode */
t2=C_retrieve(lf[638]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k9505 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9507,2,t0,t1);}
t2=((C_word*)t0)[2];
f_9500(t2,(C_word)C_a_i_list(&a,1,t1));}

/* k9498 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9500,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[637],((C_word*)t0)[2],t2));}

/* k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9351,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_eqp(lf[140],((C_word*)t0)[9]));
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 1966 ##compiler#posq */
t4=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9357,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9366,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1968 test */
t3=((C_word*)t0)[3];
f_8571(t3,t2,((C_word*)t0)[2],lf[602]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1980 test */
t3=((C_word*)t0)[3];
f_8571(t3,t2,((C_word*)t0)[2],lf[602]);}}

/* k9425 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9427,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[8])?lf[652]:lf[653]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9440,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1984 ##compiler#varnode */
t4=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9457,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1988 transform */
t4=((C_word*)((C_word*)t0)[6])[1];
f_8932(t4,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* k9455 in k9425 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9457,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[203],((C_word*)t0)[2],t2));}

/* k9438 in k9425 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9444,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1985 transform */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8932(t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9442 in k9438 in k9425 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9444,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t2));}

/* k9364 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9366(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9366,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[8])?lf[652]:lf[653]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1972 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[3]);}
else{
t2=(C_truep(((C_word*)t0)[8])?lf[654]:lf[655]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1978 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[3]);}}

/* k9411 in k9364 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9417,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1979 transform */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8932(t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9415 in k9411 in k9364 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9417,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k9391 in k9364 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9393,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[633],((C_word*)t0)[8],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9389,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1973 transform */
t5=((C_word*)((C_word*)t0)[5])[1];
f_8932(t5,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9387 in k9391 in k9364 in k9355 in k9349 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9389,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t2));}

/* a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9080,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_9084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=t1,a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],tmp=(C_word)a,a+=16,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[2],a[3]=lf[649],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1907 filter */
t7=C_retrieve(lf[650]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t2);}

/* a9328 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9329(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9329,3,t0,t1,t2);}
/* compiler.scm: 1907 test */
t3=((C_word*)t0)[2];
f_8571(t3,t1,t2,lf[602]);}

/* k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_9087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9327,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve(lf[131]),t1);}

/* k9325 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1908 map */
t2=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[178]+1),((C_word*)t0)[2],t1);}

/* k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_9090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* compiler.scm: 1909 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[138]);}

/* k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9090,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?(C_word)C_i_car(((C_word*)t0)[16]):lf[626]);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_9096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=t2,a[18]=t1,a[19]=((C_word*)t0)[16],tmp=(C_word)a,a+=20,tmp);
/* compiler.scm: 1911 test */
t4=((C_word*)t0)[2];
f_8571(t4,t3,t2,lf[627]);}

/* k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9096,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_9102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* compiler.scm: 1912 test */
t4=((C_word*)t0)[2];
f_8571(t4,t3,((C_word*)t0)[17],lf[628]);}

/* k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9102,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_9108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=t2,tmp=(C_word)a,a+=22,tmp);
if(C_truep(C_retrieve(lf[45]))){
t4=(C_word)C_i_cadr(((C_word*)t0)[20]);
t5=t3;
f_9108(t5,(C_truep(t4)?(C_word)C_i_pairp(((C_word*)t0)[15]):C_SCHEME_FALSE));}
else{
t4=t3;
f_9108(t4,C_SCHEME_FALSE);}}

/* k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9108(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9108,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_9111,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],a[20]=t1,tmp=(C_word)a,a+=21,tmp);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9294,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1918 test */
t4=((C_word*)t0)[2];
f_8571(t4,t3,((C_word*)t0)[6],lf[602]);}
else{
t3=t2;
f_9111(2,t3,C_SCHEME_FALSE);}}

/* k9292 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9294,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1919 test */
t3=((C_word*)t0)[2];
f_8571(t3,t2,((C_word*)t0)[6],lf[558]);}
else{
t2=((C_word*)t0)[4];
f_9111(2,t2,C_SCHEME_FALSE);}}

/* k9295 in k9292 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(t2);
/* compiler.scm: 1920 ##compiler#put! */
t4=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3,lf[648],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_9111(2,t2,C_SCHEME_FALSE);}}

/* k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9111(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9111,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[20])?C_fix(2):C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[19],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_i_cadr(((C_word*)t0)[18]);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_9251,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[20],a[12]=t4,a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t5,a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9255,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[7],a[3]=lf[647],tmp=(C_word)a,a+=4,tmp);
/* map */
t9=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,((C_word*)t0)[2]);}

/* a9269 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9270(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9270,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_word)C_i_cdr(t3):t2));}

/* k9253 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(((C_word*)t0)[5])?(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]):C_SCHEME_FALSE);
t3=(C_truep(t2)?(C_word)C_i_cdr(t2):((C_word*)t0)[5]);
/* compiler.scm: 1930 ##compiler#build-lambda-list */
t4=C_retrieve(lf[189]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[3],t1,((C_word*)t0)[2],t3);}

/* k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9251,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[18],t1);
t3=(C_word)C_i_cadddr(((C_word*)t0)[17]);
t4=(C_word)C_a_i_list(&a,4,((C_word*)t0)[16],((C_word*)t0)[15],t2,t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9185,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t4,a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[3]);
/* compiler.scm: 1939 transform */
t7=((C_word*)((C_word*)t0)[2])[1];
f_8932(t7,t5,t6,((C_word*)t0)[18],((C_word*)t0)[6]);}

/* k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9188,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9196,a[2]=lf[644],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9210,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1944 unzip1 */
t5=C_retrieve(lf[179]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}
else{
t3=t2;
f_9188(2,t3,t1);}}

/* k9208 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9214,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9216,a[2]=lf[646],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a9215 in k9208 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9216(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9216,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9227,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(t2);
/* compiler.scm: 1945 ##compiler#varnode */
t5=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k9225 in a9215 in k9208 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9227,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[636],C_SCHEME_END_OF_LIST,t2));}

/* k9212 in k9208 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1941 fold-right */
t2=C_retrieve(lf[645]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a9195 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9196,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t2);
t6=(C_word)C_a_i_list(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[482],lf[172],t5,t6));}

/* k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9188,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[12],((C_word*)t0)[11],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9134,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9173,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[643],tmp=(C_word)a,a+=6,tmp);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a9172 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9173(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9173,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1948 ##compiler#varnode */
t4=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k9179 in a9172 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1948 ref-var */
f_9633(((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9137,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9148,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9152,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9156,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9164,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1956 ##compiler#real-name */
t7=C_retrieve(lf[642]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}
else{
t3=t2;
f_9137(2,t3,t1);}}

/* k9162 in k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9164,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[640]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
/* compiler.scm: 1956 ->string */
t5=C_retrieve(lf[641]);
((C_proc3)C_retrieve_proc(t5))(3,t5,((C_word*)t0)[2],t4);}

/* k9154 in k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1955 ##sys#make-lambda-info */
t2=C_retrieve(lf[639]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k9150 in k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1954 ##compiler#qnode */
t2=C_retrieve(lf[638]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k9146 in k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9148,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* compiler.scm: 1951 append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9135 in k9132 in k9186 in k9183 in k9249 in k9109 in k9106 in k9100 in k9094 in k9088 in k9085 in k9082 in a9079 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9137,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[637],((C_word*)t0)[2],t2));}

/* k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1889 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[9]);}

/* k9006 in k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9008,2,t0,t1);}
if(C_truep(((C_word*)t0)[10])){
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9024,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[7]);
/* compiler.scm: 1893 transform */
t5=((C_word*)((C_word*)t0)[6])[1];
f_8932(t5,t3,t4,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1900 maptransform */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9621(t3,t2,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k9058 in k9006 in k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9060,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t1));}

/* k9022 in k9006 in k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9024,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 1896 ##compiler#varnode */
t4=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k9051 in k9022 in k9006 in k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9053,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[636],C_SCHEME_END_OF_LIST,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9045,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* compiler.scm: 1897 transform */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8932(t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9043 in k9051 in k9022 in k9006 in k9003 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9045,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t4));}

/* k8988 in k8982 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8990,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k8961 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8969,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1877 test */
t3=((C_word*)t0)[3];
f_8571(t3,t2,((C_word*)t0)[2],lf[602]);}

/* k8967 in k8961 in k8949 in transform in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8969,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[635],C_SCHEME_END_OF_LIST,t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* ref-var in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9633(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9633,NULL,4,t1,t2,t3,t4);}
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9640,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 2005 ##compiler#posq */
t9=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,t7,t4);}

/* k9638 in ref-var in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9640,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(t1,C_fix(1));
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9656,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2008 ##compiler#varnode */
t5=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k9654 in k9638 in ref-var in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9656,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[633],((C_word*)t0)[2],t2));}

/* gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8598,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(2));
t9=t2;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(t10,lf[108]);
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[6],a[10]=t6,a[11]=t8,a[12]=t10,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
if(C_truep(t11)){
t13=t12;
f_8617(t13,t11);}
else{
t13=(C_word)C_eqp(t10,lf[490]);
if(C_truep(t13)){
t14=t12;
f_8617(t14,t13);}
else{
t14=(C_word)C_eqp(t10,lf[140]);
if(C_truep(t14)){
t15=t12;
f_8617(t15,t14);}
else{
t15=(C_word)C_eqp(t10,lf[580]);
if(C_truep(t15)){
t16=t12;
f_8617(t16,t15);}
else{
t16=(C_word)C_eqp(t10,lf[311]);
t17=t12;
f_8617(t17,(C_truep(t16)?t16:(C_word)C_eqp(t10,lf[501])));}}}}}

/* k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8617(C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8617,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[12],lf[172]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8628,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=lf[618],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8638,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=lf[620],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1812 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t3,t4);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[12],lf[484]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[10]);
t5=(C_word)C_i_car(((C_word*)t0)[11]);
t6=(C_word)C_i_cdr(((C_word*)t0)[11]);
t7=(C_word)C_i_pairp(t6);
t8=(C_truep(t7)?(C_word)C_i_cadr(((C_word*)t0)[11]):C_SCHEME_FALSE);
t9=(C_word)C_slot(t4,C_fix(1));
t10=(C_word)C_eqp(lf[490],t9);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8680,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8697,a[2]=((C_word*)t0)[6],a[3]=t11,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t13=(C_truep(t8)?t8:t10);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8707,a[2]=t8,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t10)){
t15=(C_word)C_slot(t4,C_fix(2));
t16=(C_word)C_i_car(t15);
t17=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8713,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[10],a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t16,a[7]=((C_word*)t0)[5],a[8]=t14,tmp=(C_word)a,a+=9,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8821,a[2]=t16,a[3]=((C_word*)t0)[3],a[4]=t17,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1828 test */
t19=((C_word*)t0)[3];
f_8571(t19,t18,t16,lf[546]);}
else{
t15=t14;
f_8707(t15,C_SCHEME_END_OF_LIST);}}
else{
t14=t12;
f_8697(t14,C_SCHEME_END_OF_LIST);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[12],lf[483]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[12],lf[565]));
if(C_truep(t5)){
t6=(C_word)C_i_caddr(((C_word*)t0)[11]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[8],a[8]=lf[630],tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1853 ##compiler#decompose-lambda-list */
t8=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t8))(4,t8,((C_word*)t0)[13],t6,t7);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8896,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=lf[631],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[13],t6,((C_word*)t0)[10]);}}}}}

/* a8895 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8896(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8896,3,t0,t1,t2);}
/* compiler.scm: 1863 gather */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8598(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[20],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8857,5,t0,t1,t2,t3,t4);}
t5=(C_truep(((C_word*)t0)[7])?(C_word)C_i_car(((C_word*)t0)[6]):lf[626]);
t6=(C_word)C_i_car(((C_word*)t0)[5]);
t7=((C_word*)t0)[4];
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9670,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=t9,tmp=(C_word)a,a+=10,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9672,a[2]=t12,a[3]=t9,a[4]=t7,a[5]=lf[629],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9672(3,t14,t10,t6);}

/* walk in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9672(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9672,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[490]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t6);
if(C_truep((C_word)C_i_memq(t10,((C_word*)t0)[4]))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9701,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2020 lset-adjoin */
t12=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t12))(5,t12,t11,*((C_word*)lf[98]+1),((C_word*)((C_word*)t0)[3])[1],t10);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}
else{
t10=(C_word)C_eqp(t8,lf[108]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9710,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t6,a[7]=t8,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t10)){
t12=t11;
f_9710(t12,t10);}
else{
t12=(C_word)C_eqp(t8,lf[140]);
if(C_truep(t12)){
t13=t11;
f_9710(t13,t12);}
else{
t13=(C_word)C_eqp(t8,lf[311]);
if(C_truep(t13)){
t14=t11;
f_9710(t14,t13);}
else{
t14=(C_word)C_eqp(t8,lf[580]);
if(C_truep(t14)){
t15=t11;
f_9710(t15,t14);}
else{
t15=(C_word)C_eqp(t8,lf[111]);
t16=t11;
f_9710(t16,(C_truep(t15)?t15:(C_word)C_eqp(t8,lf[501])));}}}}}}

/* k9708 in walk in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9710(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9710,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[203]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9722,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[3]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9736,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 2024 lset-adjoin */
t6=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,*((C_word*)lf[98]+1),((C_word*)((C_word*)t0)[2])[1],t3);}
else{
t5=t4;
f_9722(t5,C_SCHEME_UNDEFINED);}}
else{
/* for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[8],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);}}}

/* k9734 in k9708 in walk in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_9722(t3,t2);}

/* k9720 in k9708 in walk in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_9722(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[4]);
/* compiler.scm: 2025 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9672(3,t3,((C_word*)t0)[2],t2);}

/* k9699 in walk in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9668 in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_9670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9670,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[9])[1];
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8870,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 1859 ##compiler#put! */
t5=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5],lf[628],t3);}

/* k8868 in k9668 in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8873,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1860 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6],lf[627],((C_word*)t0)[2]);}

/* k8871 in k8868 in k9668 in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8873,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8884,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1861 append */
t4=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8882 in k8871 in k8868 in k9668 in a8856 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1861 gather */
t2=((C_word*)((C_word*)t0)[5])[1];
f_8598(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8819 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_8713(2,t2,C_SCHEME_FALSE);}
else{
/* compiler.scm: 1828 test */
t2=((C_word*)t0)[3];
f_8571(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[547]);}}

/* k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=(C_word)C_slot(t1,C_fix(1));
t4=t2;
f_8719(t4,(C_word)C_eqp(lf[483],t3));}
else{
t3=t2;
f_8719(t3,C_SCHEME_FALSE);}}

/* k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8719(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8719,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[9],C_fix(2));
t3=(C_word)C_i_caddr(t2);
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1833 test */
t6=((C_word*)t0)[2];
f_8571(t6,t5,((C_word*)t0)[6],lf[542]);}
else{
t2=((C_word*)t0)[8];
f_8707(t2,C_SCHEME_END_OF_LIST);}}

/* k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8734,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1834 test */
t3=((C_word*)t0)[2];
f_8571(t3,t2,((C_word*)t0)[7],lf[561]);}

/* k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
if(C_truep(t1)){
t3=(C_word)C_i_length(((C_word*)t0)[2]);
t4=(C_word)C_i_length(t1);
t5=(C_word)C_eqp(t3,t4);
t6=t2;
f_8737(t6,(C_truep(t5)?(C_word)C_i_listp(((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t3=t2;
f_8737(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_8737(t3,C_SCHEME_FALSE);}}

/* k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8737,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8740,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8755,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep(t1)){
t4=(C_word)C_i_length(((C_word*)t0)[3]);
t5=(C_word)C_i_cdr(((C_word*)t0)[2]);
t6=(C_word)C_i_length(t5);
t7=(C_word)C_eqp(t4,t6);
t8=t3;
f_8755(t8,(C_word)C_i_not(t7));}
else{
t4=t3;
f_8755(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8755(t4,C_SCHEME_FALSE);}}

/* k8753 in k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8755(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8755,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8762,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1843 ##compiler#source-info->string */
t3=C_retrieve(lf[625]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8740(2,t2,C_SCHEME_UNDEFINED);}}

/* k8760 in k8753 in k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1840 ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[623],lf[624],t1);}

/* k8738 in k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1844 register-direct-call! */
t3=((C_word*)t0)[2];
f_8587(t3,t2,((C_word*)t0)[6]);}

/* k8741 in k8738 in k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8746,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* compiler.scm: 1845 register-customizable! */
t3=((C_word*)t0)[3];
f_8577(t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=t2;
f_8746(2,t3,C_SCHEME_UNDEFINED);}}

/* k8744 in k8741 in k8738 in k8735 in k8732 in k8729 in k8717 in k8711 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8746,2,t0,t1);}
t2=((C_word*)t0)[4];
f_8707(t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k8705 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8707,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
f_8697(t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8695 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8697,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* compiler.scm: 1821 node-parameters-set! */
t3=C_retrieve(lf[622]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8678 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8685,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=lf[621],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a8684 in k8678 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8685(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8685,3,t0,t1,t2);}
/* compiler.scm: 1850 gather */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8598(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8637 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8638,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[619],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t6=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a8654 in a8637 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8655(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8655,3,t0,t1,t2);}
/* compiler.scm: 1813 gather */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8598(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8640 in a8637 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8642,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8653,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1814 append */
t4=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8651 in k8640 in a8637 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1814 gather */
t2=((C_word*)((C_word*)t0)[5])[1];
f_8598(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8627 in k8615 in gather in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8628,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[3]);
/* compiler.scm: 1812 split-at */
t3=C_retrieve(lf[288]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* register-direct-call! in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8587(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8587,NULL,3,t0,t1,t2);}
t3=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8596,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1799 lset-adjoin */
t6=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,*((C_word*)lf[98]+1),C_retrieve(lf[67]),t2);}

/* k8594 in register-direct-call! in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[67]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* register-customizable! in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8577(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8577,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8582,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1794 lset-adjoin */
t5=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,*((C_word*)lf[98]+1),((C_word*)((C_word*)t0)[3])[1],t2);}

/* k8580 in register-customizable! in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
/* compiler.scm: 1795 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[615],C_SCHEME_TRUE);}

/* test in ##compiler#perform-closure-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8571(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8571,NULL,4,t0,t1,t2,t3);}
/* compiler.scm: 1791 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7053(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7053,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7057,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1415 make-vector */
t4=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(3001),C_SCHEME_END_OF_LIST);}

/* k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7059,a[2]=lf[540],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7762,a[2]=t1,a[3]=lf[543],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7659,a[2]=t1,a[3]=lf[551],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7066,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=t5,a[6]=t1,a[7]=t4,a[8]=lf[581],tmp=(C_word)a,a+=9,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7647,a[2]=t8,a[3]=lf[583],tmp=(C_word)a,a+=4,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7768,a[2]=lf[584],tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7782,a[2]=t1,a[3]=t15,a[4]=lf[587],tmp=(C_word)a,a+=5,tmp));
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7807,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t13,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1585 ##compiler#initialize-analysis-database */
t18=C_retrieve(lf[611]);
((C_proc3)C_retrieve_proc(t18))(3,t18,t17,t1);}

/* k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1588 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[608],lf[610]);}

/* k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7810,2,t0,t1);}
t2=C_set_block_item(lf[56],0,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7814,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1590 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7066(t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1593 ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[608],lf[609]);}

/* k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7820,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=lf[606],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1594 ##sys#hash-table-for-each */
t4=C_retrieve(lf[607]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[4]);}

/* a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[66],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7830,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_END_OF_LIST;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_fix(0);
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_FALSE;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_fix(0);
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_fix(0);
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_7834,a[2]=t9,a[3]=t19,a[4]=t13,a[5]=t31,a[6]=((C_word*)t0)[2],a[7]=t21,a[8]=t11,a[9]=t23,a[10]=t3,a[11]=((C_word*)t0)[3],a[12]=t25,a[13]=t29,a[14]=t17,a[15]=t27,a[16]=t2,a[17]=((C_word*)t0)[4],a[18]=t1,a[19]=t7,a[20]=t5,tmp=(C_word)a,a+=21,tmp);
t33=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_8455,a[2]=t27,a[3]=t25,a[4]=t7,a[5]=t23,a[6]=t21,a[7]=t19,a[8]=t17,a[9]=t31,a[10]=t15,a[11]=t9,a[12]=t13,a[13]=t29,a[14]=t11,a[15]=t5,a[16]=lf[605],tmp=(C_word)a,a+=17,tmp);
/* for-each */
t34=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t34+1)))(4,t34,t32,t33,t3);}

/* a8454 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8455,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_eqp(t3,lf[546]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[15],0,C_SCHEME_TRUE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_eqp(t3,lf[542]);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
t7=C_mutate(((C_word *)((C_word*)t0)[14])+1,t6);
t8=(C_word)C_i_length(((C_word*)((C_word*)t0)[14])[1]);
t9=C_mutate(((C_word *)((C_word*)t0)[13])+1,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t6=(C_word)C_eqp(t3,lf[552]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(C_word)C_eqp(t3,lf[575]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
t9=C_mutate(((C_word *)((C_word*)t0)[11])+1,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t8=(C_word)C_eqp(t3,lf[561]);
if(C_truep(t8)){
t9=(C_word)C_i_cdr(t2);
t10=C_mutate(((C_word *)((C_word*)t0)[10])+1,t9);
t11=(C_word)C_i_length(((C_word*)((C_word*)t0)[10])[1]);
t12=C_mutate(((C_word *)((C_word*)t0)[9])+1,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t9=(C_word)C_eqp(t3,lf[573]);
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[8],0,C_SCHEME_TRUE);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t10=(C_word)C_eqp(t3,lf[574]);
if(C_truep(t10)){
t11=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t11=(C_word)C_eqp(t3,lf[545]);
if(C_truep(t11)){
t12=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=(C_word)C_eqp(t3,lf[553]);
if(C_truep(t12)){
t13=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}
else{
t13=(C_word)C_eqp(t3,lf[547]);
if(C_truep(t13)){
t14=(C_word)C_i_cdr(t2);
t15=C_mutate(((C_word *)((C_word*)t0)[4])+1,t14);
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,t15);}
else{
t14=(C_word)C_eqp(t3,lf[557]);
if(C_truep(t14)){
t15=(C_word)C_i_cdr(t2);
t16=C_mutate(((C_word *)((C_word*)t0)[3])+1,t15);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,t16);}
else{
t15=(C_word)C_eqp(t3,lf[558]);
if(C_truep(t15)){
t16=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,t16);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}

/* k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7834(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7834,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[20])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:((C_word*)((C_word*)t0)[19])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[19])+1,t3);
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_7841,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[19],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8420,a[2]=((C_word*)t0)[16],a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[19],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve(lf[68]))){
t7=((C_word*)((C_word*)t0)[19])[1];
t8=(C_truep(t7)?t7:(C_truep(((C_word*)((C_word*)t0)[9])[1])?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));
t9=(C_truep(t8)?(C_word)C_slot(t8,C_fix(1)):C_SCHEME_FALSE);
t10=t6;
f_8420(t10,(C_word)C_eqp(lf[483],t9));}
else{
t7=t6;
f_8420(t7,C_SCHEME_FALSE);}}

/* k8418 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[5])[1];
t3=(C_truep(t2)?t2:((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
/* compiler.scm: 1640 ##compiler#set-real-name! */
t6=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t6))(4,t6,((C_word*)t0)[3],t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7841(2,t2,C_SCHEME_UNDEFINED);}}

/* k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(C_retrieve(lf[68]))?(C_truep(((C_word*)((C_word*)t0)[8])[1])?(C_word)C_i_nullp(((C_word*)((C_word*)t0)[7])[1]):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8379,a[2]=((C_word*)t0)[16],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* compiler.scm: 1646 ##compiler#compiler-warning */
t5=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[213],lf[604],((C_word*)t0)[16]);}
else{
t5=t4;
f_8379(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t2;
f_7844(2,t4,C_SCHEME_UNDEFINED);}}

/* k8377 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_retrieve(lf[20]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8391,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_8391(t5,t3);}
else{
if(C_truep(C_retrieve(lf[32]))){
t5=(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[32]));
t6=t4;
f_8391(t6,(C_word)C_i_not(t5));}
else{
t5=t4;
f_8391(t5,C_SCHEME_FALSE);}}}

/* k8389 in k8377 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[3],C_retrieve(lf[64]));
t3=((C_word*)t0)[2];
f_8385(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_8385(t2,C_SCHEME_FALSE);}}

/* k8383 in k8377 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1650 ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[213],lf[603],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7844(2,t2,C_SCHEME_UNDEFINED);}}

/* k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[13])[1])?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE);
if(C_truep(t3)){
/* compiler.scm: 1654 quick-put! */
f_7768(t2,((C_word*)t0)[8],lf[602],C_SCHEME_TRUE);}
else{
t4=t2;
f_7847(2,t4,C_SCHEME_UNDEFINED);}}

/* k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7847(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t3=((C_word*)((C_word*)t0)[9])[1];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t6=((C_word*)((C_word*)t0)[9])[1];
t7=(C_word)C_slot(t6,C_fix(1));
t8=(C_word)C_eqp(lf[483],t7);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(t4);
t10=(C_word)C_i_not(t9);
if(C_truep(t10)){
t11=t5;
f_8319(2,t11,t10);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8351,a[2]=((C_word*)t0)[15],a[3]=lf[600],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8359,a[2]=t11,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1663 ##compiler#scan-free-variables */
t13=C_retrieve(lf[601]);
((C_proc3)C_retrieve_proc(t13))(3,t13,t12,((C_word*)((C_word*)t0)[9])[1]);}}
else{
t9=t5;
f_8319(2,t9,C_SCHEME_FALSE);}}
else{
t3=t2;
f_7850(2,t3,C_SCHEME_UNDEFINED);}}

/* k8357 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1663 every */
t2=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8350 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8351(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8351,3,t0,t1,t2);}
/* compiler.scm: 1663 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,((C_word*)t0)[2],t2,lf[553]);}

/* k8317 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8319,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8325,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=((C_word*)((C_word*)t0)[2])[1];
t6=t2;
f_8325(t6,(C_word)C_eqp(C_fix(1),t5));}
else{
t5=t2;
f_8325(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
f_7850(2,t2,C_SCHEME_UNDEFINED);}}

/* k8323 in k8317 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8325(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1665 quick-put! */
f_7768(((C_word*)t0)[3],((C_word*)t0)[2],lf[598],C_SCHEME_TRUE);}
else{
/* compiler.scm: 1666 quick-put! */
f_7768(((C_word*)t0)[3],((C_word*)t0)[2],lf[599],C_SCHEME_TRUE);}}

/* k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8281,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t4=((C_word*)((C_word*)t0)[9])[1];
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
f_8281(t6,(C_word)C_eqp(lf[108],t5));}
else{
t4=t3;
f_8281(t4,C_SCHEME_FALSE);}}

/* k8279 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8281(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8281,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[6])[1];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1674 ##compiler#collapsable-literal? */
t6=C_retrieve(lf[272]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
t2=((C_word*)t0)[4];
f_7853(2,t2,C_SCHEME_UNDEFINED);}}

/* k8288 in k8279 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_8293(t3,t1);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t2;
f_8293(t4,(C_word)C_eqp(C_fix(1),t3));}}

/* k8291 in k8288 in k8279 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1676 quick-put! */
f_7768(((C_word*)t0)[3],((C_word*)t0)[2],lf[597],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_7853(2,t2,C_SCHEME_UNDEFINED);}}

/* k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7853(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7856,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)((C_word*)t0)[9])[1])){
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8182,a[2]=t2,a[3]=((C_word*)t0)[14],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t6=((C_word*)((C_word*)t0)[9])[1];
t7=(C_word)C_slot(t6,C_fix(1));
t8=(C_word)C_eqp(lf[483],t7);
if(C_truep(t8)){
t9=((C_word*)((C_word*)t0)[11])[1];
t10=((C_word*)((C_word*)t0)[2])[1];
t11=t5;
f_8182(t11,(C_word)C_eqp(t9,t10));}
else{
t9=t5;
f_8182(t9,C_SCHEME_FALSE);}}
else{
t3=t2;
f_7856(2,t3,C_SCHEME_UNDEFINED);}}

/* k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8182,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[7])[1];
t3=(C_word)C_slot(t2,C_fix(2));
if(C_truep((C_word)C_i_cadr(t3))){
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8200,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=lf[596],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1690 ##compiler#decompose-lambda-list */
t6=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t6))(4,t6,((C_word*)t0)[2],t4,t5);}
else{
t4=((C_word*)t0)[2];
f_7856(2,t4,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
f_7856(2,t2,C_SCHEME_UNDEFINED);}}

/* a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8200(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8200,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;
f_8204(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8243,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=lf[595],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}}

/* a8242 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8243(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8243,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8268,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1696 ##compiler#get */
t5=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],t2,lf[542]);}

/* k8266 in a8242 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8268,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_8250(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1697 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[573]);}}

/* k8262 in k8266 in a8242 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8250(t2,(C_word)C_i_not(t1));}

/* k8248 in a8242 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8250,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8253,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1698 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[594],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8251 in k8248 in a8242 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* k8202 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8210,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[84]));
t4=t2;
f_8210(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_8210(t3,C_SCHEME_FALSE);}}

/* k8208 in k8202 in a8199 in k8180 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8210,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
/* compiler.scm: 1704 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,lf[592],C_SCHEME_TRUE);}
else{
if(C_truep(((C_word*)t0)[3])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
/* compiler.scm: 1707 ##compiler#put! */
t5=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t5))(6,t5,((C_word*)t0)[5],((C_word*)t0)[4],t4,lf[593],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7856(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8119,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[10])[1];
if(C_truep(t4)){
t5=t3;
f_8119(t5,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8134,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t6=((C_word*)((C_word*)t0)[7])[1];
t7=(C_word)C_slot(t6,C_fix(1));
t8=(C_word)C_eqp(lf[490],t7);
t9=(C_word)C_i_not(t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8146,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[7],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t11=t10;
f_8146(t11,t9);}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8160,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=((C_word*)((C_word*)t0)[7])[1];
t13=(C_word)C_slot(t12,C_fix(2));
t14=(C_word)C_i_car(t13);
/* compiler.scm: 1715 ##compiler#get */
t15=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t15))(5,t15,t11,((C_word*)t0)[13],t14,lf[553]);}}
else{
t6=t5;
f_8134(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_8119(t5,C_SCHEME_FALSE);}}}

/* k8158 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8146(t2,(C_word)C_i_not(t1));}

/* k8144 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8146,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8153,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1716 ##compiler#expression-has-side-effects? */
t3=C_retrieve(lf[591]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_8134(t2,C_SCHEME_FALSE);}}

/* k8151 in k8144 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8134(t2,(C_word)C_i_not(t1));}

/* k8132 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8134(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_8119(t2,(C_truep(t1)?t1:((C_word*)((C_word*)t0)[2])[1]));}

/* k8117 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1718 quick-put! */
f_7768(((C_word*)t0)[3],((C_word*)t0)[2],lf[590],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
f_7859(2,t2,C_SCHEME_UNDEFINED);}}

/* k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7859(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t3=(C_truep(((C_word*)((C_word*)t0)[5])[1])?(C_word)C_i_not(((C_word*)((C_word*)t0)[2])[1]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[5])[1];
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_eqp(lf[490],t5);
if(C_truep(t6)){
t7=((C_word*)((C_word*)t0)[5])[1];
t8=(C_word)C_slot(t7,C_fix(2));
t9=(C_word)C_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t9,a[6]=((C_word*)t0)[11],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1730 ##compiler#get */
t11=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t11))(5,t11,t10,((C_word*)t0)[11],t9,lf[542]);}
else{
t7=t2;
f_7862(2,t7,C_SCHEME_UNDEFINED);}}
else{
t4=t2;
f_7862(2,t4,C_SCHEME_UNDEFINED);}}

/* k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8037,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1731 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[6],((C_word*)t0)[5],lf[546]);}

/* k8103 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_8037(2,t2,C_SCHEME_FALSE);}
else{
/* compiler.scm: 1731 ##compiler#get */
t2=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[547]);}}

/* k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8040,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_8040(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8095,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1732 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[7],((C_word*)t0)[6],lf[552]);}}

/* k8093 in k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8095,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_8040(t2,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[5])){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t4)){
t5=((C_word*)t0)[6];
f_8040(t5,C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1736 ##compiler#get */
t6=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2],lf[573]);}}
else{
t4=((C_word*)t0)[6];
f_8040(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
f_8040(t2,C_SCHEME_FALSE);}}}

/* k8085 in k8093 in k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8087,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_8040(t2,C_SCHEME_FALSE);}
else{
t2=C_retrieve(lf[20]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
f_8040(t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8083,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1737 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[553]);}}}

/* k8081 in k8085 in k8093 in k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8040(t2,(C_word)C_i_not(t1));}

/* k8038 in k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_8040(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8040,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8043,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1738 quick-put! */
f_7768(t2,((C_word*)t0)[2],lf[589],((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[6];
f_7862(2,t2,C_SCHEME_UNDEFINED);}}

/* k8041 in k8038 in k8035 in k8029 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_8043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1739 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[588],C_SCHEME_TRUE);}

/* k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
f_7890(t6,(C_word)C_eqp(lf[483],t5));}
else{
t4=t3;
f_7890(t4,C_SCHEME_FALSE);}}

/* k7888 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7890(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7890,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[6])[1];
t3=(C_word)C_slot(t2,C_fix(2));
if(C_truep((C_word)C_i_cadr(t3))){
t4=((C_word*)t0)[5];
f_7865(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_i_caddr(t3);
t5=((C_word*)((C_word*)t0)[6])[1];
t6=(C_word)C_slot(t5,C_fix(3));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7911,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
t10=(C_word)C_slot(t7,C_fix(1));
t11=t8;
f_7911(t11,(C_word)C_eqp(lf[484],t10));}
else{
t10=t8;
f_7911(t10,C_SCHEME_FALSE);}}
else{
t9=t8;
f_7911(t9,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[5];
f_7865(2,t2,C_SCHEME_UNDEFINED);}}

/* k7909 in k7888 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7911(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7911,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(3));
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cadr(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7932,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t8=(C_word)C_slot(t5,C_fix(1));
t9=(C_word)C_eqp(lf[490],t8);
if(C_truep(t9)){
t10=(C_word)C_slot(t6,C_fix(1));
t11=(C_word)C_eqp(lf[490],t10);
if(C_truep(t11)){
t12=(C_word)C_i_car(((C_word*)t0)[2]);
t13=(C_word)C_slot(t6,C_fix(2));
t14=(C_word)C_i_car(t13);
t15=t7;
f_7932(t15,(C_word)C_eqp(t12,t14));}
else{
t12=t7;
f_7932(t12,C_SCHEME_FALSE);}}
else{
t10=t7;
f_7932(t10,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[6];
f_7865(2,t5,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[6];
f_7865(2,t2,C_SCHEME_UNDEFINED);}}

/* k7930 in k7909 in k7888 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7932(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7932,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7938,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1759 quick-put! */
f_7768(t4,((C_word*)t0)[2],lf[589],t3);}
else{
t2=((C_word*)t0)[5];
f_7865(2,t2,C_SCHEME_UNDEFINED);}}

/* k7936 in k7930 in k7909 in k7888 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1760 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[588],C_SCHEME_TRUE);}

/* k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7871,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t3)){
t4=t2;
f_7871(t4,C_SCHEME_FALSE);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
t5=((C_word*)((C_word*)t0)[2])[1];
t6=t2;
f_7871(t6,(C_word)C_eqp(t4,t5));}}
else{
t3=t2;
f_7871(t3,C_SCHEME_FALSE);}}

/* k7869 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1770 lset-adjoin */
t3=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[98]+1),C_retrieve(lf[59]),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k7873 in k7869 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7839 in k7832 in a7829 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[59]+1,t1);
/* compiler.scm: 1771 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[558],lf[568]);}

/* k7818 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7824,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1777 lset-difference */
t3=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[98]+1),C_retrieve(lf[59]),((C_word*)((C_word*)t0)[2])[1]);}

/* k7822 in k7818 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7824,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[55]))){
t4=t3;
f_7827(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate((C_word*)lf[55]+1,C_retrieve(lf[56]));
t5=t3;
f_7827(t5,t4);}}

/* k7825 in k7822 in k7818 in k7815 in k7812 in k7808 in k7805 in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7827(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* contains? in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7782(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7782,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_memq(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7792,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1580 ##compiler#get */
t6=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[2],t2,lf[571]);}}

/* k7790 in contains? in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7792,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7800,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[585],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1582 any */
t3=C_retrieve(lf[586]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a7799 in k7790 in contains? in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7800(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7800,3,t0,t1,t2);}
/* compiler.scm: 1582 contains? */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7782(t3,t1,t2,((C_word*)t0)[2]);}

/* quick-put! in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7768(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7768,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7776,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* compiler.scm: 1575 alist-cons */
t7=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,t3,t4,t6);}

/* k7774 in quick-put! in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)t0)[2],t1));}

/* walkeach in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7647(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7647,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7653,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[582],tmp=(C_word)a,a+=7,tmp);
/* for-each */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t2);}

/* a7652 in walkeach in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7653,3,t0,t1,t2);}
/* compiler.scm: 1549 walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7066(t3,t1,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7066,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=f_7059(C_fix(1));
t13=(C_word)C_eqp(t11,lf[108]);
t14=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_7088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t3,a[11]=((C_word*)t0)[7],a[12]=t4,a[13]=t9,a[14]=t11,a[15]=t1,tmp=(C_word)a,a+=16,tmp);
if(C_truep(t13)){
t15=t14;
f_7088(t15,t13);}
else{
t15=(C_word)C_eqp(t11,lf[140]);
t16=t14;
f_7088(t16,(C_truep(t15)?t15:(C_word)C_eqp(t11,lf[580])));}}

/* k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7088(C_word t0,C_word t1){
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
C_word ab[99],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7088,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[14],lf[490]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[13]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7100,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[12],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1431 ref */
t5=((C_word*)t0)[8];
f_7762(t5,t4,t3,((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[14],lf[501]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[13]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7143,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1439 ref */
t6=((C_word*)t0)[8];
f_7762(t6,t5,t4,((C_word*)t0)[7]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[14],lf[310]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[14],lf[554]));
if(C_truep(t5)){
t6=f_7059(C_fix(1));
/* compiler.scm: 1445 walkeach */
t7=((C_word*)((C_word*)t0)[6])[1];
f_7647(t7,((C_word*)t0)[15],((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[4]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[14],lf[484]);
if(C_truep(t6)){
t7=f_7059(C_fix(1));
t8=(C_word)C_i_car(((C_word*)t0)[5]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7179,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t10=(C_word)C_slot(t8,C_fix(1));
t11=(C_word)C_eqp(lf[490],t10);
if(C_truep(t11)){
t12=(C_word)C_slot(t8,C_fix(2));
t13=(C_word)C_i_car(t12);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7202,a[2]=t9,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[9],a[5]=t13,tmp=(C_word)a,a+=6,tmp);
t15=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[7]);
/* compiler.scm: 1452 ##compiler#collect! */
t16=C_retrieve(lf[541]);
((C_proc6)C_retrieve_proc(t16))(6,t16,t14,((C_word*)t0)[9],t13,lf[561],t15);}
else{
t12=t9;
f_7179(2,t12,C_SCHEME_UNDEFINED);}}
else{
t7=(C_word)C_eqp(((C_word*)t0)[14],lf[172]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7274,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1466 append */
t9=*((C_word*)lf[177]+1);
((C_proc5)C_retrieve_proc(t9))(5,t9,t8,((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[10]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[14],lf[181]);
if(C_truep(t8)){
t9=f_7059(C_fix(1));
t10=(C_word)C_i_car(((C_word*)t0)[13]);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7341,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=lf[564],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1479 ##compiler#decompose-lambda-list */
t12=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t12))(4,t12,((C_word*)t0)[15],t10,t11);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[14],lf[483]);
t10=(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[14],lf[565]));
if(C_truep(t10)){
t11=f_7059(C_fix(1));
t12=(C_word)C_i_caddr(((C_word*)t0)[13]);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7385,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[13],a[10]=lf[572],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1492 ##compiler#decompose-lambda-list */
t14=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t14))(4,t14,((C_word*)t0)[15],t12,t13);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[14],lf[203]);
if(C_truep(t11)){
t12=(C_word)C_i_car(((C_word*)t0)[13]);
t13=(C_word)C_i_car(((C_word*)t0)[5]);
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[11],a[3]=t13,a[4]=((C_word*)t0)[2],a[5]=t12,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[5],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_retrieve(lf[68]))){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7570,a[2]=t13,a[3]=t12,a[4]=((C_word*)t0)[9],a[5]=t14,tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7576,a[2]=((C_word*)t0)[9],a[3]=t12,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1523 ##compiler#get */
t17=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t17))(5,t17,t16,((C_word*)t0)[9],t12,lf[560]);}
else{
t15=t14;
f_7495(2,t15,C_SCHEME_UNDEFINED);}}
else{
t12=(C_word)C_eqp(((C_word*)t0)[14],lf[311]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(((C_word*)t0)[14],lf[222]));
if(C_truep(t13)){
t14=(C_word)C_i_car(((C_word*)t0)[13]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7603,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7609,a[2]=((C_word*)t0)[4],a[3]=t14,a[4]=t15,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[68]))){
if(C_truep(((C_word*)t0)[4])){
if(C_truep((C_word)C_i_symbolp(t14))){
/* compiler.scm: 1542 ##sys#hash-table-ref */
t17=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t17))(4,t17,t16,C_retrieve(lf[80]),t14);}
else{
t17=t16;
f_7609(2,t17,C_SCHEME_FALSE);}}
else{
t17=t16;
f_7609(2,t17,C_SCHEME_FALSE);}}
else{
t17=t16;
f_7609(2,t17,C_SCHEME_FALSE);}}
else{
/* compiler.scm: 1546 walkeach */
t14=((C_word*)((C_word*)t0)[6])[1];
f_7647(t14,((C_word*)t0)[15],((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[4]);}}}}}}}}}}}

/* k7607 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1543 ##compiler#set-real-name! */
t2=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_7603(2,t2,C_SCHEME_UNDEFINED);}}

/* k7601 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1544 walkeach */
t2=((C_word*)((C_word*)t0)[7])[1];
f_7647(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7574 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7576,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 1524 ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],lf[576],lf[577],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7585,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1525 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3],lf[579]);}}

/* k7583 in k7574 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1526 ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[576],lf[578],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7570(2,t2,C_SCHEME_UNDEFINED);}}

/* k7568 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1527 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[575],((C_word*)t0)[2]);}

/* k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7524,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[8]))){
t4=t3;
f_7524(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[9]);
t5=t3;
f_7524(t5,(C_word)C_i_not(t4));}}

/* k7522 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7524(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7524,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_7059(C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[68]))){
t4=C_retrieve(lf[20]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7539,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_7539(t6,t4);}
else{
if(C_truep(C_retrieve(lf[32]))){
t6=(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[32]));
t7=t5;
f_7539(t7,(C_word)C_i_not(t6));}
else{
t6=t5;
f_7539(t6,C_SCHEME_FALSE);}}}
else{
t4=t3;
f_7530(t4,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[4];
f_7498(2,t2,C_SCHEME_UNDEFINED);}}

/* k7537 in k7522 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7539(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7539,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1533 lset-adjoin */
t3=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[98]+1),C_retrieve(lf[30]),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7530(t2,C_SCHEME_UNDEFINED);}}

/* k7541 in k7537 in k7522 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[30]+1,t1);
t3=((C_word*)t0)[2];
f_7530(t3,t2);}

/* k7528 in k7522 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7530(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1534 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[553],C_SCHEME_TRUE);}

/* k7496 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7501,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7521,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1535 append */
t4=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k7519 in k7496 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1535 assign */
t2=((C_word*)t0)[6];
f_7659(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k7499 in k7496 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_retrieve(lf[85]))){
t3=t2;
f_7504(2,t3,C_SCHEME_UNDEFINED);}
else{
/* compiler.scm: 1536 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[574],C_SCHEME_TRUE);}}

/* k7502 in k7499 in k7496 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7507,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1537 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[573],C_SCHEME_TRUE);}

/* k7505 in k7502 in k7499 in k7496 in k7493 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[7]);
/* compiler.scm: 1538 walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_7066(t3,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7385(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7385,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[9]);
t6=C_retrieve(lf[56]);
t7=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7392,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t1,a[13]=t6,a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t0)[2])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7477,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1498 ##compiler#collect! */
t9=C_retrieve(lf[541]);
((C_proc6)C_retrieve_proc(t9))(6,t9,t8,((C_word*)t0)[3],((C_word*)t0)[2],lf[571],t5);}
else{
t8=t7;
f_7392(2,t8,C_SCHEME_UNDEFINED);}}

/* k7475 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1499 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[570],((C_word*)t0)[2]);}

/* k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7392,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=lf[569],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[9]);}

/* a7466 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7467,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7471,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1502 ##compiler#put! */
t4=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[3],t2,lf[549],((C_word*)t0)[2]);}

/* k7469 in a7466 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1503 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[546],C_SCHEME_TRUE);}

/* k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7398,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[59]));
t4=(C_truep(t3)?lf[568]:lf[317]);
/* compiler.scm: 1506 ##compiler#put! */
t5=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[558],t4);}
else{
t3=t2;
f_7398(2,t3,C_SCHEME_UNDEFINED);}}

/* k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7398,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7452,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1510 ##compiler#simple-lambda-node? */
t4=C_retrieve(lf[567]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[12]);}

/* k7450 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1510 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[566],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
f_7401(2,t2,C_SCHEME_UNDEFINED);}}

/* k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7401,2,t0,t1);}
t2=C_retrieve(lf[85]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_retrieve(lf[86]))){
t4=t3;
f_7404(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate((C_word*)lf[86]+1,((C_word*)t0)[5]);
t5=t3;
f_7404(t5,t4);}}

/* k7402 in k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7404,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7437,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_cadr(((C_word*)t0)[2]))){
t4=(C_word)C_eqp(C_retrieve(lf[86]),((C_word*)t0)[5]);
t5=t3;
f_7437(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_7437(t4,C_SCHEME_FALSE);}}

/* k7435 in k7402 in k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7437(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_set_block_item(lf[85],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_7407(t3,t2);}
else{
t2=((C_word*)t0)[2];
f_7407(t2,C_SCHEME_UNDEFINED);}}

/* k7405 in k7402 in k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7407(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7407,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7410,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7434,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1515 append */
t5=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7432 in k7405 in k7402 in k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1515 walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_7066(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7408 in k7405 in k7402 in k7399 in k7396 in k7393 in k7390 in a7384 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_mutate((C_word*)lf[85]+1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_cdddr(t4);
t6=(C_word)C_fixnum_difference(C_retrieve(lf[56]),((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_set_car(t5,t6));}

/* a7340 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7341,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7360,a[2]=((C_word*)t0)[2],a[3]=lf[563],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a7359 in a7340 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7360,3,t0,t1,t2);}
/* compiler.scm: 1483 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t1,((C_word*)t0)[2],t2,lf[546],C_SCHEME_TRUE);}

/* k7343 in a7340 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7345,2,t0,t1);}
t2=C_retrieve(lf[85]);
t3=C_set_block_item(lf[85],0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7349,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7358,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1487 append */
t7=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7356 in k7343 in a7340 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1487 walk */
t2=((C_word*)((C_word*)t0)[5])[1];
f_7066(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k7347 in k7343 in a7340 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[85]+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7274,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7279,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=lf[562],tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_7279(t5,((C_word*)t0)[3],((C_word*)t0)[7],((C_word*)t0)[2]);}

/* loop in k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7279(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7279,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7297,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=t1,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1469 append */
t6=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7306,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[5],a[12]=t3,a[13]=t2,tmp=(C_word)a,a+=14,tmp);
/* compiler.scm: 1472 ##compiler#put! */
t7=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t7))(6,t7,t6,((C_word*)t0)[2],t4,lf[549],((C_word*)t0)[8]);}}

/* k7304 in loop in k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7309,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1473 assign */
t3=((C_word*)t0)[4];
f_7659(t3,t2,((C_word*)t0)[3],((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k7307 in k7304 in loop in k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7312,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1474 walk */
t3=((C_word*)((C_word*)t0)[6])[1];
f_7066(t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7310 in k7307 in k7304 in loop in k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1475 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7279(t4,((C_word*)t0)[2],t2,t3);}

/* k7295 in loop in k7272 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1469 walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_7066(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k7200 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1454 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],lf[560]);}

/* k7248 in k7200 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7250,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_memq(((C_word*)t0)[5],C_retrieve(lf[555])):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7213,a[2]=((C_word*)t0)[4],a[3]=lf[559],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* for-each */
t5=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t3,t4);}
else{
t3=((C_word*)t0)[2];
f_7179(2,t3,C_SCHEME_UNDEFINED);}}

/* a7212 in k7248 in k7200 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7213(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7213,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[490],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7232,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1460 ##compiler#get */
t10=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t10))(5,t10,t9,((C_word*)t0)[2],t8,lf[558]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k7230 in a7212 in k7248 in k7200 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1460 ##compiler#count! */
t2=C_retrieve(lf[556]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[557]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k7177 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[8]);
/* compiler.scm: 1462 walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7066(t4,t2,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k7180 in k7177 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* compiler.scm: 1463 walkeach */
t3=((C_word*)((C_word*)t0)[6])[1];
f_7647(t3,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7141 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_7059(C_fix(1));
/* compiler.scm: 1441 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[553],C_SCHEME_TRUE);}

/* k7098 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7100,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[7],((C_word*)t0)[6]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=f_7059(C_fix(1));
if(C_truep((C_word)C_i_memq(((C_word*)t0)[7],((C_word*)t0)[3]))){
/* compiler.scm: 1434 ##compiler#put! */
t3=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[7],lf[552],C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7131,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1435 ##compiler#get */
t4=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[7],lf[553]);}}}

/* k7129 in k7098 in k7086 in walk in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* compiler.scm: 1435 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[553],C_SCHEME_TRUE);}}

/* assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7659(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7659,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t3;
t7=(C_word)C_slot(t6,C_fix(1));
t8=(C_word)C_eqp(lf[140],t7);
if(C_truep(t8)){
/* compiler.scm: 1553 ##compiler#put! */
t9=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t9))(6,t9,t1,((C_word*)t0)[2],t2,lf[545],C_SCHEME_TRUE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7672,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=t3;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(lf[490],t11);
if(C_truep(t12)){
t13=t3;
t14=(C_word)C_slot(t13,C_fix(2));
t15=(C_word)C_i_car(t14);
t16=t9;
f_7672(t16,(C_word)C_eqp(t2,t15));}
else{
t13=t9;
f_7672(t13,C_SCHEME_FALSE);}}}

/* k7670 in assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7672(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7672,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_retrieve(lf[20]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7681(t4,t2);}
else{
t4=(C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;
f_7681(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7732,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1558 ##compiler#get */
t6=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[6],((C_word*)t0)[5],lf[402]);}}}}

/* k7730 in k7670 in assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_7681(t2,(C_truep(t1)?t1:(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[30]))));}

/* k7679 in k7670 in assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7681,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1561 ##compiler#get-all */
t3=C_retrieve(lf[550]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[546],lf[547]);}
else{
/* compiler.scm: 1569 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],lf[546],C_SCHEME_TRUE);}}

/* k7682 in k7679 in k7670 in assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7687,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1562 ##compiler#get */
t3=C_retrieve(lf[548]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[549]);}

/* k7685 in k7682 in k7679 in k7670 in assign in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_i_assq(lf[546],((C_word*)t0)[7]))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
if(C_truep((C_word)C_i_assq(lf[547],((C_word*)t0)[7]))){
/* compiler.scm: 1565 ##compiler#put! */
t2=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],lf[546],C_SCHEME_TRUE);}
else{
t2=(C_word)C_i_not(t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[3],t1));
if(C_truep(t3)){
/* compiler.scm: 1567 ##compiler#put! */
t4=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],lf[547],((C_word*)t0)[2]);}
else{
/* compiler.scm: 1568 ##compiler#put! */
t4=C_retrieve(lf[544]);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],lf[546],C_SCHEME_TRUE);}}}}

/* ref in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_7762(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7762,NULL,4,t0,t1,t2,t3);}
/* compiler.scm: 1572 ##compiler#collect! */
t4=C_retrieve(lf[541]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t2,lf[542],t3);}

/* grow in k7055 in ##compiler#analyze-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static C_word C_fcall f_7059(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_fixnum_plus(C_retrieve(lf[56]),t1);
t3=C_mutate((C_word*)lf[56]+1,t2);
return(t3);}

/* foreign-callback-stub-argument-types in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7044,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[515]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(5)));}

/* foreign-callback-stub-argument-types-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7035,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[515]);
/* compiler.scm: 1404 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(5),t3);}

/* foreign-callback-stub-return-type in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7026,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[515]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(4)));}

/* foreign-callback-stub-return-type-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7017,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[515]);
/* compiler.scm: 1404 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(4),t3);}

/* foreign-callback-stub-qualifiers in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_7008(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7008,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[515]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* foreign-callback-stub-qualifiers-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6999(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6999,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[515]);
/* compiler.scm: 1404 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* foreign-callback-stub-name in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6990,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[515]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* foreign-callback-stub-name-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6981,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[515]);
/* compiler.scm: 1404 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* foreign-callback-stub-id in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6972,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[515]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* foreign-callback-stub-id-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6963,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[515]);
/* compiler.scm: 1404 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* foreign-callback-stub? in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6957(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6957,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[515]));}

/* make-foreign-callback-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_6951,7,t0,t1,t2,t3,t4,t5,t6);}
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,6,lf[515],t2,t3,t4,t5,t6));}

/* ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6276(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[41],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6276,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6279,a[2]=t6,a[3]=lf[489],tmp=(C_word)a,a+=4,tmp));
t16=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6323,a[2]=t8,a[3]=t10,a[4]=t4,a[5]=t6,a[6]=lf[502],tmp=(C_word)a,a+=7,tmp));
t17=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6697,a[2]=t12,a[3]=t6,a[4]=lf[505],tmp=(C_word)a,a+=5,tmp));
t18=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6822,a[2]=t12,a[3]=lf[507],tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6838,a[2]=t14,a[3]=t6,a[4]=lf[510],tmp=(C_word)a,a+=5,tmp));
t20=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6923,a[2]=t14,a[3]=lf[512],tmp=(C_word)a,a+=4,tmp));
/* compiler.scm: 1399 walk */
t21=((C_word*)t6)[1];
f_6323(t21,t1,t2,*((C_word*)lf[513]+1));}

/* atomic? in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6923(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6923,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_i_memq(t4,lf[511]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep((C_truep((C_word)C_eqp(t4,lf[222]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[223]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[111]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[205]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[115]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[208]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
/* compiler.scm: 1397 every */
t8=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t1,((C_word*)((C_word*)t0)[2])[1],t7);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}

/* walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6838(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6838,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=lf[509],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_6844(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6844(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6844,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6858,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1380 reverse */
t5=*((C_word*)lf[328]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6864,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(t2);
/* compiler.scm: 1381 atomic? */
t6=((C_word*)((C_word*)t0)[2])[1];
f_6923(3,t6,t4,t5);}}

/* k6862 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6864,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[5]);
/* compiler.scm: 1382 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6844(t5,((C_word*)t0)[3],t2,t4);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1384 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[461]);}}

/* k6880 in k6862 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6882,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6891,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=lf[508],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1385 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6323(t4,((C_word*)t0)[2],t2,t3);}

/* a6890 in k6880 in k6862 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6891,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6905,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6917,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1390 ##compiler#varnode */
t7=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[5]);}

/* k6915 in a6890 in k6880 in k6862 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6917,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* compiler.scm: 1389 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6844(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6903 in a6890 in k6880 in k6862 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6905,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t2));}

/* k6856 in loop in walk-arguments in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1380 wk */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* walk-inline-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6822(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6822,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6828,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=lf[506],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1373 walk-arguments */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6838(t7,t1,t4,t6);}

/* a6827 in walk-inline-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6828(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6828,3,t0,t1,t2);}
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=(C_word)C_a_i_record(&a,4,lf[482],t3,t4,t2);
/* compiler.scm: 1376 k */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t1,t5);}

/* walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6697(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6697,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6701,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 1349 gensym */
t7=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[488]);}

/* k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 1350 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[290]);}

/* k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6704,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=t2,a[10]=((C_word*)t0)[8],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* gensym */
t4=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[494]);}

/* k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6758,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[11]);
t3=(C_word)C_a_i_list(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6754,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1354 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[11]);}

/* k6752 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1354 k */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6750,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[483],((C_word*)t0)[10],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6727,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6729,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[504],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1355 walk-arguments */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6838(t6,t4,((C_word*)t0)[2],t5);}

/* a6728 in k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6729(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6729,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6735,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=lf[503],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1358 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6323(t4,t1,((C_word*)t0)[2],t3);}

/* a6734 in a6728 in k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6735(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6735,3,t0,t1,t2);}
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6739,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1360 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k6744 in a6734 in a6728 in k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1360 cons* */
t2=C_retrieve(lf[248]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6737 in a6734 in a6728 in k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6739,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[482],lf[484],((C_word*)t0)[2],t1));}

/* k6725 in k6748 in k6756 in k6702 in k6699 in walk-call in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6727,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t2));}

/* walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6323(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6323,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[490]);
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=t11,a[10]=t2,a[11]=t1,a[12]=t3,tmp=(C_word)a,a+=13,tmp);
if(C_truep(t12)){
t14=t13;
f_6345(t14,t12);}
else{
t14=(C_word)C_eqp(t11,lf[108]);
if(C_truep(t14)){
t15=t13;
f_6345(t15,t14);}
else{
t15=(C_word)C_eqp(t11,lf[140]);
if(C_truep(t15)){
t16=t13;
f_6345(t16,t15);}
else{
t16=(C_word)C_eqp(t11,lf[311]);
t17=t13;
f_6345(t17,(C_truep(t16)?t16:(C_word)C_eqp(t11,lf[501])));}}}}

/* k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6345(C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6345,NULL,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 1306 k */
t2=((C_word*)t0)[12];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[11],((C_word*)t0)[10]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[120]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6357,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1307 gensym */
t4=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[488]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[172]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6451,a[2]=t5,a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[7],a[5]=lf[496],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6451(t7,((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[8]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[181]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6513,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* gensym */
t6=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[494]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[203]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6526,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1329 gensym */
t7=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[318]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[287]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6576,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* gensym */
t8=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,lf[494]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[9],lf[222]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
t9=t8;
f_6611(t9,t7);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[223]);
if(C_truep(t9)){
t10=t8;
f_6611(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[111]);
if(C_truep(t10)){
t11=t8;
f_6611(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[9],lf[205]);
if(C_truep(t11)){
t12=t8;
f_6611(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[9],lf[115]);
t13=t8;
f_6611(t13,(C_truep(t12)?t12:(C_word)C_eqp(((C_word*)t0)[9],lf[208])));}}}}}}}}}}}

/* k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6611(C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6611,NULL,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 1343 walk-inline-call */
t2=((C_word*)((C_word*)t0)[9])[1];
f_6822(t2,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[484]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* compiler.scm: 1344 walk-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6697(t5,((C_word*)t0)[8],t3,t4,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[3],lf[310]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=((C_word*)t0)[8];
t6=((C_word*)t0)[4];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6768,a[2]=t6,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1363 gensym */
t8=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,lf[488]);}
else{
/* compiler.scm: 1346 ##compiler#bomb */
t4=C_retrieve(lf[499]);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[8],lf[500]);}}}}

/* k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1364 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[290]);}

/* k6769 in k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6771,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* gensym */
t4=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[494]);}

/* k6814 in k6769 in k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6816,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6812,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1368 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}

/* k6810 in k6814 in k6769 in k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1368 k */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6806 in k6814 in k6769 in k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6808,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[483],((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1370 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k6802 in k6806 in k6814 in k6769 in k6766 in k6609 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6804,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[310],((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t4));}

/* k6574 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6576,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6602,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_apply(5,0,t3,C_retrieve(lf[498]),t1,((C_word*)t0)[2]);}

/* k6600 in k6574 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6602,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_retrieve(lf[72]));
t3=C_mutate((C_word*)lf[72]+1,t2);
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_slot(((C_word*)t0)[6],C_fix(3));
/* compiler.scm: 1340 cps-lambda */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6279(t7,((C_word*)t0)[4],((C_word*)t0)[3],t5,t6,((C_word*)t0)[2]);}

/* k6524 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6526,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=lf[497],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1330 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6323(t4,((C_word*)t0)[2],t2,t3);}

/* a6534 in k6524 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6535,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_list(&a,1,t2);
t7=(C_word)C_a_i_record(&a,4,lf[482],lf[203],t5,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6559,a[2]=t3,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6563,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1334 ##compiler#varnode */
t10=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t0)[4]);}

/* k6561 in a6534 in k6524 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1334 k */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6557 in a6534 in k6524 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6559,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t2));}

/* k6511 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[6]);
/* compiler.scm: 1328 cps-lambda */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6279(t3,((C_word*)t0)[4],t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6451(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6451,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
/* compiler.scm: 1322 walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6323(t5,t1,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6474,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=lf[495],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1323 walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6323(t6,t1,t4,t5);}}

/* a6473 in loop in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6474,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6488,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* compiler.scm: 1327 loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_6451(t8,t5,t6,t7);}

/* k6486 in a6473 in loop in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6488,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t2));}

/* k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1308 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[290]);}

/* k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6361,a[2]=((C_word*)t0)[6],a[3]=lf[492],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* gensym */
t5=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[494]);}

/* k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6436,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6428,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6432,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1313 ##compiler#varnode */
t6=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[8]);}

/* k6430 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1313 k */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6426 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6428,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[483],((C_word*)t0)[7],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6395,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6401,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[493],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1314 walk */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6323(t7,t4,t5,t6);}

/* a6400 in k6426 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6401,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* compiler.scm: 1318 walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6323(t5,t3,t4,((C_word*)t0)[2]);}

/* k6410 in a6400 in k6426 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6416,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
/* compiler.scm: 1319 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6323(t4,t2,t3,((C_word*)t0)[2]);}

/* k6414 in k6410 in a6400 in k6426 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6416,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[120],C_SCHEME_END_OF_LIST,t2));}

/* k6393 in k6426 in k6434 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6395,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[172],((C_word*)t0)[2],t2));}

/* k1 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6361,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6372,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1309 ##compiler#varnode */
t4=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k6370 in k1 in k6358 in k6355 in k6343 in walk in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6372,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[484],lf[491],t2));}

/* cps-lambda in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6279(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6279,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=t5,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1294 gensym */
t7=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[488]);}

/* k6281 in cps-lambda in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6283,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[6],C_SCHEME_TRUE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6300,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6306,a[2]=t1,a[3]=lf[487],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1297 walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6323(t7,t4,t5,t6);}

/* a6305 in k6281 in cps-lambda in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6306,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6317,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1299 ##compiler#varnode */
t4=C_retrieve(lf[486]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k6315 in a6305 in k6281 in cps-lambda in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6317,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[482],lf[484],lf[485],t2));}

/* k6298 in k6281 in cps-lambda in ##compiler#perform-cps-conversion in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6300,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[482],lf[483],((C_word*)t0)[4],t2);
/* compiler.scm: 1295 k */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],t3);}

/* ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6186,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6189,a[2]=t7,a[3]=lf[477],tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6218,a[2]=t3,a[3]=t5,a[4]=lf[479],tmp=(C_word)a,a+=5,tmp));
/* compiler.scm: 1286 walk */
t10=((C_word*)t7)[1];
f_6218(t10,t1,t2);}

/* walk in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6218,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_not_pair_p(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6237,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 1280 ##sys#hash-table-ref */
t7=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,C_retrieve(lf[478]),t5);}
else{
/* compiler.scm: 1284 mapupdate */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6189(t5,t1,t2);}}}

/* k6235 in walk in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6237,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6243,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_assq(((C_word*)t0)[6],t2))){
t4=t3;
f_6243(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6260,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1282 alist-cons */
t5=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],((C_word*)t0)[2],t2);}}

/* k6258 in k6235 in walk in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1282 ##sys#hash-table-set! */
t2=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_retrieve(lf[478]),((C_word*)t0)[2],t1);}

/* k6241 in k6235 in walk in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1283 mapupdate */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6189(t3,((C_word*)t0)[2],t2);}

/* mapupdate in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6189(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6189,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6195,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[476],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6195(t6,t1,t2);}

/* loop in mapupdate in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6195,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6205,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* compiler.scm: 1273 walk */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6218(t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k6203 in loop in mapupdate in ##compiler#update-line-number-database! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1274 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6195(t3,((C_word*)t0)[2],t2);}

/* ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6105,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6109,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_caddr(t2);
t6=(C_word)C_i_cadr(t5);
t7=(C_word)C_i_stringp(t6);
t8=t3;
f_6109(t8,(C_word)C_i_not(t7));}
else{
t5=t3;
f_6109(t5,C_SCHEME_FALSE);}}

/* k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6109,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6112,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
t4=t2;
f_6112(t4,(C_word)C_i_cadr(t3));}
else{
t3=t2;
f_6112(t3,lf[474]);}}

/* k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6112,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_i_caddr(((C_word*)t0)[2]);
t4=t2;
f_6115(t4,(C_word)C_i_cadr(t3));}
else{
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
t4=t2;
f_6115(t4,(C_word)C_i_cadr(t3));}}

/* k6113 in k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_6115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6115,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6118,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6131,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(((C_word*)t0)[3])?(C_word)C_i_cdddr(((C_word*)t0)[2]):(C_word)C_i_cddr(((C_word*)t0)[2]));
/* map */
t5=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,*((C_word*)lf[470]+1),t4);}

/* k6129 in k6113 in k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[253]+1),t1);}

/* k6116 in k6113 in k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6121,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[471]+1),((C_word*)t0)[2]);}

/* k6119 in k6116 in k6113 in k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6124,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[470]+1),((C_word*)t0)[2]);}

/* k6122 in k6119 in k6116 in k6113 in k6110 in k6107 in ##compiler#expand-foreign-primitive in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1262 ##compiler#create-foreign-stub */
t2=C_retrieve(lf[454]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* ##compiler#expand-foreign-callback-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6068(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6068,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_i_cadr(t3);
t5=(C_word)C_i_caddr(t2);
t6=(C_word)C_i_cadr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6078,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6091,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_cdddr(t2);
/* map */
t10=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,*((C_word*)lf[470]+1),t9);}

/* k6089 in ##compiler#expand-foreign-callback-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[253]+1),t1);}

/* k6076 in ##compiler#expand-foreign-callback-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6081,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[471]+1),((C_word*)t0)[2]);}

/* k6079 in k6076 in ##compiler#expand-foreign-callback-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6084,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[470]+1),((C_word*)t0)[2]);}

/* k6082 in k6079 in k6076 in ##compiler#expand-foreign-callback-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1253 ##compiler#create-foreign-stub */
t2=C_retrieve(lf[454]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* ##compiler#expand-foreign-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6031,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_i_cadr(t3);
t5=(C_word)C_i_caddr(t2);
t6=(C_word)C_i_cadr(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6041,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_cdddr(t2);
/* map */
t10=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,*((C_word*)lf[470]+1),t9);}

/* k6052 in ##compiler#expand-foreign-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[253]+1),t1);}

/* k6039 in ##compiler#expand-foreign-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[471]+1),((C_word*)t0)[2]);}

/* k6042 in k6039 in ##compiler#expand-foreign-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6047,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[470]+1),((C_word*)t0)[2]);}

/* k6045 in k6042 in k6039 in ##compiler#expand-foreign-lambda* in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_6047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1245 ##compiler#create-foreign-stub */
t2=C_retrieve(lf[454]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* ##compiler#expand-foreign-callback-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5986(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5986,3,t0,t1,t2);}
t3=(C_word)C_i_caddr(t2);
t4=(C_word)C_i_cadr(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5993,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_symbolp(t4))){
/* compiler.scm: 1232 symbol->string */
t6=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
if(C_truep((C_word)C_i_stringp(t4))){
t6=t5;
f_5993(2,t6,t4);}
else{
/* compiler.scm: 1234 quit */
t6=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[468],t4);}}}

/* k5991 in ##compiler#expand-foreign-callback-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5993,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5999,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdddr(((C_word*)t0)[3]);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,*((C_word*)lf[465]+1),t5);}

/* k5997 in k5991 in ##compiler#expand-foreign-callback-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1237 ##compiler#create-foreign-stub */
t2=C_retrieve(lf[454]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* ##compiler#expand-foreign-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5941,3,t0,t1,t2);}
t3=(C_word)C_i_caddr(t2);
t4=(C_word)C_i_cadr(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5948,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_symbolp(t4))){
/* compiler.scm: 1223 symbol->string */
t6=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
if(C_truep((C_word)C_i_stringp(t4))){
t6=t5;
f_5948(2,t6,t4);}
else{
/* compiler.scm: 1225 quit */
t6=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[466],t4);}}}

/* k5946 in ##compiler#expand-foreign-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5948,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5954,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdddr(((C_word*)t0)[3]);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,*((C_word*)lf[465]+1),t5);}

/* k5952 in k5946 in ##compiler#expand-foreign-lambda in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1228 ##compiler#create-foreign-stub */
t2=C_retrieve(lf[454]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5787,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5791,a[2]=t6,a[3]=t5,a[4]=t3,a[5]=t8,a[6]=t4,a[7]=t2,a[8]=t1,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t10=(C_word)C_i_length(t4);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5935,a[2]=lf[462],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1196 list-tabulate */
t12=C_retrieve(lf[463]);
((C_proc4)C_retrieve_proc(t12))(4,t12,t9,t10,t11);}

/* a5934 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5935,3,t0,t1,t2);}
/* compiler.scm: 1196 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,lf[461]);}

/* k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5794,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1197 gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[460]);}

/* k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* compiler.scm: 1198 gensym */
t3=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* compiler.scm: 1199 ##compiler#estimate-foreign-result-size */
t3=C_retrieve(lf[459]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}

/* k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* compiler.scm: 1200 ##compiler#set-real-name! */
t3=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[5],C_SCHEME_TRUE);}

/* k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5929,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 1202 make-foreign-stub */
t3=C_retrieve(lf[416]);
((C_proc10)C_retrieve_proc(t3))(10,t3,t2,((C_word*)t0)[5],((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[13]);}

/* k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5929,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_retrieve(lf[71]));
t3=C_mutate((C_word*)lf[71]+1,t2);
t4=(C_truep(((C_word*)t0)[10])?(C_word)C_fixnum_plus(((C_word*)t0)[9],C_fix(24)):((C_word*)t0)[9]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5813,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(C_word)C_a_i_list(&a,2,lf[311],((C_word*)t0)[2]);
t7=t5;
f_5813(t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t6=t5;
f_5813(t6,(C_word)C_a_i_list(&a,2,lf[222],((C_word*)t0)[2]));}}

/* k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_5813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5813,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5816,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5904,a[2]=lf[458],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1208 map */
t4=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[8],((C_word*)t0)[2]);}

/* a5903 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5904,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5912,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1208 ##compiler#foreign-type-convert-argument */
t5=C_retrieve(lf[207]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* k5910 in a5903 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1208 ##compiler#foreign-type-check */
t2=C_retrieve(lf[206]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5827,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)t0)[6])?lf[455]:C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5839,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[5],C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5849,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_a_i_cons(&a,2,lf[456],t1);
/* compiler.scm: 1213 append */
t8=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[3],t7);}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5856,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1214 ##compiler#final-foreign-type */
t7=C_retrieve(lf[114]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[4]);}}

/* k5854 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5859,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 1215 ##compiler#words */
t3=C_retrieve(lf[259]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5857 in k5854 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5859,2,t0,t1);}
t2=(C_word)C_fixnum_plus(C_fix(2),t1);
t3=(C_word)C_a_i_list(&a,2,lf[457],t2);
t4=(C_word)C_a_i_list(&a,2,lf[108],t1);
t5=(C_word)C_a_i_list(&a,3,lf[223],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5870,a[2]=t7,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[5],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[4],a[3]=t9,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[3]);
/* compiler.scm: 1218 append */
t12=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t12))(4,t12,t10,((C_word*)t0)[2],t11);}

/* k5876 in k5857 in k5854 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1218 ##compiler#finish-foreign-result */
t2=C_retrieve(lf[113]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5872 in k5857 in k5854 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1217 ##compiler#foreign-type-convert-result */
t2=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5868 in k5857 in k5854 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5870,2,t0,t1);}
t2=((C_word*)t0)[3];
f_5839(2,t2,(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[2],t1));}

/* k5847 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1213 ##compiler#foreign-type-convert-result */
t2=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5837 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5839,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* ##sys#append */
t3=*((C_word*)lf[258]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5825 in k5814 in k5811 in k5927 in k5801 in k5798 in k5795 in k5792 in k5789 in ##compiler#create-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5827,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[181],t2));}

/* foreign-stub-callback in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5778,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(8)));}

/* foreign-stub-callback-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5769,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(8),t3);}

/* foreign-stub-cps in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5760,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(7)));}

/* foreign-stub-cps-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5751,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(7),t3);}

/* foreign-stub-body in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5742,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(6)));}

/* foreign-stub-body-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5733,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(6),t3);}

/* foreign-stub-argument-names in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5724,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(5)));}

/* foreign-stub-argument-names-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5715,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(5),t3);}

/* foreign-stub-argument-types in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5706,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(4)));}

/* foreign-stub-argument-types-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5697,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(4),t3);}

/* foreign-stub-name in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5688,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* foreign-stub-name-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5679,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* foreign-stub-return-type in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5670,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* foreign-stub-return-type-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5661,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* foreign-stub-id in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5652(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5652,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[417]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* foreign-stub-id-set! in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5643,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[417]);
/* compiler.scm: 1185 ##sys#block-set! */
t5=*((C_word*)lf[422]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* foreign-stub? in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5637,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[417]));}

/* make-foreign-stub in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word ab[10],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_5631,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,9,lf[417],t2,t3,t4,t5,t6,t7,t8,t9));}

/* ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4599(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4599,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4602,a[2]=lf[335],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4653,a[2]=t3,a[3]=t2,a[4]=lf[414],tmp=(C_word)a,a+=5,tmp);
t5=t4;
f_4653(t5,t1);}

/* a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4653(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4653,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=t2;
f_4657(2,t3,C_SCHEME_UNDEFINED);}
else{
/* compiler.scm: 1008 syntax-error */
t3=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[413],((C_word*)t0)[3]);}}

/* k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4657(C_word c,C_word t0,C_word t1){
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
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word ab[109],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4657,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_eqp(t2,lf[337]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4672,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t6,C_retrieve(lf[343]),t5);}
else{
t5=(C_word)C_eqp(t2,lf[344]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4722,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1020 check-decl */
f_4602(t6,((C_word*)t0)[4],C_fix(1),(C_word)C_a_i_list(&a,1,C_fix(1)));}
else{
t6=(C_word)C_eqp(t2,lf[11]);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t7))){
t8=C_mutate((C_word*)lf[11]+1,C_retrieve(lf[348]));
t9=t3;
f_4663(2,t9,t8);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4769,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1030 append */
t10=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t10))(4,t10,t8,t9,C_retrieve(lf[11]));}}
else{
t7=(C_word)C_eqp(t2,lf[12]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t8))){
t9=C_mutate((C_word*)lf[12]+1,C_retrieve(lf[349]));
t10=t3;
f_4663(2,t10,t9);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4794,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1034 append */
t11=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t9,t10,C_retrieve(lf[12]));}}
else{
t8=(C_word)C_eqp(t2,lf[350]);
if(C_truep(t8)){
t9=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t9))){
t10=C_mutate((C_word*)lf[11]+1,C_retrieve(lf[348]));
t11=C_mutate((C_word*)lf[12]+1,C_retrieve(lf[349]));
t12=t3;
f_4663(2,t12,t11);}
else{
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4823,a[2]=t10,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1041 lset-intersection */
t12=C_retrieve(lf[351]);
((C_proc5)C_retrieve_proc(t12))(5,t12,t11,*((C_word*)lf[98]+1),t10,C_retrieve(lf[348]));}}
else{
t9=(C_word)C_eqp(t2,lf[9]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4840,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1044 check-decl */
f_4602(t10,((C_word*)t0)[4],C_fix(1),(C_word)C_a_i_list(&a,1,C_fix(1)));}
else{
t10=(C_word)C_eqp(t2,lf[352]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t2,lf[353]));
if(C_truep(t11)){
t12=C_mutate((C_word*)lf[9]+1,lf[352]);
t13=t3;
f_4663(2,t13,t12);}
else{
t12=(C_word)C_eqp(t2,lf[10]);
if(C_truep(t12)){
t13=C_mutate((C_word*)lf[9]+1,lf[10]);
t14=t3;
f_4663(2,t14,t13);}
else{
t13=(C_word)C_eqp(t2,lf[15]);
if(C_truep(t13)){
t14=C_set_block_item(lf[15],0,C_SCHEME_TRUE);
/* compiler.scm: 1050 ##match#set-error-control */
t15=C_retrieve(lf[354]);
((C_proc3)C_retrieve_proc(t15))(3,t15,t3,lf[355]);}
else{
t14=(C_word)C_eqp(t2,lf[356]);
if(C_truep(t14)){
t15=C_set_block_item(lf[15],0,C_SCHEME_FALSE);
t16=t3;
f_4663(2,t16,t15);}
else{
t15=(C_word)C_eqp(t2,lf[27]);
if(C_truep(t15)){
t16=C_set_block_item(lf[27],0,C_SCHEME_TRUE);
t17=t3;
f_4663(2,t17,t16);}
else{
t16=(C_word)C_eqp(t2,lf[28]);
if(C_truep(t16)){
t17=C_set_block_item(lf[28],0,C_SCHEME_TRUE);
t18=t3;
f_4663(2,t18,t17);}
else{
t17=(C_word)C_eqp(t2,lf[29]);
if(C_truep(t17)){
t18=C_set_block_item(lf[29],0,C_SCHEME_TRUE);
t19=t3;
f_4663(2,t19,t18);}
else{
t18=(C_word)C_eqp(t2,lf[357]);
if(C_truep(t18)){
t19=C_set_block_item(lf[13],0,C_SCHEME_TRUE);
t20=t3;
f_4663(2,t20,t19);}
else{
t19=(C_word)C_eqp(t2,lf[358]);
if(C_truep(t19)){
t20=C_set_block_item(lf[13],0,C_SCHEME_FALSE);
t21=t3;
f_4663(2,t21,t20);}
else{
t20=(C_word)C_eqp(t2,lf[359]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4923,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t22=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1057 append */
t23=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t23))(4,t23,t21,t22,C_retrieve(lf[360]));}
else{
t21=(C_word)C_eqp(t2,lf[16]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4937,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t23=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1058 append */
t24=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t24))(4,t24,t22,t23,C_retrieve(lf[16]));}
else{
t22=(C_word)C_eqp(t2,lf[361]);
if(C_truep(t22)){
t23=C_set_block_item(lf[36],0,C_SCHEME_TRUE);
t24=t3;
f_4663(2,t24,t23);}
else{
t23=(C_word)C_eqp(t2,lf[362]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4958,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1062 append */
t25=*((C_word*)lf[177]+1);
((C_proc5)C_retrieve_proc(t25))(5,t25,t24,C_retrieve(lf[348]),C_retrieve(lf[349]),C_retrieve(lf[17]));}
else{
t24=(C_word)C_eqp(t2,lf[363]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t26=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1066 append */
t27=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t27))(4,t27,t25,t26,C_retrieve(lf[17]));}
else{
t25=(C_word)C_eqp(t2,lf[364]);
if(C_truep(t25)){
t26=(C_word)C_i_cdr(((C_word*)t0)[4]);
t27=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[4],a[3]=t26,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1070 every */
t28=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t28))(4,t28,t27,*((C_word*)lf[367]+1),t26);}
else{
t26=(C_word)C_eqp(t2,lf[368]);
if(C_truep(t26)){
t27=(C_word)C_i_listp(((C_word*)t0)[4]);
t28=(C_word)C_i_not(t27);
t29=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t28)){
t30=t29;
f_5021(t30,t28);}
else{
t30=(C_word)C_i_cadr(((C_word*)t0)[4]);
t31=(C_word)C_i_listp(t30);
t32=(C_word)C_i_not(t31);
if(C_truep(t32)){
t33=t29;
f_5021(t33,t32);}
else{
t33=(C_word)C_i_cadr(((C_word*)t0)[4]);
t34=(C_word)C_i_length(t33);
t35=t29;
f_5021(t35,(C_word)C_fixnum_lessp(t34,C_fix(3)));}}}
else{
t27=(C_word)C_eqp(t2,lf[371]);
if(C_truep(t27)){
t28=(C_word)C_i_cdr(((C_word*)t0)[4]);
t29=(C_word)C_a_i_cons(&a,2,lf[371],t28);
/* compiler.scm: 1078 ##compiler#emit-control-file-item */
t30=C_retrieve(lf[372]);
((C_proc3)C_retrieve_proc(t30))(3,t30,t3,t29);}
else{
t28=(C_word)C_eqp(t2,lf[373]);
if(C_truep(t28)){
t29=(C_word)C_i_cdr(((C_word*)t0)[4]);
t30=(C_word)C_a_i_cons(&a,2,lf[373],t29);
/* compiler.scm: 1080 ##compiler#emit-control-file-item */
t31=C_retrieve(lf[372]);
((C_proc3)C_retrieve_proc(t31))(3,t31,t3,t30);}
else{
t29=(C_word)C_eqp(t2,lf[374]);
if(C_truep(t29)){
t30=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5111,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1083 pathname-strip-extension */
t31=C_retrieve(lf[378]);
((C_proc3)C_retrieve_proc(t31))(3,t31,t30,C_retrieve(lf[31]));}
else{
t30=(C_word)C_eqp(t2,lf[379]);
if(C_truep(t30)){
t31=C_set_block_item(lf[20],0,C_SCHEME_TRUE);
t32=t3;
f_4663(2,t32,t31);}
else{
t31=(C_word)C_eqp(t2,lf[380]);
if(C_truep(t31)){
t32=C_set_block_item(lf[20],0,C_SCHEME_FALSE);
t33=t3;
f_4663(2,t33,t32);}
else{
t32=(C_word)C_eqp(t2,lf[381]);
if(C_truep(t32)){
t33=C_set_block_item(lf[50],0,C_SCHEME_FALSE);
t34=t3;
f_4663(2,t34,t33);}
else{
t33=(C_word)C_eqp(t2,lf[382]);
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1089 check-decl */
f_4602(t34,((C_word*)t0)[4],C_fix(1),C_SCHEME_END_OF_LIST);}
else{
t34=(C_word)C_eqp(t2,lf[386]);
if(C_truep(t34)){
t35=C_set_block_item(lf[387],0,C_SCHEME_TRUE);
t36=t3;
f_4663(2,t36,t35);}
else{
t35=(C_word)C_eqp(t2,lf[388]);
t36=(C_truep(t35)?t35:(C_word)C_eqp(t2,lf[389]));
if(C_truep(t36)){
t37=(C_word)C_i_cdr(((C_word*)t0)[4]);
t38=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5313,a[2]=t37,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[32]))){
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5321,a[2]=t38,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1123 lset-difference */
t40=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t40))(5,t40,t39,*((C_word*)lf[98]+1),C_retrieve(lf[32]),t37);}
else{
t39=t38;
f_5313(t39,C_SCHEME_UNDEFINED);}}
else{
t37=(C_word)C_eqp(t2,lf[390]);
if(C_truep(t37)){
t38=(C_word)C_i_cdr(((C_word*)t0)[4]);
t39=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5334,a[2]=t38,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1127 lset-difference */
t40=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t40))(5,t40,t39,*((C_word*)lf[98]+1),C_retrieve(lf[30]),t38);}
else{
t38=(C_word)C_eqp(t2,lf[391]);
if(C_truep(t38)){
t39=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5352,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t40=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t40))){
t41=(C_word)C_i_cadr(((C_word*)t0)[4]);
t42=(C_word)C_i_numberp(t41);
t43=t39;
f_5352(t43,(C_truep(t42)?(C_word)C_i_cadr(((C_word*)t0)[4]):C_SCHEME_FALSE));}
else{
t41=t39;
f_5352(t41,C_SCHEME_FALSE);}}
else{
t39=(C_word)C_eqp(t2,lf[392]);
if(C_truep(t39)){
t40=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t40))){
/* compiler.scm: 1137 quit */
t41=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t41))(4,t41,t3,lf[393],((C_word*)t0)[4]);}
else{
t41=C_retrieve(lf[47]);
if(C_truep(t41)){
t42=t3;
f_4663(2,t42,C_SCHEME_UNDEFINED);}
else{
t42=(C_word)C_i_cadr(((C_word*)t0)[4]);
t43=C_mutate((C_word*)lf[47]+1,t42);
t44=t3;
f_4663(2,t44,t43);}}}
else{
t40=(C_word)C_eqp(t2,lf[394]);
if(C_truep(t40)){
t41=C_set_block_item(lf[42],0,C_SCHEME_TRUE);
t42=t3;
f_4663(2,t42,t41);}
else{
t41=(C_word)C_eqp(t2,lf[395]);
if(C_truep(t41)){
t42=C_set_block_item(lf[43],0,C_SCHEME_TRUE);
t43=t3;
f_4663(2,t43,t42);}
else{
t42=(C_word)C_eqp(t2,lf[384]);
if(C_truep(t42)){
t43=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t43))){
t44=C_retrieve(lf[44]);
if(C_truep((C_word)C_fixnum_greaterp(t44,C_fix(-1)))){
t45=t3;
f_4663(2,t45,C_SCHEME_UNDEFINED);}
else{
t45=C_set_block_item(lf[44],0,C_fix(10));
t46=t3;
f_4663(2,t46,t45);}}
else{
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5461,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t45=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* compiler.scm: 1146 lset-union */
t46=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t46))(5,t46,t44,*((C_word*)lf[98]+1),C_retrieve(lf[90]),t45);}}
else{
t43=(C_word)C_eqp(t2,lf[396]);
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5478,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1148 check-decl */
f_4602(t44,((C_word*)t0)[4],C_fix(1),(C_word)C_a_i_list(&a,1,C_fix(1)));}
else{
t44=(C_word)C_eqp(t2,lf[398]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5500,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1155 check-decl */
f_4602(t45,((C_word*)t0)[4],C_fix(2),C_SCHEME_END_OF_LIST);}
else{
t45=(C_word)C_eqp(t2,lf[402]);
if(C_truep(t45)){
t46=(C_word)C_i_cdr(((C_word*)t0)[4]);
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5554,a[2]=((C_word*)t0)[4],a[3]=t46,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 1165 every */
t48=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t48))(4,t48,t47,*((C_word*)lf[401]+1),t46);}
else{
t46=(C_word)C_eqp(t2,lf[404]);
if(C_truep(t46)){
t47=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[4],a[3]=lf[408],tmp=(C_word)a,a+=4,tmp);
t48=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5600,a[2]=lf[411],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1169 ##sys#call-with-values */
C_call_with_values(4,0,t3,t47,t48);}
else{
/* compiler.scm: 1179 ##compiler#compiler-warning */
t47=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t47))(5,t47,t3,lf[209],lf[412],((C_word*)t0)[4]);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* a5599 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5600(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5600,4,t0,t1,t2,t3);}
t4=C_set_block_item(lf[49],0,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5605,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5610,a[2]=lf[410],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t7=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a5609 in a5599 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5610,3,t0,t1,t2);}
/* ##sys#hash-table-set! */
t3=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,C_retrieve(lf[48]),t2,lf[409]);}

/* k5603 in a5599 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_retrieve(lf[156]),((C_word*)t0)[2]);}

/* a5571 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5578,a[2]=lf[406],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* compiler.scm: 1170 partition */
t4=C_retrieve(lf[407]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,t3);}

/* a5577 in a5571 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5578(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5578,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
/* compiler.scm: 1174 quit */
t3=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[405],t2);}}}

/* k5552 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5554,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1166 append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],C_retrieve(lf[51]));}
else{
/* compiler.scm: 1167 quit */
t2=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],lf[403],((C_word*)t0)[2]);}}

/* k5556 in k5552 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[51]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5498 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5500,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5512,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 1158 every */
t5=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,*((C_word*)lf[401]+1),t2);}

/* k5510 in k5498 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5512,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[5],C_retrieve(lf[39]));
t3=(C_truep(t2)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE);
t4=(C_truep(t3)?t3:C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[5],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* compiler.scm: 1161 lset-union */
t8=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,*((C_word*)lf[98]+1),t4,t7);}
else{
/* compiler.scm: 1162 quit */
t2=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],lf[400],((C_word*)t0)[2]);}}

/* k5527 in k5510 in k5498 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1161 alist-update! */
t2=C_retrieve(lf[399]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_retrieve(lf[39]),*((C_word*)lf[98]+1));}

/* k5523 in k5510 in k5498 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[39]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5476 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5478,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_numberp(t2))){
t4=t3;
f_5485(2,t4,t2);}
else{
/* compiler.scm: 1153 quit */
t4=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[397],((C_word*)t0)[3]);}}

/* k5483 in k5476 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[44]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5459 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[90]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5350 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_5352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5352,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(50));
t3=C_mutate((C_word*)lf[34]+1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[3]))){
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=t4;
f_5361(t6,(C_word)C_eqp(C_fix(3),t5));}
else{
t5=t4;
f_5361(t5,C_SCHEME_FALSE);}}

/* k5359 in k5350 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_5361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
t3=C_mutate((C_word*)lf[35]+1,t2);
t4=((C_word*)t0)[2];
f_4663(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
f_4663(2,t2,C_SCHEME_UNDEFINED);}}

/* k5332 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5334,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve(lf[32]);
t5=(C_truep(t4)?t4:C_SCHEME_END_OF_LIST);
/* compiler.scm: 1128 lset-union */
t6=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t3,*((C_word*)lf[98]+1),((C_word*)t0)[2],t5);}

/* k5336 in k5332 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[32]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5319 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[32]+1,t1);
t3=((C_word*)t0)[2];
f_5313(t3,t2);}

/* k5311 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_5313(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5313,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1124 lset-union */
t3=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[98]+1),((C_word*)t0)[2],C_retrieve(lf[30]));}

/* k5315 in k5311 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[30]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5158,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,lf[11]);
if(C_truep(t3)){
t4=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t4))){
t5=C_set_block_item(lf[11],0,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[3];
f_4663(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* compiler.scm: 1094 lset-difference */
t7=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,*((C_word*)lf[98]+1),C_retrieve(lf[348]),t6);}}
else{
t4=(C_word)C_eqp(t2,lf[12]);
if(C_truep(t4)){
t5=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t5))){
t6=C_set_block_item(lf[12],0,C_SCHEME_END_OF_LIST);
t7=((C_word*)t0)[3];
f_4663(2,t7,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5203,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* compiler.scm: 1098 lset-difference */
t8=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,*((C_word*)lf[98]+1),C_retrieve(lf[349]),t7);}}
else{
t5=(C_word)C_eqp(t2,lf[384]);
if(C_truep(t5)){
t6=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t6))){
t7=C_set_block_item(lf[44],0,C_fix(-1));
t8=((C_word*)t0)[3];
f_4663(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* compiler.scm: 1102 lset-union */
t9=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,*((C_word*)lf[98]+1),C_retrieve(lf[91]),t8);}}
else{
t6=(C_word)C_eqp(t2,lf[350]);
if(C_truep(t6)){
t7=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t7))){
t8=C_set_block_item(lf[11],0,C_SCHEME_END_OF_LIST);
t9=C_set_block_item(lf[12],0,C_SCHEME_END_OF_LIST);
t10=((C_word*)t0)[3];
f_4663(2,t10,t9);}
else{
t8=(C_word)C_i_cddr(((C_word*)t0)[4]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5257,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1109 lset-difference */
t10=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t10))(5,t10,t9,*((C_word*)lf[98]+1),C_retrieve(lf[348]),t8);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1112 check-decl */
f_4602(t7,((C_word*)t0)[4],C_fix(1),(C_word)C_a_i_list(&a,1,C_fix(1)));}}}}}

/* k5266 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_eqp(t2,lf[357]);
if(C_truep(t3)){
t4=C_set_block_item(lf[13],0,C_SCHEME_FALSE);
t5=((C_word*)t0)[2];
f_4663(2,t5,t4);}
else{
t4=(C_word)C_eqp(t2,lf[356]);
if(C_truep(t4)){
t5=C_set_block_item(lf[15],0,C_SCHEME_TRUE);
/* compiler.scm: 1117 ##match#set-error-control */
t6=C_retrieve(lf[354]);
((C_proc3)C_retrieve_proc(t6))(3,t6,((C_word*)t0)[2],lf[355]);}
else{
/* compiler.scm: 1118 ##compiler#compiler-warning */
t5=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t5))(5,t5,((C_word*)t0)[2],lf[209],lf[385],((C_word*)t0)[3]);}}}

/* k5255 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5257,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5261,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1110 lset-difference */
t4=C_retrieve(lf[383]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[98]+1),C_retrieve(lf[349]),((C_word*)t0)[2]);}

/* k5259 in k5255 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[12]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5226 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[91]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5201 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[12]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5176 in k5156 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k5109 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5120,a[2]=t1,a[3]=lf[377],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* map */
t5=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a5119 in k5109 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5120,3,t0,t1,t2);}
/* string-substitute */
t3=C_retrieve(lf[375]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,lf[376],((C_word*)t0)[2],t2);}

/* k5116 in k5109 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5118,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[374],t1);
/* compiler.scm: 1082 ##compiler#emit-control-file-item */
t3=C_retrieve(lf[372]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k5019 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_5021(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1075 syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[369],((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
/* compiler.scm: 1076 ##compiler#process-custom-declaration */
t4=C_retrieve(lf[370]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[3],t2,t3);}}

/* k4997 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4999,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5003,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1071 append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[18]),((C_word*)t0)[3]);}
else{
/* compiler.scm: 1072 syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],lf[365],((C_word*)t0)[2]);}}

/* k5001 in k4997 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_5003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[18]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4970 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
t2=C_mutate((C_word*)lf[17]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4976,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* compiler.scm: 1067 append */
t5=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,C_retrieve(lf[16]));}

/* k4974 in k4970 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4956 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4958,2,t0,t1);}
t2=C_mutate((C_word*)lf[17]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1064 append */
t4=*((C_word*)lf[177]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_retrieve(lf[348]),C_retrieve(lf[349]),C_retrieve(lf[16]));}

/* k4960 in k4956 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4935 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4921 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[360]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4838 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=C_mutate((C_word*)lf[9]+1,t2);
t4=((C_word*)t0)[2];
f_4663(2,t4,t3);}

/* k4821 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4823,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1042 lset-intersection */
t4=C_retrieve(lf[351]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[98]+1),((C_word*)t0)[2],C_retrieve(lf[349]));}

/* k4825 in k4821 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[12]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4792 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[12]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4767 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4728,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4752,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1022 ##compiler#stringify */
t5=C_retrieve(lf[339]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k4750 in k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1022 ##compiler#string->c-identifier */
t2=C_retrieve(lf[338]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4726 in k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4731,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1023 hash-table-set! */
t3=C_retrieve(lf[347]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_retrieve(lf[92]),lf[344],((C_word*)t0)[2]);}

/* k4729 in k4726 in k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[8]))){
t4=(C_word)C_i_string_equal_p(C_retrieve(lf[8]),((C_word*)t0)[3]);
t5=t3;
f_4738(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_4738(t4,C_SCHEME_FALSE);}}

/* k4736 in k4729 in k4726 in k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4738(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1025 ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[345],lf[346]);}
else{
t2=((C_word*)t0)[2];
f_4734(2,t2,C_SCHEME_UNDEFINED);}}

/* k4732 in k4729 in k4726 in k4720 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[8]+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[49]))){
/* for-each */
t3=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[156]),((C_word*)t0)[3]);}
else{
t3=t2;
f_4675(2,t3,C_SCHEME_UNDEFINED);}}

/* k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[3],a[3]=lf[341],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[3],a[3]=lf[342],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 1016 hash-table-update! */
t5=C_retrieve(lf[146]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,C_retrieve(lf[92]),lf[337],t3,t4);}
else{
t2=((C_word*)t0)[2];
f_4663(2,t2,C_SCHEME_UNDEFINED);}}

/* a4708 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4702 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4703(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4703,3,t0,t1,t2);}
/* lset-union */
t3=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,*((C_word*)lf[98]+1),((C_word*)t0)[2],t2);}

/* k4682 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4693,a[2]=lf[340],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a4692 in k4682 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4693,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1017 ##compiler#stringify */
t4=C_retrieve(lf[339]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4699 in a4692 in k4682 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 1017 ##compiler#string->c-identifier */
t2=C_retrieve(lf[338]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4685 in k4682 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 1018 append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[14]),t1);}

/* k4689 in k4685 in k4682 in k4673 in k4670 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[14]+1,t1);
t3=((C_word*)t0)[2];
f_4663(2,t3,t2);}

/* k4661 in k4655 in a4652 in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[336]);}

/* check-decl in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4602(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4602,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_i_length(t5);
t7=(C_word)C_fixnum_lessp(t6,t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t9=t8;
f_4615(t9,t7);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4625,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t10=t9;
f_4625(2,t10,C_fix(99999));}
else{
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
t11=t9;
f_4625(2,t11,(C_word)C_i_car(t4));}
else{
/* compiler.scm: 1003 ##sys#error */
t11=*((C_word*)lf[195]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,lf[1],t4);}}}}

/* k4623 in check-decl in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_4615(t2,(C_word)C_fixnum_greaterp(((C_word*)t0)[2],t1));}

/* k4613 in check-decl in ##compiler#process-declaration in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 1004 syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[334],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[34],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1923,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1926,a[2]=lf[103],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1962,a[2]=lf[109],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2004,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=t3,a[6]=t7,a[7]=lf[323],tmp=(C_word)a,a+=8,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4544,a[2]=t7,a[3]=lf[325],tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4557,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(lf[138],C_retrieve(lf[330])))){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4594,a[2]=t2,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 986  newline */
t14=*((C_word*)lf[332]+1);
((C_proc2)C_retrieve_proc(t14))(2,t14,t13);}
else{
t13=t12;
f_4557(2,t13,C_SCHEME_UNDEFINED);}}

/* k4592 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 986  pretty-print */
t2=C_retrieve(lf[331]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 987  ##sys#clear-trace-buffer */
t3=C_retrieve(lf[329]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4558 in k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 991  reverse */
t4=*((C_word*)lf[328]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_retrieve(lf[82]));}

/* k4573 in k4558 in k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=C_set_block_item(lf[82],0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4584,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 994  ##sys#compiler-toplevel-macroexpand-hook */
t4=C_retrieve(lf[327]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4582 in k4573 in k4558 in k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 995  append */
t3=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[326]),C_retrieve(lf[12]));}

/* k4586 in k4582 in k4573 in k4558 in k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=C_mutate((C_word*)lf[12]+1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
/* compiler.scm: 459  ##sys#append */
t4=*((C_word*)lf[258]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k4569 in k4558 in k4555 in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4571,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[155],t1);
/* compiler.scm: 989  walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2004(t3,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* mapwalk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4544(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4544,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4550,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[324],tmp=(C_word)a,a+=6,tmp);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t2);}

/* a4549 in mapwalk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4550,3,t0,t1,t2);}
/* compiler.scm: 984  walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2004(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2004,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_symbolp(t2))){
t6=(C_word)C_i_assq(t2,t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2024,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=(C_word)C_i_cdr(t6);
/* compiler.scm: 482  ##sys#macroexpand-1-local */
t9=C_retrieve(lf[110]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t7,t8,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2031,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[63]))){
/* compiler.scm: 483  ##sys#hash-table-ref */
t8=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t7,C_retrieve(lf[62]),t2);}
else{
t8=t7;
f_2031(2,t8,C_SCHEME_FALSE);}}}
else{
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[5],a[10]=t2,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep((C_word)C_i_not_pair_p(t2))){
/* compiler.scm: 504  ##compiler#constant? */
t7=C_retrieve(lf[321]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}
else{
t7=t6;
f_2122(2,t7,C_SCHEME_FALSE);}}}

/* k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2122,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[108],((C_word*)t0)[10]));}
else{
if(C_truep((C_word)C_i_not_pair_p(((C_word*)t0)[10]))){
/* compiler.scm: 505  syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[11],lf[118],((C_word*)t0)[10]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[10]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(C_word)C_i_car(((C_word*)t0)[10]);
t4=(C_word)C_i_cdr(((C_word*)t0)[10]);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t4,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[8],a[12]=t3,a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* compiler.scm: 509  ##compiler#get-line */
t6=C_retrieve(lf[220]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[10]);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[10]))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[10]);
/* compiler.scm: 960  ##compiler#constant? */
t5=C_retrieve(lf[321]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
/* compiler.scm: 958  syntax-error */
t3=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[11],lf[322],((C_word*)t0)[10]);}}}}}

/* k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4405,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 961  ##compiler#emit-syntax-trace-info */
t3=C_retrieve(lf[315]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4520,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 965  caar */
t5=*((C_word*)lf[320]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t2;
f_4420(t4,C_SCHEME_FALSE);}}}

/* k4518 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4420(t2,(C_word)C_eqp(lf[181],t1));}

/* k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4420(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4420,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 968  ##compiler#emit-syntax-trace-info */
t5=C_retrieve(lf[315]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 980  ##compiler#emit-syntax-trace-info */
t3=C_retrieve(lf[315]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k4505 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 981  mapwalk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4544(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4427 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 969  ##sys#check-syntax */
t3=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[181],((C_word*)t0)[9],lf[319]);}

/* k4430 in k4427 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4432,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t4=(C_word)C_i_length(t2);
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=t3;
f_4441(t6,(C_word)C_eqp(t4,t5));}
else{
t4=t3;
f_4441(t4,C_SCHEME_FALSE);}}

/* k4439 in k4430 in k4427 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4441(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4441,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 972  map */
t3=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[317]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 973  gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[318]);}}

/* k4461 in k4439 in k4430 in k4427 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4463,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_i_cdr(((C_word*)t0)[7]);
t6=(C_word)C_a_i_cons(&a,2,t1,t5);
t7=(C_word)C_a_i_list(&a,3,lf[172],t4,t6);
/* compiler.scm: 974  walk */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2004(t8,((C_word*)t0)[5],t7,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4454 in k4439 in k4430 in k4427 in k4418 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4456,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[172],t3);
/* compiler.scm: 972  walk */
t5=((C_word*)((C_word*)t0)[6])[1];
f_2004(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4406 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 962  ##compiler#compiler-warning */
t3=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[209],lf[316],((C_word*)t0)[4]);}

/* k4409 in k4406 in k4403 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 963  mapwalk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4544(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=f_1926(((C_word*)t0)[12],((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2155,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t2,a[14]=((C_word*)t0)[10],tmp=(C_word)a,a+=15,tmp);
/* compiler.scm: 511  ##compiler#emit-syntax-trace-info */
t4=C_retrieve(lf[315]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[10],C_SCHEME_FALSE);}

/* k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[14]))){
t3=t2;
f_2158(2,t3,C_SCHEME_UNDEFINED);}
else{
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[14],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 514  sprintf */
t4=C_retrieve(lf[215]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[313],((C_word*)t0)[2]);}
else{
/* compiler.scm: 515  syntax-error */
t3=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[314],((C_word*)t0)[14]);}}}

/* k4385 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 514  syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2158,2,t0,t1);}
t2=C_mutate((C_word*)lf[119]+1,((C_word*)t0)[14]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],((C_word*)t0)[12]);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[14],a[14]=t3,tmp=(C_word)a,a+=15,tmp);
/* compiler.scm: 518  ##sys#macroexpand-1-local */
t5=C_retrieve(lf[110]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t3,((C_word*)t0)[8]);}

/* k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[14],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_retrieve(lf[61]))){
/* compiler.scm: 522  ##sys#hash-table-ref */
t4=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[60]),((C_word*)t0)[7]);}
else{
t4=t3;
f_2183(2,t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=t1,a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* compiler.scm: 520  ##compiler#update-line-number-database! */
t4=C_retrieve(lf[312]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t1,((C_word*)t0)[2]);}
else{
t4=t3;
f_2174(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2172 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 521  walk */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2004(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[13]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
/* compiler.scm: 523  walk */
t4=((C_word*)((C_word*)t0)[12])[1];
f_2004(t4,((C_word*)t0)[11],t3,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[120]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 528  ##sys#check-syntax */
t4=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[120],((C_word*)t0)[13],lf[123]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[7],lf[108]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 536  ##sys#check-syntax */
t5=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[108],((C_word*)t0)[13],lf[134]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[7],lf[135]);
if(C_truep(t4)){
if(C_truep(C_retrieve(lf[15]))){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[136]);}
else{
t5=(C_word)C_i_cadr(((C_word*)t0)[13]);
/* compiler.scm: 553  walk */
t6=((C_word*)((C_word*)t0)[12])[1];
f_2004(t6,((C_word*)t0)[11],t5,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[7],lf[137]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2311,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 556  cadadr */
t7=*((C_word*)lf[139]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[13]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[7],lf[140]);
t7=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t6)){
t8=t7;
f_2344(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[7],lf[310]);
if(C_truep(t8)){
t9=t7;
f_2344(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[7],lf[311]);
if(C_truep(t9)){
t10=t7;
f_2344(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[7],lf[111]);
t11=t7;
f_2344(t11,(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[7],lf[115])));}}}}}}}}}

/* k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2344(C_word t0,C_word t1){
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
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word ab[235],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2344,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[12]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[11],lf[141]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[13],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* map */
t5=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_retrieve(lf[150]),t4);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[11],lf[151]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2385,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[12]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2391,a[2]=t7,a[3]=lf[171],tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2391(t9,t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[11],lf[172]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2505,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 604  ##sys#check-syntax */
t6=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[172],((C_word*)t0)[12],lf[180]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[11],lf[181]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[11],lf[182]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 618  ##sys#check-syntax */
t8=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,lf[181],((C_word*)t0)[12],lf[199]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[11],lf[200]);
if(C_truep(t7)){
t8=(C_word)C_i_cddr(((C_word*)t0)[12]);
t9=(C_word)C_a_i_cons(&a,2,lf[181],t8);
t10=(C_word)C_i_cadr(((C_word*)t0)[12]);
/* compiler.scm: 649  walk */
t11=((C_word*)((C_word*)t0)[10])[1];
f_2004(t11,((C_word*)t0)[13],t9,((C_word*)t0)[9],((C_word*)t0)[8],t10);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[11],lf[201]);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(((C_word*)t0)[12]);
t10=(C_word)C_i_cddr(((C_word*)t0)[12]);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[7],a[4]=t10,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=t9,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[13],tmp=(C_word)a,a+=10,tmp);
/* map */
t12=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_retrieve(lf[131]),t9);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[11],lf[203]);
t10=(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[11],lf[204]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 665  ##sys#check-syntax */
t12=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t12))(5,t12,t11,lf[203],((C_word*)t0)[12],lf[221]);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[11],lf[222]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],tmp=(C_word)a,a+=7,tmp);
t13=(C_word)C_i_cadr(((C_word*)t0)[12]);
/* compiler.scm: 703  unquotify */
t14=((C_word*)t0)[3];
f_1962(3,t14,t12,t13);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[11],lf[223]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],tmp=(C_word)a,a+=7,tmp);
t14=(C_word)C_i_cadr(((C_word*)t0)[12]);
/* map */
t15=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t13,((C_word*)t0)[3],t14);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[11],lf[205]);
if(C_truep(t13)){
t14=(C_word)C_i_cadr(((C_word*)t0)[12]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3102,a[2]=t14,a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t16=(C_word)C_i_caddr(((C_word*)t0)[12]);
/* compiler.scm: 711  walk */
t17=((C_word*)((C_word*)t0)[10])[1];
f_2004(t17,t15,t16,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[11],lf[208]);
if(C_truep(t14)){
t15=(C_word)C_i_cadr(((C_word*)t0)[12]);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],a[6]=t15,a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
t17=(C_word)C_i_caddr(((C_word*)t0)[12]);
/* compiler.scm: 716  walk */
t18=((C_word*)((C_word*)t0)[10])[1];
f_2004(t18,t16,t17,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[11],lf[224]);
t16=(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[11],lf[225]));
if(C_truep(t16)){
t17=(C_word)C_i_cadr(((C_word*)t0)[12]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t17,a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 721  eval */
t19=C_retrieve(lf[150]);
((C_proc3)C_retrieve_proc(t19))(3,t19,t18,t17);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[11],lf[226]);
t18=(C_truep(t17)?t17:(C_word)C_eqp(((C_word*)t0)[11],lf[227]));
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[13],tmp=(C_word)a,a+=3,tmp);
t20=(C_word)C_i_cadr(((C_word*)t0)[12]);
/* compiler.scm: 725  eval */
t21=C_retrieve(lf[150]);
((C_proc3)C_retrieve_proc(t21))(3,t21,t19,t20);}
else{
t19=(C_word)C_eqp(((C_word*)t0)[11],lf[155]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 729  ##sys#check-syntax */
t21=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t21))(5,t21,t20,lf[155],((C_word*)t0)[12],lf[232]);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[11],lf[233]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 741  ##compiler#expand-foreign-lambda */
t22=C_retrieve(lf[234]);
((C_proc3)C_retrieve_proc(t22))(3,t22,t21,((C_word*)t0)[12]);}
else{
t21=(C_word)C_eqp(((C_word*)t0)[11],lf[235]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 744  ##compiler#expand-foreign-callback-lambda */
t23=C_retrieve(lf[236]);
((C_proc3)C_retrieve_proc(t23))(3,t23,t22,((C_word*)t0)[12]);}
else{
t22=(C_word)C_eqp(((C_word*)t0)[11],lf[237]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 747  ##compiler#expand-foreign-lambda* */
t24=C_retrieve(lf[238]);
((C_proc3)C_retrieve_proc(t24))(3,t24,t23,((C_word*)t0)[12]);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[11],lf[239]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 750  ##compiler#expand-foreign-callback-lambda* */
t25=C_retrieve(lf[240]);
((C_proc3)C_retrieve_proc(t25))(3,t25,t24,((C_word*)t0)[12]);}
else{
t24=(C_word)C_eqp(((C_word*)t0)[11],lf[241]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 753  ##compiler#expand-foreign-primitive */
t26=C_retrieve(lf[242]);
((C_proc3)C_retrieve_proc(t26))(3,t26,t25,((C_word*)t0)[12]);}
else{
t25=(C_word)C_eqp(((C_word*)t0)[11],lf[243]);
if(C_truep(t25)){
t26=(C_word)C_i_cadr(((C_word*)t0)[12]);
t27=(C_word)C_i_cadr(t26);
t28=(C_word)C_i_caddr(((C_word*)t0)[12]);
t29=(C_word)C_i_cadr(t28);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[13],a[3]=t29,a[4]=t27,tmp=(C_word)a,a+=5,tmp);
t31=(C_word)C_i_cdddr(((C_word*)t0)[12]);
if(C_truep((C_word)C_i_pairp(t31))){
t32=(C_word)C_i_cadddr(((C_word*)t0)[12]);
t33=t30;
f_3312(2,t33,(C_word)C_i_cadr(t32));}
else{
/* compiler.scm: 760  symbol->string */
t32=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t32))(3,t32,t30,t27);}}
else{
t26=(C_word)C_eqp(((C_word*)t0)[11],lf[246]);
if(C_truep(t26)){
t27=(C_word)C_i_cadr(((C_word*)t0)[12]);
t28=(C_word)C_i_cadr(t27);
t29=(C_word)C_i_caddr(((C_word*)t0)[12]);
t30=(C_word)C_i_cadr(t29);
t31=(C_word)C_i_cdddr(((C_word*)t0)[12]);
if(C_truep((C_word)C_i_pairp(t31))){
t32=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3379,a[2]=t28,a[3]=t30,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[10],a[9]=t31,tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 771  gensym */
t33=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t33))(2,t33,t32);}
else{
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[13],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 784  ##sys#hash-table-set! */
t33=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t33))(5,t33,t32,C_retrieve(lf[69]),t28,t30);}}
else{
t27=(C_word)C_eqp(((C_word*)t0)[11],lf[250]);
if(C_truep(t27)){
t28=(C_word)C_i_cadr(((C_word*)t0)[12]);
t29=(C_word)C_i_cadr(t28);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3453,a[2]=t29,a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[12],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 789  symbol->string */
t31=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t31))(3,t31,t30,t29);}
else{
t28=(C_word)C_eqp(((C_word*)t0)[11],lf[256]);
if(C_truep(t28)){
t29=(C_word)C_i_cadr(((C_word*)t0)[12]);
t30=(C_word)C_i_cadr(t29);
t31=(C_word)C_i_caddr(((C_word*)t0)[12]);
t32=(C_word)C_i_cadr(t31);
t33=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3528,a[2]=((C_word*)t0)[9],a[3]=t30,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[13],a[8]=t32,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 804  gensym */
t34=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t34))(2,t34,t33);}
else{
t29=(C_word)C_eqp(((C_word*)t0)[11],lf[261]);
if(C_truep(t29)){
t30=(C_word)C_i_cadr(((C_word*)t0)[12]);
t31=(C_word)C_i_cadr(t30);
t32=(C_word)C_i_caddr(((C_word*)t0)[12]);
t33=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3655,a[2]=t31,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t32,a[7]=lf[263],tmp=(C_word)a,a+=8,tmp);
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3673,a[2]=t31,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=lf[265],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t33,t34);}
else{
t30=(C_word)C_eqp(((C_word*)t0)[11],lf[266]);
if(C_truep(t30)){
t31=(C_word)C_i_cadr(((C_word*)t0)[12]);
t32=(C_word)C_i_cadr(t31);
t33=(C_word)C_i_caddr(((C_word*)t0)[12]);
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3734,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[13],a[6]=t32,tmp=(C_word)a,a+=7,tmp);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3805,a[2]=t34,tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3807,a[2]=t32,a[3]=t33,a[4]=lf[282],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 843  call-with-current-continuation */
t37=*((C_word*)lf[283]+1);
((C_proc3)C_retrieve_proc(t37))(3,t37,t35,t36);}
else{
t31=(C_word)C_eqp(((C_word*)t0)[11],lf[284]);
if(C_truep(t31)){
t32=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=lf[286],tmp=(C_word)a,a+=3,tmp);
t34=(C_word)C_i_cdr(((C_word*)t0)[12]);
/* map */
t35=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t35+1)))(4,t35,t32,t33,t34);}
else{
t32=(C_word)C_eqp(((C_word*)t0)[11],lf[287]);
if(C_truep(t32)){
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[12],a[3]=lf[289],tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=lf[305],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 876  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t33,t34);}
else{
t33=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[2],a[8]=lf[306],tmp=(C_word)a,a+=9,tmp);
t34=(C_word)C_eqp(lf[307],((C_word*)t0)[11]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 939  ##sys#check-syntax */
t36=C_retrieve(lf[122]);
((C_proc5)C_retrieve_proc(t36))(5,t36,t35,lf[307],((C_word*)t0)[12],lf[309]);}
else{
/* compiler.scm: 955  handle-call */
t35=t33;
f_4205(t35,((C_word*)t0)[13]);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4243 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
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
C_word ab[66],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4245,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=f_1926(t2,((C_word*)t0)[5]);
t4=(C_word)C_i_assq(t3,C_retrieve(lf[81]));
if(C_truep(t4)){
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_a_i_list(&a,2,lf[108],lf[307]);
t7=(C_word)C_a_i_list(&a,5,lf[308],t5,C_fix(0),C_SCHEME_FALSE,t6);
/* compiler.scm: 944  walk */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2004(t8,((C_word*)t0)[3],t7,((C_word*)t0)[5],((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_assq(t2,C_retrieve(lf[78]));
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t5);
/* compiler.scm: 948  walk */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2004(t7,((C_word*)t0)[3],t6,((C_word*)t0)[5],((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[84])))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 950  symbol->string */
t7=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}
else{
t6=(C_word)C_a_i_list(&a,2,lf[108],lf[307]);
t7=(C_word)C_a_i_list(&a,5,lf[308],t2,C_fix(0),C_SCHEME_FALSE,t6);
/* compiler.scm: 952  walk */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2004(t8,((C_word*)t0)[3],t7,((C_word*)t0)[5],((C_word*)t0)[2],C_SCHEME_FALSE);}}}}
else{
t3=(C_word)C_a_i_list(&a,2,lf[108],lf[307]);
t4=(C_word)C_a_i_list(&a,5,lf[308],t2,C_fix(0),C_SCHEME_FALSE,t3);
/* compiler.scm: 953  walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2004(t5,((C_word*)t0)[3],t4,((C_word*)t0)[5],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* k4303 in k4243 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,lf[251]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[111],t2));}

/* handle-call in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4205(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4205,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 928  mapwalk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4544(t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4207 in handle-call in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4215,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 930  ##sys#hash-table-ref */
t4=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[57]),t2);}

/* k4213 in k4207 in handle-call in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4229,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(t1)?(C_word)C_i_cdr(t1):C_SCHEME_END_OF_LIST);
/* compiler.scm: 935  alist-cons */
t5=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],t4);}
else{
t3=t2;
f_4218(2,t3,C_SCHEME_UNDEFINED);}}

/* k4227 in k4213 in k4207 in handle-call in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4229,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* compiler.scm: 932  ##sys#hash-table-set! */
t3=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[3],C_retrieve(lf[57]),((C_word*)t0)[2],t2);}

/* k4216 in k4213 in k4207 in handle-call in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3913,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_caddr(t2);
t7=(C_word)C_i_cadr(t6);
t8=(C_word)C_i_cadddr(t2);
t9=(C_word)C_i_cadr(t8);
t10=(C_word)C_i_cadr(t4);
t11=(C_word)C_i_cadr(t5);
t12=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3935,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t10,a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4189,a[2]=t12,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 883  ##compiler#valid-c-identifier? */
t14=C_retrieve(lf[304]);
((C_proc3)C_retrieve_proc(t14))(3,t14,t13,t11);}

/* k4187 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4189,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve(lf[84]));
t3=C_mutate((C_word*)lf[84]+1,t2);
t4=((C_word*)t0)[2];
f_3935(2,t4,t3);}
else{
/* compiler.scm: 885  quit */
t2=C_retrieve(lf[273]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[303],((C_word*)t0)[3]);}}

/* k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(C_word)C_i_listp(((C_word*)t0)[11]);
t4=(C_word)C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[11],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4154(t6,t4);}
else{
t6=(C_word)C_i_listp(((C_word*)t0)[4]);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t5;
f_4154(t8,t7);}
else{
t8=(C_word)C_i_length(((C_word*)t0)[11]);
t9=(C_word)C_i_length(((C_word*)t0)[4]);
t10=(C_word)C_eqp(t8,t9);
t11=t5;
f_4154(t11,(C_word)C_i_not(t10));}}}

/* k4152 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4154(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 890  syntax-error */
t2=C_retrieve(lf[117]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],lf[302],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_3938(2,t2,C_SCHEME_UNDEFINED);}}

/* k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3945,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 894  mapwalk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4544(t4,t3,((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[8]);}

/* k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3957,a[2]=t1,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=t5,a[3]=lf[301],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4104(t7,t3,((C_word*)t0)[9],((C_word*)t0)[2]);}

/* loop in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4104(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4104,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4140,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4144,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 906  ##compiler#final-foreign-type */
t9=C_retrieve(lf[114]);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t5);}}

/* k4146 in loop in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 906  ##compiler#finish-foreign-result */
t2=C_retrieve(lf[113]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4142 in loop in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 905  ##compiler#foreign-type-convert-result */
t2=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4138 in loop in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4140,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4128,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* compiler.scm: 908  loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_4104(t6,t3,t4,t5);}

/* k4126 in k4138 in loop in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4128,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3969(C_word c,C_word t0,C_word t1){
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
C_word ab[136],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[3],a[3]=lf[294],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_equalp(((C_word*)t0)[2],lf[295]))){
/* compiler.scm: 911  g287 */
t7=t6;
f_4048(2,t7,f_4025(C_a_i(&a,15),t5));}
else{
t7=(C_word)C_eqp(((C_word*)t0)[2],lf[296]);
if(C_truep(t7)){
/* compiler.scm: 911  g287 */
t8=t6;
f_4048(2,t8,f_4025(C_a_i(&a,15),t5));}
else{
if(C_truep((C_word)C_i_equalp(((C_word*)t0)[2],lf[297]))){
/* compiler.scm: 911  g288 */
t8=t4;
f_4020(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[2],lf[298]);
if(C_truep(t8)){
/* compiler.scm: 911  g288 */
t9=t4;
f_4020(t9,t6);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[2],lf[299]);
/* compiler.scm: 911  g289 */
t10=t6;
f_4048(2,t10,(C_truep(t9)?f_3983(C_a_i(&a,42),t3):(C_truep((C_word)C_i_equalp(((C_word*)t0)[2],lf[300]))?f_3983(C_a_i(&a,42),t3):(C_word)C_i_cddr(((C_word*)t0)[4]))));}}}}}

/* k4046 in k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4048,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[172],t2);
/* compiler.scm: 909  ##compiler#foreign-type-convert-argument */
t4=C_retrieve(lf[207]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* g287 in k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static C_word C_fcall f_4025(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t1=(C_word)C_i_cddr(((C_word*)t0)[2]);
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[172],t2);
t4=(C_word)C_a_i_list(&a,2,lf[291],t3);
return((C_word)C_a_i_list(&a,1,t4));}

/* g288 in k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_4020(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4020,NULL,2,t0,t1);}
/* compiler.scm: 915  syntax-error */
t2=C_retrieve(lf[117]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[293],((C_word*)t0)[2]);}

/* g289 in k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static C_word C_fcall f_3983(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_check;
t1=(C_word)C_i_cddr(((C_word*)t0)[2]);
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[172],t2);
t4=(C_word)C_a_i_list(&a,2,lf[290],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_list(&a,2,lf[291],lf[290]);
t7=(C_word)C_a_i_list(&a,3,lf[292],lf[290],t6);
t8=(C_word)C_a_i_list(&a,3,lf[172],t5,t7);
return((C_word)C_a_i_list(&a,1,t8));}

/* k3971 in k3967 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_list(&a,3,lf[182],((C_word*)t0)[6],t2);
/* compiler.scm: 895  walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2004(t4,((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3955 in k3947 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3957,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* compiler.scm: 459  ##sys#append */
t3=*((C_word*)lf[258]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3943 in k3936 in k3933 in a3912 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3945,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[287],t1));}

/* a3902 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* compiler.scm: 876  split-at */
t3=C_retrieve(lf[288]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,C_fix(4));}

/* a3879 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3880,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
/* compiler.scm: 871  ##compiler#process-declaration */
t4=C_retrieve(lf[285]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* k3876 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[155],t1);
/* compiler.scm: 869  walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2004(t3,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3807,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[276],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3825,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=lf[280],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 843  with-exception-handler */
t5=C_retrieve(lf[281]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a3824 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[3],a[3]=lf[277],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],a[3]=lf[279],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 843  ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a3846 in a3824 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3847r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3847r(t0,t1,t2);}}

static void C_ccall f_3847r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3853,a[2]=t2,a[3]=lf[278],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 843  g249 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3852 in a3846 in a3824 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3853,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3830 in a3824 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 847  ##compiler#collapsable-literal? */
t3=C_retrieve(lf[272]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3836 in a3830 in a3824 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=(C_word)C_a_i_list(&a,3,lf[172],C_retrieve(lf[83]),((C_word*)t0)[2]);
/* compiler.scm: 849  eval */
t3=C_retrieve(lf[150]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],t2);}}

/* a3812 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3813,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[275],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 843  g249 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3818 in a3812 in a3806 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
/* compiler.scm: 845  quit */
t2=C_retrieve(lf[273]);
((C_proc5)C_retrieve_proc(t2))(5,t2,t1,lf[274],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3803 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3734,2,t0,t1);}
t2=C_set_block_item(lf[63],0,C_SCHEME_TRUE);
t3=(C_word)C_a_i_list(&a,2,lf[108],t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_retrieve(lf[83]));
t6=C_mutate((C_word*)lf[83]+1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 852  ##compiler#collapsable-literal? */
t8=C_retrieve(lf[272]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t1);}

/* k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3745,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
/* compiler.scm: 853  ##sys#hash-table-set! */
t4=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,C_retrieve(lf[62]),((C_word*)t0)[5],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3791,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 856  ##compiler#basic-literal? */
t4=C_retrieve(lf[271]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k3789 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3755(2,t2,C_SCHEME_UNDEFINED);}
else{
/* compiler.scm: 857  ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[269],lf[270],((C_word*)t0)[2]);}}

/* k3753 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3758,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 861  gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[268]);}

/* k3756 in k3753 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_a_i_list(&a,1,t1);
/* compiler.scm: 862  ##sys#hash-table-set! */
t4=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,C_retrieve(lf[62]),((C_word*)t0)[2],t3);}

/* k3759 in k3756 in k3753 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 863  alist-cons */
t3=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[7],((C_word*)t0)[6],C_retrieve(lf[64]));}

/* k3763 in k3759 in k3756 in k3753 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3765,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_retrieve(lf[30]));
t4=C_mutate((C_word*)lf[30]+1,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_retrieve(lf[16]));
t6=C_mutate((C_word*)lf[16]+1,t5);
t7=(C_word)C_a_i_list(&a,2,lf[108],((C_word*)t0)[6]);
t8=(C_word)C_a_i_list(&a,3,lf[204],((C_word*)t0)[7],t7);
/* compiler.scm: 866  walk */
t9=((C_word*)((C_word*)t0)[5])[1];
f_2004(t9,((C_word*)t0)[4],t8,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3746 in k3743 in k3732 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[267]);}

/* a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3673,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3677,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 833  ##sys#hash-table-set! */
t5=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,C_retrieve(lf[60]),((C_word*)t0)[2],t2);}

/* k3675 in a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3715,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 834  unzip1 */
t4=C_retrieve(lf[179]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3713 in k3675 in a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 834  append */
t2=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_retrieve(lf[16]));}

/* k3679 in k3675 in a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3681,2,t0,t1);}
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=C_set_block_item(lf[61],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3695,a[2]=lf[264],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a3694 in k3679 in k3675 in a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3695,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_a_i_list(&a,2,lf[108],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[204],t3,t5));}

/* k3691 in k3679 in k3675 in a3672 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3693,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[155],t1);
/* compiler.scm: 836  walk */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2004(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* a3654 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3663,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,lf[182],t3);
/* compiler.scm: 832  walk */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2004(t5,t2,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3661 in a3654 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 831  ##compiler#extract-mutable-constants */
t2=C_retrieve(lf[262]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 805  gensym */
t3=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3531,2,t0,t1);}
t2=(C_word)C_i_cddddr(((C_word*)t0)[10]);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_cadddr(((C_word*)t0)[10]):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[10],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t1,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* compiler.scm: 807  ##compiler#set-real-name! */
t6=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[9],((C_word*)t0)[3]);}

/* k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3537,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_retrieve(lf[81]));
t4=C_mutate((C_word*)lf[81]+1,t3);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3616,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 810  ##compiler#estimate-foreign-result-location-size */
t7=C_retrieve(lf[260]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[10]);}

/* k3614 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 810  ##compiler#words */
t2=C_retrieve(lf[259]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=(C_word)C_fixnum_plus(C_fix(2),t1);
t3=(C_word)C_a_i_list(&a,2,lf[257],t2);
t4=(C_word)C_a_i_list(&a,2,lf[108],t1);
t5=(C_word)C_a_i_list(&a,3,lf[223],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[11],t5);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3552,a[2]=t7,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t8,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t11=(C_word)C_a_i_list(&a,3,lf[204],((C_word*)t0)[5],((C_word*)t0)[3]);
t12=t10;
f_3568(t12,(C_word)C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_3568(t11,C_SCHEME_END_OF_LIST);}}

/* k3566 in k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_3568(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3568,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3576,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* compiler.scm: 823  fifth */
t3=C_retrieve(lf[255]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_3576(2,t3,(C_word)C_i_cadddr(((C_word*)t0)[2]));}}

/* k3574 in k3566 in k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3576,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* compiler.scm: 459  ##sys#append */
t3=*((C_word*)lf[258]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3562 in k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3564,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[155],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3560,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 824  alist-cons */
t4=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3558 in k3562 in k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 818  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3550 in k3591 in k3535 in k3529 in k3526 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3552,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[2],t1));}

/* k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3453,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(C_word)C_i_caddr(((C_word*)t0)[4]);
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_i_cadddr(((C_word*)t0)[4]);
t7=(C_word)C_i_cadr(t6);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=t5,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* compiler.scm: 792  ##compiler#make-random-name */
t9=C_retrieve(lf[99]);
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}

/* k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_3465(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3493,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 793  fifth */
t5=C_retrieve(lf[255]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}}

/* k3499 in k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(t1);
/* compiler.scm: 793  symbol->string */
t3=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k3491 in k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3465(t3,t2);}

/* k3463 in k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_3465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3465,NULL,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,3,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_retrieve(lf[73]));
t4=C_mutate((C_word*)lf[73]+1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 796  string-append */
t6=*((C_word*)lf[253]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[254],((C_word*)((C_word*)t0)[7])[1]);}

/* k3483 in k3463 in k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3485,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],lf[251],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_retrieve(lf[70]));
t4=C_mutate((C_word*)lf[70]+1,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 798  alist-cons */
t6=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[4],C_retrieve(lf[78]));}

/* k3475 in k3483 in k3463 in k3460 in k3451 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[78]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[252]);}

/* k3431 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[249]);}

/* k3377 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3382,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 772  gensym */
t3=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3380 in k3377 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[3],((C_word*)t0)[9],t1);
/* compiler.scm: 773  ##sys#hash-table-set! */
t4=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,C_retrieve(lf[69]),((C_word*)t0)[2],t3);}

/* k3383 in k3380 in k3377 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 774  cons* */
t3=C_retrieve(lf[248]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[8],((C_word*)t0)[7],C_retrieve(lf[16]));}

/* k3387 in k3383 in k3380 in k3377 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3389,2,t0,t1);}
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 775  cons* */
t4=C_retrieve(lf[248]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[8],((C_word*)t0)[7],C_retrieve(lf[30]));}

/* k3391 in k3387 in k3383 in k3380 in k3377 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[9]);
t4=(C_word)C_a_i_list(&a,3,lf[204],((C_word*)t0)[8],t3);
t5=(C_word)C_i_cdr(((C_word*)t0)[9]);
t6=(C_word)C_i_pairp(t5);
t7=(C_truep(t6)?(C_word)C_i_cadr(((C_word*)t0)[9]):lf[247]);
t8=(C_word)C_a_i_list(&a,3,lf[204],((C_word*)t0)[7],t7);
t9=(C_word)C_a_i_list(&a,3,lf[155],t4,t8);
/* compiler.scm: 776  walk */
t10=((C_word*)((C_word*)t0)[6])[1];
f_2004(t10,((C_word*)t0)[5],t9,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3310 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(t1))){
t3=t2;
f_3324(2,t3,t1);}
else{
/* compiler.scm: 762  symbol->string */
t3=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k3322 in k3310 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3324,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_retrieve(lf[70]));
t4=C_mutate((C_word*)lf[70]+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[244]);}

/* k3295 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 753  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3282 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 750  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3269 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 747  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3256 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 744  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3243 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 741  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3178,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3191,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3197,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[230],tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_3197(t8,t3,t4);}
else{
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[231]);}}

/* fold in k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_3197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3197,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 736  walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2004(t6,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3224,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 737  walk */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2004(t6,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE);}}

/* k3222 in fold in k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3228,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 737  fold */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3197(t3,t2,((C_word*)t0)[2]);}

/* k3226 in k3222 in fold in k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3215 in fold in k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* k3189 in k3176 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 731  ##compiler#canonicalize-begin-body */
t2=C_retrieve(lf[229]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3163 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[228]);}

/* k3148 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 722  walk */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2004(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3121 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3127,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cadddr(((C_word*)t0)[5]);
/* compiler.scm: 717  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2004(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3125 in k3121 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3127,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[208],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k3100 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[205],((C_word*)t0)[2],t1));}

/* k3071 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3077,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
/* compiler.scm: 708  mapwalk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4544(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3075 in k3071 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[223],t2));}

/* k3042 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
/* compiler.scm: 703  mapwalk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4544(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3046 in k3042 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3048,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[222],t2));}

/* k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=f_1926(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* compiler.scm: 668  ##compiler#get-line */
t5=C_retrieve(lf[220]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[7]);}

/* k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2880,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* compiler.scm: 669  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2004(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6]);}

/* k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(C_retrieve(lf[36]))?(C_word)C_eqp(((C_word*)t0)[5],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 672  lset-adjoin */
t5=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,*((C_word*)lf[98]+1),C_retrieve(lf[17]),((C_word*)t0)[5]);}
else{
t4=t2;
f_2883(t4,C_SCHEME_UNDEFINED);}}

/* k3014 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3016,2,t0,t1);}
t2=C_mutate((C_word*)lf[17]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 673  lset-adjoin */
t4=C_retrieve(lf[219]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[98]+1),C_retrieve(lf[16]),((C_word*)t0)[2]);}

/* k3018 in k3014 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[16]+1,t1);
t3=((C_word*)t0)[2];
f_2883(t3,t2);}

/* k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2883(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2883,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)t0)[3]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 675  macro? */
t5=C_retrieve(lf[218]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t2;
f_2886(2,t4,C_SCHEME_UNDEFINED);}}

/* k2991 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2993,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* compiler.scm: 679  sprintf */
t4=C_retrieve(lf[215]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[216],((C_word*)t0)[2]);}
else{
t4=t3;
f_3006(2,t4,lf[217]);}}
else{
t2=((C_word*)t0)[4];
f_2886(2,t2,C_SCHEME_UNDEFINED);}}

/* k3004 in k2991 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 676  ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[213],lf[214],((C_word*)t0)[2],t1);}

/* k2994 in k2991 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve(lf[50]))){
/* compiler.scm: 680  undefine-macro! */
t2=C_retrieve(lf[212]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2886(2,t2,C_SCHEME_UNDEFINED);}}

/* k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2981,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 681  keyword? */
t4=C_retrieve(lf[211]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k2979 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* compiler.scm: 682  ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[209],lf[210],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2889(2,t2,C_SCHEME_UNDEFINED);}}

/* k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[4],C_retrieve(lf[70]));
if(C_truep(t2)){
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 686  gensym */
t5=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t3=(C_word)C_i_assq(((C_word*)t0)[4],C_retrieve(lf[81]));
if(C_truep(t3)){
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 694  gensym */
t6=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[203],((C_word*)t0)[4],((C_word*)t0)[2]));}}}

/* k2942 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 695  ##compiler#foreign-type-convert-argument */
t3=C_retrieve(lf[207]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2973 in k2942 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t5=(C_word)C_i_cadr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2967,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 699  ##compiler#foreign-type-check */
t7=C_retrieve(lf[206]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k2965 in k2973 in k2942 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[208],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[2],t2));}

/* k2899 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2932,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 687  ##compiler#foreign-type-convert-argument */
t3=C_retrieve(lf[207]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2930 in k2899 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2932,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_i_caddr(((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,2,t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2920,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 690  ##compiler#foreign-type-check */
t7=C_retrieve(lf[206]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k2918 in k2930 in k2899 in k2887 in k2884 in k2881 in k2878 in k2875 in k2866 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2920,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[205],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[2],t2));}

/* k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2833,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 655  map */
t4=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[178]+1),((C_word*)t0)[7],t1);}

/* k2854 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 655  append */
t2=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2831 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2836,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=t1,a[3]=lf[202],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 658  ##sys#canonicalize-body */
t5=C_retrieve(lf[174]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t3,((C_word*)t0)[3],t4,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* a2847 in k2831 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2848(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2848,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k2844 in k2831 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 657  walk */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2004(t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2834 in k2831 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2839,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 661  set-real-names! */
f_1938(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k2837 in k2834 in k2831 in k2828 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2839,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[181],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2579,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[9]);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2588,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2780,a[2]=t8,a[3]=t7,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 621  ##sys#extended-lambda-list? */
t10=C_retrieve(lf[198]);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t4)[1]);}

/* k2778 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2780,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[196],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[197],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 622  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
f_2588(2,t2,C_SCHEME_UNDEFINED);}}

/* a2790 in k2778 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2791,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a2784 in k2778 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
/* compiler.scm: 624  ##sys#expand-extended-lambda-list */
t2=C_retrieve(lf[194]);
((C_proc5)C_retrieve_proc(t2))(5,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[195]+1));}

/* k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=lf[192],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 627  ##compiler#decompose-lambda-list */
t3=C_retrieve(lf[193]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2593,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* map */
t6=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_retrieve(lf[131]),t2);}

/* k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2777,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 631  map */
t4=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[178]+1),((C_word*)t0)[8],t1);}

/* k2775 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 631  append */
t2=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2769,a[2]=t1,a[3]=lf[191],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 632  ##sys#canonicalize-body */
t4=C_retrieve(lf[174]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t2,((C_word*)((C_word*)t0)[2])[1],t3,((C_word*)t0)[3],((C_word*)t0)[12]);}

/* a2768 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2769,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 633  walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2004(t3,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 637  ##compiler#posq */
t5=C_retrieve(lf[190]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t4=t3;
f_2760(t4,C_SCHEME_FALSE);}}

/* k2765 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_2760(t2,(C_word)C_i_list_ref(((C_word*)t0)[2],t1));}

/* k2758 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2760(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 635  ##compiler#build-lambda-list */
t2=C_retrieve(lf[189]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[9])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[9],a[3]=lf[185],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2644,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t5=(C_word)C_i_car(((C_word*)t0)[2]);
t6=(C_word)C_eqp(t5,lf[155]);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(((C_word*)t0)[2]);
t8=t4;
f_2644(t8,(C_word)C_i_pairp(t7));}
else{
t7=t4;
f_2644(t7,C_SCHEME_FALSE);}}
else{
t5=t4;
f_2644(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2612(2,t3,C_SCHEME_UNDEFINED);}}

/* k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2644(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_stringp(t2))){
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
t5=(C_word)C_i_cdddr(((C_word*)t0)[4]);
/* compiler.scm: 639  g155 */
t6=((C_word*)t0)[3];
f_2634(t6,((C_word*)t0)[2],t4);}
else{
t4=((C_word*)t0)[2];
f_2612(2,t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2728,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 639  caadr */
t6=*((C_word*)lf[188]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[4]);}
else{
t5=t3;
f_2677(t5,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[2];
f_2612(2,t2,C_SCHEME_FALSE);}}

/* k2726 in k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2728,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[108]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 639  cdadr */
t4=*((C_word*)lf[187]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_2677(t3,C_SCHEME_FALSE);}}

/* k2722 in k2726 in k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2724,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 639  cddadr */
t3=*((C_word*)lf[186]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_2677(t2,C_SCHEME_FALSE);}}

/* k2718 in k2722 in k2726 in k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_nullp(t1))){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2677(t3,(C_word)C_i_pairp(t2));}
else{
t2=((C_word*)t0)[2];
f_2677(t2,C_SCHEME_FALSE);}}

/* k2675 in k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2677,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 639  cadadr */
t3=*((C_word*)lf[139]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[2];
f_2612(2,t2,C_SCHEME_FALSE);}}

/* k2682 in k2675 in k2642 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdddr(((C_word*)t0)[4]);
/* compiler.scm: 639  g155 */
t3=((C_word*)t0)[3];
f_2634(t3,((C_word*)t0)[2],t1);}

/* g155 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2634,NULL,3,t0,t1,t2);}
/* compiler.scm: 641  ##compiler#process-lambda-documentation */
t3=C_retrieve(lf[184]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k2610 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
/* compiler.scm: 643  set-real-names! */
f_1938(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2613 in k2610 in k2607 in k2604 in k2601 in k2598 in k2595 in a2592 in k2586 in k2577 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2615,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[6])?(C_truep(C_retrieve(lf[26]))?(C_word)C_eqp(lf[181],((C_word*)t0)[5]):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t2)){
/* compiler.scm: 645  ##compiler#expand-profile-lambda */
t3=C_retrieve(lf[183]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[181],((C_word*)t0)[3],((C_word*)t0)[2]));}}

/* k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2505,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* compiler.scm: 606  unzip1 */
t4=C_retrieve(lf[179]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2514,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* map */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[131]),t1);}

/* k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 608  map */
t4=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[178]+1),((C_word*)t0)[2],t1);}

/* k2565 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 608  append */
t2=*((C_word*)lf[177]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2520,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* compiler.scm: 609  set-real-names! */
f_1938(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2547,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=lf[175],tmp=(C_word)a,a+=6,tmp);
/* compiler.scm: 610  map */
t4=*((C_word*)lf[176]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2546 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2547,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2555,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cadr(t3);
t6=(C_word)C_i_car(t3);
/* compiler.scm: 611  walk */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2004(t7,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2],t6);}

/* k2553 in a2546 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2555,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k2525 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2531,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_cddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[5],a[3]=lf[173],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 613  ##sys#canonicalize-body */
t6=C_retrieve(lf[174]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t3,t4,t5,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* a2540 in k2525 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2541,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k2533 in k2525 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 613  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2529 in k2525 in k2518 in k2515 in k2512 in k2509 in k2503 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2531,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[172],((C_word*)t0)[2],t1));}

/* loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2391,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[152]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2401,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 581  cadar */
t4=*((C_word*)lf[170]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}}

/* k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2406,a[2]=t1,a[3]=lf[154],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2412,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[169],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2412,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=t5;
f_2477(2,t6,t3);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 585  feature? */
t7=C_retrieve(lf[168]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}
else{
t6=t5;
f_2477(2,t6,C_SCHEME_FALSE);}}}

/* k2484 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2486,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2477(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2496,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 587  ##sys#canonicalize-extension-path */
t3=C_retrieve(lf[166]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[167]);}}

/* k2494 in k2484 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 586  ##sys#find-extension */
t2=C_retrieve(lf[165]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k2475 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[49]))){
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 593  ##sys#extension-information */
t4=C_retrieve(lf[161]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t3=t2;
f_2439(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2439(t3,C_SCHEME_FALSE);}}
else{
/* compiler.scm: 589  ##compiler#compiler-warning */
t2=C_retrieve(lf[162]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[163],lf[164],((C_word*)t0)[2]);}}

/* k2449 in k2475 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[157],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],a[3]=lf[159],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
/* for-each */
t6=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=((C_word*)t0)[3];
f_2439(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_2439(t2,C_SCHEME_FALSE);}}

/* a2464 in k2449 in k2475 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2465,3,t0,t1,t2);}
/* ##sys#hash-table-set! */
t3=C_retrieve(lf[158]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,C_retrieve(lf[48]),t2,((C_word*)t0)[2]);}

/* k2461 in k2449 in k2475 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2439(t2,C_SCHEME_TRUE);}

/* k2437 in k2475 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_2439(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2416(2,t2,C_SCHEME_UNDEFINED);}
else{
/* compiler.scm: 599  ##compiler#lookup-exports-file */
t2=C_retrieve(lf[156]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2414 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* compiler.scm: 600  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2391(t4,t2,t3);}

/* k2421 in k2414 in a2411 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[155],((C_word*)t0)[2],t1));}

/* a2405 in k2399 in loop in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2406,2,t0,t1);}
/* compiler.scm: 582  ##sys#do-the-right-thing */
t2=C_retrieve(lf[153]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k2383 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 577  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2351 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2356,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,C_retrieve(lf[148]),t1);}

/* k2354 in k2351 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2359,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=lf[144],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=lf[145],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 571  hash-table-update! */
t5=C_retrieve(lf[146]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,C_retrieve(lf[92]),lf[147],t3,t4);}

/* a2366 in k2354 in k2351 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a2360 in k2354 in k2351 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2361,3,t0,t1,t2);}
/* lset-union */
t3=C_retrieve(lf[143]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,*((C_word*)lf[98]+1),t2,((C_word*)t0)[2]);}

/* k2357 in k2354 in k2351 in k2342 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[142]);}

/* k2309 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2311,2,t0,t1);}
t2=(C_word)C_i_assoc(t1,C_retrieve(lf[58]));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cdr(t2));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2323,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 559  gensym */
t4=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[138]);}}

/* k2321 in k2309 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2327,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 560  alist-cons */
t3=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],t1,C_retrieve(lf[58]));}

/* k2325 in k2321 in k2309 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2327,2,t0,t1);}
t2=C_mutate((C_word*)lf[58]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve(lf[16]));
t4=C_mutate((C_word*)lf[16]+1,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve(lf[30]));
t6=C_mutate((C_word*)lf[30]+1,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[3]);}

/* k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[34]))){
/* compiler.scm: 539  ##compiler#compressable-literal */
t4=C_retrieve(lf[133]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,C_retrieve(lf[34]));}
else{
t4=t3;
f_2258(2,t4,C_SCHEME_FALSE);}}

/* k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2258,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2264,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 541  gensym */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[132]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 542  ##compiler#debugging */
t3=C_retrieve(lf[128]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[129],lf[130],((C_word*)t0)[2]);}

/* k2265 in k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 469  open-output-string */
t5=C_retrieve(lf[127]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1952 in k2265 in k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1957,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 470  write */
t3=*((C_word*)lf[126]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k1955 in k1952 in k2265 in k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 471  get-output-string */
t2=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2281 in k2265 in k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 544  alist-cons */
t2=C_retrieve(lf[124]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_retrieve(lf[33]));}

/* k2269 in k2265 in k2262 in k2256 in k2250 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve(lf[16]));
t4=C_mutate((C_word*)lf[16]+1,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve(lf[30]));
t6=C_mutate((C_word*)lf[30]+1,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[3]);}

/* k2204 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* compiler.scm: 529  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2004(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2211 in k2204 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* compiler.scm: 530  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2004(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2215 in k2211 in k2204 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2221,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdddr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_2221(2,t4,lf[121]);}
else{
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
/* compiler.scm: 533  walk */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2004(t5,t2,t4,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* k2219 in k2215 in k2211 in k2204 in k2181 in k2163 in k2156 in k2153 in k2147 in k2120 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2221,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[120],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2031,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(t1);
/* compiler.scm: 484  walk */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2004(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[61]))){
/* compiler.scm: 485  ##sys#hash-table-ref */
t3=C_retrieve(lf[116]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[60]),((C_word*)t0)[2]);}
else{
t3=t2;
f_2044(2,t3,C_SCHEME_FALSE);}}}

/* k2042 in k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2044,2,t0,t1);}
if(C_truep(t1)){
/* compiler.scm: 486  walk */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2004(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_assq(((C_word*)t0)[2],C_retrieve(lf[70]));
if(C_truep(t2)){
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 490  ##compiler#final-foreign-type */
t5=C_retrieve(lf[114]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}
else{
t3=(C_word)C_i_assq(((C_word*)t0)[2],C_retrieve(lf[81]));
if(C_truep(t3)){
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2092,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* compiler.scm: 498  ##compiler#final-foreign-type */
t6=C_retrieve(lf[114]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}}}

/* k2090 in k2042 in k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2092,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,3,lf[115],t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2102,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 501  ##compiler#finish-foreign-result */
t6=C_retrieve(lf[113]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t1,t4);}

/* k2100 in k2090 in k2042 in k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 500  ##compiler#foreign-type-convert-result */
t2=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2060 in k2042 in k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2062,2,t0,t1);}
t2=(C_word)C_i_caddr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,2,lf[111],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2072,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* compiler.scm: 493  ##compiler#finish-foreign-result */
t6=C_retrieve(lf[113]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t1,t4);}

/* k2070 in k2060 in k2042 in k2029 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 492  ##compiler#foreign-type-convert-result */
t2=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2022 in walk in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* compiler.scm: 482  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2004(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* unquotify in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1962,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1969,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[108]);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_cddr(t2);
t8=t3;
f_1969(t8,(C_word)C_i_nullp(t7));}
else{
t7=t3;
f_1969(t7,C_SCHEME_FALSE);}}
else{
t6=t3;
f_1969(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_1969(t4,C_SCHEME_FALSE);}}

/* k1967 in unquotify in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_1969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_cadr(((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* set-real-names! in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_fcall f_1938(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1938,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1944,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 466  for-each */
t5=*((C_word*)lf[106]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,t4,t2,t3);}

/* a1943 in set-real-names! in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1944,4,t0,t1,t2,t3);}
/* compiler.scm: 466  ##compiler#set-real-name! */
t4=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,t3);}

/* resolve in ##compiler#canonicalize-expression in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static C_word C_fcall f_1926(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_stack_check;
t3=(C_word)C_i_assq(t1,t2);
return((C_truep(t3)?(C_word)C_i_cdr(t3):t1));}

/* ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[57]))){
/* compiler.scm: 438  vector-fill! */
t3=*((C_word*)lf[95]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[57]),C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1921,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 439  make-vector */
t4=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[21]),C_SCHEME_END_OF_LIST);}}

/* k1919 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[57]+1,t1);
t3=((C_word*)t0)[2];
f_1862(2,t3,t2);}

/* k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[60]))){
/* compiler.scm: 441  vector-fill! */
t3=*((C_word*)lf[95]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[60]),C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 442  make-vector */
t4=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}}

/* k1912 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[60]+1,t1);
t3=((C_word*)t0)[2];
f_1865(2,t3,t2);}

/* k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[62]))){
/* compiler.scm: 444  vector-fill! */
t3=*((C_word*)lf[95]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[62]),C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1907,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 445  make-vector */
t4=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}}

/* k1905 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[62]+1,t1);
t3=((C_word*)t0)[2];
f_1868(2,t3,t2);}

/* k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 446  ##compiler#make-random-name */
t3=C_retrieve(lf[99]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[100]);}

/* k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 447  make-vector */
t4=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(997),C_SCHEME_END_OF_LIST);}

/* k1874 in k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 448  make-hash-table */
t4=C_retrieve(lf[97]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,*((C_word*)lf[98]+1));}

/* k1878 in k1874 in k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[48]))){
/* compiler.scm: 450  vector-fill! */
t4=*((C_word*)lf[95]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[48]),C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 451  make-vector */
t5=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_fix(997),C_SCHEME_END_OF_LIST);}}

/* k1898 in k1878 in k1874 in k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[48]+1,t1);
t3=((C_word*)t0)[2];
f_1883(2,t3,t2);}

/* k1881 in k1878 in k1874 in k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
if(C_truep(C_retrieve(lf[69]))){
/* compiler.scm: 453  vector-fill! */
t2=*((C_word*)lf[95]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve(lf[69]),C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* compiler.scm: 454  make-vector */
t3=*((C_word*)lf[96]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_fix(301),C_SCHEME_END_OF_LIST);}}

/* k1891 in k1881 in k1878 in k1874 in k1870 in k1866 in k1863 in k1860 in ##compiler#initialize-compiler in k1769 in k1765 in k1761 in k1757 in k1753 in k1749 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[69]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[814] = {
{"toplevelcompiler.scm",(void*)C_compiler_toplevel},
{"f_1751compiler.scm",(void*)f_1751},
{"f_1755compiler.scm",(void*)f_1755},
{"f_1759compiler.scm",(void*)f_1759},
{"f_1763compiler.scm",(void*)f_1763},
{"f_1767compiler.scm",(void*)f_1767},
{"f_1771compiler.scm",(void*)f_1771},
{"f_10084compiler.scm",(void*)f_10084},
{"f_11091compiler.scm",(void*)f_11091},
{"f_11094compiler.scm",(void*)f_11094},
{"f_11097compiler.scm",(void*)f_11097},
{"f_11100compiler.scm",(void*)f_11100},
{"f_11103compiler.scm",(void*)f_11103},
{"f_10921compiler.scm",(void*)f_10921},
{"f_10927compiler.scm",(void*)f_10927},
{"f_10174compiler.scm",(void*)f_10174},
{"f_10910compiler.scm",(void*)f_10910},
{"f_10894compiler.scm",(void*)f_10894},
{"f_10907compiler.scm",(void*)f_10907},
{"f_10888compiler.scm",(void*)f_10888},
{"f_10864compiler.scm",(void*)f_10864},
{"f_10812compiler.scm",(void*)f_10812},
{"f_10815compiler.scm",(void*)f_10815},
{"f_10769compiler.scm",(void*)f_10769},
{"f_10781compiler.scm",(void*)f_10781},
{"f_10772compiler.scm",(void*)f_10772},
{"f_10775compiler.scm",(void*)f_10775},
{"f_10649compiler.scm",(void*)f_10649},
{"f_10750compiler.scm",(void*)f_10750},
{"f_10738compiler.scm",(void*)f_10738},
{"f_10677compiler.scm",(void*)f_10677},
{"f_10683compiler.scm",(void*)f_10683},
{"f_10707compiler.scm",(void*)f_10707},
{"f_10699compiler.scm",(void*)f_10699},
{"f_10665compiler.scm",(void*)f_10665},
{"f_10608compiler.scm",(void*)f_10608},
{"f_10620compiler.scm",(void*)f_10620},
{"f_10624compiler.scm",(void*)f_10624},
{"f_10612compiler.scm",(void*)f_10612},
{"f_10424compiler.scm",(void*)f_10424},
{"f_10545compiler.scm",(void*)f_10545},
{"f_10551compiler.scm",(void*)f_10551},
{"f_10576compiler.scm",(void*)f_10576},
{"f_10557compiler.scm",(void*)f_10557},
{"f_10431compiler.scm",(void*)f_10431},
{"f_10536compiler.scm",(void*)f_10536},
{"f_10434compiler.scm",(void*)f_10434},
{"f_10437compiler.scm",(void*)f_10437},
{"f_10440compiler.scm",(void*)f_10440},
{"f_10478compiler.scm",(void*)f_10478},
{"f_10504compiler.scm",(void*)f_10504},
{"f_10485compiler.scm",(void*)f_10485},
{"f_10489compiler.scm",(void*)f_10489},
{"f_10462compiler.scm",(void*)f_10462},
{"f_10368compiler.scm",(void*)f_10368},
{"f_10377compiler.scm",(void*)f_10377},
{"f_10371compiler.scm",(void*)f_10371},
{"f_10352compiler.scm",(void*)f_10352},
{"f_10325compiler.scm",(void*)f_10325},
{"f_10308compiler.scm",(void*)f_10308},
{"f_10304compiler.scm",(void*)f_10304},
{"f_10297compiler.scm",(void*)f_10297},
{"f_10280compiler.scm",(void*)f_10280},
{"f_10276compiler.scm",(void*)f_10276},
{"f_10252compiler.scm",(void*)f_10252},
{"f_10232compiler.scm",(void*)f_10232},
{"f_10087compiler.scm",(void*)f_10087},
{"f_10091compiler.scm",(void*)f_10091},
{"f_10106compiler.scm",(void*)f_10106},
{"f_10116compiler.scm",(void*)f_10116},
{"f_10121compiler.scm",(void*)f_10121},
{"f_10166compiler.scm",(void*)f_10166},
{"f_10125compiler.scm",(void*)f_10125},
{"f_10131compiler.scm",(void*)f_10131},
{"f_10141compiler.scm",(void*)f_10141},
{"f_10933compiler.scm",(void*)f_10933},
{"f_10940compiler.scm",(void*)f_10940},
{"f_10978compiler.scm",(void*)f_10978},
{"f_10946compiler.scm",(void*)f_10946},
{"f_10955compiler.scm",(void*)f_10955},
{"f_11010compiler.scm",(void*)f_11010},
{"f_11026compiler.scm",(void*)f_11026},
{"f_11033compiler.scm",(void*)f_11033},
{"f_11040compiler.scm",(void*)f_11040},
{"f_11014compiler.scm",(void*)f_11014},
{"f_11024compiler.scm",(void*)f_11024},
{"f_10996compiler.scm",(void*)f_10996},
{"f_11004compiler.scm",(void*)f_11004},
{"f_11042compiler.scm",(void*)f_11042},
{"f_11046compiler.scm",(void*)f_11046},
{"f_10075compiler.scm",(void*)f_10075},
{"f_10066compiler.scm",(void*)f_10066},
{"f_10057compiler.scm",(void*)f_10057},
{"f_10048compiler.scm",(void*)f_10048},
{"f_10039compiler.scm",(void*)f_10039},
{"f_10030compiler.scm",(void*)f_10030},
{"f_10021compiler.scm",(void*)f_10021},
{"f_10012compiler.scm",(void*)f_10012},
{"f_10003compiler.scm",(void*)f_10003},
{"f_9994compiler.scm",(void*)f_9994},
{"f_9985compiler.scm",(void*)f_9985},
{"f_9976compiler.scm",(void*)f_9976},
{"f_9967compiler.scm",(void*)f_9967},
{"f_9958compiler.scm",(void*)f_9958},
{"f_9949compiler.scm",(void*)f_9949},
{"f_9940compiler.scm",(void*)f_9940},
{"f_9931compiler.scm",(void*)f_9931},
{"f_9922compiler.scm",(void*)f_9922},
{"f_9913compiler.scm",(void*)f_9913},
{"f_9904compiler.scm",(void*)f_9904},
{"f_9895compiler.scm",(void*)f_9895},
{"f_9886compiler.scm",(void*)f_9886},
{"f_9877compiler.scm",(void*)f_9877},
{"f_9868compiler.scm",(void*)f_9868},
{"f_9859compiler.scm",(void*)f_9859},
{"f_9850compiler.scm",(void*)f_9850},
{"f_9841compiler.scm",(void*)f_9841},
{"f_9832compiler.scm",(void*)f_9832},
{"f_9823compiler.scm",(void*)f_9823},
{"f_9814compiler.scm",(void*)f_9814},
{"f_9808compiler.scm",(void*)f_9808},
{"f_9802compiler.scm",(void*)f_9802},
{"f_8568compiler.scm",(void*)f_8568},
{"f_9769compiler.scm",(void*)f_9769},
{"f_9772compiler.scm",(void*)f_9772},
{"f_9775compiler.scm",(void*)f_9775},
{"f_9778compiler.scm",(void*)f_9778},
{"f_9781compiler.scm",(void*)f_9781},
{"f_9796compiler.scm",(void*)f_9796},
{"f_9794compiler.scm",(void*)f_9794},
{"f_9784compiler.scm",(void*)f_9784},
{"f_9621compiler.scm",(void*)f_9621},
{"f_9627compiler.scm",(void*)f_9627},
{"f_8932compiler.scm",(void*)f_8932},
{"f_8951compiler.scm",(void*)f_8951},
{"f_8984compiler.scm",(void*)f_8984},
{"f_9511compiler.scm",(void*)f_9511},
{"f_9507compiler.scm",(void*)f_9507},
{"f_9500compiler.scm",(void*)f_9500},
{"f_9351compiler.scm",(void*)f_9351},
{"f_9357compiler.scm",(void*)f_9357},
{"f_9427compiler.scm",(void*)f_9427},
{"f_9457compiler.scm",(void*)f_9457},
{"f_9440compiler.scm",(void*)f_9440},
{"f_9444compiler.scm",(void*)f_9444},
{"f_9366compiler.scm",(void*)f_9366},
{"f_9413compiler.scm",(void*)f_9413},
{"f_9417compiler.scm",(void*)f_9417},
{"f_9393compiler.scm",(void*)f_9393},
{"f_9389compiler.scm",(void*)f_9389},
{"f_9080compiler.scm",(void*)f_9080},
{"f_9329compiler.scm",(void*)f_9329},
{"f_9084compiler.scm",(void*)f_9084},
{"f_9327compiler.scm",(void*)f_9327},
{"f_9087compiler.scm",(void*)f_9087},
{"f_9090compiler.scm",(void*)f_9090},
{"f_9096compiler.scm",(void*)f_9096},
{"f_9102compiler.scm",(void*)f_9102},
{"f_9108compiler.scm",(void*)f_9108},
{"f_9294compiler.scm",(void*)f_9294},
{"f_9297compiler.scm",(void*)f_9297},
{"f_9111compiler.scm",(void*)f_9111},
{"f_9270compiler.scm",(void*)f_9270},
{"f_9255compiler.scm",(void*)f_9255},
{"f_9251compiler.scm",(void*)f_9251},
{"f_9185compiler.scm",(void*)f_9185},
{"f_9210compiler.scm",(void*)f_9210},
{"f_9216compiler.scm",(void*)f_9216},
{"f_9227compiler.scm",(void*)f_9227},
{"f_9214compiler.scm",(void*)f_9214},
{"f_9196compiler.scm",(void*)f_9196},
{"f_9188compiler.scm",(void*)f_9188},
{"f_9173compiler.scm",(void*)f_9173},
{"f_9181compiler.scm",(void*)f_9181},
{"f_9134compiler.scm",(void*)f_9134},
{"f_9164compiler.scm",(void*)f_9164},
{"f_9156compiler.scm",(void*)f_9156},
{"f_9152compiler.scm",(void*)f_9152},
{"f_9148compiler.scm",(void*)f_9148},
{"f_9137compiler.scm",(void*)f_9137},
{"f_9005compiler.scm",(void*)f_9005},
{"f_9008compiler.scm",(void*)f_9008},
{"f_9060compiler.scm",(void*)f_9060},
{"f_9024compiler.scm",(void*)f_9024},
{"f_9053compiler.scm",(void*)f_9053},
{"f_9045compiler.scm",(void*)f_9045},
{"f_8990compiler.scm",(void*)f_8990},
{"f_8963compiler.scm",(void*)f_8963},
{"f_8969compiler.scm",(void*)f_8969},
{"f_9633compiler.scm",(void*)f_9633},
{"f_9640compiler.scm",(void*)f_9640},
{"f_9656compiler.scm",(void*)f_9656},
{"f_8598compiler.scm",(void*)f_8598},
{"f_8617compiler.scm",(void*)f_8617},
{"f_8896compiler.scm",(void*)f_8896},
{"f_8857compiler.scm",(void*)f_8857},
{"f_9672compiler.scm",(void*)f_9672},
{"f_9710compiler.scm",(void*)f_9710},
{"f_9736compiler.scm",(void*)f_9736},
{"f_9722compiler.scm",(void*)f_9722},
{"f_9701compiler.scm",(void*)f_9701},
{"f_9670compiler.scm",(void*)f_9670},
{"f_8870compiler.scm",(void*)f_8870},
{"f_8873compiler.scm",(void*)f_8873},
{"f_8884compiler.scm",(void*)f_8884},
{"f_8821compiler.scm",(void*)f_8821},
{"f_8713compiler.scm",(void*)f_8713},
{"f_8719compiler.scm",(void*)f_8719},
{"f_8731compiler.scm",(void*)f_8731},
{"f_8734compiler.scm",(void*)f_8734},
{"f_8737compiler.scm",(void*)f_8737},
{"f_8755compiler.scm",(void*)f_8755},
{"f_8762compiler.scm",(void*)f_8762},
{"f_8740compiler.scm",(void*)f_8740},
{"f_8743compiler.scm",(void*)f_8743},
{"f_8746compiler.scm",(void*)f_8746},
{"f_8707compiler.scm",(void*)f_8707},
{"f_8697compiler.scm",(void*)f_8697},
{"f_8680compiler.scm",(void*)f_8680},
{"f_8685compiler.scm",(void*)f_8685},
{"f_8638compiler.scm",(void*)f_8638},
{"f_8655compiler.scm",(void*)f_8655},
{"f_8642compiler.scm",(void*)f_8642},
{"f_8653compiler.scm",(void*)f_8653},
{"f_8628compiler.scm",(void*)f_8628},
{"f_8587compiler.scm",(void*)f_8587},
{"f_8596compiler.scm",(void*)f_8596},
{"f_8577compiler.scm",(void*)f_8577},
{"f_8582compiler.scm",(void*)f_8582},
{"f_8571compiler.scm",(void*)f_8571},
{"f_7053compiler.scm",(void*)f_7053},
{"f_7057compiler.scm",(void*)f_7057},
{"f_7807compiler.scm",(void*)f_7807},
{"f_7810compiler.scm",(void*)f_7810},
{"f_7814compiler.scm",(void*)f_7814},
{"f_7817compiler.scm",(void*)f_7817},
{"f_7830compiler.scm",(void*)f_7830},
{"f_8455compiler.scm",(void*)f_8455},
{"f_7834compiler.scm",(void*)f_7834},
{"f_8420compiler.scm",(void*)f_8420},
{"f_7841compiler.scm",(void*)f_7841},
{"f_8379compiler.scm",(void*)f_8379},
{"f_8391compiler.scm",(void*)f_8391},
{"f_8385compiler.scm",(void*)f_8385},
{"f_7844compiler.scm",(void*)f_7844},
{"f_7847compiler.scm",(void*)f_7847},
{"f_8359compiler.scm",(void*)f_8359},
{"f_8351compiler.scm",(void*)f_8351},
{"f_8319compiler.scm",(void*)f_8319},
{"f_8325compiler.scm",(void*)f_8325},
{"f_7850compiler.scm",(void*)f_7850},
{"f_8281compiler.scm",(void*)f_8281},
{"f_8290compiler.scm",(void*)f_8290},
{"f_8293compiler.scm",(void*)f_8293},
{"f_7853compiler.scm",(void*)f_7853},
{"f_8182compiler.scm",(void*)f_8182},
{"f_8200compiler.scm",(void*)f_8200},
{"f_8243compiler.scm",(void*)f_8243},
{"f_8268compiler.scm",(void*)f_8268},
{"f_8264compiler.scm",(void*)f_8264},
{"f_8250compiler.scm",(void*)f_8250},
{"f_8253compiler.scm",(void*)f_8253},
{"f_8204compiler.scm",(void*)f_8204},
{"f_8210compiler.scm",(void*)f_8210},
{"f_7856compiler.scm",(void*)f_7856},
{"f_8160compiler.scm",(void*)f_8160},
{"f_8146compiler.scm",(void*)f_8146},
{"f_8153compiler.scm",(void*)f_8153},
{"f_8134compiler.scm",(void*)f_8134},
{"f_8119compiler.scm",(void*)f_8119},
{"f_7859compiler.scm",(void*)f_7859},
{"f_8031compiler.scm",(void*)f_8031},
{"f_8105compiler.scm",(void*)f_8105},
{"f_8037compiler.scm",(void*)f_8037},
{"f_8095compiler.scm",(void*)f_8095},
{"f_8087compiler.scm",(void*)f_8087},
{"f_8083compiler.scm",(void*)f_8083},
{"f_8040compiler.scm",(void*)f_8040},
{"f_8043compiler.scm",(void*)f_8043},
{"f_7862compiler.scm",(void*)f_7862},
{"f_7890compiler.scm",(void*)f_7890},
{"f_7911compiler.scm",(void*)f_7911},
{"f_7932compiler.scm",(void*)f_7932},
{"f_7938compiler.scm",(void*)f_7938},
{"f_7865compiler.scm",(void*)f_7865},
{"f_7871compiler.scm",(void*)f_7871},
{"f_7875compiler.scm",(void*)f_7875},
{"f_7820compiler.scm",(void*)f_7820},
{"f_7824compiler.scm",(void*)f_7824},
{"f_7827compiler.scm",(void*)f_7827},
{"f_7782compiler.scm",(void*)f_7782},
{"f_7792compiler.scm",(void*)f_7792},
{"f_7800compiler.scm",(void*)f_7800},
{"f_7768compiler.scm",(void*)f_7768},
{"f_7776compiler.scm",(void*)f_7776},
{"f_7647compiler.scm",(void*)f_7647},
{"f_7653compiler.scm",(void*)f_7653},
{"f_7066compiler.scm",(void*)f_7066},
{"f_7088compiler.scm",(void*)f_7088},
{"f_7609compiler.scm",(void*)f_7609},
{"f_7603compiler.scm",(void*)f_7603},
{"f_7576compiler.scm",(void*)f_7576},
{"f_7585compiler.scm",(void*)f_7585},
{"f_7570compiler.scm",(void*)f_7570},
{"f_7495compiler.scm",(void*)f_7495},
{"f_7524compiler.scm",(void*)f_7524},
{"f_7539compiler.scm",(void*)f_7539},
{"f_7543compiler.scm",(void*)f_7543},
{"f_7530compiler.scm",(void*)f_7530},
{"f_7498compiler.scm",(void*)f_7498},
{"f_7521compiler.scm",(void*)f_7521},
{"f_7501compiler.scm",(void*)f_7501},
{"f_7504compiler.scm",(void*)f_7504},
{"f_7507compiler.scm",(void*)f_7507},
{"f_7385compiler.scm",(void*)f_7385},
{"f_7477compiler.scm",(void*)f_7477},
{"f_7392compiler.scm",(void*)f_7392},
{"f_7467compiler.scm",(void*)f_7467},
{"f_7471compiler.scm",(void*)f_7471},
{"f_7395compiler.scm",(void*)f_7395},
{"f_7398compiler.scm",(void*)f_7398},
{"f_7452compiler.scm",(void*)f_7452},
{"f_7401compiler.scm",(void*)f_7401},
{"f_7404compiler.scm",(void*)f_7404},
{"f_7437compiler.scm",(void*)f_7437},
{"f_7407compiler.scm",(void*)f_7407},
{"f_7434compiler.scm",(void*)f_7434},
{"f_7410compiler.scm",(void*)f_7410},
{"f_7341compiler.scm",(void*)f_7341},
{"f_7360compiler.scm",(void*)f_7360},
{"f_7345compiler.scm",(void*)f_7345},
{"f_7358compiler.scm",(void*)f_7358},
{"f_7349compiler.scm",(void*)f_7349},
{"f_7274compiler.scm",(void*)f_7274},
{"f_7279compiler.scm",(void*)f_7279},
{"f_7306compiler.scm",(void*)f_7306},
{"f_7309compiler.scm",(void*)f_7309},
{"f_7312compiler.scm",(void*)f_7312},
{"f_7297compiler.scm",(void*)f_7297},
{"f_7202compiler.scm",(void*)f_7202},
{"f_7250compiler.scm",(void*)f_7250},
{"f_7213compiler.scm",(void*)f_7213},
{"f_7232compiler.scm",(void*)f_7232},
{"f_7179compiler.scm",(void*)f_7179},
{"f_7182compiler.scm",(void*)f_7182},
{"f_7143compiler.scm",(void*)f_7143},
{"f_7100compiler.scm",(void*)f_7100},
{"f_7131compiler.scm",(void*)f_7131},
{"f_7659compiler.scm",(void*)f_7659},
{"f_7672compiler.scm",(void*)f_7672},
{"f_7732compiler.scm",(void*)f_7732},
{"f_7681compiler.scm",(void*)f_7681},
{"f_7684compiler.scm",(void*)f_7684},
{"f_7687compiler.scm",(void*)f_7687},
{"f_7762compiler.scm",(void*)f_7762},
{"f_7059compiler.scm",(void*)f_7059},
{"f_7044compiler.scm",(void*)f_7044},
{"f_7035compiler.scm",(void*)f_7035},
{"f_7026compiler.scm",(void*)f_7026},
{"f_7017compiler.scm",(void*)f_7017},
{"f_7008compiler.scm",(void*)f_7008},
{"f_6999compiler.scm",(void*)f_6999},
{"f_6990compiler.scm",(void*)f_6990},
{"f_6981compiler.scm",(void*)f_6981},
{"f_6972compiler.scm",(void*)f_6972},
{"f_6963compiler.scm",(void*)f_6963},
{"f_6957compiler.scm",(void*)f_6957},
{"f_6951compiler.scm",(void*)f_6951},
{"f_6276compiler.scm",(void*)f_6276},
{"f_6923compiler.scm",(void*)f_6923},
{"f_6838compiler.scm",(void*)f_6838},
{"f_6844compiler.scm",(void*)f_6844},
{"f_6864compiler.scm",(void*)f_6864},
{"f_6882compiler.scm",(void*)f_6882},
{"f_6891compiler.scm",(void*)f_6891},
{"f_6917compiler.scm",(void*)f_6917},
{"f_6905compiler.scm",(void*)f_6905},
{"f_6858compiler.scm",(void*)f_6858},
{"f_6822compiler.scm",(void*)f_6822},
{"f_6828compiler.scm",(void*)f_6828},
{"f_6697compiler.scm",(void*)f_6697},
{"f_6701compiler.scm",(void*)f_6701},
{"f_6704compiler.scm",(void*)f_6704},
{"f_6758compiler.scm",(void*)f_6758},
{"f_6754compiler.scm",(void*)f_6754},
{"f_6750compiler.scm",(void*)f_6750},
{"f_6729compiler.scm",(void*)f_6729},
{"f_6735compiler.scm",(void*)f_6735},
{"f_6746compiler.scm",(void*)f_6746},
{"f_6739compiler.scm",(void*)f_6739},
{"f_6727compiler.scm",(void*)f_6727},
{"f_6323compiler.scm",(void*)f_6323},
{"f_6345compiler.scm",(void*)f_6345},
{"f_6611compiler.scm",(void*)f_6611},
{"f_6768compiler.scm",(void*)f_6768},
{"f_6771compiler.scm",(void*)f_6771},
{"f_6816compiler.scm",(void*)f_6816},
{"f_6812compiler.scm",(void*)f_6812},
{"f_6808compiler.scm",(void*)f_6808},
{"f_6804compiler.scm",(void*)f_6804},
{"f_6576compiler.scm",(void*)f_6576},
{"f_6602compiler.scm",(void*)f_6602},
{"f_6526compiler.scm",(void*)f_6526},
{"f_6535compiler.scm",(void*)f_6535},
{"f_6563compiler.scm",(void*)f_6563},
{"f_6559compiler.scm",(void*)f_6559},
{"f_6513compiler.scm",(void*)f_6513},
{"f_6451compiler.scm",(void*)f_6451},
{"f_6474compiler.scm",(void*)f_6474},
{"f_6488compiler.scm",(void*)f_6488},
{"f_6357compiler.scm",(void*)f_6357},
{"f_6360compiler.scm",(void*)f_6360},
{"f_6436compiler.scm",(void*)f_6436},
{"f_6432compiler.scm",(void*)f_6432},
{"f_6428compiler.scm",(void*)f_6428},
{"f_6401compiler.scm",(void*)f_6401},
{"f_6412compiler.scm",(void*)f_6412},
{"f_6416compiler.scm",(void*)f_6416},
{"f_6395compiler.scm",(void*)f_6395},
{"f_6361compiler.scm",(void*)f_6361},
{"f_6372compiler.scm",(void*)f_6372},
{"f_6279compiler.scm",(void*)f_6279},
{"f_6283compiler.scm",(void*)f_6283},
{"f_6306compiler.scm",(void*)f_6306},
{"f_6317compiler.scm",(void*)f_6317},
{"f_6300compiler.scm",(void*)f_6300},
{"f_6186compiler.scm",(void*)f_6186},
{"f_6218compiler.scm",(void*)f_6218},
{"f_6237compiler.scm",(void*)f_6237},
{"f_6260compiler.scm",(void*)f_6260},
{"f_6243compiler.scm",(void*)f_6243},
{"f_6189compiler.scm",(void*)f_6189},
{"f_6195compiler.scm",(void*)f_6195},
{"f_6205compiler.scm",(void*)f_6205},
{"f_6105compiler.scm",(void*)f_6105},
{"f_6109compiler.scm",(void*)f_6109},
{"f_6112compiler.scm",(void*)f_6112},
{"f_6115compiler.scm",(void*)f_6115},
{"f_6131compiler.scm",(void*)f_6131},
{"f_6118compiler.scm",(void*)f_6118},
{"f_6121compiler.scm",(void*)f_6121},
{"f_6124compiler.scm",(void*)f_6124},
{"f_6068compiler.scm",(void*)f_6068},
{"f_6091compiler.scm",(void*)f_6091},
{"f_6078compiler.scm",(void*)f_6078},
{"f_6081compiler.scm",(void*)f_6081},
{"f_6084compiler.scm",(void*)f_6084},
{"f_6031compiler.scm",(void*)f_6031},
{"f_6054compiler.scm",(void*)f_6054},
{"f_6041compiler.scm",(void*)f_6041},
{"f_6044compiler.scm",(void*)f_6044},
{"f_6047compiler.scm",(void*)f_6047},
{"f_5986compiler.scm",(void*)f_5986},
{"f_5993compiler.scm",(void*)f_5993},
{"f_5999compiler.scm",(void*)f_5999},
{"f_5941compiler.scm",(void*)f_5941},
{"f_5948compiler.scm",(void*)f_5948},
{"f_5954compiler.scm",(void*)f_5954},
{"f_5787compiler.scm",(void*)f_5787},
{"f_5935compiler.scm",(void*)f_5935},
{"f_5791compiler.scm",(void*)f_5791},
{"f_5794compiler.scm",(void*)f_5794},
{"f_5797compiler.scm",(void*)f_5797},
{"f_5800compiler.scm",(void*)f_5800},
{"f_5803compiler.scm",(void*)f_5803},
{"f_5929compiler.scm",(void*)f_5929},
{"f_5813compiler.scm",(void*)f_5813},
{"f_5904compiler.scm",(void*)f_5904},
{"f_5912compiler.scm",(void*)f_5912},
{"f_5816compiler.scm",(void*)f_5816},
{"f_5856compiler.scm",(void*)f_5856},
{"f_5859compiler.scm",(void*)f_5859},
{"f_5878compiler.scm",(void*)f_5878},
{"f_5874compiler.scm",(void*)f_5874},
{"f_5870compiler.scm",(void*)f_5870},
{"f_5849compiler.scm",(void*)f_5849},
{"f_5839compiler.scm",(void*)f_5839},
{"f_5827compiler.scm",(void*)f_5827},
{"f_5778compiler.scm",(void*)f_5778},
{"f_5769compiler.scm",(void*)f_5769},
{"f_5760compiler.scm",(void*)f_5760},
{"f_5751compiler.scm",(void*)f_5751},
{"f_5742compiler.scm",(void*)f_5742},
{"f_5733compiler.scm",(void*)f_5733},
{"f_5724compiler.scm",(void*)f_5724},
{"f_5715compiler.scm",(void*)f_5715},
{"f_5706compiler.scm",(void*)f_5706},
{"f_5697compiler.scm",(void*)f_5697},
{"f_5688compiler.scm",(void*)f_5688},
{"f_5679compiler.scm",(void*)f_5679},
{"f_5670compiler.scm",(void*)f_5670},
{"f_5661compiler.scm",(void*)f_5661},
{"f_5652compiler.scm",(void*)f_5652},
{"f_5643compiler.scm",(void*)f_5643},
{"f_5637compiler.scm",(void*)f_5637},
{"f_5631compiler.scm",(void*)f_5631},
{"f_4599compiler.scm",(void*)f_4599},
{"f_4653compiler.scm",(void*)f_4653},
{"f_4657compiler.scm",(void*)f_4657},
{"f_5600compiler.scm",(void*)f_5600},
{"f_5610compiler.scm",(void*)f_5610},
{"f_5605compiler.scm",(void*)f_5605},
{"f_5572compiler.scm",(void*)f_5572},
{"f_5578compiler.scm",(void*)f_5578},
{"f_5554compiler.scm",(void*)f_5554},
{"f_5558compiler.scm",(void*)f_5558},
{"f_5500compiler.scm",(void*)f_5500},
{"f_5512compiler.scm",(void*)f_5512},
{"f_5529compiler.scm",(void*)f_5529},
{"f_5525compiler.scm",(void*)f_5525},
{"f_5478compiler.scm",(void*)f_5478},
{"f_5485compiler.scm",(void*)f_5485},
{"f_5461compiler.scm",(void*)f_5461},
{"f_5352compiler.scm",(void*)f_5352},
{"f_5361compiler.scm",(void*)f_5361},
{"f_5334compiler.scm",(void*)f_5334},
{"f_5338compiler.scm",(void*)f_5338},
{"f_5321compiler.scm",(void*)f_5321},
{"f_5313compiler.scm",(void*)f_5313},
{"f_5317compiler.scm",(void*)f_5317},
{"f_5158compiler.scm",(void*)f_5158},
{"f_5268compiler.scm",(void*)f_5268},
{"f_5257compiler.scm",(void*)f_5257},
{"f_5261compiler.scm",(void*)f_5261},
{"f_5228compiler.scm",(void*)f_5228},
{"f_5203compiler.scm",(void*)f_5203},
{"f_5178compiler.scm",(void*)f_5178},
{"f_5111compiler.scm",(void*)f_5111},
{"f_5120compiler.scm",(void*)f_5120},
{"f_5118compiler.scm",(void*)f_5118},
{"f_5021compiler.scm",(void*)f_5021},
{"f_4999compiler.scm",(void*)f_4999},
{"f_5003compiler.scm",(void*)f_5003},
{"f_4972compiler.scm",(void*)f_4972},
{"f_4976compiler.scm",(void*)f_4976},
{"f_4958compiler.scm",(void*)f_4958},
{"f_4962compiler.scm",(void*)f_4962},
{"f_4937compiler.scm",(void*)f_4937},
{"f_4923compiler.scm",(void*)f_4923},
{"f_4840compiler.scm",(void*)f_4840},
{"f_4823compiler.scm",(void*)f_4823},
{"f_4827compiler.scm",(void*)f_4827},
{"f_4794compiler.scm",(void*)f_4794},
{"f_4769compiler.scm",(void*)f_4769},
{"f_4722compiler.scm",(void*)f_4722},
{"f_4752compiler.scm",(void*)f_4752},
{"f_4728compiler.scm",(void*)f_4728},
{"f_4731compiler.scm",(void*)f_4731},
{"f_4738compiler.scm",(void*)f_4738},
{"f_4734compiler.scm",(void*)f_4734},
{"f_4672compiler.scm",(void*)f_4672},
{"f_4675compiler.scm",(void*)f_4675},
{"f_4709compiler.scm",(void*)f_4709},
{"f_4703compiler.scm",(void*)f_4703},
{"f_4684compiler.scm",(void*)f_4684},
{"f_4693compiler.scm",(void*)f_4693},
{"f_4701compiler.scm",(void*)f_4701},
{"f_4687compiler.scm",(void*)f_4687},
{"f_4691compiler.scm",(void*)f_4691},
{"f_4663compiler.scm",(void*)f_4663},
{"f_4602compiler.scm",(void*)f_4602},
{"f_4625compiler.scm",(void*)f_4625},
{"f_4615compiler.scm",(void*)f_4615},
{"f_1923compiler.scm",(void*)f_1923},
{"f_4594compiler.scm",(void*)f_4594},
{"f_4557compiler.scm",(void*)f_4557},
{"f_4560compiler.scm",(void*)f_4560},
{"f_4575compiler.scm",(void*)f_4575},
{"f_4584compiler.scm",(void*)f_4584},
{"f_4588compiler.scm",(void*)f_4588},
{"f_4571compiler.scm",(void*)f_4571},
{"f_4544compiler.scm",(void*)f_4544},
{"f_4550compiler.scm",(void*)f_4550},
{"f_2004compiler.scm",(void*)f_2004},
{"f_2122compiler.scm",(void*)f_2122},
{"f_4405compiler.scm",(void*)f_4405},
{"f_4520compiler.scm",(void*)f_4520},
{"f_4420compiler.scm",(void*)f_4420},
{"f_4507compiler.scm",(void*)f_4507},
{"f_4429compiler.scm",(void*)f_4429},
{"f_4432compiler.scm",(void*)f_4432},
{"f_4441compiler.scm",(void*)f_4441},
{"f_4463compiler.scm",(void*)f_4463},
{"f_4456compiler.scm",(void*)f_4456},
{"f_4408compiler.scm",(void*)f_4408},
{"f_4411compiler.scm",(void*)f_4411},
{"f_2149compiler.scm",(void*)f_2149},
{"f_2155compiler.scm",(void*)f_2155},
{"f_4387compiler.scm",(void*)f_4387},
{"f_2158compiler.scm",(void*)f_2158},
{"f_2165compiler.scm",(void*)f_2165},
{"f_2174compiler.scm",(void*)f_2174},
{"f_2183compiler.scm",(void*)f_2183},
{"f_2344compiler.scm",(void*)f_2344},
{"f_4245compiler.scm",(void*)f_4245},
{"f_4305compiler.scm",(void*)f_4305},
{"f_4205compiler.scm",(void*)f_4205},
{"f_4209compiler.scm",(void*)f_4209},
{"f_4215compiler.scm",(void*)f_4215},
{"f_4229compiler.scm",(void*)f_4229},
{"f_4218compiler.scm",(void*)f_4218},
{"f_3913compiler.scm",(void*)f_3913},
{"f_4189compiler.scm",(void*)f_4189},
{"f_3935compiler.scm",(void*)f_3935},
{"f_4154compiler.scm",(void*)f_4154},
{"f_3938compiler.scm",(void*)f_3938},
{"f_3949compiler.scm",(void*)f_3949},
{"f_4104compiler.scm",(void*)f_4104},
{"f_4148compiler.scm",(void*)f_4148},
{"f_4144compiler.scm",(void*)f_4144},
{"f_4140compiler.scm",(void*)f_4140},
{"f_4128compiler.scm",(void*)f_4128},
{"f_3969compiler.scm",(void*)f_3969},
{"f_4048compiler.scm",(void*)f_4048},
{"f_4025compiler.scm",(void*)f_4025},
{"f_4020compiler.scm",(void*)f_4020},
{"f_3983compiler.scm",(void*)f_3983},
{"f_3973compiler.scm",(void*)f_3973},
{"f_3957compiler.scm",(void*)f_3957},
{"f_3945compiler.scm",(void*)f_3945},
{"f_3903compiler.scm",(void*)f_3903},
{"f_3880compiler.scm",(void*)f_3880},
{"f_3878compiler.scm",(void*)f_3878},
{"f_3807compiler.scm",(void*)f_3807},
{"f_3825compiler.scm",(void*)f_3825},
{"f_3847compiler.scm",(void*)f_3847},
{"f_3853compiler.scm",(void*)f_3853},
{"f_3831compiler.scm",(void*)f_3831},
{"f_3838compiler.scm",(void*)f_3838},
{"f_3813compiler.scm",(void*)f_3813},
{"f_3819compiler.scm",(void*)f_3819},
{"f_3805compiler.scm",(void*)f_3805},
{"f_3734compiler.scm",(void*)f_3734},
{"f_3745compiler.scm",(void*)f_3745},
{"f_3791compiler.scm",(void*)f_3791},
{"f_3755compiler.scm",(void*)f_3755},
{"f_3758compiler.scm",(void*)f_3758},
{"f_3761compiler.scm",(void*)f_3761},
{"f_3765compiler.scm",(void*)f_3765},
{"f_3748compiler.scm",(void*)f_3748},
{"f_3673compiler.scm",(void*)f_3673},
{"f_3677compiler.scm",(void*)f_3677},
{"f_3715compiler.scm",(void*)f_3715},
{"f_3681compiler.scm",(void*)f_3681},
{"f_3695compiler.scm",(void*)f_3695},
{"f_3693compiler.scm",(void*)f_3693},
{"f_3655compiler.scm",(void*)f_3655},
{"f_3663compiler.scm",(void*)f_3663},
{"f_3528compiler.scm",(void*)f_3528},
{"f_3531compiler.scm",(void*)f_3531},
{"f_3537compiler.scm",(void*)f_3537},
{"f_3616compiler.scm",(void*)f_3616},
{"f_3593compiler.scm",(void*)f_3593},
{"f_3568compiler.scm",(void*)f_3568},
{"f_3576compiler.scm",(void*)f_3576},
{"f_3564compiler.scm",(void*)f_3564},
{"f_3560compiler.scm",(void*)f_3560},
{"f_3552compiler.scm",(void*)f_3552},
{"f_3453compiler.scm",(void*)f_3453},
{"f_3462compiler.scm",(void*)f_3462},
{"f_3501compiler.scm",(void*)f_3501},
{"f_3493compiler.scm",(void*)f_3493},
{"f_3465compiler.scm",(void*)f_3465},
{"f_3485compiler.scm",(void*)f_3485},
{"f_3477compiler.scm",(void*)f_3477},
{"f_3433compiler.scm",(void*)f_3433},
{"f_3379compiler.scm",(void*)f_3379},
{"f_3382compiler.scm",(void*)f_3382},
{"f_3385compiler.scm",(void*)f_3385},
{"f_3389compiler.scm",(void*)f_3389},
{"f_3393compiler.scm",(void*)f_3393},
{"f_3312compiler.scm",(void*)f_3312},
{"f_3324compiler.scm",(void*)f_3324},
{"f_3297compiler.scm",(void*)f_3297},
{"f_3284compiler.scm",(void*)f_3284},
{"f_3271compiler.scm",(void*)f_3271},
{"f_3258compiler.scm",(void*)f_3258},
{"f_3245compiler.scm",(void*)f_3245},
{"f_3178compiler.scm",(void*)f_3178},
{"f_3197compiler.scm",(void*)f_3197},
{"f_3224compiler.scm",(void*)f_3224},
{"f_3228compiler.scm",(void*)f_3228},
{"f_3217compiler.scm",(void*)f_3217},
{"f_3191compiler.scm",(void*)f_3191},
{"f_3165compiler.scm",(void*)f_3165},
{"f_3150compiler.scm",(void*)f_3150},
{"f_3123compiler.scm",(void*)f_3123},
{"f_3127compiler.scm",(void*)f_3127},
{"f_3102compiler.scm",(void*)f_3102},
{"f_3073compiler.scm",(void*)f_3073},
{"f_3077compiler.scm",(void*)f_3077},
{"f_3044compiler.scm",(void*)f_3044},
{"f_3048compiler.scm",(void*)f_3048},
{"f_2868compiler.scm",(void*)f_2868},
{"f_2877compiler.scm",(void*)f_2877},
{"f_2880compiler.scm",(void*)f_2880},
{"f_3016compiler.scm",(void*)f_3016},
{"f_3020compiler.scm",(void*)f_3020},
{"f_2883compiler.scm",(void*)f_2883},
{"f_2993compiler.scm",(void*)f_2993},
{"f_3006compiler.scm",(void*)f_3006},
{"f_2996compiler.scm",(void*)f_2996},
{"f_2886compiler.scm",(void*)f_2886},
{"f_2981compiler.scm",(void*)f_2981},
{"f_2889compiler.scm",(void*)f_2889},
{"f_2944compiler.scm",(void*)f_2944},
{"f_2975compiler.scm",(void*)f_2975},
{"f_2967compiler.scm",(void*)f_2967},
{"f_2901compiler.scm",(void*)f_2901},
{"f_2932compiler.scm",(void*)f_2932},
{"f_2920compiler.scm",(void*)f_2920},
{"f_2830compiler.scm",(void*)f_2830},
{"f_2856compiler.scm",(void*)f_2856},
{"f_2833compiler.scm",(void*)f_2833},
{"f_2848compiler.scm",(void*)f_2848},
{"f_2846compiler.scm",(void*)f_2846},
{"f_2836compiler.scm",(void*)f_2836},
{"f_2839compiler.scm",(void*)f_2839},
{"f_2579compiler.scm",(void*)f_2579},
{"f_2780compiler.scm",(void*)f_2780},
{"f_2791compiler.scm",(void*)f_2791},
{"f_2785compiler.scm",(void*)f_2785},
{"f_2588compiler.scm",(void*)f_2588},
{"f_2593compiler.scm",(void*)f_2593},
{"f_2597compiler.scm",(void*)f_2597},
{"f_2777compiler.scm",(void*)f_2777},
{"f_2600compiler.scm",(void*)f_2600},
{"f_2769compiler.scm",(void*)f_2769},
{"f_2603compiler.scm",(void*)f_2603},
{"f_2606compiler.scm",(void*)f_2606},
{"f_2767compiler.scm",(void*)f_2767},
{"f_2760compiler.scm",(void*)f_2760},
{"f_2609compiler.scm",(void*)f_2609},
{"f_2644compiler.scm",(void*)f_2644},
{"f_2728compiler.scm",(void*)f_2728},
{"f_2724compiler.scm",(void*)f_2724},
{"f_2720compiler.scm",(void*)f_2720},
{"f_2677compiler.scm",(void*)f_2677},
{"f_2684compiler.scm",(void*)f_2684},
{"f_2634compiler.scm",(void*)f_2634},
{"f_2612compiler.scm",(void*)f_2612},
{"f_2615compiler.scm",(void*)f_2615},
{"f_2505compiler.scm",(void*)f_2505},
{"f_2511compiler.scm",(void*)f_2511},
{"f_2514compiler.scm",(void*)f_2514},
{"f_2567compiler.scm",(void*)f_2567},
{"f_2517compiler.scm",(void*)f_2517},
{"f_2520compiler.scm",(void*)f_2520},
{"f_2547compiler.scm",(void*)f_2547},
{"f_2555compiler.scm",(void*)f_2555},
{"f_2527compiler.scm",(void*)f_2527},
{"f_2541compiler.scm",(void*)f_2541},
{"f_2535compiler.scm",(void*)f_2535},
{"f_2531compiler.scm",(void*)f_2531},
{"f_2391compiler.scm",(void*)f_2391},
{"f_2401compiler.scm",(void*)f_2401},
{"f_2412compiler.scm",(void*)f_2412},
{"f_2486compiler.scm",(void*)f_2486},
{"f_2496compiler.scm",(void*)f_2496},
{"f_2477compiler.scm",(void*)f_2477},
{"f_2451compiler.scm",(void*)f_2451},
{"f_2465compiler.scm",(void*)f_2465},
{"f_2463compiler.scm",(void*)f_2463},
{"f_2439compiler.scm",(void*)f_2439},
{"f_2416compiler.scm",(void*)f_2416},
{"f_2423compiler.scm",(void*)f_2423},
{"f_2406compiler.scm",(void*)f_2406},
{"f_2385compiler.scm",(void*)f_2385},
{"f_2353compiler.scm",(void*)f_2353},
{"f_2356compiler.scm",(void*)f_2356},
{"f_2367compiler.scm",(void*)f_2367},
{"f_2361compiler.scm",(void*)f_2361},
{"f_2359compiler.scm",(void*)f_2359},
{"f_2311compiler.scm",(void*)f_2311},
{"f_2323compiler.scm",(void*)f_2323},
{"f_2327compiler.scm",(void*)f_2327},
{"f_2252compiler.scm",(void*)f_2252},
{"f_2258compiler.scm",(void*)f_2258},
{"f_2264compiler.scm",(void*)f_2264},
{"f_2267compiler.scm",(void*)f_2267},
{"f_1954compiler.scm",(void*)f_1954},
{"f_1957compiler.scm",(void*)f_1957},
{"f_2283compiler.scm",(void*)f_2283},
{"f_2271compiler.scm",(void*)f_2271},
{"f_2206compiler.scm",(void*)f_2206},
{"f_2213compiler.scm",(void*)f_2213},
{"f_2217compiler.scm",(void*)f_2217},
{"f_2221compiler.scm",(void*)f_2221},
{"f_2031compiler.scm",(void*)f_2031},
{"f_2044compiler.scm",(void*)f_2044},
{"f_2092compiler.scm",(void*)f_2092},
{"f_2102compiler.scm",(void*)f_2102},
{"f_2062compiler.scm",(void*)f_2062},
{"f_2072compiler.scm",(void*)f_2072},
{"f_2024compiler.scm",(void*)f_2024},
{"f_1962compiler.scm",(void*)f_1962},
{"f_1969compiler.scm",(void*)f_1969},
{"f_1938compiler.scm",(void*)f_1938},
{"f_1944compiler.scm",(void*)f_1944},
{"f_1926compiler.scm",(void*)f_1926},
{"f_1858compiler.scm",(void*)f_1858},
{"f_1921compiler.scm",(void*)f_1921},
{"f_1862compiler.scm",(void*)f_1862},
{"f_1914compiler.scm",(void*)f_1914},
{"f_1865compiler.scm",(void*)f_1865},
{"f_1907compiler.scm",(void*)f_1907},
{"f_1868compiler.scm",(void*)f_1868},
{"f_1872compiler.scm",(void*)f_1872},
{"f_1876compiler.scm",(void*)f_1876},
{"f_1880compiler.scm",(void*)f_1880},
{"f_1900compiler.scm",(void*)f_1900},
{"f_1883compiler.scm",(void*)f_1883},
{"f_1893compiler.scm",(void*)f_1893},
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
