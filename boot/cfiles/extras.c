/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: extras.scm -output-file extras.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: extras
*/

#include "chicken.h"

#define C_hashptr(x)   C_fix(x & C_MOST_POSITIVE_FIXNUM)
#define C_mem_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[562];


C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8882)
static void C_ccall f_8882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8945)
static void C_fcall f_8945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8964)
static void C_ccall f_8964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8903)
static void C_fcall f_8903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8985)
static void C_ccall f_8985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7880)
static void C_ccall f_7880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8468)
static void C_ccall f_8468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8818)
static void C_ccall f_8818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8828)
static void C_ccall f_8828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8845)
static C_word C_fcall f_8845(C_word t0);
C_noret_decl(f_8831)
static void C_fcall f_8831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8789)
static void C_ccall f_8789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8735)
static void C_ccall f_8735(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8754)
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8764)
static void C_ccall f_8764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8726)
static void C_ccall f_8726(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8690)
static void C_ccall f_8690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8668)
static void C_fcall f_8668(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8637)
static void C_ccall f_8637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8626)
static void C_ccall f_8626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_ccall f_8603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8522)
static void C_ccall f_8522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8537)
static void C_fcall f_8537(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8553)
static void C_fcall f_8553(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8470)
static void C_ccall f_8470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8485)
static void C_fcall f_8485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8504)
static void C_ccall f_8504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8495)
static void C_ccall f_8495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8402)
static void C_ccall f_8402(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8417)
static void C_fcall f_8417(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8433)
static void C_fcall f_8433(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8337)
static void C_ccall f_8337(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8352)
static void C_fcall f_8352(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8368)
static void C_fcall f_8368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8314)
static void C_ccall f_8314(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8314)
static void C_ccall f_8314r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8318)
static void C_ccall f_8318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8321)
static void C_ccall f_8321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8256)
static void C_fcall f_8256(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8272)
static void C_fcall f_8272(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8170)
static void C_ccall f_8170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8188)
static void C_fcall f_8188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8211)
static void C_fcall f_8211(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8035)
static void C_fcall f_8035(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8051)
static void C_ccall f_8051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8054)
static void C_fcall f_8054(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7980)
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7999)
static void C_fcall f_7999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7921)
static void C_fcall f_7921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7894)
static void C_ccall f_7894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7882)
static void C_ccall f_7882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7888)
static void C_ccall f_7888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7866)
static void C_ccall f_7866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7875)
static void C_ccall f_7875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7857)
static void C_ccall f_7857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7613)
static void C_ccall f_7613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_7613)
static void C_ccall f_7613r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7835)
static void C_ccall f_7835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7617)
static void C_ccall f_7617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7625)
static void C_fcall f_7625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7641)
static void C_ccall f_7641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7823)
static void C_ccall f_7823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7751)
static void C_fcall f_7751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7788)
static void C_ccall f_7788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7791)
static void C_ccall f_7791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7779)
static void C_ccall f_7779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7761)
static void C_ccall f_7761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7688)
static void C_fcall f_7688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7716)
static void C_ccall f_7716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7666)
static void C_ccall f_7666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7653)
static void C_ccall f_7653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8103)
static void C_fcall f_8103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8126)
static void C_fcall f_8126(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7656)
static void C_ccall f_7656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7604)
static void C_ccall f_7604(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7583)
static void C_ccall f_7583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7558)
static void C_ccall f_7558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7526)
static void C_ccall f_7526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7296)
static void C_ccall f_7296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7324)
static void C_fcall f_7324(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7455)
static void C_fcall f_7455(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7433)
static void C_ccall f_7433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7412)
static void C_ccall f_7412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7299)
static void C_fcall f_7299(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7309)
static void C_fcall f_7309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7278)
static void C_ccall f_7278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7183)
static void C_ccall f_7183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7201)
static void C_fcall f_7201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7243)
static void C_fcall f_7243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7264)
static void C_ccall f_7264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7237)
static void C_ccall f_7237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7120)
static void C_fcall f_7120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7115)
static void C_fcall f_7115(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7110)
static void C_fcall f_7110(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7098)
static void C_fcall f_7098(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7109)
static void C_ccall f_7109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7084)
static void C_ccall f_7084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7010)
static void C_fcall f_7010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_fcall f_7024(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7034)
static void C_ccall f_7034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6979)
static void C_ccall f_6979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_ccall f_6993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6846)
static void C_ccall f_6846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6945)
static void C_fcall f_6945(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6849)
static void C_fcall f_6849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6890)
static void C_fcall f_6890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6859)
static void C_ccall f_6859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6714)
static void C_ccall f_6714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6819)
static void C_ccall f_6819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6717)
static void C_fcall f_6717(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6615)
static void C_ccall f_6615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6649)
static void C_fcall f_6649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6506)
static void C_ccall f_6506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6581)
static void C_fcall f_6581(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6533)
static void C_fcall f_6533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6488)
static void C_ccall f_6488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6220)
static void C_fcall f_6220(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6258)
static void C_fcall f_6258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6445)
static C_word C_fcall f_6445(C_word t0,C_word t1);
C_noret_decl(f_6391)
static void C_ccall f_6391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6373)
static void C_ccall f_6373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6369)
static void C_ccall f_6369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6322)
static void C_ccall f_6322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6239)
static void C_fcall f_6239(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6232)
static C_word C_fcall f_6232(C_word t0);
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6166)
static void C_ccall f_6166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6113)
static void C_fcall f_6113(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5988)
static void C_fcall f_5988(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6021)
static void C_fcall f_6021(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6060)
static void C_fcall f_6060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_fcall f_6006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_fcall f_5831(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_fcall f_5777(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5788)
static C_word C_fcall f_5788(C_word t0,C_word t1);
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_fcall f_5677(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5692)
static C_word C_fcall f_5692(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5565)
static void C_fcall f_5565(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5592)
static void C_fcall f_5592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5545)
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5552)
static void C_fcall f_5552(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5479)
static void C_fcall f_5479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5415)
static void C_fcall f_5415(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5325)
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5306)
static void C_ccall f_5306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5249)
static void C_fcall f_5249(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5270)
static void C_fcall f_5270(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5087)
static void C_fcall f_5087(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3834)
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_fcall f_4428(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4983)
static void C_fcall f_4983(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4993)
static void C_fcall f_4993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4953)
static void C_fcall f_4953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4762)
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_4908)
static void C_ccall f_4908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_fcall f_4765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_fcall f_4806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4847)
static void C_fcall f_4847(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4685)
static void C_fcall f_4685(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4691)
static void C_fcall f_4691(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_fcall f_4676(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_fcall f_4648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4643)
static void C_ccall f_4643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_fcall f_4496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4464)
static void C_fcall f_4464(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4487)
static void C_ccall f_4487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4410)
static void C_ccall f_4410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4377)
static void C_ccall f_4377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4186)
static void C_fcall f_4186(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4193)
static void C_fcall f_4193(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3997)
static void C_fcall f_3997(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3928)
static void C_fcall f_3928(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3895)
static C_word C_fcall f_3895(C_word t0);
C_noret_decl(f_3889)
static C_word C_fcall f_3889(C_word t0);
C_noret_decl(f_3837)
static void C_fcall f_3837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3713)
static void C_fcall f_3713(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_fcall f_3708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3703)
static void C_fcall f_3703(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3632)
static void C_fcall f_3632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3517)
static void C_ccall f_3517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3460)
static void C_ccall f_3460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3443)
static void C_ccall f_3443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3382)
static void C_fcall f_3382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_fcall f_3377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3346)
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_fcall f_3363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_fcall f_3287(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3224)
static void C_fcall f_3224(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_fcall f_3219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3147)
static void C_fcall f_3147(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_fcall f_3180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3097)
static void C_fcall f_3097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_fcall f_3092(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3050)
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_fcall f_3060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_fcall f_2968(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2896)
static void C_fcall f_2896(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2744)
static void C_fcall f_2744(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_fcall f_2831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2696)
static void C_fcall f_2696(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2641)
static void C_fcall f_2641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2581)
static void C_fcall f_2581(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_fcall f_2576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2507)
static void C_fcall f_2507(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2542)
static void C_fcall f_2542(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_fcall f_2511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2464)
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_fcall f_2426(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2310)
static void C_fcall f_2310(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2352)
static void C_ccall f_2352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2254)
static void C_fcall f_2254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2193)
static void C_fcall f_2193(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2122)
static void C_fcall f_2122(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2093)
static void C_fcall f_2093(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2057)
static void C_fcall f_2057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2035)
static C_word C_fcall f_2035(C_word t0,C_word t1);
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1989)
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1923)
static void C_fcall f_1923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1888)
static void C_fcall f_1888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1768)
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1735)
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1653)
static void C_fcall f_1653(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1643)
static void C_fcall f_1643(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1583)
static void C_fcall f_1583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_fcall f_1596(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8945)
static void C_fcall trf_8945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8945(t0,t1,t2);}

C_noret_decl(trf_8903)
static void C_fcall trf_8903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8903(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8903(t0,t1,t2);}

C_noret_decl(trf_8831)
static void C_fcall trf_8831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8831(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8831(t0,t1);}

C_noret_decl(trf_8754)
static void C_fcall trf_8754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8754(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8754(t0,t1,t2);}

C_noret_decl(trf_8668)
static void C_fcall trf_8668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8668(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8668(t0,t1);}

C_noret_decl(trf_8537)
static void C_fcall trf_8537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8537(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8537(t0,t1,t2,t3);}

C_noret_decl(trf_8553)
static void C_fcall trf_8553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8553(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8553(t0,t1,t2,t3);}

C_noret_decl(trf_8485)
static void C_fcall trf_8485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8485(t0,t1,t2);}

C_noret_decl(trf_8417)
static void C_fcall trf_8417(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8417(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8417(t0,t1,t2,t3);}

C_noret_decl(trf_8433)
static void C_fcall trf_8433(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8433(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8433(t0,t1,t2,t3);}

C_noret_decl(trf_8352)
static void C_fcall trf_8352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8352(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8352(t0,t1,t2,t3);}

C_noret_decl(trf_8368)
static void C_fcall trf_8368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8368(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8368(t0,t1,t2,t3);}

C_noret_decl(trf_8256)
static void C_fcall trf_8256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8256(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8256(t0,t1,t2,t3);}

C_noret_decl(trf_8272)
static void C_fcall trf_8272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8272(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8272(t0,t1,t2,t3);}

C_noret_decl(trf_8188)
static void C_fcall trf_8188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8188(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8188(t0,t1,t2);}

C_noret_decl(trf_8211)
static void C_fcall trf_8211(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8211(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8211(t0,t1,t2);}

C_noret_decl(trf_8035)
static void C_fcall trf_8035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8035(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8035(t0,t1,t2,t3);}

C_noret_decl(trf_8054)
static void C_fcall trf_8054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8054(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8054(t0,t1);}

C_noret_decl(trf_7980)
static void C_fcall trf_7980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7980(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7980(t0,t1,t2,t3);}

C_noret_decl(trf_7999)
static void C_fcall trf_7999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7999(t0,t1);}

C_noret_decl(trf_7921)
static void C_fcall trf_7921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7921(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7921(t0,t1);}

C_noret_decl(trf_7625)
static void C_fcall trf_7625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7625(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7625(t0,t1);}

C_noret_decl(trf_7751)
static void C_fcall trf_7751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7751(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7751(t0,t1,t2);}

C_noret_decl(trf_7688)
static void C_fcall trf_7688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7688(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7688(t0,t1,t2);}

C_noret_decl(trf_8103)
static void C_fcall trf_8103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8103(t0,t1,t2);}

C_noret_decl(trf_8126)
static void C_fcall trf_8126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8126(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8126(t0,t1,t2);}

C_noret_decl(trf_7324)
static void C_fcall trf_7324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7324(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7324(t0,t1,t2,t3);}

C_noret_decl(trf_7455)
static void C_fcall trf_7455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7455(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7455(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7299)
static void C_fcall trf_7299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7299(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7299(t0,t1,t2,t3);}

C_noret_decl(trf_7309)
static void C_fcall trf_7309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7309(t0,t1);}

C_noret_decl(trf_7201)
static void C_fcall trf_7201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7201(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7201(t0,t1,t2);}

C_noret_decl(trf_7243)
static void C_fcall trf_7243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7243(t0,t1,t2);}

C_noret_decl(trf_7120)
static void C_fcall trf_7120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7120(t0,t1);}

C_noret_decl(trf_7115)
static void C_fcall trf_7115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7115(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7115(t0,t1,t2);}

C_noret_decl(trf_7110)
static void C_fcall trf_7110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7110(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7110(t0,t1,t2,t3);}

C_noret_decl(trf_7098)
static void C_fcall trf_7098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7098(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7098(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7010)
static void C_fcall trf_7010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7010(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7010(t0,t1);}

C_noret_decl(trf_7024)
static void C_fcall trf_7024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7024(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7024(t0,t1,t2,t3);}

C_noret_decl(trf_6945)
static void C_fcall trf_6945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6945(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6945(t0,t1,t2,t3);}

C_noret_decl(trf_6849)
static void C_fcall trf_6849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6849(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6849(t0,t1,t2);}

C_noret_decl(trf_6890)
static void C_fcall trf_6890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6890(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6890(t0,t1);}

C_noret_decl(trf_6717)
static void C_fcall trf_6717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6717(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6717(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6649)
static void C_fcall trf_6649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6649(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6649(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6581)
static void C_fcall trf_6581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6581(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6581(t0,t1,t2,t3);}

C_noret_decl(trf_6533)
static void C_fcall trf_6533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6533(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6533(t0,t1,t2);}

C_noret_decl(trf_6220)
static void C_fcall trf_6220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6220(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6220(t0,t1,t2,t3);}

C_noret_decl(trf_6258)
static void C_fcall trf_6258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6258(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6258(t0,t1);}

C_noret_decl(trf_6239)
static void C_fcall trf_6239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6239(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6239(t0,t1);}

C_noret_decl(trf_6113)
static void C_fcall trf_6113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6113(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6113(t0,t1,t2,t3);}

C_noret_decl(trf_5988)
static void C_fcall trf_5988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5988(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5988(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6021)
static void C_fcall trf_6021(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6021(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6021(t0,t1,t2);}

C_noret_decl(trf_6060)
static void C_fcall trf_6060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6060(t0,t1);}

C_noret_decl(trf_6006)
static void C_fcall trf_6006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6006(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6006(t0,t1);}

C_noret_decl(trf_5831)
static void C_fcall trf_5831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5831(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5831(t0,t1,t2,t3);}

C_noret_decl(trf_5777)
static void C_fcall trf_5777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5777(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5777(t0,t1);}

C_noret_decl(trf_5677)
static void C_fcall trf_5677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5677(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5677(t0,t1,t2,t3);}

C_noret_decl(trf_5565)
static void C_fcall trf_5565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5565(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5565(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5592)
static void C_fcall trf_5592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5592(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5592(t0,t1,t2);}

C_noret_decl(trf_5545)
static void C_fcall trf_5545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5545(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5545(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5552)
static void C_fcall trf_5552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5552(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5552(t0,t1);}

C_noret_decl(trf_5479)
static void C_fcall trf_5479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5479(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5479(t0,t1);}

C_noret_decl(trf_5415)
static void C_fcall trf_5415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5415(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5415(t0,t1);}

C_noret_decl(trf_5249)
static void C_fcall trf_5249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5249(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5249(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5270)
static void C_fcall trf_5270(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5270(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5270(t0,t1,t2,t3);}

C_noret_decl(trf_5087)
static void C_fcall trf_5087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5087(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5087(t0,t1,t2,t3);}

C_noret_decl(trf_5112)
static void C_fcall trf_5112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5112(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5112(t0,t1,t2,t3);}

C_noret_decl(trf_3834)
static void C_fcall trf_3834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3834(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3834(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4428)
static void C_fcall trf_4428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4428(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4428(t0,t1,t2,t3);}

C_noret_decl(trf_4983)
static void C_fcall trf_4983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4983(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4983(t0,t1,t2);}

C_noret_decl(trf_4993)
static void C_fcall trf_4993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4993(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4993(t0,t1);}

C_noret_decl(trf_4953)
static void C_fcall trf_4953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4953(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4953(t0,t1);}

C_noret_decl(trf_4762)
static void C_fcall trf_4762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4762(void *dummy){
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
f_4762(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_4765)
static void C_fcall trf_4765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4765(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4765(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4806)
static void C_fcall trf_4806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4806(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4806(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4847)
static void C_fcall trf_4847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4847(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4847(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4685)
static void C_fcall trf_4685(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4685(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4685(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4691)
static void C_fcall trf_4691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4691(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4691(t0,t1,t2,t3);}

C_noret_decl(trf_4676)
static void C_fcall trf_4676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4676(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4676(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4648)
static void C_fcall trf_4648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4648(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4648(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4496)
static void C_fcall trf_4496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4496(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4496(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4464)
static void C_fcall trf_4464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4464(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4464(t0,t1,t2,t3);}

C_noret_decl(trf_4431)
static void C_fcall trf_4431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4431(t0,t1,t2,t3);}

C_noret_decl(trf_3947)
static void C_fcall trf_3947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3947(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3947(t0,t1,t2,t3);}

C_noret_decl(trf_4186)
static void C_fcall trf_4186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4186(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4186(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4193)
static void C_fcall trf_4193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4193(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4193(t0,t1);}

C_noret_decl(trf_3950)
static void C_fcall trf_3950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3950(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3950(t0,t1,t2,t3);}

C_noret_decl(trf_3977)
static void C_fcall trf_3977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3977(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3977(t0,t1,t2,t3);}

C_noret_decl(trf_3997)
static void C_fcall trf_3997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3997(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3997(t0,t1,t2,t3);}

C_noret_decl(trf_3928)
static void C_fcall trf_3928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3928(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3928(t0,t1,t2,t3);}

C_noret_decl(trf_3837)
static void C_fcall trf_3837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3837(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3837(t0,t1);}

C_noret_decl(trf_3869)
static void C_fcall trf_3869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3869(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3869(t0,t1);}

C_noret_decl(trf_3713)
static void C_fcall trf_3713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3713(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3713(t0,t1);}

C_noret_decl(trf_3708)
static void C_fcall trf_3708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3708(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3708(t0,t1,t2);}

C_noret_decl(trf_3703)
static void C_fcall trf_3703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3703(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3703(t0,t1,t2,t3);}

C_noret_decl(trf_3632)
static void C_fcall trf_3632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3632(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3632(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3382)
static void C_fcall trf_3382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3382(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3382(t0,t1);}

C_noret_decl(trf_3377)
static void C_fcall trf_3377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3377(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3377(t0,t1,t2);}

C_noret_decl(trf_3346)
static void C_fcall trf_3346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3346(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3346(t0,t1,t2,t3);}

C_noret_decl(trf_3363)
static void C_fcall trf_3363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3363(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3363(t0,t1);}

C_noret_decl(trf_3287)
static void C_fcall trf_3287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3287(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3287(t0,t1);}

C_noret_decl(trf_3224)
static void C_fcall trf_3224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3224(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3224(t0,t1);}

C_noret_decl(trf_3219)
static void C_fcall trf_3219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3219(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3219(t0,t1,t2);}

C_noret_decl(trf_3147)
static void C_fcall trf_3147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3147(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3147(t0,t1,t2,t3);}

C_noret_decl(trf_3180)
static void C_fcall trf_3180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3180(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3180(t0,t1,t2);}

C_noret_decl(trf_3097)
static void C_fcall trf_3097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3097(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3097(t0,t1);}

C_noret_decl(trf_3092)
static void C_fcall trf_3092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3092(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3092(t0,t1,t2);}

C_noret_decl(trf_3050)
static void C_fcall trf_3050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3050(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3050(t0,t1,t2,t3);}

C_noret_decl(trf_3060)
static void C_fcall trf_3060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3060(t0,t1);}

C_noret_decl(trf_2968)
static void C_fcall trf_2968(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2968(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2968(t0,t1);}

C_noret_decl(trf_2976)
static void C_fcall trf_2976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2976(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2976(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2896)
static void C_fcall trf_2896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2896(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2896(t0,t1,t2,t3);}

C_noret_decl(trf_2744)
static void C_fcall trf_2744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2744(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2744(t0,t1);}

C_noret_decl(trf_2767)
static void C_fcall trf_2767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2767(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2767(t0,t1,t2);}

C_noret_decl(trf_2831)
static void C_fcall trf_2831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2831(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2831(t0,t1);}

C_noret_decl(trf_2696)
static void C_fcall trf_2696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2696(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2696(t0,t1);}

C_noret_decl(trf_2641)
static void C_fcall trf_2641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2641(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2641(t0,t1,t2);}

C_noret_decl(trf_2581)
static void C_fcall trf_2581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2581(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2581(t0,t1);}

C_noret_decl(trf_2576)
static void C_fcall trf_2576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2576(t0,t1,t2);}

C_noret_decl(trf_2507)
static void C_fcall trf_2507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2507(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2507(t0,t1,t2,t3);}

C_noret_decl(trf_2542)
static void C_fcall trf_2542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2542(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2542(t0,t1,t2);}

C_noret_decl(trf_2511)
static void C_fcall trf_2511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2511(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2511(t0,t1);}

C_noret_decl(trf_2464)
static void C_fcall trf_2464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2464(t0,t1,t2);}

C_noret_decl(trf_2426)
static void C_fcall trf_2426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2426(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2426(t0,t1);}

C_noret_decl(trf_2310)
static void C_fcall trf_2310(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2310(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2310(t0,t1,t2,t3);}

C_noret_decl(trf_2254)
static void C_fcall trf_2254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2254(t0,t1,t2);}

C_noret_decl(trf_2172)
static void C_fcall trf_2172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2172(t0,t1,t2,t3);}

C_noret_decl(trf_2193)
static void C_fcall trf_2193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2193(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2193(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2122)
static void C_fcall trf_2122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2122(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2122(t0,t1,t2,t3);}

C_noret_decl(trf_2093)
static void C_fcall trf_2093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2093(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2093(t0,t1,t2);}

C_noret_decl(trf_2057)
static void C_fcall trf_2057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2057(t0,t1,t2);}

C_noret_decl(trf_1989)
static void C_fcall trf_1989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1989(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1989(t0,t1,t2);}

C_noret_decl(trf_1923)
static void C_fcall trf_1923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1923(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1923(t0,t1,t2);}

C_noret_decl(trf_1888)
static void C_fcall trf_1888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1888(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1888(t0,t1,t2);}

C_noret_decl(trf_1768)
static void C_fcall trf_1768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1768(t0,t1,t2);}

C_noret_decl(trf_1735)
static void C_fcall trf_1735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1735(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1735(t0,t1,t2);}

C_noret_decl(trf_1653)
static void C_fcall trf_1653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1653(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1653(t0,t1);}

C_noret_decl(trf_1648)
static void C_fcall trf_1648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1648(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1648(t0,t1,t2);}

C_noret_decl(trf_1643)
static void C_fcall trf_1643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1643(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1643(t0,t1,t2,t3);}

C_noret_decl(trf_1583)
static void C_fcall trf_1583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1583(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1583(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1596)
static void C_fcall trf_1596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1596(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1596(t0,t1,t2,t3,t4);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

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
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2113)){
C_save(t1);
C_rereclaim2(2113*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,562);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],4,"read");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],9,"read-file");
lf[6]=C_static_lambda_info(C_heaptop,19,"(do20 x22 i23 xs24)");
lf[7]=C_static_lambda_info(C_heaptop,14,"(slurp port19)");
lf[8]=C_h_intern(&lf[8],5,"port\077");
lf[9]=C_static_lambda_info(C_heaptop,29,"(body8 port15 reader16 max17)");
lf[10]=C_static_lambda_info(C_heaptop,31,"(def-max12 %port530 %reader631)");
lf[11]=C_static_lambda_info(C_heaptop,23,"(def-reader11 %port533)");
lf[12]=C_h_intern(&lf[12],18,"\003sysstandard-input");
lf[13]=C_static_lambda_info(C_heaptop,12,"(def-port10)");
lf[14]=C_h_intern(&lf[14],9,"\003syserror");
lf[15]=C_static_lambda_info(C_heaptop,17,"(read-file . g34)");
lf[16]=C_h_intern(&lf[16],8,"identity");
lf[17]=C_static_lambda_info(C_heaptop,14,"(identity x42)");
lf[18]=C_h_intern(&lf[18],7,"project");
lf[19]=C_static_lambda_info(C_heaptop,17,"(f_1721 . args44)");
lf[20]=C_static_lambda_info(C_heaptop,13,"(project n43)");
lf[21]=C_h_intern(&lf[21],7,"conjoin");
lf[22]=C_static_lambda_info(C_heaptop,14,"(loop preds48)");
lf[23]=C_static_lambda_info(C_heaptop,12,"(f_1729 x46)");
lf[24]=C_static_lambda_info(C_heaptop,19,"(conjoin . preds45)");
lf[25]=C_h_intern(&lf[25],7,"disjoin");
lf[26]=C_static_lambda_info(C_heaptop,14,"(loop preds55)");
lf[27]=C_static_lambda_info(C_heaptop,12,"(f_1762 x53)");
lf[28]=C_static_lambda_info(C_heaptop,19,"(disjoin . preds52)");
lf[29]=C_h_intern(&lf[29],10,"constantly");
lf[30]=C_static_lambda_info(C_heaptop,14,"(f_1808 . _61)");
lf[31]=C_static_lambda_info(C_heaptop,14,"(f_1810 . _62)");
lf[32]=C_static_lambda_info(C_heaptop,19,"(constantly . xs59)");
lf[33]=C_h_intern(&lf[33],4,"flip");
lf[34]=C_static_lambda_info(C_heaptop,16,"(f_1822 x64 y65)");
lf[35]=C_static_lambda_info(C_heaptop,13,"(flip proc63)");
lf[36]=C_h_intern(&lf[36],10,"complement");
lf[37]=C_static_lambda_info(C_heaptop,17,"(f_1830 . args67)");
lf[38]=C_static_lambda_info(C_heaptop,16,"(complement p66)");
lf[39]=C_h_intern(&lf[39],7,"compose");
lf[40]=C_static_lambda_info(C_heaptop,7,"(a1856)");
lf[41]=C_static_lambda_info(C_heaptop,17,"(f_1851 . args72)");
lf[42]=C_static_lambda_info(C_heaptop,18,"(rec f070 . fns71)");
lf[43]=C_h_intern(&lf[43],6,"values");
lf[44]=C_static_lambda_info(C_heaptop,17,"(compose . fns68)");
lf[45]=C_h_intern(&lf[45],1,"o");
lf[46]=C_static_lambda_info(C_heaptop,12,"(f_1902 x79)");
lf[47]=C_static_lambda_info(C_heaptop,12,"(loop fns76)");
lf[48]=C_static_lambda_info(C_heaptop,11,"(o . fns74)");
lf[49]=C_h_intern(&lf[49],7,"list-of");
lf[50]=C_static_lambda_info(C_heaptop,12,"(loop lst84)");
lf[51]=C_static_lambda_info(C_heaptop,14,"(f_1917 lst82)");
lf[52]=C_static_lambda_info(C_heaptop,16,"(list-of pred81)");
lf[53]=C_h_intern(&lf[53],4,"noop");
lf[54]=C_h_intern(&lf[54],19,"\003sysundefined-value");
lf[55]=C_static_lambda_info(C_heaptop,12,"(noop . _86)");
lf[56]=C_h_intern(&lf[56],4,"each");
lf[57]=C_static_lambda_info(C_heaptop,14,"(f_1969 . _88)");
lf[58]=C_static_lambda_info(C_heaptop,14,"(loop procs91)");
lf[59]=C_static_lambda_info(C_heaptop,17,"(f_1983 . args89)");
lf[60]=C_static_lambda_info(C_heaptop,16,"(each . procs87)");
lf[61]=C_h_intern(&lf[61],4,"any\077");
lf[62]=C_static_lambda_info(C_heaptop,10,"(any\077 x96)");
lf[63]=C_h_intern(&lf[63],5,"atom\077");
lf[64]=C_static_lambda_info(C_heaptop,11,"(atom\077 x97)");
lf[65]=C_h_intern(&lf[65],5,"tail\077");
lf[66]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[67]=C_static_lambda_info(C_heaptop,15,"(tail\077 x98 y99)");
lf[68]=C_h_intern(&lf[68],11,"intersperse");
lf[69]=C_static_lambda_info(C_heaptop,12,"(loop ns109)");
lf[70]=C_static_lambda_info(C_heaptop,25,"(intersperse lst106 x107)");
lf[71]=C_h_intern(&lf[71],7,"butlast");
lf[72]=C_static_lambda_info(C_heaptop,13,"(loop lst114)");
lf[73]=C_static_lambda_info(C_heaptop,16,"(butlast lst112)");
lf[74]=C_h_intern(&lf[74],7,"flatten");
lf[75]=C_static_lambda_info(C_heaptop,23,"(loop lists120 rest121)");
lf[76]=C_static_lambda_info(C_heaptop,21,"(flatten . lists0118)");
lf[77]=C_h_intern(&lf[77],4,"chop");
lf[78]=C_static_lambda_info(C_heaptop,24,"(do132 hd134 tl135 c136)");
lf[79]=C_static_lambda_info(C_heaptop,18,"(loop lst130 i131)");
lf[80]=C_static_string(C_heaptop,24,"invalid numeric argument");
lf[81]=C_static_lambda_info(C_heaptop,18,"(chop lst126 n127)");
lf[82]=C_h_intern(&lf[82],4,"join");
lf[83]=C_h_intern(&lf[83],10,"\003sysappend");
lf[84]=C_h_intern(&lf[84],27,"\003sysnot-a-proper-list-error");
lf[85]=C_static_lambda_info(C_heaptop,14,"(loop lsts145)");
lf[86]=C_static_lambda_info(C_heaptop,23,"(join lsts141 . lst142)");
lf[87]=C_h_intern(&lf[87],8,"compress");
lf[88]=C_static_string(C_heaptop,37,"bad argument type - not a proper list");
lf[89]=C_h_intern(&lf[89],15,"\003syssignal-hook");
lf[90]=C_h_intern(&lf[90],11,"\000type-error");
lf[91]=C_static_lambda_info(C_heaptop,21,"(loop blst154 lst155)");
lf[92]=C_static_lambda_info(C_heaptop,25,"(compress blst150 lst151)");
lf[93]=C_h_intern(&lf[93],7,"shuffle");
lf[94]=C_h_intern(&lf[94],7,"\003sysmap");
lf[95]=C_h_intern(&lf[95],3,"cdr");
lf[96]=C_static_lambda_info(C_heaptop,17,"(a2394 x160 y161)");
lf[97]=C_h_intern(&lf[97],5,"sort!");
lf[98]=C_h_intern(&lf[98],6,"random");
lf[99]=C_static_lambda_info(C_heaptop,12,"(a2408 x159)");
lf[100]=C_static_lambda_info(C_heaptop,14,"(shuffle l158)");
lf[101]=C_h_intern(&lf[101],13,"alist-update!");
lf[102]=C_h_intern(&lf[102],4,"eqv\077");
lf[103]=C_h_intern(&lf[103],3,"eq\077");
lf[104]=C_h_intern(&lf[104],4,"assq");
lf[105]=C_h_intern(&lf[105],4,"assv");
lf[106]=C_h_intern(&lf[106],6,"equal\077");
lf[107]=C_h_intern(&lf[107],5,"assoc");
lf[108]=C_static_lambda_info(C_heaptop,13,"(loop lst171)");
lf[109]=C_static_lambda_info(C_heaptop,20,"(f_2458 x168 lst169)");
lf[110]=C_static_lambda_info(C_heaptop,41,"(alist-update! x162 y163 lst164 . cmp165)");
lf[111]=C_h_intern(&lf[111],9,"alist-ref");
lf[112]=C_static_lambda_info(C_heaptop,13,"(loop lst194)");
lf[113]=C_static_lambda_info(C_heaptop,20,"(f_2536 x191 lst192)");
lf[114]=C_static_lambda_info(C_heaptop,27,"(body182 cmp188 default189)");
lf[115]=C_static_lambda_info(C_heaptop,27,"(def-default185 %cmp180199)");
lf[116]=C_static_lambda_info(C_heaptop,12,"(def-cmp184)");
lf[117]=C_static_lambda_info(C_heaptop,33,"(alist-ref x177 lst178 . g176179)");
lf[118]=C_h_intern(&lf[118],6,"rassoc");
lf[119]=C_static_lambda_info(C_heaptop,11,"(loop l210)");
lf[120]=C_static_lambda_info(C_heaptop,29,"(rassoc x205 lst206 . tst207)");
lf[121]=C_static_lambda_info(C_heaptop,13,"(random n215)");
lf[122]=C_h_intern(&lf[122],9,"randomize");
lf[123]=C_static_lambda_info(C_heaptop,18,"(randomize . n217)");
lf[124]=C_h_intern(&lf[124],11,"make-string");
lf[125]=C_h_intern(&lf[125],9,"read-line");
lf[126]=C_h_intern(&lf[126],13,"\003syssubstring");
lf[127]=C_h_intern(&lf[127],15,"\003sysread-char-0");
lf[128]=C_h_intern(&lf[128],9,"peek-char");
lf[129]=C_h_intern(&lf[129],17,"\003sysstring-append");
lf[130]=C_static_lambda_info(C_heaptop,11,"(loop i234)");
lf[131]=C_h_intern(&lf[131],15,"\003sysmake-string");
lf[132]=C_h_intern(&lf[132],14,"\003syscheck-port");
lf[133]=C_static_lambda_info(C_heaptop,21,"(read-line . args224)");
lf[134]=C_h_intern(&lf[134],10,"read-lines");
lf[135]=C_static_lambda_info(C_heaptop,18,"(loop lns256 n257)");
lf[136]=C_static_lambda_info(C_heaptop,16,"(doread port254)");
lf[137]=C_static_lambda_info(C_heaptop,30,"(read-lines . port-and-max249)");
lf[138]=C_h_intern(&lf[138],16,"\003sysread-string!");
lf[139]=C_static_lambda_info(C_heaptop,25,"(loop start271 n272 m273)");
lf[140]=C_static_lambda_info(C_heaptop,50,"(##sys#read-string! n264 dest265 port266 start267)");
lf[141]=C_h_intern(&lf[141],12,"read-string!");
lf[142]=C_static_lambda_info(C_heaptop,26,"(body287 port293 start294)");
lf[143]=C_static_lambda_info(C_heaptop,26,"(def-start290 %port285301)");
lf[144]=C_static_lambda_info(C_heaptop,13,"(def-port289)");
lf[145]=C_static_lambda_info(C_heaptop,37,"(read-string! n282 dest283 . g281284)");
lf[146]=C_h_intern(&lf[146],18,"open-output-string");
lf[147]=C_h_intern(&lf[147],17,"get-output-string");
lf[148]=C_h_intern(&lf[148],11,"read-string");
lf[149]=C_h_intern(&lf[149],14,"\003syswrite-char");
lf[150]=C_static_lambda_info(C_heaptop,11,"(loop n326)");
lf[151]=C_static_lambda_info(C_heaptop,19,"(body313 n319 p320)");
lf[152]=C_static_lambda_info(C_heaptop,19,"(def-p316 %n311334)");
lf[153]=C_static_lambda_info(C_heaptop,10,"(def-n315)");
lf[154]=C_static_lambda_info(C_heaptop,23,"(read-string . g309310)");
lf[155]=C_h_intern(&lf[155],10,"read-token");
lf[156]=C_h_intern(&lf[156],16,"\003syswrite-char-0");
lf[157]=C_h_intern(&lf[157],15,"\003syspeek-char-0");
lf[158]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[159]=C_static_lambda_info(C_heaptop,30,"(read-token pred342 . port343)");
lf[160]=C_h_intern(&lf[160],7,"display");
lf[161]=C_h_intern(&lf[161],12,"write-string");
lf[162]=C_static_lambda_info(C_heaptop,22,"(body358 n364 port365)");
lf[163]=C_h_intern(&lf[163],19,"\003sysstandard-output");
lf[164]=C_static_lambda_info(C_heaptop,22,"(def-port361 %n356369)");
lf[165]=C_static_lambda_info(C_heaptop,10,"(def-n360)");
lf[166]=C_static_lambda_info(C_heaptop,29,"(write-string s354 . more355)");
lf[167]=C_h_intern(&lf[167],7,"newline");
lf[168]=C_h_intern(&lf[168],10,"write-line");
lf[169]=C_static_lambda_info(C_heaptop,29,"(write-line str378 . port379)");
lf[170]=C_h_intern(&lf[170],20,"with-input-from-port");
lf[171]=C_static_lambda_info(C_heaptop,7,"(a3459)");
lf[172]=C_static_lambda_info(C_heaptop,7,"(a3467)");
lf[173]=C_static_lambda_info(C_heaptop,7,"(a3473)");
lf[174]=C_h_intern(&lf[174],16,"\003sysdynamic-wind");
lf[175]=C_static_lambda_info(C_heaptop,39,"(with-input-from-port port384 thunk385)");
lf[176]=C_h_intern(&lf[176],19,"with-output-to-port");
lf[177]=C_static_lambda_info(C_heaptop,7,"(a3490)");
lf[178]=C_static_lambda_info(C_heaptop,7,"(a3498)");
lf[179]=C_static_lambda_info(C_heaptop,7,"(a3504)");
lf[180]=C_h_intern(&lf[180],21,"with-output-from-port");
lf[181]=C_static_lambda_info(C_heaptop,38,"(with-output-to-port port395 thunk396)");
lf[182]=C_h_intern(&lf[182],25,"with-error-output-to-port");
lf[183]=C_h_intern(&lf[183],18,"\003sysstandard-error");
lf[184]=C_static_lambda_info(C_heaptop,7,"(a3521)");
lf[185]=C_static_lambda_info(C_heaptop,7,"(a3529)");
lf[186]=C_static_lambda_info(C_heaptop,7,"(a3535)");
lf[187]=C_h_intern(&lf[187],27,"with-error-output-from-port");
lf[188]=C_static_lambda_info(C_heaptop,44,"(with-error-output-to-port port406 thunk407)");
lf[189]=C_h_intern(&lf[189],17,"open-input-string");
lf[190]=C_h_intern(&lf[190],22,"call-with-input-string");
lf[191]=C_static_lambda_info(C_heaptop,39,"(call-with-input-string str418 proc419)");
lf[192]=C_h_intern(&lf[192],23,"call-with-output-string");
lf[193]=C_static_lambda_info(C_heaptop,33,"(call-with-output-string proc423)");
lf[194]=C_h_intern(&lf[194],22,"with-input-from-string");
lf[195]=C_static_lambda_info(C_heaptop,7,"(a3573)");
lf[196]=C_static_lambda_info(C_heaptop,7,"(a3581)");
lf[197]=C_static_lambda_info(C_heaptop,7,"(a3587)");
lf[198]=C_static_lambda_info(C_heaptop,40,"(with-input-from-string str427 thunk428)");
lf[199]=C_h_intern(&lf[199],21,"with-output-to-string");
lf[200]=C_static_lambda_info(C_heaptop,7,"(a3604)");
lf[201]=C_static_lambda_info(C_heaptop,7,"(a3612)");
lf[202]=C_static_lambda_info(C_heaptop,7,"(a3621)");
lf[203]=C_static_lambda_info(C_heaptop,32,"(with-output-to-string thunk439)");
lf[204]=C_h_intern(&lf[204],15,"make-input-port");
lf[205]=C_static_lambda_info(C_heaptop,12,"(a3646 p468)");
lf[206]=C_static_lambda_info(C_heaptop,12,"(a3667 p471)");
lf[207]=C_static_lambda_info(C_heaptop,12,"(a3688 p475)");
lf[208]=C_static_lambda_info(C_heaptop,12,"(a3697 p477)");
lf[209]=C_h_intern(&lf[209],13,"\003sysmake-port");
lf[210]=C_static_string(C_heaptop,8,"(custom)");
lf[211]=C_h_intern(&lf[211],6,"custom");
lf[212]=C_static_lambda_info(C_heaptop,45,"(body457 peek464 read-string465 read-line466)");
lf[213]=C_static_lambda_info(C_heaptop,49,"(def-read-line461 %peek454482 %read-string455483)");
lf[214]=C_static_lambda_info(C_heaptop,32,"(def-read-string460 %peek454485)");
lf[215]=C_static_lambda_info(C_heaptop,13,"(def-peek459)");
lf[216]=C_static_lambda_info(C_heaptop,54,"(make-input-port read450 ready\077451 close452 . g449453)");
lf[217]=C_h_intern(&lf[217],6,"string");
lf[218]=C_h_intern(&lf[218],16,"make-output-port");
lf[219]=C_static_lambda_info(C_heaptop,17,"(a3793 p499 c500)");
lf[220]=C_static_lambda_info(C_heaptop,17,"(a3803 p501 s502)");
lf[221]=C_static_lambda_info(C_heaptop,12,"(a3809 p503)");
lf[222]=C_static_lambda_info(C_heaptop,12,"(a3818 p505)");
lf[223]=C_static_string(C_heaptop,8,"(custom)");
lf[224]=C_static_lambda_info(C_heaptop,47,"(make-output-port write494 close495 . flush496)");
lf[226]=C_h_intern(&lf[226],5,"quote");
lf[227]=C_h_intern(&lf[227],10,"quasiquote");
lf[228]=C_h_intern(&lf[228],7,"unquote");
lf[229]=C_h_intern(&lf[229],16,"unquote-splicing");
lf[230]=C_static_lambda_info(C_heaptop,18,"(read-macro\077 l521)");
lf[231]=C_static_lambda_info(C_heaptop,17,"(read-macro-body)");
lf[232]=C_static_string(C_heaptop,1,"\047");
lf[233]=C_static_string(C_heaptop,1,"`");
lf[234]=C_static_string(C_heaptop,1,",");
lf[235]=C_static_string(C_heaptop,2,",@");
lf[236]=C_static_lambda_info(C_heaptop,19,"(read-macro-prefix)");
lf[237]=C_static_lambda_info(C_heaptop,19,"(out str541 col542)");
lf[238]=C_static_string(C_heaptop,1," ");
lf[239]=C_static_string(C_heaptop,1,")");
lf[240]=C_static_string(C_heaptop,1,")");
lf[241]=C_static_string(C_heaptop,3," . ");
lf[242]=C_static_lambda_info(C_heaptop,18,"(loop l552 col553)");
lf[243]=C_static_string(C_heaptop,1,"(");
lf[244]=C_static_string(C_heaptop,2,"()");
lf[245]=C_static_lambda_info(C_heaptop,20,"(wr-lst l549 col550)");
lf[246]=C_static_lambda_info(C_heaptop,24,"(wr-expr expr547 col548)");
lf[247]=C_static_string(C_heaptop,6,"#<eof>");
lf[248]=C_static_string(C_heaptop,1,"#");
lf[249]=C_h_intern(&lf[249],12,"vector->list");
lf[250]=C_static_string(C_heaptop,2,"#t");
lf[251]=C_static_string(C_heaptop,2,"#f");
lf[252]=C_h_intern(&lf[252],18,"\003sysnumber->string");
lf[253]=C_h_intern(&lf[253],9,"\003sysprint");
lf[254]=C_h_intern(&lf[254],21,"\003sysprocedure->string");
lf[255]=C_static_string(C_heaptop,1,"\134");
lf[256]=C_static_string(C_heaptop,1,"\042");
lf[257]=C_static_lambda_info(C_heaptop,23,"(loop i558 j559 col560)");
lf[258]=C_static_string(C_heaptop,1,"\042");
lf[259]=C_static_string(C_heaptop,1,"x");
lf[260]=C_static_string(C_heaptop,1,"U");
lf[261]=C_static_string(C_heaptop,1,"u");
lf[262]=C_h_intern(&lf[262],9,"char-name");
lf[263]=C_static_string(C_heaptop,2,"#\134");
lf[264]=C_static_string(C_heaptop,6,"#<eof>");
lf[265]=C_static_string(C_heaptop,14,"#<unspecified>");
lf[266]=C_h_intern(&lf[266],19,"\003syspointer->string");
lf[267]=C_h_intern(&lf[267],19,"\003sysuser-print-hook");
lf[268]=C_h_intern(&lf[268],13,"string-append");
lf[269]=C_static_string(C_heaptop,7,"#<port ");
lf[270]=C_static_string(C_heaptop,1,">");
lf[271]=C_static_string(C_heaptop,2,"#>");
lf[272]=C_h_intern(&lf[272],23,"\003syslambda-info->string");
lf[273]=C_static_string(C_heaptop,14,"#<lambda info ");
lf[274]=C_h_intern(&lf[274],28,"\003sysarbitrary-unbound-symbol");
lf[275]=C_static_string(C_heaptop,16,"#<unbound value>");
lf[276]=C_static_string(C_heaptop,21,"#<unprintable object>");
lf[277]=C_h_intern(&lf[277],11,"\003sysnumber\077");
lf[278]=C_static_lambda_info(C_heaptop,18,"(wr obj543 col544)");
lf[279]=C_static_string(C_heaptop,8,"        ");
lf[280]=C_static_string(C_heaptop,8,"        ");
lf[281]=C_static_lambda_info(C_heaptop,20,"(spaces n601 col602)");
lf[282]=C_static_lambda_info(C_heaptop,21,"(indent to603 col604)");
lf[283]=C_h_intern(&lf[283],28,"\006extrasreverse-string-append");
lf[284]=C_static_string(C_heaptop,1,"#");
lf[285]=C_static_lambda_info(C_heaptop,14,"(a4546 str613)");
lf[286]=C_h_intern(&lf[286],3,"max");
lf[287]=C_static_lambda_info(C_heaptop,38,"(pr obj605 col606 extra607 pp-pair608)");
lf[288]=C_h_intern(&lf[288],28,"\003syssymbol->qualified-string");
lf[289]=C_static_lambda_info(C_heaptop,33,"(pp-expr expr617 col618 extra619)");
lf[290]=C_static_string(C_heaptop,1,"(");
lf[291]=C_static_lambda_info(C_heaptop,44,"(pp-call expr622 col623 extra624 pp-item625)");
lf[292]=C_static_string(C_heaptop,1,"(");
lf[293]=C_static_lambda_info(C_heaptop,41,"(pp-list l627 col628 extra629 pp-item630)");
lf[294]=C_static_string(C_heaptop,1,")");
lf[295]=C_static_string(C_heaptop,1,")");
lf[296]=C_static_string(C_heaptop,1,".");
lf[297]=C_static_lambda_info(C_heaptop,18,"(loop l638 col639)");
lf[298]=C_static_lambda_info(C_heaptop,50,"(pp-down l632 col1633 col2634 extra635 pp-item636)");
lf[299]=C_static_lambda_info(C_heaptop,31,"(tail3 rest667 col1668 col2669)");
lf[300]=C_static_lambda_info(C_heaptop,39,"(tail2 rest660 col1661 col2662 col3663)");
lf[301]=C_static_lambda_info(C_heaptop,39,"(tail1 rest653 col1654 col2655 col3656)");
lf[302]=C_static_string(C_heaptop,1," ");
lf[303]=C_static_string(C_heaptop,1,"(");
lf[304]=C_static_lambda_info(C_heaptop,70,"(pp-general expr643 col644 extra645 named\077646 pp-1647 pp-2648 pp-3649)");
lf[305]=C_static_lambda_info(C_heaptop,35,"(pp-expr-list l679 col680 extra681)");
lf[306]=C_static_lambda_info(C_heaptop,35,"(pp-lambda expr682 col683 extra684)");
lf[307]=C_static_lambda_info(C_heaptop,31,"(pp-if expr685 col686 extra687)");
lf[308]=C_static_lambda_info(C_heaptop,33,"(pp-cond expr688 col689 extra690)");
lf[309]=C_static_lambda_info(C_heaptop,33,"(pp-case expr691 col692 extra693)");
lf[310]=C_static_lambda_info(C_heaptop,32,"(pp-and expr694 col695 extra696)");
lf[311]=C_static_lambda_info(C_heaptop,32,"(pp-let expr697 col698 extra699)");
lf[312]=C_static_lambda_info(C_heaptop,34,"(pp-begin expr702 col703 extra704)");
lf[313]=C_static_lambda_info(C_heaptop,31,"(pp-do expr705 col706 extra707)");
lf[314]=C_h_intern(&lf[314],6,"lambda");
lf[315]=C_h_intern(&lf[315],2,"if");
lf[316]=C_h_intern(&lf[316],4,"set!");
lf[317]=C_h_intern(&lf[317],4,"cond");
lf[318]=C_h_intern(&lf[318],4,"case");
lf[319]=C_h_intern(&lf[319],3,"and");
lf[320]=C_h_intern(&lf[320],2,"or");
lf[321]=C_h_intern(&lf[321],3,"let");
lf[322]=C_h_intern(&lf[322],5,"begin");
lf[323]=C_h_intern(&lf[323],2,"do");
lf[324]=C_h_intern(&lf[324],4,"let*");
lf[325]=C_h_intern(&lf[325],6,"letrec");
lf[326]=C_h_intern(&lf[326],6,"define");
lf[327]=C_static_lambda_info(C_heaptop,15,"(style head708)");
lf[328]=C_static_lambda_info(C_heaptop,18,"(pp obj578 col579)");
lf[329]=C_static_lambda_info(C_heaptop,62,"(##extras#generic-write obj511 display\077512 width513 output514)");
lf[330]=C_static_lambda_info(C_heaptop,16,"(loop j756 k757)");
lf[331]=C_static_lambda_info(C_heaptop,29,"(rev-string-append l750 i751)");
lf[332]=C_static_lambda_info(C_heaptop,37,"(##extras#reverse-string-append l748)");
lf[333]=C_h_intern(&lf[333],18,"pretty-print-width");
lf[334]=C_h_intern(&lf[334],12,"pretty-print");
lf[335]=C_static_lambda_info(C_heaptop,12,"(a5177 s764)");
lf[336]=C_h_intern(&lf[336],19,"current-output-port");
lf[337]=C_static_lambda_info(C_heaptop,30,"(pretty-print obj761 . opt762)");
lf[338]=C_h_intern(&lf[338],2,"pp");
lf[339]=C_h_intern(&lf[339],8,"->string");
lf[340]=C_h_intern(&lf[340],14,"symbol->string");
lf[341]=C_static_lambda_info(C_heaptop,15,"(->string x771)");
lf[342]=C_h_intern(&lf[342],4,"conc");
lf[343]=C_static_lambda_info(C_heaptop,16,"(conc . args775)");
lf[344]=C_static_lambda_info(C_heaptop,24,"(loop istart785 iend786)");
lf[345]=C_static_lambda_info(C_heaptop,52,"(traverse which777 where778 start779 test780 loc781)");
lf[346]=C_h_intern(&lf[346],15,"substring-index");
lf[347]=C_static_lambda_info(C_heaptop,17,"(a5305 i794 l795)");
lf[348]=C_static_lambda_info(C_heaptop,46,"(substring-index which791 where792 . start793)");
lf[349]=C_h_intern(&lf[349],18,"substring-index-ci");
lf[350]=C_static_lambda_info(C_heaptop,17,"(a5324 i799 l800)");
lf[351]=C_static_lambda_info(C_heaptop,49,"(substring-index-ci which796 where797 . start798)");
lf[352]=C_h_intern(&lf[352],15,"string-compare3");
lf[353]=C_static_lambda_info(C_heaptop,29,"(string-compare3 s1803 s2804)");
lf[354]=C_h_intern(&lf[354],18,"string-compare3-ci");
lf[355]=C_static_lambda_info(C_heaptop,32,"(string-compare3-ci s1811 s2812)");
lf[356]=C_h_intern(&lf[356],11,"substring=\077");
lf[357]=C_static_lambda_info(C_heaptop,36,"(substring=\077 s1819 s2820 . start821)");
lf[358]=C_h_intern(&lf[358],14,"substring-ci=\077");
lf[359]=C_static_lambda_info(C_heaptop,39,"(substring-ci=\077 s1830 s2831 . start832)");
lf[360]=C_h_intern(&lf[360],12,"string-split");
lf[361]=C_static_string(C_heaptop,3,"\011\012 ");
lf[362]=C_static_lambda_info(C_heaptop,27,"(add from849 to850 last851)");
lf[363]=C_static_lambda_info(C_heaptop,11,"(scan j865)");
lf[364]=C_static_lambda_info(C_heaptop,27,"(loop i855 last856 from857)");
lf[365]=C_static_lambda_info(C_heaptop,42,"(string-split str841 . delstr-and-flag842)");
lf[366]=C_h_intern(&lf[366],18,"string-intersperse");
lf[367]=C_static_string(C_heaptop,0,"");
lf[368]=C_static_lambda_info(C_heaptop,13,"(loop2 n2887)");
lf[369]=C_h_intern(&lf[369],19,"\003sysallocate-vector");
lf[370]=C_static_lambda_info(C_heaptop,18,"(loop1 ss882 n883)");
lf[371]=C_static_string(C_heaptop,1," ");
lf[372]=C_static_lambda_info(C_heaptop,38,"(string-intersperse strs875 . g874876)");
lf[373]=C_h_intern(&lf[373],12,"list->string");
lf[374]=C_h_intern(&lf[374],16,"string-translate");
lf[375]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[376]=C_static_lambda_info(C_heaptop,13,"(f_5782 c908)");
lf[377]=C_static_lambda_info(C_heaptop,15,"(instring s906)");
lf[378]=C_static_string(C_heaptop,31,"invalid translation destination");
lf[379]=C_static_lambda_info(C_heaptop,16,"(loop i922 j923)");
lf[380]=C_static_lambda_info(C_heaptop,13,"(f_5951 c913)");
lf[381]=C_static_lambda_info(C_heaptop,41,"(string-translate str902 from903 . to904)");
lf[382]=C_h_intern(&lf[382],17,"string-translate*");
lf[383]=C_h_intern(&lf[383],21,"\003sysfragments->string");
lf[384]=C_static_lambda_info(C_heaptop,14,"(loop smap941)");
lf[385]=C_static_lambda_info(C_heaptop,37,"(collect i936 from937 total938 fs939)");
lf[386]=C_static_lambda_info(C_heaptop,34,"(string-translate* str932 smap933)");
lf[387]=C_h_intern(&lf[387],11,"string-chop");
lf[388]=C_static_lambda_info(C_heaptop,22,"(loop total956 pos957)");
lf[389]=C_static_lambda_info(C_heaptop,27,"(string-chop str952 len953)");
lf[390]=C_h_intern(&lf[390],12,"string-chomp");
lf[391]=C_static_string(C_heaptop,1,"\012");
lf[392]=C_static_lambda_info(C_heaptop,31,"(string-chomp str962 . g961963)");
lf[393]=C_h_intern(&lf[393],5,"write");
lf[394]=C_h_intern(&lf[394],7,"fprintf");
lf[395]=C_static_string(C_heaptop,47,"too few arguments to formatted output procedure");
lf[396]=C_static_lambda_info(C_heaptop,6,"(next)");
lf[397]=C_h_intern(&lf[397],16,"\003sysflush-output");
lf[398]=C_static_lambda_info(C_heaptop,6,"(skip)");
lf[399]=C_static_string(C_heaptop,31,"illegal format-string character");
lf[400]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[401]=C_static_lambda_info(C_heaptop,20,"(rec msg979 args980)");
lf[402]=C_static_lambda_info(C_heaptop,34,"(fprintf port975 msg976 . args977)");
lf[403]=C_h_intern(&lf[403],6,"printf");
lf[404]=C_static_lambda_info(C_heaptop,27,"(printf msg1011 . args1012)");
lf[405]=C_h_intern(&lf[405],7,"sprintf");
lf[406]=C_static_lambda_info(C_heaptop,29,"(sprintf fstr1016 . args1017)");
lf[407]=C_h_intern(&lf[407],6,"format");
lf[408]=C_h_intern(&lf[408],7,"sorted\077");
lf[409]=C_static_lambda_info(C_heaptop,14,"(do1023 i1025)");
lf[410]=C_static_lambda_info(C_heaptop,24,"(loop last1030 next1031)");
lf[411]=C_static_lambda_info(C_heaptop,27,"(sorted\077 seq1020 less\0771021)");
lf[412]=C_h_intern(&lf[412],5,"merge");
lf[413]=C_static_lambda_info(C_heaptop,30,"(loop x1039 a1040 y1041 b1042)");
lf[414]=C_static_lambda_info(C_heaptop,29,"(merge a1035 b1036 less\0771037)");
lf[415]=C_h_intern(&lf[415],6,"merge!");
lf[416]=C_static_lambda_info(C_heaptop,24,"(loop r1048 a1049 b1050)");
lf[417]=C_static_lambda_info(C_heaptop,30,"(merge! a1044 b1045 less\0771046)");
lf[418]=C_static_lambda_info(C_heaptop,12,"(step n1059)");
lf[419]=C_static_lambda_info(C_heaptop,20,"(do1076 p1078 i1079)");
lf[420]=C_static_lambda_info(C_heaptop,25,"(sort! seq1056 less\0771057)");
lf[421]=C_h_intern(&lf[421],4,"sort");
lf[422]=C_h_intern(&lf[422],12,"list->vector");
lf[423]=C_h_intern(&lf[423],6,"append");
lf[424]=C_static_lambda_info(C_heaptop,24,"(sort seq1084 less\0771085)");
lf[425]=C_h_intern(&lf[425],13,"binary-search");
lf[426]=C_static_lambda_info(C_heaptop,20,"(loop ps1091 pe1092)");
lf[427]=C_static_lambda_info(C_heaptop,32,"(binary-search vec1087 proc1088)");
tmp=C_fix(307);
C_save(tmp);
tmp=C_fix(617);
C_save(tmp);
tmp=C_fix(1237);
C_save(tmp);
tmp=C_fix(2477);
C_save(tmp);
tmp=C_fix(4957);
C_save(tmp);
tmp=C_fix(9923);
C_save(tmp);
tmp=C_fix(19853);
C_save(tmp);
tmp=C_fix(39709);
C_save(tmp);
tmp=C_fix(79423);
C_save(tmp);
tmp=C_fix(158849);
C_save(tmp);
tmp=C_fix(317701);
C_save(tmp);
tmp=C_fix(635413);
C_save(tmp);
tmp=C_fix(1270849);
C_save(tmp);
tmp=C_fix(2541701);
C_save(tmp);
tmp=C_fix(5083423);
C_save(tmp);
tmp=C_fix(10166857);
C_save(tmp);
tmp=C_fix(20333759);
C_save(tmp);
tmp=C_fix(40667527);
C_save(tmp);
tmp=C_fix(81335063);
C_save(tmp);
tmp=C_fix(162670129);
C_save(tmp);
tmp=C_fix(325340273);
C_save(tmp);
tmp=C_fix(650680571);
C_save(tmp);
tmp=C_fix(1073741823);
C_save(tmp);
lf[429]=C_h_list(23,C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(23);
lf[430]=C_h_intern(&lf[430],11,"hash-table\077");
lf[431]=C_h_intern(&lf[431],10,"hash-table");
lf[432]=C_static_lambda_info(C_heaptop,19,"(hash-table\077 x1099)");
lf[433]=C_h_intern(&lf[433],11,"make-vector");
lf[434]=C_h_intern(&lf[434],15,"make-hash-table");
lf[435]=C_static_lambda_info(C_heaptop,37,"(body1105 test1112 hashf1113 len1114)");
lf[436]=C_static_lambda_info(C_heaptop,42,"(def-len1109 %test11021117 %hashf11031118)");
lf[438]=C_static_lambda_info(C_heaptop,29,"(def-hashf1108 %test11021120)");
lf[439]=C_static_lambda_info(C_heaptop,14,"(def-test1107)");
lf[440]=C_static_lambda_info(C_heaptop,37,"(make-hash-table . test-and-size1101)");
lf[441]=C_h_intern(&lf[441],15,"hash-table-copy");
lf[442]=C_static_lambda_info(C_heaptop,14,"(copy lst1137)");
lf[443]=C_static_lambda_info(C_heaptop,14,"(do1133 i1135)");
lf[444]=C_static_lambda_info(C_heaptop,24,"(hash-table-copy ht1129)");
lf[445]=C_h_intern(&lf[445],31,"hash-table-equivalence-function");
lf[446]=C_static_lambda_info(C_heaptop,40,"(hash-table-equivalence-function ht1143)");
lf[447]=C_h_intern(&lf[447],24,"hash-table-hash-function");
lf[448]=C_static_lambda_info(C_heaptop,33,"(hash-table-hash-function ht1145)");
lf[449]=C_static_lambda_info(C_heaptop,28,"(hash-with-test x1151 d1152)");
lf[450]=C_h_intern(&lf[450],11,"input-port\077");
lf[451]=C_static_lambda_info(C_heaptop,26,"(loop k1162 i1163 len1164)");
lf[452]=C_static_lambda_info(C_heaptop,21,"(rechash x1157 d1158)");
lf[453]=C_h_intern(&lf[453],4,"hash");
lf[454]=C_static_lambda_info(C_heaptop,23,"(%hash x1147 limit1148)");
lf[455]=C_static_lambda_info(C_heaptop,24,"(hash x1171 . g11701172)");
lf[456]=C_h_intern(&lf[456],16,"hash-by-identity");
lf[457]=C_h_intern(&lf[457],11,"string-hash");
lf[458]=C_static_lambda_info(C_heaptop,31,"(string-hash s1178 . g11771179)");
lf[459]=C_h_intern(&lf[459],14,"string-ci-hash");
lf[460]=C_static_lambda_info(C_heaptop,34,"(string-ci-hash s1184 . g11831185)");
lf[461]=C_h_intern(&lf[461],15,"hash-table-size");
lf[462]=C_static_lambda_info(C_heaptop,24,"(hash-table-size ht1189)");
lf[463]=C_h_intern(&lf[463],5,"floor");
lf[464]=C_h_intern(&lf[464],18,"hash-table-update!");
lf[465]=C_static_lambda_info(C_heaptop,17,"(loop bucket1308)");
lf[466]=C_static_lambda_info(C_heaptop,14,"(do1304 i1306)");
lf[467]=C_h_intern(&lf[467],16,"\003syshash-new-len");
lf[468]=C_static_lambda_info(C_heaptop,17,"(loop bucket1213)");
lf[469]=C_static_lambda_info(C_heaptop,17,"(loop bucket1222)");
lf[470]=C_flonum(C_heaptop,0.5);
lf[471]=C_static_lambda_info(C_heaptop,9,"(restart)");
lf[472]=C_h_intern(&lf[472],13,"\000access-error");
lf[473]=C_static_string(C_heaptop,31,"hash-table does not contain key");
lf[474]=C_static_lambda_info(C_heaptop,8,"(f_7835)");
lf[475]=C_static_lambda_info(C_heaptop,56,"(hash-table-update! ht1194 key1195 proc1196 . g11931197)");
lf[476]=C_h_intern(&lf[476],26,"hash-table-update!/default");
lf[477]=C_static_lambda_info(C_heaptop,7,"(a7862)");
lf[478]=C_static_lambda_info(C_heaptop,60,"(hash-table-update!/default ht1233 key1234 func1235 def1236)");
lf[479]=C_h_intern(&lf[479],15,"hash-table-set!");
lf[480]=C_static_lambda_info(C_heaptop,13,"(a7871 x1241)");
lf[481]=C_static_lambda_info(C_heaptop,7,"(a7874)");
lf[482]=C_static_lambda_info(C_heaptop,40,"(hash-table-set! ht1238 key1239 val1240)");
lf[483]=C_h_intern(&lf[483],14,"hash-table-ref");
lf[484]=C_h_intern(&lf[484],22,"hash-table-ref/default");
lf[485]=C_static_lambda_info(C_heaptop,7,"(a7887)");
lf[486]=C_static_lambda_info(C_heaptop,47,"(hash-table-ref/default ht1261 key1262 def1263)");
lf[487]=C_h_intern(&lf[487],18,"hash-table-exists\077");
lf[488]=C_static_lambda_info(C_heaptop,35,"(hash-table-exists\077 ht1266 key1267)");
lf[489]=C_static_lambda_info(C_heaptop,36,"(##sys#hash-new-len tab1269 req1270)");
lf[490]=C_h_intern(&lf[490],18,"hash-table-delete!");
lf[491]=C_static_lambda_info(C_heaptop,26,"(loop prev1285 bucket1286)");
lf[492]=C_static_lambda_info(C_heaptop,26,"(loop prev1292 bucket1293)");
lf[493]=C_static_lambda_info(C_heaptop,35,"(hash-table-delete! ht1275 key1276)");
lf[494]=C_h_intern(&lf[494],17,"hash-table-merge!");
lf[495]=C_static_lambda_info(C_heaptop,16,"(do1324 lst1326)");
lf[496]=C_static_lambda_info(C_heaptop,14,"(do1321 i1323)");
lf[497]=C_static_lambda_info(C_heaptop,35,"(hash-table-merge! ht11317 ht21318)");
lf[498]=C_h_intern(&lf[498],17,"hash-table->alist");
lf[499]=C_static_lambda_info(C_heaptop,26,"(loop2 bucket1341 lst1342)");
lf[500]=C_static_lambda_info(C_heaptop,20,"(loop i1338 lst1339)");
lf[501]=C_static_lambda_info(C_heaptop,26,"(hash-table->alist ht1334)");
lf[502]=C_h_intern(&lf[502],17,"alist->hash-table");
lf[503]=C_static_lambda_info(C_heaptop,13,"(a8322 x1352)");
lf[504]=C_h_intern(&lf[504],12,"\003sysfor-each");
lf[505]=C_static_lambda_info(C_heaptop,40,"(alist->hash-table alist1349 . rest1350)");
lf[506]=C_h_intern(&lf[506],15,"hash-table-keys");
lf[507]=C_static_lambda_info(C_heaptop,26,"(loop2 bucket1361 lst1362)");
lf[508]=C_static_lambda_info(C_heaptop,20,"(loop i1358 lst1359)");
lf[509]=C_static_lambda_info(C_heaptop,24,"(hash-table-keys ht1354)");
lf[510]=C_h_intern(&lf[510],17,"hash-table-values");
lf[511]=C_static_lambda_info(C_heaptop,26,"(loop2 bucket1374 lst1375)");
lf[512]=C_static_lambda_info(C_heaptop,20,"(loop i1371 lst1372)");
lf[513]=C_static_lambda_info(C_heaptop,26,"(hash-table-values ht1367)");
lf[514]=C_h_intern(&lf[514],15,"hash-table-walk");
lf[515]=C_static_lambda_info(C_heaptop,18,"(a8503 bucket1387)");
lf[516]=C_static_lambda_info(C_heaptop,14,"(do1384 i1386)");
lf[517]=C_static_lambda_info(C_heaptop,30,"(hash-table-walk ht1380 p1381)");
lf[518]=C_h_intern(&lf[518],15,"hash-table-fold");
lf[519]=C_static_lambda_info(C_heaptop,27,"(fold2 buckets1400 acc1401)");
lf[520]=C_static_lambda_info(C_heaptop,20,"(loop i1397 acc1398)");
lf[521]=C_static_lambda_info(C_heaptop,39,"(hash-table-fold ht1391 p1392 init1393)");
lf[522]=C_h_intern(&lf[522],10,"make-queue");
lf[523]=C_h_intern(&lf[523],5,"queue");
lf[524]=C_static_lambda_info(C_heaptop,12,"(make-queue)");
lf[525]=C_h_intern(&lf[525],6,"queue\077");
lf[526]=C_static_lambda_info(C_heaptop,14,"(queue\077 x1406)");
lf[527]=C_h_intern(&lf[527],12,"queue-empty\077");
lf[528]=C_static_lambda_info(C_heaptop,20,"(queue-empty\077 q1407)");
lf[529]=C_h_intern(&lf[529],11,"queue-first");
lf[530]=C_static_string(C_heaptop,14,"queue is empty");
lf[531]=C_static_lambda_info(C_heaptop,19,"(queue-first q1409)");
lf[532]=C_h_intern(&lf[532],10,"queue-last");
lf[533]=C_static_string(C_heaptop,14,"queue is empty");
lf[534]=C_static_lambda_info(C_heaptop,18,"(queue-last q1413)");
lf[535]=C_h_intern(&lf[535],10,"queue-add!");
lf[536]=C_static_lambda_info(C_heaptop,28,"(queue-add! q1417 datum1418)");
lf[537]=C_h_intern(&lf[537],13,"queue-remove!");
lf[538]=C_static_string(C_heaptop,14,"queue is empty");
lf[539]=C_static_lambda_info(C_heaptop,21,"(queue-remove! q1423)");
lf[540]=C_h_intern(&lf[540],11,"queue->list");
lf[541]=C_static_lambda_info(C_heaptop,19,"(queue->list q1430)");
lf[542]=C_h_intern(&lf[542],11,"list->queue");
lf[543]=C_static_lambda_info(C_heaptop,16,"(do1433 lst1435)");
lf[544]=C_static_lambda_info(C_heaptop,22,"(list->queue lst01432)");
lf[545]=C_h_intern(&lf[545],16,"queue-push-back!");
lf[546]=C_static_lambda_info(C_heaptop,33,"(queue-push-back! q1441 item1442)");
lf[547]=C_h_intern(&lf[547],21,"queue-push-back-list!");
lf[548]=C_static_lambda_info(C_heaptop,8,"(do1450)");
lf[549]=C_static_lambda_info(C_heaptop,42,"(queue-push-back-list! q1446 itemlist1447)");
lf[550]=C_h_intern(&lf[550],17,"register-feature!");
lf[551]=C_h_intern(&lf[551],7,"srfi-69");
lf[552]=C_static_string(C_heaptop,31,"hash-table does not contain key");
lf[553]=C_static_lambda_info(C_heaptop,8,"(f_8985)");
lf[554]=C_static_lambda_info(C_heaptop,17,"(loop bucket1252)");
lf[555]=C_static_lambda_info(C_heaptop,17,"(loop bucket1256)");
lf[556]=C_static_lambda_info(C_heaptop,36,"(a8868 ht1243 key1244 . default1245)");
lf[557]=C_h_intern(&lf[557],18,"getter-with-setter");
lf[558]=C_h_intern(&lf[558],7,"srfi-28");
lf[559]=C_h_intern(&lf[559],14,"make-parameter");
lf[560]=C_h_intern(&lf[560],6,"extras");
lf[561]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,562,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1579,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 93   register-feature! */
t4=*((C_word*)lf[550]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[560]);}

/* k1577 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1){
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
C_word ab[168],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1579,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=*((C_word*)lf[4]+1);
t5=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1581,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=lf[15],tmp=(C_word)a,a+=6,tmp));
t6=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=lf[17],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[18]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=lf[20],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=lf[24],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=lf[28],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1797,a[2]=lf[32],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1820,a[2]=lf[35],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1828,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1840,a[2]=lf[44],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1915,a[2]=lf[52],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=lf[55],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1961,a[2]=lf[60],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=lf[62],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=lf[64],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2023,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2051,a[2]=lf[70],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2084,a[2]=lf[73],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2116,a[2]=lf[76],tmp=(C_word)a,a+=3,tmp));
t24=*((C_word*)lf[3]+1);
t25=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2157,a[2]=t24,a[3]=lf[81],tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=lf[86],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=lf[92],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2381,a[2]=lf[100],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2419,a[2]=lf[110],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2505,a[2]=lf[117],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=lf[120],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=lf[123],tmp=(C_word)a,a+=3,tmp));
t34=*((C_word*)lf[124]+1);
t35=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2734,a[2]=t34,a[3]=lf[133],tmp=(C_word)a,a+=4,tmp));
t36=*((C_word*)lf[125]+1);
t37=*((C_word*)lf[4]+1);
t38=*((C_word*)lf[3]+1);
t39=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2874,a[2]=t37,a[3]=t36,a[4]=t38,a[5]=lf[137],tmp=(C_word)a,a+=6,tmp));
t40=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=lf[140],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3048,a[2]=lf[145],tmp=(C_word)a,a+=3,tmp));
t42=*((C_word*)lf[146]+1);
t43=*((C_word*)lf[147]+1);
t44=C_mutate((C_word*)lf[148]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3145,a[2]=t42,a[3]=t43,a[4]=lf[154],tmp=(C_word)a,a+=5,tmp));
t45=*((C_word*)lf[146]+1);
t46=*((C_word*)lf[147]+1);
t47=C_mutate((C_word*)lf[155]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3272,a[2]=t45,a[3]=t46,a[4]=lf[159],tmp=(C_word)a,a+=5,tmp));
t48=*((C_word*)lf[160]+1);
t49=C_mutate((C_word*)lf[161]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=t48,a[3]=lf[166],tmp=(C_word)a,a+=4,tmp));
t50=*((C_word*)lf[160]+1);
t51=*((C_word*)lf[167]+1);
t52=C_mutate((C_word*)lf[168]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3430,a[2]=t50,a[3]=t51,a[4]=lf[169],tmp=(C_word)a,a+=5,tmp));
t53=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3451,a[2]=lf[175],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[176]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3482,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[182]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=lf[188],tmp=(C_word)a,a+=3,tmp));
t56=*((C_word*)lf[189]+1);
t57=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3544,a[2]=t56,a[3]=lf[191],tmp=(C_word)a,a+=4,tmp));
t58=*((C_word*)lf[146]+1);
t59=*((C_word*)lf[147]+1);
t60=C_mutate((C_word*)lf[192]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3553,a[2]=t58,a[3]=t59,a[4]=lf[193],tmp=(C_word)a,a+=5,tmp));
t61=*((C_word*)lf[189]+1);
t62=C_mutate((C_word*)lf[194]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3565,a[2]=t61,a[3]=lf[198],tmp=(C_word)a,a+=4,tmp));
t63=*((C_word*)lf[146]+1);
t64=*((C_word*)lf[147]+1);
t65=C_mutate((C_word*)lf[199]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3596,a[2]=t63,a[3]=t64,a[4]=lf[203],tmp=(C_word)a,a+=5,tmp));
t66=C_mutate((C_word*)lf[204]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3630,a[2]=lf[216],tmp=(C_word)a,a+=3,tmp));
t67=*((C_word*)lf[217]+1);
t68=C_mutate((C_word*)lf[218]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3776,a[2]=t67,a[3]=lf[224],tmp=(C_word)a,a+=4,tmp));
t69=*((C_word*)lf[146]+1);
t70=*((C_word*)lf[147]+1);
t71=C_mutate(&lf[225],(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3834,a[2]=t69,a[3]=t70,a[4]=lf[329],tmp=(C_word)a,a+=5,tmp));
t72=C_mutate((C_word*)lf[283]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5084,a[2]=lf[332],tmp=(C_word)a,a+=3,tmp));
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5163,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 926  make-parameter */
t74=*((C_word*)lf[559]+1);
((C_proc3)(void*)(*((C_word*)t74+1)))(3,t74,t73,C_fix(79));}

/* k5161 in k1577 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1){
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
C_word ab[77],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5163,2,t0,t1);}
t2=C_mutate((C_word*)lf[333]+1,t1);
t3=C_mutate((C_word*)lf[334]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5165,a[2]=lf[337],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[338]+1,*((C_word*)lf[334]+1));
t5=*((C_word*)lf[146]+1);
t6=*((C_word*)lf[160]+1);
t7=*((C_word*)lf[217]+1);
t8=*((C_word*)lf[147]+1);
t9=C_mutate((C_word*)lf[339]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5194,a[2]=t5,a[3]=t6,a[4]=t8,a[5]=t7,a[6]=lf[341],tmp=(C_word)a,a+=7,tmp));
t10=*((C_word*)lf[268]+1);
t11=C_mutate((C_word*)lf[342]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5239,a[2]=t10,a[3]=lf[343],tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5249,a[2]=lf[345],tmp=(C_word)a,a+=3,tmp);
t13=C_mutate((C_word*)lf[346]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5296,a[2]=t12,a[3]=lf[348],tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[349]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5315,a[2]=t12,a[3]=lf[351],tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[352]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5334,a[2]=lf[353],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[354]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5365,a[2]=lf[355],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[356]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5396,a[2]=lf[357],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[358]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5460,a[2]=lf[359],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[360]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5524,a[2]=lf[365],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[366]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5659,a[2]=lf[372],tmp=(C_word)a,a+=3,tmp));
t21=*((C_word*)lf[124]+1);
t22=*((C_word*)lf[373]+1);
t23=C_mutate((C_word*)lf[374]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5774,a[2]=t22,a[3]=t21,a[4]=lf[381],tmp=(C_word)a,a+=5,tmp));
t24=C_mutate((C_word*)lf[382]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5976,a[2]=lf[386],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[387]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6098,a[2]=lf[389],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[390]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6162,a[2]=lf[392],tmp=(C_word)a,a+=3,tmp));
t27=*((C_word*)lf[393]+1);
t28=*((C_word*)lf[167]+1);
t29=*((C_word*)lf[160]+1);
t30=C_mutate((C_word*)lf[394]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6214,a[2]=t28,a[3]=t29,a[4]=t27,a[5]=lf[402],tmp=(C_word)a,a+=6,tmp));
t31=*((C_word*)lf[394]+1);
t32=*((C_word*)lf[336]+1);
t33=C_mutate((C_word*)lf[403]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6480,a[2]=t32,a[3]=t31,a[4]=lf[404],tmp=(C_word)a,a+=5,tmp));
t34=*((C_word*)lf[146]+1);
t35=*((C_word*)lf[147]+1);
t36=*((C_word*)lf[394]+1);
t37=C_mutate((C_word*)lf[405]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6490,a[2]=t34,a[3]=t36,a[4]=t35,a[5]=lf[406],tmp=(C_word)a,a+=6,tmp));
t38=C_mutate((C_word*)lf[407]+1,*((C_word*)lf[405]+1));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1290 register-feature! */
t40=*((C_word*)lf[550]+1);
((C_proc3)C_retrieve_proc(t40))(3,t40,t39,lf[558]);}

/* k6502 in k5161 in k1577 */
static void C_ccall f_6504(C_word c,C_word t0,C_word t1){
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
C_word ab[71],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6504,2,t0,t1);}
t2=C_mutate((C_word*)lf[408]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6506,a[2]=lf[411],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[412]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6615,a[2]=lf[414],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[415]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6714,a[2]=lf[417],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6846,a[2]=lf[420],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[421]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6979,a[2]=lf[424],tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[422]+1);
t8=C_mutate((C_word*)lf[425]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7006,a[2]=t7,a[3]=lf[427],tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[428],lf[429]);
t10=C_mutate((C_word*)lf[430]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7090,a[2]=lf[432],tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[433]+1);
t12=C_mutate((C_word*)lf[434]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7096,a[2]=t11,a[3]=lf[440],tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[433]+1);
t14=C_mutate((C_word*)lf[441]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7183,a[2]=t13,a[3]=lf[444],tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[445]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7278,a[2]=lf[446],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[447]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7287,a[2]=lf[448],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[437],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7296,a[2]=lf[454],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[453]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7522,a[2]=lf[455],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[456]+1,*((C_word*)lf[453]+1));
t20=C_mutate((C_word*)lf[457]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7554,a[2]=lf[458],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[459]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7579,a[2]=lf[460],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[461]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7604,a[2]=lf[462],tmp=(C_word)a,a+=3,tmp));
t23=*((C_word*)lf[103]+1);
t24=*((C_word*)lf[463]+1);
t25=C_mutate((C_word*)lf[464]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7613,a[2]=t24,a[3]=t23,a[4]=lf[475],tmp=(C_word)a,a+=5,tmp));
t26=*((C_word*)lf[464]+1);
t27=C_mutate((C_word*)lf[476]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7857,a[2]=t26,a[3]=lf[478],tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[464]+1);
t29=C_mutate((C_word*)lf[479]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7866,a[2]=t28,a[3]=lf[482],tmp=(C_word)a,a+=4,tmp));
t30=*((C_word*)lf[103]+1);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8869,a[2]=t30,a[3]=lf[556],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1660 getter-with-setter */
t33=*((C_word*)lf[557]+1);
((C_proc4)C_retrieve_proc(t33))(4,t33,t31,t32,*((C_word*)lf[479]+1));}

/* a8868 in k6502 in k5161 in k1577 */
static void C_ccall f_8869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_8869r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_8869r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8869r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t5=(C_word)C_i_check_structure_2(t2,lf[431],lf[483]);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t2,C_fix(4));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8882,a[2]=t1,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t9=(C_word)C_block_size(t6);
/* extras.scm: 1665 hashf */
t10=t7;
((C_proc4)C_retrieve_proc(t10))(4,t10,t8,t3,t9);}

/* k8880 in a8868 in k6502 in k5161 in k1577 */
static void C_ccall f_8882(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8882,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[7]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[7],C_fix(0)):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8985,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=lf[553],tmp=(C_word)a,a+=5,tmp));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t5=(C_word)C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(((C_word*)t0)[3],t1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8903,a[2]=t8,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=lf[554],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8903(t10,((C_word*)t0)[2],t6);}
else{
t6=(C_word)C_slot(((C_word*)t0)[3],t1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8945,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t8,a[5]=t3,a[6]=lf[555],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8945(t10,((C_word*)t0)[2],t6);}}

/* loop in k8880 in a8868 in k6502 in k5161 in k1577 */
static void C_fcall f_8945(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8945,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
/* extras.scm: 1681 def */
t4=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8964,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1683 test */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k8962 in loop in k8880 in a8868 in k6502 in k5161 in k1577 */
static void C_ccall f_8964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1685 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8945(t3,((C_word*)t0)[5],t2);}}

/* loop in k8880 in a8868 in k6502 in k5161 in k1577 */
static void C_fcall f_8903(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8903,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
/* extras.scm: 1674 def */
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_slot(t4,C_fix(1)));}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1678 loop */
t9=t1;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}}

/* f_8985 in k8880 in a8868 in k6502 in k5161 in k1577 */
static void C_ccall f_8985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8985,2,t0,t1);}
/* ##sys#signal-hook */
t2=*((C_word*)lf[89]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[472],lf[483],lf[552],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7880(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7880,2,t0,t1);}
t2=C_mutate((C_word*)lf[483]+1,t1);
t3=*((C_word*)lf[483]+1);
t4=C_mutate((C_word*)lf[484]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7882,a[2]=t3,a[3]=lf[486],tmp=(C_word)a,a+=4,tmp));
t5=(C_word)C_a_i_vector(&a,1,C_fix(42));
t6=*((C_word*)lf[484]+1);
t7=C_mutate((C_word*)lf[487]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7894,a[2]=t6,a[3]=t5,a[4]=lf[488],tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[467]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7911,a[2]=lf[489],tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[103]+1);
t10=*((C_word*)lf[463]+1);
t11=C_mutate((C_word*)lf[490]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7944,a[2]=t9,a[3]=lf[493],tmp=(C_word)a,a+=4,tmp));
t12=*((C_word*)lf[479]+1);
t13=C_mutate((C_word*)lf[494]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8170,a[2]=t12,a[3]=lf[497],tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[498]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8241,a[2]=lf[501],tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[434]+1);
t16=*((C_word*)lf[479]+1);
t17=C_mutate((C_word*)lf[502]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8314,a[2]=t15,a[3]=t16,a[4]=lf[505],tmp=(C_word)a,a+=5,tmp));
t18=C_mutate((C_word*)lf[506]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8337,a[2]=lf[509],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[510]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8402,a[2]=lf[513],tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1828 register-feature! */
t21=*((C_word*)lf[550]+1);
((C_proc3)C_retrieve_proc(t21))(3,t21,t20,lf[551]);}

/* k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8468(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8468,2,t0,t1);}
t2=C_mutate((C_word*)lf[514]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8470,a[2]=lf[517],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[518]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8522,a[2]=lf[521],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[522]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8591,a[2]=lf[524],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[525]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8597,a[2]=lf[526],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[527]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8603,a[2]=lf[528],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[529]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8616,a[2]=lf[531],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[532]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8637,a[2]=lf[534],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[535]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8658,a[2]=lf[536],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[537]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8690,a[2]=lf[539],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[540]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8726,a[2]=lf[541],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[542]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8735,a[2]=lf[544],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[545]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8789,a[2]=lf[546],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[547]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8818,a[2]=lf[549],tmp=(C_word)a,a+=3,tmp));
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}

/* queue-push-back-list! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8818,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[523],lf[547]);
t5=(C_word)C_i_check_list_2(t3,lf[547]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8828,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1967 append */
t8=*((C_word*)lf[423]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t3,t7);}

/* k8826 in queue-push-back-list! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8831,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t2;
f_8831(t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8845,a[2]=lf[548],tmp=(C_word)a,a+=3,tmp);
t5=t2;
f_8831(t5,f_8845(t1));}}

/* do1450 in k8826 in queue-push-back-list! in k8466 in k7878 in k6502 in k5161 in k1577 */
static C_word C_fcall f_8845(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
return(t1);}
else{
t4=(C_word)C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* k8829 in k8826 in queue-push-back-list! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),t1));}

/* queue-push-back! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8789,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[523],lf[545]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=(C_word)C_i_setslot(t2,C_fix(1),t6);
t8=(C_word)C_slot(t2,C_fix(2));
t9=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?(C_word)C_i_setslot(t2,C_fix(2),t6):C_SCHEME_UNDEFINED));}

/* list->queue in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8735(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8735,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[542]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t4;
f_8746(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8754,a[2]=t2,a[3]=t7,a[4]=lf[543],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8754(t9,t4,t2);}}

/* do1433 in list->queue in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8754,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8764,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* extras.scm: 1943 ##sys#not-a-proper-list-error */
t8=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[2],lf[542]);}
else{
t8=t5;
f_8764(2,t8,C_SCHEME_UNDEFINED);}}}

/* k8762 in do1433 in list->queue in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8754(t3,((C_word*)t0)[2],t2);}

/* k8744 in list->queue in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8746,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[523],((C_word*)t0)[2],t1));}

/* queue->list in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8726(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8726,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[523],lf[540]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* queue-remove! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8690,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[523],lf[537]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8700,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* extras.scm: 1921 ##sys#error */
t7=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[537],lf[538],t2);}
else{
t7=t5;
f_8700(2,t7,C_SCHEME_UNDEFINED);}}

/* k8698 in queue-remove! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t2);
t5=(C_truep(t4)?(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),C_SCHEME_END_OF_LIST):C_SCHEME_UNDEFINED);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_slot(((C_word*)t0)[4],C_fix(0)));}

/* queue-add! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8658,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[523],lf[535]);
t5=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8668,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t7);
if(C_truep(t8)){
t9=t6;
f_8668(t9,(C_word)C_i_setslot(t2,C_fix(1),t5));}
else{
t9=(C_word)C_slot(t2,C_fix(2));
t10=t6;
f_8668(t10,(C_word)C_i_setslot(t9,C_fix(1),t5));}}

/* k8666 in queue-add! in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8668(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* queue-last in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8637,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[523],lf[532]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8647,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* extras.scm: 1902 ##sys#error */
t7=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[532],lf[533],t2);}
else{
t7=t5;
f_8647(2,t7,C_SCHEME_UNDEFINED);}}

/* k8645 in queue-last in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-first in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8616,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[523],lf[529]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8626,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t6)){
/* extras.scm: 1891 ##sys#error */
t7=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,lf[529],lf[530],t2);}
else{
t7=t5;
f_8626(2,t7,C_SCHEME_UNDEFINED);}}

/* k8624 in queue-first in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* queue-empty? in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8603,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[523],lf[527]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4));}

/* queue? in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8597,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[523]));}

/* make-queue in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8591,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[523],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* hash-table-fold in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8522,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(t2,lf[431],lf[518]);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_block_size(t6);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8537,a[2]=t3,a[3]=t9,a[4]=t6,a[5]=t7,a[6]=lf[520],tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_8537(t11,t1,C_fix(0),t4);}

/* loop in hash-table-fold in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8537(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8537,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8553,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=lf[519],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_8553(t8,t1,t4,t3);}}

/* fold2 in loop in hash-table-fold in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8553(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8553,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1855 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8537(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8581,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
t8=(C_word)C_slot(t4,C_fix(1));
/* extras.scm: 1858 p */
t9=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t9))(5,t9,t6,t7,t8,t3);}}

/* k8579 in fold2 in loop in hash-table-fold in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1857 fold2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8553(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* hash-table-walk in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8470,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[431],lf[514]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8485,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t6,a[6]=lf[516],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_8485(t10,t1,C_fix(0));}

/* do1384 in hash-table-walk in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8485,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8495,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8504,a[2]=((C_word*)t0)[3],a[3]=lf[515],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[2],t2);
/* extras.scm: 1840 ##sys#for-each */
t6=*((C_word*)lf[504]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}}

/* a8503 in do1384 in hash-table-walk in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8504,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1841 p */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* k8493 in do1384 in hash-table-walk in k8466 in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8485(t3,((C_word*)t0)[2],t2);}

/* hash-table-values in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8402(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8402,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[510]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8417,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=lf[512],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_8417(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-values in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8417(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8417,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8433,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=lf[511],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8433(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-values in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8433(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8433,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1823 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8417(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* extras.scm: 1824 loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* hash-table-keys in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8337(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8337,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[506]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8352,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=lf[508],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_8352(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-keys in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8352(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8352,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8368,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=lf[507],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8368(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-keys in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8368(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8368,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1809 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8352(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* extras.scm: 1810 loop2 */
t10=t1;
t11=t4;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* alist->hash-table in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8314(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_8314r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8314r(t0,t1,t2,t3);}}

static void C_ccall f_8314r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8318,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t3);}

/* k8316 in alist->hash-table in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8321,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8323,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[503],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[504]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8322 in k8316 in alist->hash-table in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8323,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
/* extras.scm: 1797 hash-table-set! */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* k8319 in k8316 in alist->hash-table in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table->alist in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8241(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8241,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[498]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8256,a[2]=t7,a[3]=t4,a[4]=t5,a[5]=lf[500],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_8256(t9,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table->alist in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8256(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8256,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8272,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=lf[499],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8272(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table->alist in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8272(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8272,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1787 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8256(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(0));
t7=(C_word)C_slot(t5,C_fix(1));
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,t8,t3);
/* extras.scm: 1788 loop2 */
t12=t1;
t13=t4;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* hash-table-merge! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8170,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[431],lf[494]);
t5=(C_word)C_i_check_structure_2(t3,lf[431],lf[494]);
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_block_size(t6);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8188,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t9,a[5]=t2,a[6]=t7,a[7]=lf[496],tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_8188(t11,t1,C_fix(0));}

/* do1321 in hash-table-merge! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8188(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8188,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8198,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8211,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=lf[495],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8211(t8,t3,t4);}}

/* do1324 in do1321 in hash-table-merge! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8211(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8211,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8224,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 1773 hash-table-set! */
t7=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t7))(5,t7,t4,((C_word*)t0)[2],t5,t6);}}

/* k8222 in do1324 in do1321 in hash-table-merge! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8211(t3,((C_word*)t0)[2],t2);}

/* k8196 in do1321 in hash-table-merge! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8188(t3,((C_word*)t0)[2],t2);}

/* hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7944,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[431],lf[490]);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(4));
t7=(C_word)C_block_size(t5);
t8=(C_word)C_slot(t2,C_fix(3));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7963,a[2]=t1,a[3]=t3,a[4]=t8,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1715 hashf */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t3,t7);}

/* k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7963(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7963,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(2));
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[6],t1);
t5=(C_word)C_eqp(((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7980,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],a[8]=lf[491],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_7980(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=lf[492],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_8035(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}}

/* loop in k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8035(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8035,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8051,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1738 test */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k8049 in loop in k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_8051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8051,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8054,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=t2;
f_8054(t4,(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t3));}
else{
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=t2;
f_8054(t4,(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(1),t3));}}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1745 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8035(t3,((C_word*)t0)[7],((C_word*)t0)[5],t2);}}

/* k8052 in k8049 in loop in k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_8054(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* loop in k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_7980(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7980,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7999,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t8=(C_word)C_slot(t3,C_fix(1));
t9=t7;
f_7999(t9,(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t8));}
else{
t8=(C_word)C_slot(t3,C_fix(1));
t9=t7;
f_7999(t9,(C_word)C_i_setslot(t2,C_fix(1),t8));}}
else{
t7=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 1732 loop */
t12=t1;
t13=t3;
t14=t7;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}}

/* k7997 in loop in k7961 in hash-table-delete! in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_7999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* ##sys#hash-new-len in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7911(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7911,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_fixnum_greater_or_equal_p(t4,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7921,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_7921(t7,t5);}
else{
t7=(C_word)C_slot(t2,C_fix(1));
t8=t6;
f_7921(t8,(C_word)C_eqp(t7,C_SCHEME_END_OF_LIST));}}

/* k7919 in ##sys#hash-new-len in k7878 in k6502 in k5161 in k1577 */
static void C_fcall f_7921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[3],C_fix(0)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1704 ##sys#hash-new-len */
t3=*((C_word*)lf[467]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* hash-table-exists? in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7894,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[431],lf[487]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7909,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1698 ref */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,t2,t3,((C_word*)t0)[3]);}

/* k7907 in hash-table-exists? in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}

/* hash-table-ref/default in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7882,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7888,a[2]=t4,a[3]=lf[485],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1691 hash-table-ref */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t2,t3,t5);}

/* a7887 in hash-table-ref/default in k7878 in k6502 in k5161 in k1577 */
static void C_ccall f_7888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7888,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table-set! in k6502 in k5161 in k1577 */
static void C_ccall f_7866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7866,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7872,a[2]=t4,a[3]=lf[480],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7875,a[2]=t4,a[3]=lf[481],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1656 hash-table-update! */
t7=((C_word*)t0)[2];
((C_proc6)C_retrieve_proc(t7))(6,t7,t1,t2,t3,t5,t6);}

/* a7874 in hash-table-set! in k6502 in k5161 in k1577 */
static void C_ccall f_7875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7875,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a7871 in hash-table-set! in k6502 in k5161 in k1577 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7872,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* hash-table-update!/default in k6502 in k5161 in k1577 */
static void C_ccall f_7857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7857,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7863,a[2]=t5,a[3]=lf[477],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1651 hash-table-update! */
t7=((C_word*)t0)[2];
((C_proc6)C_retrieve_proc(t7))(6,t7,t1,t2,t3,t4,t6);}

/* a7862 in hash-table-update!/default in k6502 in k5161 in k1577 */
static void C_ccall f_7863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7863,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr5r,(void*)f_7613r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_7613r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_7613r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7617,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
t7=t6;
f_7617(2,t7,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7835,a[2]=t2,a[3]=t3,a[4]=lf[474],tmp=(C_word)a,a+=5,tmp));}
else{
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t7))){
t8=t6;
f_7617(2,t8,(C_word)C_i_car(t5));}
else{
/* ##sys#error */
t8=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}

/* f_7835 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7835,2,t0,t1);}
/* extras.scm: 1599 ##sys#signal-hook */
t2=*((C_word*)lf[89]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[472],lf[464],lf[473],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7617,2,t0,t1);}
t2=(C_word)C_i_check_structure_2(((C_word*)t0)[7],lf[431],lf[464]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7625,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=lf[471],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_7625(t6,((C_word*)t0)[2]);}

/* restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_fcall f_7625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7625,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[8],C_fix(4));
t4=(C_word)C_block_size(t2);
t5=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=t4,a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* extras.scm: 1607 hashf */
t7=t3;
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[5],t4);}

/* k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7641,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[13],C_fix(2));
t3=(C_word)C_fixnum_plus(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7823,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[12],a[14]=t3,tmp=(C_word)a,a+=15,tmp);
t5=(C_word)C_a_i_times(&a,2,((C_word*)t0)[12],lf[470]);
/* extras.scm: 1609 floor */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7823(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7823,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[14],t2);
t4=(C_truep(t3)?(C_word)C_fixnum_lessp(((C_word*)t0)[13],C_fix(1073741823)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7653,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7666,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_fixnum_times(((C_word*)t0)[13],C_fix(2));
t8=(C_word)C_i_fixnum_min(C_fix(1073741823),t7);
/* extras.scm: 1612 ##sys#hash-new-len */
t9=*((C_word*)lf[467]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,lf[429],t8);}
else{
t5=(C_word)C_slot(((C_word*)t0)[9],((C_word*)t0)[7]);
t6=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7688,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=t5,a[10]=((C_word*)t0)[4],a[11]=lf[468],tmp=(C_word)a,a+=12,tmp));
t10=((C_word*)t8)[1];
f_7688(t10,((C_word*)t0)[10],t5);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7751,a[2]=((C_word*)t0)[5],a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word*)t0)[4],a[12]=lf[469],tmp=(C_word)a,a+=13,tmp));
t10=((C_word*)t8)[1];
f_7751(t10,((C_word*)t0)[10],t5);}}}

/* loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_fcall f_7751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7751,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7761,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7779,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1636 init */
t6=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7788,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1642 test */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[11],t6);}}

/* k7786 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7788,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7791,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1643 proc */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1646 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7751(t3,((C_word*)t0)[5],t2);}}

/* k7789 in k7786 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k7777 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1636 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7759 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7761,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_fcall f_7688(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(17);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7688,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7698,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7716,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1623 init */
t6=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[10],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7728,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_slot(t4,C_fix(1));
/* extras.scm: 1630 proc */
t9=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t9))(3,t9,t7,t8);}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1633 loop */
t13=t1;
t14=t7;
t1=t13;
t2=t14;
goto loop;}}}

/* k7726 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k7714 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1623 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7696 in loop in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7698,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* k7664 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1611 make-vector */
t2=*((C_word*)lf[433]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7653(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7656,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=t1;
t4=(C_word)C_block_size(((C_word*)t0)[3]);
t5=(C_word)C_block_size(t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8103,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=t4,a[8]=lf[466],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_8103(t9,t2,C_fix(0));}

/* do1304 in k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_fcall f_8103(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8103,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8113,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=lf[465],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_8126(t8,t3,t4);}}

/* loop in do1304 in k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_fcall f_8126(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8126,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8142,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1757 hashf */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t4,((C_word*)t0)[2]);}}

/* k8140 in loop in do1304 in k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_8142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8142,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_slot(((C_word*)t0)[5],t1);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_i_setslot(((C_word*)t0)[5],t1,t5);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1759 loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_8126(t8,((C_word*)t0)[2],t7);}

/* k8111 in do1304 in k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_8113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8103(t3,((C_word*)t0)[2],t2);}

/* k7654 in k7651 in k7821 in k7639 in restart in k7615 in hash-table-update! in k6502 in k5161 in k1577 */
static void C_ccall f_7656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4]);
/* extras.scm: 1617 restart */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7625(t3,((C_word*)t0)[2]);}

/* hash-table-size in k6502 in k5161 in k1577 */
static void C_ccall f_7604(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7604,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[461]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(2)));}

/* string-ci-hash in k6502 in k5161 in k1577 */
static void C_ccall f_7579(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7579r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7579r(t0,t1,t2,t3);}}

static void C_ccall f_7579r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7583,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_7583(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_7583(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7581 in string-ci-hash in k6502 in k5161 in k1577 */
static void C_ccall f_7583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_modulo((C_word)C_hash_string_ci(((C_word*)t0)[2]),t1));}

/* string-hash in k6502 in k5161 in k1577 */
static void C_ccall f_7554(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7554r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7554r(t0,t1,t2,t3);}}

static void C_ccall f_7554r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7558,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_7558(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_7558(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7556 in string-hash in k6502 in k5161 in k1577 */
static void C_ccall f_7558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_modulo((C_word)C_hash_string(((C_word*)t0)[2]),t1));}

/* hash in k6502 in k5161 in k1577 */
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7522r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7522r(t0,t1,t2,t3);}}

static void C_ccall f_7522r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7526,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_7526(2,t5,C_fix(536870912));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_7526(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7524 in hash in k6502 in k5161 in k1577 */
static void C_ccall f_7526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_exact_2(t1,lf[453]);
/* extras.scm: 1571 %hash */
t3=lf[437];
f_7296(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7296,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7299,a[2]=t7,a[3]=lf[449],tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7324,a[2]=t7,a[3]=t5,a[4]=lf[452],tmp=(C_word)a,a+=5,tmp));
t10=(C_word)C_i_check_exact_2(t3,lf[453]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7520,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1567 rechash */
t12=((C_word*)t7)[1];
f_7324(t12,t11,t2,C_fix(0));}

/* k7518 in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_modulo(t2,((C_word*)t0)[2]));}

/* rechash in %hash in k6502 in k5161 in k1577 */
static void C_fcall f_7324(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7324,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(4)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
if(C_truep((C_word)C_fixnump(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fix((C_word)C_character_code(t2)));}
else{
switch(t2){
case C_SCHEME_TRUE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(256));
case C_SCHEME_FALSE:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(257));
case C_SCHEME_END_OF_LIST:
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(258));
default:
if(C_truep((C_word)C_eofp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(259));}
else{
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_symbolp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_hash_string(t4));}
else{
if(C_truep((C_word)C_i_listp(t2))){
t4=(C_word)C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7391,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 1549 hash-with-test */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7299(t7,t5,t6,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7420,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 1551 hash-with-test */
t6=((C_word*)((C_word*)t0)[3])[1];
f_7299(t6,t4,t5,t3);}
else{
if(C_truep((C_word)C_portp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7433,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1553 input-port? */
t5=*((C_word*)lf[450]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep((C_word)C_byteblockp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_hash_string(t2));}
else{
t4=(C_word)C_block_size(t2);
t5=(C_truep((C_word)C_specialp(t2))?C_fix(1):C_fix(0));
t6=(C_truep((C_word)C_specialp(t2))?(C_word)C_peek_fixnum(t2,C_fix(0)):C_fix(0));
t7=(C_word)C_fixnum_plus(t4,t6);
t8=(C_word)C_fixnum_greaterp(t4,C_fix(4));
t9=(C_truep(t8)?C_fix(4):t4);
t10=(C_word)C_fixnum_difference(t9,t5);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7455,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t12,a[6]=lf[451],tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_7455(t14,t1,t7,t5,t10);}}}}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(262));}}}}}}}

/* loop in rechash in %hash in k6502 in k5161 in k1577 */
static void C_fcall f_7455(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7455,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_word)C_fixnum_times(t2,C_fix(16));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7490,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(((C_word*)t0)[4],t3);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1563 rechash */
t10=((C_word*)((C_word*)t0)[2])[1];
f_7324(t10,t7,t8,t9);}}

/* k7488 in loop in rechash in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_fix(t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[7],t2);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],t3);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1563 loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7455(t7,((C_word*)t0)[2],t4,t5,t6);}

/* k7431 in rechash in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_fix(260):C_fix(261)));}

/* k7418 in rechash in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7420,2,t0,t1);}
t2=(C_word)C_a_i_arithmetic_shift(&a,2,t1,C_fix(16));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7412,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1552 hash-with-test */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7299(t5,t3,t4,((C_word*)t0)[2]);}

/* k7410 in k7418 in rechash in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k7389 in rechash in %hash in k6502 in k5161 in k1577 */
static void C_ccall f_7391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* hash-with-test in %hash in k6502 in k5161 in k1577 */
static void C_fcall f_7299(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7299,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not((C_word)C_blockp(t2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7309,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_7309(t6,t4);}
else{
t6=(C_word)C_byteblockp(t2);
t7=t5;
f_7309(t7,(C_truep(t6)?t6:(C_word)C_i_symbolp(t2)));}}

/* k7307 in hash-with-test in %hash in k6502 in k5161 in k1577 */
static void C_fcall f_7309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1537 rechash */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7324(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(99));}}

/* hash-table-hash-function in k6502 in k5161 in k1577 */
static void C_ccall f_7287(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7287,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[447]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(4)));}

/* hash-table-equivalence-function in k6502 in k5161 in k1577 */
static void C_ccall f_7278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7278,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[445]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* hash-table-copy in k6502 in k5161 in k1577 */
static void C_ccall f_7183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7183,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[431],lf[441]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7196,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1502 make-vector */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t5,C_SCHEME_END_OF_LIST);}

/* k7194 in hash-table-copy in k6502 in k5161 in k1577 */
static void C_ccall f_7196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7196,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7201,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[443],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_7201(t5,((C_word*)t0)[2],C_fix(0));}

/* do1133 in k7194 in hash-table-copy in k6502 in k5161 in k1577 */
static void C_fcall f_7201(C_word t0,C_word t1,C_word t2){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7201,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,5,lf[431],((C_word*)t0)[4],t3,t4,t5));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7237,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7243,a[2]=t6,a[3]=lf[442],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_7243(t8,t3,t4);}}

/* copy in do1133 in k7194 in hash-table-copy in k6502 in k5161 in k1577 */
static void C_fcall f_7243(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7243,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7264,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1514 copy */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k7262 in copy in do1133 in k7194 in hash-table-copy in k6502 in k5161 in k1577 */
static void C_ccall f_7264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7264,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7235 in do1133 in k7194 in hash-table-copy in k6502 in k5161 in k1577 */
static void C_ccall f_7237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7201(t4,((C_word*)t0)[2],t3);}

/* make-hash-table in k6502 in k5161 in k1577 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr2r,(void*)f_7096r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7096r(t0,t1,t2);}}

static void C_ccall f_7096r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7098,a[2]=((C_word*)t0)[2],a[3]=lf[435],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7110,a[2]=t3,a[3]=lf[436],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=t4,a[3]=lf[438],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7120,a[2]=t5,a[3]=lf[439],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-test11071121 */
t7=t6;
f_7120(t7,t1);}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-hashf11081119 */
t9=t5;
f_7115(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-len11091116 */
t11=t4;
f_7110(t11,t1,t7,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body11051111 */
t13=t3;
f_7098(t13,t1,t7,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}}

/* def-test1107 in make-hash-table in k6502 in k5161 in k1577 */
static void C_fcall f_7120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7120,NULL,2,t0,t1);}
/* def-hashf11081119 */
t2=((C_word*)t0)[2];
f_7115(t2,t1,*((C_word*)lf[106]+1));}

/* def-hashf1108 in make-hash-table in k6502 in k5161 in k1577 */
static void C_fcall f_7115(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7115,NULL,3,t0,t1,t2);}
/* def-len11091116 */
t3=((C_word*)t0)[2];
f_7110(t3,t1,t2,lf[437]);}

/* def-len1109 in make-hash-table in k6502 in k5161 in k1577 */
static void C_fcall f_7110(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7110,NULL,4,t0,t1,t2,t3);}
/* body11051111 */
t4=((C_word*)t0)[2];
f_7098(t4,t1,t2,t3,C_fix(307));}

/* body1105 in make-hash-table in k6502 in k5161 in k1577 */
static void C_fcall f_7098(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7098,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_exact_2(t4,lf[434]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7109,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1494 make-vector */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t4,C_SCHEME_END_OF_LIST);}

/* k7107 in body1105 in make-hash-table in k6502 in k5161 in k1577 */
static void C_ccall f_7109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7109,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,5,lf[431],t1,C_fix(0),((C_word*)t0)[3],((C_word*)t0)[2]));}

/* hash-table? in k6502 in k5161 in k1577 */
static void C_ccall f_7090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7090,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[431]));}

/* binary-search in k6502 in k5161 in k1577 */
static void C_ccall f_7006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7006,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7010,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7084,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1450 list->vector */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_7010(t6,(C_word)C_i_check_vector_2(((C_word*)t4)[1],lf[425]));}}

/* k7082 in binary-search in k6502 in k5161 in k1577 */
static void C_ccall f_7084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7010(t3,t2);}

/* k7008 in binary-search in k6502 in k5161 in k1577 */
static void C_fcall f_7010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7010,NULL,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[4])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7024,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=lf[426],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7024(t6,((C_word*)t0)[2],C_fix(0),t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k7008 in binary-search in k6502 in k5161 in k1577 */
static void C_fcall f_7024(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7024,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_divide(t4,C_fix(2));
t6=(C_word)C_fixnum_plus(t2,t5);
t7=(C_word)C_slot(((C_word*)((C_word*)t0)[4])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7034,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1458 proc */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t7);}

/* k7032 in loop in k7008 in binary-search in k6502 in k5161 in k1577 */
static void C_ccall f_7034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* extras.scm: 1460 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7024(t4,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[5]);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* extras.scm: 1461 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7024(t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* sort in k6502 in k5161 in k1577 */
static void C_ccall f_6979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6979,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6993,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6997,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1440 vector->list */
t6=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7004,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1441 append */
t5=*((C_word*)lf[423]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k7002 in sort in k6502 in k5161 in k1577 */
static void C_ccall f_7004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1441 sort! */
t2=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6995 in sort in k6502 in k5161 in k1577 */
static void C_ccall f_6997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1440 sort! */
t2=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6991 in sort in k6502 in k5161 in k1577 */
static void C_ccall f_6993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1440 list->vector */
t2=*((C_word*)lf[422]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6846,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6849,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=lf[418],tmp=(C_word)a,a+=6,tmp));
if(C_truep((C_word)C_i_vectorp(((C_word*)t4)[1]))){
t8=(C_word)C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6936,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=t9,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1423 vector->list */
t11=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t4)[1]);}
else{
t8=(C_word)C_i_length(((C_word*)t4)[1]);
/* extras.scm: 1429 step */
t9=((C_word*)t6)[1];
f_6849(t9,t1,t8);}}

/* k6934 in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6936,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6943,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1424 step */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6849(t4,t3,((C_word*)t0)[2]);}

/* k6941 in k6934 in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6943,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6945,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[419],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6945(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* do1076 in k6941 in k6934 in sort! in k6502 in k5161 in k1577 */
static void C_fcall f_6945(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6945,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_vector_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* step in sort! in k6502 in k5161 in k1577 */
static void C_fcall f_6849(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6849,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6859,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(2)))){
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(C_word)C_i_cadr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(C_word)C_i_cddr(((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6890,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6900,a[2]=t3,a[3]=t8,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1408 less? */
t10=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t4,t3);}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k6898 in step in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_car(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=((C_word*)t0)[3];
f_6890(t4,(C_word)C_i_set_car(t3,((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[3];
f_6890(t2,C_SCHEME_UNDEFINED);}}

/* k6888 in step in sort! in k6502 in k5161 in k1577 */
static void C_fcall f_6890(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}

/* k6857 in step in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1399 step */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6849(t3,t2,t1);}

/* k6860 in k6857 in step in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6862,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6868,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1401 step */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6849(t4,t3,t2);}

/* k6866 in k6860 in k6857 in step in sort! in k6502 in k5161 in k1577 */
static void C_ccall f_6868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1402 merge! */
t2=*((C_word*)lf[415]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* merge! in k6502 in k5161 in k1577 */
static void C_ccall f_6714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6714,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6717,a[2]=t4,a[3]=t6,a[4]=lf[416],tmp=(C_word)a,a+=5,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6796,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_car(t3);
t10=(C_word)C_i_car(t2);
/* extras.scm: 1376 less? */
t11=t4;
((C_proc4)C_retrieve_proc(t11))(4,t11,t8,t9,t10);}}}

/* k6794 in merge! in k6502 in k5161 in k1577 */
static void C_ccall f_6796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6796,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6799,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_6799(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* extras.scm: 1379 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6717(t5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_6819(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[4]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* extras.scm: 1384 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6717(t5,t2,((C_word*)t0)[3],t4,((C_word*)t0)[4]);}}}

/* k6817 in k6794 in merge! in k6502 in k5161 in k1577 */
static void C_ccall f_6819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k6797 in k6794 in merge! in k6502 in k5161 in k1577 */
static void C_ccall f_6799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* loop in merge! in k6502 in k5161 in k1577 */
static void C_fcall f_6717(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6717,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6724,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_car(t3);
/* extras.scm: 1361 less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* k6722 in loop in merge! in k6502 in k5161 in k1577 */
static void C_ccall f_6724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[5],((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* extras.scm: 1366 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6717(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[3],((C_word*)t0)[5]));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* extras.scm: 1372 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6717(t5,((C_word*)t0)[4],((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* merge in k6502 in k5161 in k1577 */
static void C_ccall f_6615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6615,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6649,a[2]=t4,a[3]=t10,a[4]=lf[413],tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_6649(t12,t1,t5,t6,t7,t8);}}}

/* loop in merge in k6502 in k5161 in k1577 */
static void C_fcall f_6649(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6649,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6656,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1344 less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t4,t2);}

/* k6654 in loop in merge in k6502 in k5161 in k1577 */
static void C_ccall f_6656(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6656,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[7]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* extras.scm: 1347 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6649(t5,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3,t4);}}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[7]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6704,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* extras.scm: 1351 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6649(t5,t2,t3,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}}}

/* k6702 in k6654 in loop in merge in k6502 in k5161 in k1577 */
static void C_ccall f_6704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6704,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6674 in k6654 in loop in merge in k6502 in k5161 in k1577 */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6676,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* sorted? in k6502 in k5161 in k1577 */
static void C_ccall f_6506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6506,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(C_word)C_i_vector_length(t2);
if(C_truep((C_word)C_i_less_or_equalp(t4,C_fix(1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6533,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=lf[409],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6533(t8,t1,C_fix(1));}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6581,a[2]=t3,a[3]=t7,a[4]=lf[410],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_6581(t9,t1,t4,t5);}}}

/* loop in sorted? in k6502 in k5161 in k1577 */
static void C_fcall f_6581(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6581,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6609,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t3);
/* extras.scm: 1327 less? */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t2);}}

/* k6607 in loop in sorted? in k6502 in k5161 in k1577 */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* extras.scm: 1328 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6581(t4,((C_word*)t0)[4],t2,t3);}}

/* do1023 in sorted? in k6502 in k5161 in k1577 */
static void C_fcall f_6533(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6533,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nequalp(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6543,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_6543(2,t5,t3);}
else{
t5=(C_word)C_i_vector_ref(((C_word*)t0)[3],t2);
t6=(C_word)C_a_i_minus(&a,2,t2,C_fix(1));
t7=(C_word)C_i_vector_ref(((C_word*)t0)[3],t6);
/* extras.scm: 1321 less? */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t4,t5,t7);}}

/* k6541 in do1023 in sorted? in k6502 in k5161 in k1577 */
static void C_ccall f_6543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6543,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_nequalp(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[2])[1];
f_6533(t3,((C_word*)t0)[5],t2);}}

/* sprintf in k5161 in k1577 */
static void C_ccall f_6490(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6490r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6490r(t0,t1,t2,t3);}}

static void C_ccall f_6490r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6494,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1284 open-output-string */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k6492 in sprintf in k5161 in k1577 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6497,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_apply(6,0,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6495 in k6492 in sprintf in k5161 in k1577 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1286 get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* printf in k5161 in k1577 */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_6480r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6480r(t0,t1,t2,t3);}}

static void C_ccall f_6480r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6488,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1276 current-output-port */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k6486 in printf in k5161 in k1577 */
static void C_ccall f_6488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fprintf in k5161 in k1577 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_6214r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6214r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6214r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=lf[401],tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6220(t8,t1,t3,t4);}

/* rec in fprintf in k5161 in k1577 */
static void C_fcall f_6220(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6220,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_string_2(t2,lf[394]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6227,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 1227 ##sys#check-port */
t7=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[5],lf[394]);}

/* k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6227(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6227,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(C_word)C_block_size(((C_word*)t0)[9]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6232,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6239,a[2]=((C_word*)t0)[8],a[3]=lf[396],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t8,a[9]=t5,a[10]=t4,a[11]=t3,a[12]=lf[400],tmp=(C_word)a,a+=13,tmp));
t10=((C_word*)t8)[1];
f_6258(t10,((C_word*)t0)[2]);}

/* loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_fcall f_6258(C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6258,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[10]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=f_6232(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6271,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[10]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_6232(((C_word*)t0)[9]);
t7=(C_word)C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6296,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1246 next */
t9=((C_word*)t0)[5];
f_6239(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1247 next */
t9=((C_word*)t0)[5];
f_6239(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6322,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1248 next */
t9=((C_word*)t0)[5];
f_6239(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6339,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1249 next */
t10=((C_word*)t0)[5];
f_6239(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6356,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1250 next */
t10=((C_word*)t0)[5];
f_6239(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6369,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6373,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1251 next */
t10=((C_word*)t0)[5];
f_6239(t10,t9);
case C_make_character(33):
/* extras.scm: 1252 ##sys#flush-output */
t8=*((C_word*)lf[397]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,((C_word*)t0)[6]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6391,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1254 next */
t9=((C_word*)t0)[5];
f_6239(t9,t8);
case C_make_character(126):
/* extras.scm: 1258 ##sys#write-char-0 */
t8=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,C_make_character(126),((C_word*)t0)[6]);
case C_make_character(37):
/* extras.scm: 1259 newline */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t3,((C_word*)t0)[6]);
default:
t8=(C_word)C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:(C_word)C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm: 1260 newline */
t10=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t10))(3,t10,t3,((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_u_i_char_whitespacep(t6))){
t10=f_6232(((C_word*)t0)[9]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6445,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],a[4]=lf[398],tmp=(C_word)a,a+=5,tmp);
t12=t3;
f_6271(2,t12,f_6445(t11,t10));}
else{
/* extras.scm: 1267 ##sys#error */
t10=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,lf[394],lf[399],t6);}}}}
else{
/* extras.scm: 1268 ##sys#write-char-0 */
t6=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t2,((C_word*)t0)[6]);}}}

/* skip in loop in k6225 in rec in fprintf in k5161 in k1577 */
static C_word C_fcall f_6445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_u_i_char_whitespacep(t1))){
t2=f_6232(((C_word*)t0)[3]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

/* k6389 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6394,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1255 next */
t3=((C_word*)t0)[2];
f_6239(t3,t2);}

/* k6392 in k6389 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_list_2(t1,lf[394]);
/* extras.scm: 1257 rec */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6220(t3,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6371 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1251 ##sys#number->string */
t2=*((C_word*)lf[252]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(16));}

/* k6367 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1251 display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6354 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1250 ##sys#number->string */
t2=*((C_word*)lf[252]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(8));}

/* k6350 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1250 display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6337 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1249 ##sys#number->string */
t2=*((C_word*)lf[252]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(2));}

/* k6333 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1249 display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6320 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1248 ##sys#write-char-0 */
t2=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6307 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1247 display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6294 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1246 write */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6269 in loop in k6225 in rec in fprintf in k5161 in k1577 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1269 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6258(t2,((C_word*)t0)[2]);}

/* next in k6225 in rec in fprintf in k5161 in k1577 */
static void C_fcall f_6239(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6239,NULL,2,t0,t1);}
if(C_truep((C_word)C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm: 1236 ##sys#error */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[394],lf[395]);}
else{
t2=(C_word)C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=(C_word)C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* fetch in k6225 in rec in fprintf in k5161 in k1577 */
static C_word C_fcall f_6232(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=(C_word)C_subchar(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* string-chomp in k5161 in k1577 */
static void C_ccall f_6162(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6162r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6162r(t0,t1,t2,t3);}}

static void C_ccall f_6162r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6166,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_6166(2,t5,lf[391]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_6166(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k6164 in string-chomp in k5161 in k1577 */
static void C_ccall f_6166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[390]);
t3=(C_word)C_i_check_string_2(t1,lf[390]);
t4=(C_word)C_block_size(((C_word*)t0)[3]);
t5=(C_word)C_block_size(t1);
t6=(C_word)C_fixnum_difference(t4,t5);
t7=(C_word)C_fixnum_greater_or_equal_p(t4,t5);
t8=(C_truep(t7)?(C_word)C_substring_compare(((C_word*)t0)[3],t1,t6,C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t8)){
/* extras.scm: 1214 ##sys#substring */
t9=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t6);}
else{
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)t0)[3]);}}

/* string-chop in k5161 in k1577 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6098,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[387]);
t5=(C_word)C_i_check_exact_2(t3,lf[387]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6113,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=lf[388],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_6113(t10,t1,t6,C_fix(0));}

/* loop in string-chop in k5161 in k1577 */
static void C_fcall f_6113(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6113,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6133,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_plus(t3,t2);
/* extras.scm: 1200 ##sys#substring */
t6=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_fixnum_plus(t3,((C_word*)t0)[4]);
/* extras.scm: 1201 ##sys#substring */
t6=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}}}

/* k6142 in loop in string-chop in k5161 in k1577 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6148,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
/* extras.scm: 1201 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6113(t5,t2,t3,t4);}

/* k6146 in k6142 in loop in string-chop in k5161 in k1577 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6148,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6131 in loop in string-chop in k5161 in k1577 */
static void C_ccall f_6133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6133,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* string-translate* in k5161 in k1577 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5976,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[382]);
t5=(C_word)C_i_check_list_2(t3,lf[382]);
t6=(C_word)C_block_size(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5988,a[2]=t3,a[3]=t8,a[4]=t2,a[5]=t6,a[6]=lf[385],tmp=(C_word)a,a+=7,tmp));
/* extras.scm: 1189 collect */
t10=((C_word*)t8)[1];
f_5988(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in string-translate* in k5161 in k1577 */
static void C_fcall f_5988(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5988,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6002,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6006,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,t3))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6016,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1171 ##sys#substring */
t10=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[4],t3,t2);}
else{
t9=t8;
f_6006(t9,((C_word*)t6)[1]);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6021,a[2]=t8,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t2,a[9]=lf[384],tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_6021(t10,t1,((C_word*)t0)[2]);}}

/* loop in collect in string-translate* in k5161 in k1577 */
static void C_fcall f_6021(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6021,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1175 collect */
t5=((C_word*)((C_word*)t0)[6])[1];
f_5988(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_string_length(t4);
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_substring_compare(((C_word*)t0)[3],t4,((C_word*)t0)[8],C_fix(0),t5))){
t7=(C_word)C_fixnum_plus(((C_word*)t0)[8],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6060,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[8],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6086,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1183 ##sys#substring */
t10=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[8]);}
else{
t9=t8;
f_6060(t9,C_SCHEME_UNDEFINED);}}
else{
t7=(C_word)C_i_cdr(t2);
/* extras.scm: 1188 loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k6084 in loop in collect in string-translate* in k5161 in k1577 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6086,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_6060(t4,t3);}

/* k6058 in loop in collect in string-translate* in k5161 in k1577 */
static void C_fcall f_6060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6060,NULL,2,t0,t1);}
t2=(C_word)C_i_string_length(((C_word*)t0)[7]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);
/* extras.scm: 1184 collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5988(t5,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[2],t3,t4);}

/* k6014 in collect in string-translate* in k5161 in k1577 */
static void C_ccall f_6016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6016,2,t0,t1);}
t2=((C_word*)t0)[3];
f_6006(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]));}

/* k6004 in collect in string-translate* in k5161 in k1577 */
static void C_fcall f_6006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1169 reverse */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6000 in collect in string-translate* in k5161 in k1577 */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1167 ##sys#fragments->string */
t2=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* string-translate in k5161 in k1577 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_5774r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5774r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5774r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5777,a[2]=lf[377],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5811,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_charp(t3))){
t7=t6;
f_5811(2,t7,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5951,a[2]=t3,a[3]=lf[380],tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5968,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1125 list->string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}
else{
t7=(C_word)C_i_check_string_2(t3,lf[374]);
/* extras.scm: 1128 instring */
f_5777(t6,t3);}}}

/* k5966 in string-translate in k5161 in k1577 */
static void C_ccall f_5968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1125 instring */
f_5777(((C_word*)t0)[2],t1);}

/* f_5951 in string-translate in k5161 in k1577 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5951,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* k5809 in string-translate in k5161 in k1577 */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5814,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_charp(t3))){
t4=t2;
f_5814(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
/* extras.scm: 1133 list->string */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t4=(C_word)C_i_check_string_2(t3,lf[374]);
t5=t2;
f_5814(2,t5,t3);}}}
else{
t3=t2;
f_5814(2,t3,C_SCHEME_FALSE);}}

/* k5812 in k5809 in string-translate in k5161 in k1577 */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5814,2,t0,t1);}
t2=(C_word)C_i_stringp(t1);
t3=(C_truep(t2)?(C_word)C_block_size(t1):C_SCHEME_FALSE);
t4=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[374]);
t5=(C_word)C_block_size(((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1140 make-string */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}

/* k5824 in k5812 in k5809 in string-translate in k5161 in k1577 */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5826,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=lf[379],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_5831(t5,((C_word*)t0)[2],C_fix(0),C_fix(0));}

/* loop in k5824 in k5812 in k5809 in string-translate in k5161 in k1577 */
static void C_fcall f_5831(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5831,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
if(C_truep((C_word)C_fixnum_lessp(t3,t2))){
/* extras.scm: 1144 ##sys#substring */
t4=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[7],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[7]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[6],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5850,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 1147 from */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}}

/* k5848 in loop in k5824 in k5812 in k5809 in string-translate in k5161 in k1577 */
static void C_ccall f_5850(C_word c,C_word t0,C_word t1){
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
t2=t1;
if(C_truep(t2)){
t3=((C_word*)t0)[9];
if(C_truep(t3)){
if(C_truep((C_word)C_charp(((C_word*)t0)[9]))){
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[9]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1154 loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5831(t7,((C_word*)t0)[4],t5,t6);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
/* extras.scm: 1156 ##sys#error */
t4=*((C_word*)lf[14]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],lf[374],lf[378],((C_word*)t0)[6],((C_word*)t0)[9]);}
else{
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],(C_word)C_subchar(((C_word*)t0)[9],t1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1159 loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_5831(t7,((C_word*)t0)[4],t5,t6);}}}
else{
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1151 loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5831(t5,((C_word*)t0)[4],t4,((C_word*)t0)[7]);}}
else{
t3=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t5=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1150 loop */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5831(t6,((C_word*)t0)[4],t4,t5);}}

/* instring in string-translate in k5161 in k1577 */
static void C_fcall f_5777(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5777,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5782,a[2]=t2,a[3]=t3,a[4]=lf[376],tmp=(C_word)a,a+=5,tmp));}

/* f_5782 in instring in string-translate in k5161 in k1577 */
static void C_ccall f_5782(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5782,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5788,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=lf[375],tmp=(C_word)a,a+=6,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_5788(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_5788(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* string-intersperse in k5161 in k1577 */
static void C_ccall f_5659(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5659r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5659r(t0,t1,t2,t3);}}

static void C_ccall f_5659r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5663,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_5663(2,t5,lf[371]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_5663(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5661 in string-intersperse in k5161 in k1577 */
static void C_ccall f_5663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5663,2,t0,t1);}
t2=(C_word)C_i_check_list_2(((C_word*)t0)[3],lf[366]);
t3=(C_word)C_i_check_string_2(t1,lf[366]);
t4=(C_word)C_block_size(t1);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5677,a[2]=t6,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=lf[370],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5677(t8,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop1 in k5661 in string-intersperse in k5161 in k1577 */
static void C_fcall f_5677(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5677,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep((C_word)C_eqp(((C_word*)t0)[5],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[367]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_fixnum_difference(t3,((C_word*)t0)[3]);
/* extras.scm: 1088 ##sys#allocate-vector */
t6=*((C_word*)lf[369]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_i_check_string_2(t5,lf[366]);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_block_size(t5);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[3],t3);
t10=(C_word)C_fixnum_plus(t8,t9);
/* extras.scm: 1103 loop1 */
t14=t1;
t15=t7;
t16=t10;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
/* extras.scm: 1105 ##sys#not-a-proper-list-error */
t5=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,((C_word*)t0)[5]);}}}

/* k5685 in loop1 in k5661 in string-intersperse in k5161 in k1577 */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=lf[368],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_5692(t2,((C_word*)t0)[2],C_fix(0)));}

/* loop2 in k5685 in loop1 in k5661 in string-intersperse in k5161 in k1577 */
static C_word C_fcall f_5692(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_block_size(t3);
t6=(C_word)C_substring_copy(t3,((C_word*)t0)[4],C_fix(0),t5,t2);
t7=(C_word)C_fixnum_plus(t2,t5);
if(C_truep((C_word)C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[4]);}
else{
t8=(C_word)C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],t7);
t9=(C_word)C_fixnum_plus(t7,((C_word*)t0)[2]);
t11=t4;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* string-split in k5161 in k1577 */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5524r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5524r(t0,t1,t2,t3);}}

static void C_ccall f_5524r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=(C_word)C_i_check_string_2(t2,lf[360]);
t5=(C_word)C_vemptyp(t3);
t6=(C_truep(t5)?lf[361]:(C_word)C_i_vector_ref(t3,C_fix(0)));
t7=(C_word)C_block_size(t3);
t8=(C_word)C_eqp(t7,C_fix(2));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t3,C_fix(1)):C_SCHEME_FALSE);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_string_2(t6,lf[360]);
t12=(C_word)C_block_size(t6);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5545,a[2]=t2,a[3]=t14,a[4]=lf[362],tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5565,a[2]=t6,a[3]=t17,a[4]=t12,a[5]=t2,a[6]=t15,a[7]=t9,a[8]=t14,a[9]=t10,a[10]=lf[364],tmp=(C_word)a,a+=11,tmp));
t19=((C_word*)t17)[1];
f_5565(t19,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* loop in string-split in k5161 in k1577 */
static void C_fcall f_5565(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5565,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5575,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[7]);
if(C_truep(t7)){
/* extras.scm: 1064 add */
t8=((C_word*)t0)[6];
f_5545(t8,t5,t4,t2,t3);}
else{
t8=t5;
f_5575(2,t8,C_SCHEME_UNDEFINED);}}
else{
t5=(C_word)C_subchar(((C_word*)t0)[5],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5592,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[3],a[10]=t2,a[11]=((C_word*)t0)[4],a[12]=lf[363],tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_5592(t9,t1,C_fix(0));}}

/* scan in loop in string-split in k5161 in k1577 */
static void C_fcall f_5592(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5592,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[11]))){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* extras.scm: 1069 loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_5565(t4,t1,t3,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_fixnum_greaterp(((C_word*)t0)[10],((C_word*)t0)[7]);
t6=(C_truep(t5)?t5:((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5631,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1073 add */
t8=((C_word*)t0)[3];
f_5545(t8,t7,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[8]);}
else{
/* extras.scm: 1074 loop */
t7=((C_word*)((C_word*)t0)[9])[1];
f_5565(t7,t1,t4,((C_word*)t0)[8],t4);}}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* extras.scm: 1075 scan */
t11=t1;
t12=t4;
t1=t11;
t2=t12;
goto loop;}}}

/* k5629 in scan in loop in string-split in k5161 in k1577 */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1073 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5565(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,((C_word*)t0)[2]);}

/* k5573 in loop in string-split in k5161 in k1577 */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* add in string-split in k5161 in k1577 */
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5545,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5560,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1057 ##sys#substring */
t6=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],t2,t3);}

/* k5558 in add in string-split in k5161 in k1577 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5560,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5552,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=t3;
f_5552(t4,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=t3;
f_5552(t5,t4);}}

/* k5550 in k5558 in add in string-split in k5161 in k1577 */
static void C_fcall f_5552(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* substring-ci=? in k5161 in k1577 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5460r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5460r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5460r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=(C_word)C_i_check_string_2(t2,lf[358]);
t6=(C_word)C_i_check_string_2(t3,lf[358]);
t7=(C_word)C_block_size(t4);
t8=(C_word)C_fixnum_greater_or_equal_p(t7,C_fix(1));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix(0));
t10=(C_word)C_fixnum_greater_or_equal_p(t7,C_fix(2));
t11=(C_truep(t10)?(C_word)C_i_vector_ref(t4,C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5479,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t7,C_fix(2)))){
t13=t12;
f_5479(t13,(C_word)C_i_vector_ref(t4,C_fix(2)));}
else{
t13=(C_word)C_block_size(t2);
t14=(C_word)C_fixnum_difference(t13,t9);
t15=(C_word)C_block_size(t3);
t16=(C_word)C_fixnum_difference(t15,t11);
t17=t12;
f_5479(t17,(C_word)C_i_fixnum_min(t14,t16));}}

/* k5477 in substring-ci=? in k5161 in k1577 */
static void C_fcall f_5479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[358]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[358]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* substring=? in k5161 in k1577 */
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5396r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5396r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5396r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=(C_word)C_i_check_string_2(t2,lf[356]);
t6=(C_word)C_i_check_string_2(t3,lf[356]);
t7=(C_word)C_block_size(t4);
t8=(C_word)C_fixnum_greater_or_equal_p(t7,C_fix(1));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix(0));
t10=(C_word)C_fixnum_greater_or_equal_p(t7,C_fix(2));
t11=(C_truep(t10)?(C_word)C_i_vector_ref(t4,C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5415,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t11,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t7,C_fix(2)))){
t13=t12;
f_5415(t13,(C_word)C_i_vector_ref(t4,C_fix(2)));}
else{
t13=(C_word)C_block_size(t2);
t14=(C_word)C_fixnum_difference(t13,t9);
t15=(C_word)C_block_size(t3);
t16=(C_word)C_fixnum_difference(t15,t11);
t17=t12;
f_5415(t17,(C_word)C_i_fixnum_min(t14,t16));}}

/* k5413 in substring=? in k5161 in k1577 */
static void C_fcall f_5415(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[356]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[356]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[5],t1));}

/* string-compare3-ci in k5161 in k1577 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5365,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[354]);
t5=(C_word)C_i_check_string_2(t3,lf[354]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_string_compare_case_insensitive(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* string-compare3 in k5161 in k1577 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5334,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[352]);
t5=(C_word)C_i_check_string_2(t3,lf[352]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=(C_word)C_mem_compare(t2,t3,t10);
t12=(C_word)C_eqp(t11,C_fix(0));
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_truep(t12)?t8:t11));}

/* substring-index-ci in k5161 in k1577 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5315r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5315r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5315r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5325,a[2]=t3,a[3]=t2,a[4]=lf[350],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 982  traverse */
f_5249(t1,t2,t3,t6,t7,lf[349]);}

/* a5324 in substring-index-ci in k5161 in k1577 */
static void C_ccall f_5325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5325,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* substring-index in k5161 in k1577 */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5296r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5296r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5296r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5306,a[2]=t3,a[3]=t2,a[4]=lf[347],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 976  traverse */
f_5249(t1,t2,t3,t6,t7,lf[346]);}

/* a5305 in substring-index in k5161 in k1577 */
static void C_ccall f_5306(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5306,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* traverse in k5161 in k1577 */
static void C_fcall f_5249(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5249,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t2,t6);
t8=(C_word)C_i_check_string_2(t3,t6);
t9=(C_word)C_block_size(t3);
t10=(C_word)C_block_size(t2);
t11=(C_word)C_i_check_exact_2(t4,t6);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5270,a[2]=t10,a[3]=t5,a[4]=t13,a[5]=t9,a[6]=lf[344],tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_5270(t15,t1,t4,t10);}

/* loop in traverse in k5161 in k1577 */
static void C_fcall f_5270(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5270,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t3,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 970  test */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,((C_word*)t0)[2]);}}

/* k5281 in loop in traverse in k5161 in k1577 */
static void C_ccall f_5283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 972  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5270(t4,((C_word*)t0)[5],t2,t3);}}

/* conc in k5161 in k1577 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5239r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5239r(t0,t1,t2);}}

static void C_ccall f_5239r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5247,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[339]+1),t2);}

/* k5245 in conc in k5161 in k1577 */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ->string in k5161 in k1577 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5194,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* extras.scm: 945  symbol->string */
t3=*((C_word*)lf[340]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
/* extras.scm: 946  string */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* extras.scm: 947  ##sys#number->string */
t3=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5231,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 949  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}}}}

/* k5229 in ->string in k5161 in k1577 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5231,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5234,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 950  display */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k5232 in k5229 in ->string in k5161 in k1577 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 951  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pretty-print in k5161 in k1577 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5165r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5165r(t0,t1,t2,t3);}}

static void C_ccall f_5165r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5169,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t5=t4;
f_5169(2,t5,(C_word)C_i_vector_ref(t3,C_fix(0)));}
else{
/* extras.scm: 929  current-output-port */
t5=*((C_word*)lf[336]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5167 in pretty-print in k5161 in k1577 */
static void C_ccall f_5169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5176,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 930  pretty-print-width */
t4=*((C_word*)lf[333]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5174 in k5167 in pretty-print in k5161 in k1577 */
static void C_ccall f_5176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[4],a[3]=lf[335],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 930  ##extras#generic-write */
t3=lf[225];
f_3834(t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1,t2);}

/* a5177 in k5174 in k5167 in pretty-print in k5161 in k1577 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5178,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5182,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 930  display */
t4=*((C_word*)lf[160]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* k5180 in a5177 in k5174 in k5167 in pretty-print in k5161 in k1577 */
static void C_ccall f_5182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k5170 in k5167 in pretty-print in k5161 in k1577 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##extras#reverse-string-append in k1577 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5084,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5087,a[2]=t4,a[3]=lf[331],tmp=(C_word)a,a+=4,tmp));
/* extras.scm: 921  rev-string-append */
t6=((C_word*)t4)[1];
f_5087(t6,t1,t2,C_fix(0));}

/* rev-string-append in ##extras#reverse-string-append in k1577 */
static void C_fcall f_5087(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5087,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5103,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_a_i_plus(&a,2,t3,t5);
/* extras.scm: 912  rev-string-append */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
/* extras.scm: 919  make-string */
t4=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k5101 in rev-string-append in ##extras#reverse-string-append in k1577 */
static void C_ccall f_5103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5103,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(C_word)C_a_i_minus(&a,2,t2,((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5112,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[330],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5112(t8,((C_word*)t0)[2],C_fix(0),t4);}

/* loop in k5101 in rev-string-append in ##extras#reverse-string-append in k1577 */
static void C_fcall f_5112(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5112,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_lessp(t2,((C_word*)t0)[5]))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
t5=(C_word)C_i_string_set(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_a_i_plus(&a,2,t2,C_fix(1));
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
/* extras.scm: 917  loop */
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}}

/* ##extras#generic-write in k1577 */
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3834,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3837,a[2]=lf[230],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3928,a[2]=t5,a[3]=lf[237],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3947,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t9,a[9]=t11,a[10]=lf[278],tmp=(C_word)a,a+=11,tmp));
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4428,a[2]=t6,a[3]=t8,a[4]=t7,a[5]=t11,a[6]=t4,a[7]=t3,a[8]=t9,a[9]=lf[328],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t4)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5075,a[2]=t2,a[3]=t13,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 901  make-string */
t15=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_fix(1),C_make_character(10));}
else{
/* extras.scm: 902  wr */
t14=((C_word*)t11)[1];
f_3947(t14,t1,t2,C_fix(0));}}

/* k5073 in ##extras#generic-write in k1577 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5079,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 901  pp */
t3=((C_word*)t0)[3];
f_4428(t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k5077 in k5073 in ##extras#generic-write in k1577 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 901  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp in ##extras#generic-write in k1577 */
static void C_fcall f_4428(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[151],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4428,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=lf[281],tmp=(C_word)a,a+=5,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=lf[282],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t11,a[6]=t15,a[7]=((C_word*)t0)[8],a[8]=lf[287],tmp=(C_word)a,a+=9,tmp));
t41=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t39,a[5]=t13,a[6]=t19,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=((C_word*)t0)[4],a[12]=lf[289],tmp=(C_word)a,a+=13,tmp));
t42=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t17,a[5]=lf[291],tmp=(C_word)a,a+=6,tmp));
t43=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[8],a[3]=t17,a[4]=lf[293],tmp=(C_word)a,a+=5,tmp));
t44=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[8],a[3]=t7,a[4]=t9,a[5]=lf[298],tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t9,a[6]=t17,a[7]=lf[304],tmp=(C_word)a,a+=8,tmp));
t46=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4910,a[2]=t11,a[3]=t15,a[4]=lf[305],tmp=(C_word)a,a+=5,tmp));
t47=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4916,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=lf[306],tmp=(C_word)a,a+=6,tmp));
t48=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4922,a[2]=t11,a[3]=t19,a[4]=lf[307],tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4928,a[2]=t21,a[3]=t13,a[4]=lf[308],tmp=(C_word)a,a+=5,tmp));
t50=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4934,a[2]=t21,a[3]=t11,a[4]=t19,a[5]=lf[309],tmp=(C_word)a,a+=6,tmp));
t51=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4940,a[2]=t11,a[3]=t13,a[4]=lf[310],tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4946,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=lf[311],tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4968,a[2]=t11,a[3]=t19,a[4]=lf[312],tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4974,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=lf[313],tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4983,a[2]=t37,a[3]=t35,a[4]=t33,a[5]=t31,a[6]=t29,a[7]=t27,a[8]=t25,a[9]=t23,a[10]=lf[327],tmp=(C_word)a,a+=11,tmp));
/* extras.scm: 898  pr */
t56=((C_word*)t9)[1];
f_4496(t56,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* style in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4983(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4983,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,lf[314]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_4993(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[324]);
if(C_truep(t5)){
t6=t4;
f_4993(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[325]);
t7=t4;
f_4993(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[326])));}}}

/* k4991 in style in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4993(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[10])[1]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[315]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[9],lf[316]));
if(C_truep(t3)){
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[8])[1]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[317]);
if(C_truep(t4)){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[318]);
if(C_truep(t5)){
t6=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[319]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[9],lf[320]));
if(C_truep(t7)){
t8=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[5])[1]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[321]);
if(C_truep(t8)){
t9=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[322]);
if(C_truep(t9)){
t10=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[323]);
t11=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}}}}}}}}

/* pp-do in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4974,5,t0,t1,t2,t3,t4);}
/* extras.scm: 876  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4762(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* pp-begin in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4968,5,t0,t1,t2,t3,t4);}
/* extras.scm: 873  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4762(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-let in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4946,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_i_car(t5);
t8=t6;
f_4953(t8,(C_word)C_i_symbolp(t7));}
else{
t7=t6;
f_4953(t7,C_SCHEME_FALSE);}}

/* k4951 in pp-let in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 870  pp-general */
t2=((C_word*)((C_word*)t0)[8])[1];
f_4762(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-and in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4940,5,t0,t1,t2,t3,t4);}
/* extras.scm: 865  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4648(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-case in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4934,5,t0,t1,t2,t3,t4);}
/* extras.scm: 862  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4762(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-cond in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4928,5,t0,t1,t2,t3,t4);}
/* extras.scm: 859  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4648(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-if in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4922,5,t0,t1,t2,t3,t4);}
/* extras.scm: 856  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4762(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-lambda in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4916,5,t0,t1,t2,t3,t4);}
/* extras.scm: 853  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4762(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-expr-list in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4910,5,t0,t1,t2,t3,t4);}
/* extras.scm: 850  pp-list */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4676(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-general in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4762,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4847,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=lf[299],tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4806,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t9,a[5]=t4,a[6]=t7,a[7]=lf[300],tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t10,a[5]=t4,a[6]=t6,a[7]=lf[301],tmp=(C_word)a,a+=8,tmp);
t12=(C_word)C_i_car(t2);
t13=(C_word)C_i_cdr(t2);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t11,a[6]=t3,a[7]=t13,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4908,a[2]=t12,a[3]=t14,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 841  out */
t16=((C_word*)t0)[2];
f_3928(t16,t15,lf[303],t3);}

/* k4906 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 841  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4858 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4860,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[8])?(C_word)C_i_pairp(((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4875,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4890,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 845  out */
t7=((C_word*)t0)[2];
f_3928(t7,t6,lf[302],t1);}
else{
t3=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(2));
t4=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 847  tail1 */
t5=((C_word*)t0)[5];
f_4765(t5,((C_word*)t0)[4],((C_word*)t0)[7],t3,t1,t4);}}

/* k4888 in k4858 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 845  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4873 in k4858 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4875,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(2));
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 846  tail1 */
t4=((C_word*)t0)[4];
f_4765(t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t1,t3);}

/* tail1 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4765,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4788,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 825  indent */
t13=((C_word*)t0)[2];
f_4464(t13,t12,t5,t4);}
else{
/* extras.scm: 826  tail2 */
t7=((C_word*)t0)[4];
f_4806(t7,t1,t2,t3,t4,t5);}}

/* k4790 in tail1 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 825  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4496(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4786 in tail1 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 825  tail2 */
t2=((C_word*)t0)[6];
f_4806(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* tail2 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4806(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4806,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4829,a[2]=t3,a[3]=t8,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 833  indent */
t13=((C_word*)t0)[2];
f_4464(t13,t12,t5,t4);}
else{
/* extras.scm: 834  tail3 */
t7=((C_word*)t0)[4];
f_4847(t7,t1,t2,t3,t4);}}

/* k4831 in tail2 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 833  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4496(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4827 in tail2 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 833  tail3 */
t2=((C_word*)t0)[5];
f_4847(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tail3 in pp-general in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4847(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4847,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm: 837  pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4685(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-down in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4685(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4685,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4691,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t5,a[9]=lf[297],tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_4691(t10,t1,t2,t3);}

/* loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4691(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4691,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4714,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=t8,a[5]=t7,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 808  indent */
t10=((C_word*)t0)[4];
f_4464(t10,t9,((C_word*)t0)[3],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 810  out */
t4=((C_word*)t0)[2];
f_3928(t4,t1,lf[294],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4744,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4760,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 814  indent */
t8=((C_word*)t0)[4];
f_4464(t8,t7,((C_word*)t0)[3],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4758 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 814  out */
t2=((C_word*)t0)[3];
f_3928(t2,((C_word*)t0)[2],lf[296],t1);}

/* k4754 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 814  indent */
t2=((C_word*)t0)[4];
f_4464(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4746 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4748,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* extras.scm: 813  pr */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4496(t3,((C_word*)t0)[4],((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k4742 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 812  out */
t2=((C_word*)t0)[3];
f_3928(t2,((C_word*)t0)[2],lf[295],t1);}

/* k4720 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 808  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4496(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4712 in loop in pp-down in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 807  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4691(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp-list in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4676(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4676,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4680,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 798  out */
t7=((C_word*)t0)[2];
f_3928(t7,t6,lf[292],t3);}

/* k4678 in pp-list in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 799  pp-down */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4685(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-call in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4648(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4648,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4652,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4674,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 790  out */
t9=((C_word*)t0)[2];
f_3928(t9,t8,lf[290],t3);}

/* k4672 in pp-call in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 790  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4650 in pp-call in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4652,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 792  pp-down */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4685(t4,((C_word*)t0)[4],t2,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* pp-expr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4583,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=t2,a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* extras.scm: 770  read-macro? */
f_3837(t5,t2);}

/* k4588 in pp-expr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4590,2,t0,t1);}
if(C_truep(t1)){
t2=f_3889(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4601,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t4=f_3895(((C_word*)t0)[13]);
/* extras.scm: 772  out */
t5=((C_word*)t0)[7];
f_3928(t5,t3,t4,((C_word*)t0)[6]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[13]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4617,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 777  style */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4983(t4,t3,t2);}
else{
/* extras.scm: 784  pp-list */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4676(t3,((C_word*)t0)[11],((C_word*)t0)[13],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)((C_word*)t0)[9])[1]);}}}

/* k4615 in k4588 in pp-expr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4617,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm: 779  proc */
t2=t1;
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4643,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 780  ##sys#symbol->qualified-string */
t3=*((C_word*)lf[288]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k4641 in k4615 in k4588 in pp-expr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
if(C_truep((C_word)C_i_greaterp(t2,C_fix(5)))){
/* extras.scm: 782  pp-general */
t3=((C_word*)((C_word*)t0)[8])[1];
f_4762(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm: 783  pp-call */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4648(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k4599 in k4588 in pp-expr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 771  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4496(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* pr in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4496,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_pairp(t2);
t7=(C_truep(t6)?t6:(C_word)C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t5,a[7]=t2,a[8]=t9,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t11=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[3],t3);
t12=(C_word)C_a_i_minus(&a,2,t11,t4);
t13=(C_word)C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm: 756  max */
t14=*((C_word*)lf[286]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm: 767  wr */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3947(t8,t1,t2,t3);}}

/* k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4509,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4547,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=lf[285],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 757  ##extras#generic-write */
t6=lf[225];
f_3834(t6,t4,((C_word*)t0)[7],((C_word*)t0)[2],C_SCHEME_FALSE,t5);}

/* a4546 in k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4547,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=(C_word)C_i_string_length(t2);
t6=(C_word)C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)));}

/* k4510 in k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
if(C_truep((C_word)C_i_greaterp(((C_word*)((C_word*)t0)[11])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4525,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 763  ##extras#reverse-string-append */
t3=*((C_word*)lf[283]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
/* extras.scm: 765  pp-pair */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 766  vector->list */
t3=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}}

/* k4539 in k4510 in k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 766  out */
t3=((C_word*)t0)[3];
f_3928(t3,t2,lf[284],((C_word*)t0)[2]);}

/* k4543 in k4539 in k4510 in k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 766  pp-list */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4676(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k4523 in k4510 in k4507 in pr in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 763  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* indent in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4464(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4464,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4487,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 750  make-string */
t6=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(1),C_make_character(10));}
else{
t4=(C_word)C_a_i_minus(&a,2,t2,t3);
/* extras.scm: 751  spaces */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4431(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4485 in indent in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 750  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4478 in indent in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 750  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4431(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spaces in pp in ##extras#generic-write in k1577 */
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4431,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(0)))){
if(C_truep((C_word)C_i_greaterp(t2,C_fix(7)))){
t4=(C_word)C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4455,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 743  out */
t6=((C_word*)t0)[2];
f_3928(t6,t5,lf[279],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4462,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 744  ##sys#substring */
t5=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[280],C_fix(0),t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4460 in spaces in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 744  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4453 in spaces in pp in ##extras#generic-write in k1577 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 743  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4431(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr in ##extras#generic-write in k1577 */
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3947,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=lf[245],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],a[8]=lf[246],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
/* extras.scm: 682  wr-expr */
t6=t5;
f_3950(t6,t1,t2,t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 683  wr-lst */
t6=t4;
f_3977(t6,t1,t2,t3);}
else{
if(C_truep((C_word)C_eofp(t2))){
/* extras.scm: 684  out */
t6=((C_word*)t0)[8];
f_3928(t6,t1,lf[247],t3);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 685  vector->list */
t7=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep((C_word)C_booleanp(t2))){
t6=(C_truep(t2)?lf[250]:lf[251]);
/* extras.scm: 686  out */
t7=((C_word*)t0)[8];
f_3928(t7,t1,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 687  ##sys#number? */
t7=*((C_word*)lf[277]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}}}}}

/* k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4126,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 687  ##sys#number->string */
t3=*((C_word*)lf[252]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 689  open-output-string */
t3=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 692  ##sys#procedure->string */
t3=*((C_word*)lf[254]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
/* extras.scm: 694  out */
t2=((C_word*)t0)[8];
f_3928(t2,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4184,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 695  out */
t3=((C_word*)t0)[8];
f_3928(t3,t2,lf[258],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 709  make-string */
t3=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[5]);}
else{
t2=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 711  out */
t4=((C_word*)t0)[8];
f_3928(t4,t3,lf[263],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_eofp(((C_word*)t0)[5]))){
/* extras.scm: 722  out */
t2=((C_word*)t0)[8];
f_3928(t2,((C_word*)t0)[7],lf[264],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm: 723  out */
t2=((C_word*)t0)[8];
f_3928(t2,((C_word*)t0)[7],lf[265],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 724  ##sys#pointer->string */
t3=*((C_word*)lf[266]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 726  open-output-string */
t3=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4383,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 729  port? */
t3=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}}}}}}}}}

/* k4381 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4383,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
/* extras.scm: 729  string-append */
t4=*((C_word*)lf[268]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[269],t3,lf[270]);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 731  out */
t3=((C_word*)t0)[5];
f_3928(t3,t2,lf[273],((C_word*)t0)[3]);}
else{
t2=(C_word)C_slot(lf[274],C_fix(0));
t3=(C_word)C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
/* extras.scm: 735  out */
t4=((C_word*)t0)[5];
f_3928(t4,((C_word*)t0)[4],lf[275],((C_word*)t0)[3]);}
else{
/* extras.scm: 736  out */
t4=((C_word*)t0)[5];
f_3928(t4,((C_word*)t0)[4],lf[276],((C_word*)t0)[3]);}}}}

/* k4398 in k4381 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4400,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4410,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 732  ##sys#lambda-info->string */
t4=*((C_word*)lf[272]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4408 in k4398 in k4381 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 732  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4401 in k4398 in k4381 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 733  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],lf[271],((C_word*)t0)[2]);}

/* k4388 in k4381 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 729  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4365 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4370,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 727  ##sys#user-print-hook */
t3=*((C_word*)lf[267]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k4368 in k4365 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 728  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4375 in k4368 in k4365 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 728  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4356 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 724  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 712  char-name */
t3=*((C_word*)lf[262]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(1));
/* extras.scm: 714  out */
t3=((C_word*)t0)[6];
f_3928(t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4296,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 716  out */
t3=((C_word*)t0)[6];
f_3928(t3,t2,lf[259],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(65535));
t4=(C_truep(t3)?lf[260]:lf[261]);
/* extras.scm: 719  out */
t5=((C_word*)t0)[6];
f_3928(t5,t2,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 721  make-string */
t3=*((C_word*)lf[124]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[2]);}}}}

/* k4331 in k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 721  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4310 in k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 720  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k4317 in k4310 in k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 720  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4294 in k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 717  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k4301 in k4294 in k4275 in k4272 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 717  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4266 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 709  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4184,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4186,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=lf[257],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4186(t5,((C_word*)t0)[2],C_fix(0),C_fix(0),t1);}

/* loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_fcall f_4186(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4186,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4193,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_string_length(((C_word*)t0)[4]);
t7=t5;
f_4193(t7,(C_word)C_i_lessp(t3,t6));}
else{
t6=t5;
f_4193(t6,C_SCHEME_FALSE);}}

/* k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_fcall f_4193(C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4193,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_ref(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_eqp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:(C_word)C_eqp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4216,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4220,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 703  ##sys#substring */
t9=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}
else{
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
/* extras.scm: 705  loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_4186(t6,((C_word*)t0)[5],((C_word*)t0)[2],t5,((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 707  ##sys#substring */
t4=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k4243 in k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 707  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4239 in k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 706  out */
t2=((C_word*)t0)[3];
f_3928(t2,((C_word*)t0)[2],lf[256],t1);}

/* k4222 in k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 703  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4218 in k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 702  out */
t2=((C_word*)t0)[3];
f_3928(t2,((C_word*)t0)[2],lf[255],t1);}

/* k4214 in k4191 in loop in k4182 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 700  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4186(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4163 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 692  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4140 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4145,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 690  ##sys#print */
t3=*((C_word*)lf[253]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k4143 in k4140 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4152,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 691  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4150 in k4143 in k4140 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 691  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4131 in k4124 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 687  out */
t2=((C_word*)t0)[4];
f_3928(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4101 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4107,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 685  out */
t3=((C_word*)t0)[3];
f_3928(t3,t2,lf[248],((C_word*)t0)[2]);}

/* k4105 in k4101 in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 685  wr-lst */
t2=((C_word*)t0)[4];
f_3977(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-expr in wr in ##extras#generic-write in k1577 */
static void C_fcall f_3950(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3950,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3957,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 667  read-macro? */
f_3837(t4,t2);}

/* k3955 in wr-expr in wr in ##extras#generic-write in k1577 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3957,2,t0,t1);}
if(C_truep(t1)){
t2=f_3889(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3968,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=f_3895(((C_word*)t0)[8]);
/* extras.scm: 668  out */
t5=((C_word*)t0)[4];
f_3928(t5,t3,t4,((C_word*)t0)[3]);}
else{
/* extras.scm: 669  wr-lst */
t2=((C_word*)t0)[2];
f_3977(t2,((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* k3966 in k3955 in wr-expr in wr in ##extras#generic-write in k1577 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 668  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-lst in wr in ##extras#generic-write in k1577 */
static void C_fcall f_3977(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3977,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3995,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=(C_word)C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4060,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 674  out */
t8=((C_word*)t0)[2];
f_3928(t8,t7,lf[243],t3);}
else{
t6=t5;
f_3995(2,t6,C_SCHEME_FALSE);}}
else{
/* extras.scm: 680  out */
t4=((C_word*)t0)[2];
f_3928(t4,t1,lf[244],t3);}}

/* k4058 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 674  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3995,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=lf[242],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3997(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_fcall f_3997(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3997,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4021,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4029,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 677  out */
t9=((C_word*)t0)[2];
f_3928(t9,t8,lf[238],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 678  out */
t5=((C_word*)t0)[2];
f_3928(t5,t1,lf[239],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4045,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4049,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 679  out */
t7=((C_word*)t0)[2];
f_3928(t7,t6,lf[241],t3);}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}}

/* k4047 in loop in k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 679  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4043 in loop in k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 679  out */
t2=((C_word*)t0)[3];
f_3928(t2,((C_word*)t0)[2],lf[240],t1);}

/* k4027 in loop in k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 677  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4019 in loop in k3993 in wr-lst in wr in ##extras#generic-write in k1577 */
static void C_ccall f_4021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 677  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3997(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* out in ##extras#generic-write in k1577 */
static void C_fcall f_3928(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3928,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3938,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 662  output */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k3936 in out in ##extras#generic-write in k1577 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_length(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_plus(&a,2,((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* read-macro-prefix in ##extras#generic-write in k1577 */
static C_word C_fcall f_3895(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_eqp(t2,lf[226]);
if(C_truep(t4)){
return(lf[232]);}
else{
t5=(C_word)C_eqp(t2,lf[227]);
if(C_truep(t5)){
return(lf[233]);}
else{
t6=(C_word)C_eqp(t2,lf[228]);
if(C_truep(t6)){
return(lf[234]);}
else{
t7=(C_word)C_eqp(t2,lf[229]);
return((C_truep(t7)?lf[235]:C_SCHEME_UNDEFINED));}}}}

/* read-macro-body in ##extras#generic-write in k1577 */
static C_word C_fcall f_3889(C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return((C_word)C_i_cadr(t1));}

/* read-macro? in ##extras#generic-write in k1577 */
static void C_fcall f_3837(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3837,NULL,2,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_eqp(t3,lf[226]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_3869(t7,t5);}
else{
t7=(C_word)C_eqp(t3,lf[227]);
if(C_truep(t7)){
t8=t6;
f_3869(t8,t7);}
else{
t8=(C_word)C_eqp(t3,lf[228]);
t9=t6;
f_3869(t9,(C_truep(t8)?t8:(C_word)C_eqp(t3,lf[229])));}}}

/* k3867 in read-macro? in ##extras#generic-write in k1577 */
static void C_fcall f_3869(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* make-output-port in k1577 */
static void C_ccall f_3776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+33)){
C_save_and_reclaim((void*)tr4rv,(void*)f_3776r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_3776r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3776r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(33);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3794,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[219],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t2,a[3]=lf[220],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3810,a[2]=t3,a[3]=lf[221],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3819,a[2]=t6,a[3]=lf[222],tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,t8,t9,t10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t12=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3789,a[2]=t1,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 624  ##sys#make-port */
t14=*((C_word*)lf[209]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t13,C_SCHEME_FALSE,t11,lf[223],lf[211]);}

/* k3787 in make-output-port in k1577 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(9),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3818 in make-output-port in k1577 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3819,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* extras.scm: 619  flush */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a3809 in make-output-port in k1577 */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3810,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3814,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 616  close */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3812 in a3809 in make-output-port in k1577 */
static void C_ccall f_3814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a3803 in make-output-port in k1577 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3804,4,t0,t1,t2,t3);}
/* extras.scm: 614  write */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3793 in make-output-port in k1577 */
static void C_ccall f_3794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3794,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3802,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 612  string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k3800 in a3793 in make-output-port in k1577 */
static void C_ccall f_3802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 612  write */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* make-input-port in k1577 */
static void C_ccall f_3630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr5r,(void*)f_3630r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3630r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3630r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(18);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3632,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=lf[212],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3703,a[2]=t6,a[3]=lf[213],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=t7,a[3]=lf[214],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3713,a[2]=t8,a[3]=lf[215],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-peek459486 */
t10=t9;
f_3713(t10,t1);}
else{
t10=(C_word)C_i_car(t5);
t11=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-read-string460484 */
t12=t8;
f_3708(t12,t1,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* def-read-line461481 */
t14=t7;
f_3703(t14,t1,t10,t12);}
else{
t14=(C_word)C_i_car(t13);
t15=(C_word)C_i_cdr(t13);
if(C_truep((C_word)C_i_nullp(t15))){
/* body457463 */
t16=t6;
f_3632(t16,t1,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}}}}

/* def-peek459 in make-input-port in k1577 */
static void C_fcall f_3713(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3713,NULL,2,t0,t1);}
/* def-read-string460484 */
t2=((C_word*)t0)[2];
f_3708(t2,t1,C_SCHEME_FALSE);}

/* def-read-string460 in make-input-port in k1577 */
static void C_fcall f_3708(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3708,NULL,3,t0,t1,t2);}
/* def-read-line461481 */
t3=((C_word*)t0)[2];
f_3703(t3,t1,t2,C_SCHEME_FALSE);}

/* def-read-line461 in make-input-port in k1577 */
static void C_fcall f_3703(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3703,NULL,4,t0,t1,t2,t3);}
/* body457463 */
t4=((C_word*)t0)[2];
f_3632(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body457 in make-input-port in k1577 */
static void C_fcall f_3632(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3632,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=lf[205],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=lf[206],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3689,a[2]=((C_word*)t0)[3],a[3]=lf[207],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],a[3]=lf[208],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_a_i_vector(&a,9,t5,t6,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,C_SCHEME_FALSE,t8,t3,t4);
t10=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3642,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 599  ##sys#make-port */
t12=*((C_word*)lf[209]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_SCHEME_TRUE,t9,lf[210],lf[211]);}

/* k3640 in body457 in make-input-port in k1577 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(9),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3697 in body457 in make-input-port in k1577 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3698,3,t0,t1,t2);}
/* extras.scm: 595  ready? */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* a3688 in body457 in make-input-port in k1577 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3689,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3693,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 591  close */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3691 in a3688 in body457 in make-input-port in k1577 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a3667 in body457 in make-input-port in k1577 */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3668,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* extras.scm: 582  peek */
t4=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3684,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 585  read */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}}

/* k3682 in a3667 in body457 in make-input-port in k1577 */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(10),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3646 in body457 in make-input-port in k1577 */
static void C_ccall f_3647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3647,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* extras.scm: 575  read */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=(C_word)C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* extras.scm: 579  read */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}}}

/* with-output-to-string in k1577 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3596,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3600,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 558  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3598 in with-output-to-string in k1577 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3600,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3605,a[2]=t3,a[3]=t5,a[4]=lf[200],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[201],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3622,a[2]=t5,a[3]=t3,a[4]=lf[202],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3621 in k3598 in with-output-to-string in k1577 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3622,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[163]+1));
t3=C_mutate((C_word*)lf[163]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* a3612 in k3598 in with-output-to-string in k1577 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3617,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 559  thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3615 in a3612 in k3598 in with-output-to-string in k1577 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 560  get-output-string */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],*((C_word*)lf[163]+1));}

/* a3604 in k3598 in with-output-to-string in k1577 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[163]+1));
t3=C_mutate((C_word*)lf[163]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* with-input-from-string in k1577 */
static void C_ccall f_3565(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3565,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3569,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 551  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3567 in with-input-from-string in k1577 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3574,a[2]=t3,a[3]=t5,a[4]=lf[195],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[3],a[3]=lf[196],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3588,a[2]=t5,a[3]=t3,a[4]=lf[197],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3587 in k3567 in with-input-from-string in k1577 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3588,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[12]+1));
t3=C_mutate((C_word*)lf[12]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* a3581 in k3567 in with-input-from-string in k1577 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3582,2,t0,t1);}
/* extras.scm: 552  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3573 in k3567 in with-input-from-string in k1577 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3574,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[12]+1));
t3=C_mutate((C_word*)lf[12]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* call-with-output-string in k1577 */
static void C_ccall f_3553(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3553,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3557,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 544  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3555 in call-with-output-string in k1577 */
static void C_ccall f_3557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3560,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 545  proc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k3558 in k3555 in call-with-output-string in k1577 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 546  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-input-string in k1577 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3544,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 537  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3546 in call-with-input-string in k1577 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 538  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* with-error-output-to-port in k1577 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3513,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3517,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 527  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[187]);}

/* k3515 in with-error-output-to-port in k1577 */
static void C_ccall f_3517(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3517,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3522,a[2]=t3,a[3]=t5,a[4]=lf[184],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[3],a[3]=lf[185],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3536,a[2]=t5,a[3]=t3,a[4]=lf[186],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 528  ##sys#dynamic-wind */
t9=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3535 in k3515 in with-error-output-to-port in k1577 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3536,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[183]+1));
t3=C_mutate((C_word*)lf[183]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* a3529 in k3515 in with-error-output-to-port in k1577 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
/* extras.scm: 529  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3521 in k3515 in with-error-output-to-port in k1577 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3522,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[183]+1));
t3=C_mutate((C_word*)lf[183]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* with-output-to-port in k1577 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3482,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3486,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 522  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[180]);}

/* k3484 in with-output-to-port in k1577 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3486,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3491,a[2]=t3,a[3]=t5,a[4]=lf[177],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[3],a[3]=lf[178],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3505,a[2]=t5,a[3]=t3,a[4]=lf[179],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 523  ##sys#dynamic-wind */
t9=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3504 in k3484 in with-output-to-port in k1577 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3505,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[163]+1));
t3=C_mutate((C_word*)lf[163]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* a3498 in k3484 in with-output-to-port in k1577 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3499,2,t0,t1);}
/* extras.scm: 524  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3490 in k3484 in with-output-to-port in k1577 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[163]+1));
t3=C_mutate((C_word*)lf[163]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* with-input-from-port in k1577 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3451,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 517  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[170]);}

/* k3453 in with-input-from-port in k1577 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3455,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3460,a[2]=t3,a[3]=t5,a[4]=lf[171],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[3],a[3]=lf[172],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3474,a[2]=t5,a[3]=t3,a[4]=lf[173],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 518  ##sys#dynamic-wind */
t9=*((C_word*)lf[174]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3473 in k3453 in with-input-from-port in k1577 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[12]+1));
t3=C_mutate((C_word*)lf[12]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* a3467 in k3453 in with-input-from-port in k1577 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3468,2,t0,t1);}
/* extras.scm: 519  thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3459 in k3453 in with-input-from-port in k1577 */
static void C_ccall f_3460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3460,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[12]+1));
t3=C_mutate((C_word*)lf[12]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[54]+1));}

/* write-line in k1577 */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3430r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3430r(t0,t1,t2,t3);}}

static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[163]+1):(C_word)C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 508  ##sys#check-port */
t6=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[168]);}

/* k3435 in write-line in k1577 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3437,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[6],lf[168]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3443,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 510  display */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* k3441 in k3435 in write-line in k1577 */
static void C_ccall f_3443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 511  newline */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* write-string in k1577 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_3341r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3341r(t0,t1,t2,t3);}}

static void C_ccall f_3341r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(13);
t4=(C_word)C_i_check_string_2(t2,lf[161]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3346,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[162],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=t5,a[3]=lf[164],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3382,a[2]=t6,a[3]=lf[165],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* extras.scm: 492  def-n360 */
t8=t7;
f_3382(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* extras.scm: 492  def-port361 */
t10=t6;
f_3377(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* extras.scm: 492  body358 */
t12=t5;
f_3346(t12,t1,t8,t10);}
else{
/* extras.scm: 492  ##sys#error */
t12=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-n360 in write-string in k1577 */
static void C_fcall f_3382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3382,NULL,2,t0,t1);}
/* extras.scm: 492  def-port361 */
t2=((C_word*)t0)[2];
f_3377(t2,t1,C_SCHEME_FALSE);}

/* def-port361 in write-string in k1577 */
static void C_fcall f_3377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3377,NULL,3,t0,t1,t2);}
/* extras.scm: 492  body358 */
t3=((C_word*)t0)[2];
f_3346(t3,t1,t2,*((C_word*)lf[163]+1));}

/* body358 in write-string in k1577 */
static void C_fcall f_3346(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3346,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 493  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,lf[148]);}

/* k3348 in body358 in write-string in k1577 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[6])?(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[161]):C_SCHEME_UNDEFINED);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=(C_word)C_block_size(((C_word*)t0)[2]);
t6=t4;
f_3363(t6,(C_word)C_fixnum_lessp(((C_word*)t0)[6],t5));}
else{
t5=t4;
f_3363(t5,C_SCHEME_FALSE);}}

/* k3361 in k3348 in body358 in write-string in k1577 */
static void C_fcall f_3363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 497  ##sys#substring */
t2=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_3360(2,t2,((C_word*)t0)[3]);}}

/* k3358 in k3348 in body358 in write-string in k1577 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 495  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* read-token in k1577 */
static void C_ccall f_3272(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_3272r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3272r(t0,t1,t2,t3);}}

static void C_ccall f_3272r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3276(2,t5,*((C_word*)lf[12]+1));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3276(2,t6,(C_word)C_i_car(t3));}
else{
/* extras.scm: 477  ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3274 in read-token in k1577 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 478  ##sys#check-port */
t3=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[155]);}

/* k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 479  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3280 in k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=lf[158],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3287(t5,((C_word*)t0)[2]);}

/* loop in k3280 in k3277 in k3274 in read-token in k1577 */
static void C_fcall f_3287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3287,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 481  ##sys#peek-char-0 */
t3=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3289 in loop in k3280 in k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_eofp(t1))){
t3=t2;
f_3297(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm: 482  pred */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k3295 in k3289 in loop in k3280 in k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3297,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3307,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 484  ##sys#read-char-0 */
t4=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
/* extras.scm: 486  get-output-string */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k3305 in k3295 in k3289 in loop in k3280 in k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 484  ##sys#write-char-0 */
t2=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3298 in k3295 in k3289 in loop in k3280 in k3277 in k3274 in read-token in k1577 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 485  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3287(t2,((C_word*)t0)[2]);}

/* read-string in k1577 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr2r,(void*)f_3145r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3145r(t0,t1,t2);}}

static void C_ccall f_3145r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[151],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3219,a[2]=t3,a[3]=lf[152],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3224,a[2]=t4,a[3]=lf[153],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-n315335 */
t6=t5;
f_3224(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-p316333 */
t8=t4;
f_3219(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body313318 */
t10=t3;
f_3147(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-n315 in read-string in k1577 */
static void C_fcall f_3224(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3224,NULL,2,t0,t1);}
/* def-p316333 */
t2=((C_word*)t0)[2];
f_3219(t2,t1,C_SCHEME_FALSE);}

/* def-p316 in read-string in k1577 */
static void C_fcall f_3219(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3219,NULL,3,t0,t1,t2);}
/* body313318 */
t3=((C_word*)t0)[2];
f_3147(t3,t1,t2,*((C_word*)lf[12]+1));}

/* body313 in read-string in k1577 */
static void C_fcall f_3147(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3147,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3151,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 455  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,lf[148]);}

/* k3149 in body313 in read-string in k1577 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3151,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[148]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3160,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 457  ##sys#make-string */
t4=*((C_word*)lf[131]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 463  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k3173 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3175,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=lf[150],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3180(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k3173 in k3149 in body313 in read-string in k1577 */
static void C_fcall f_3180(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3180,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
/* extras.scm: 465  get-output-string */
t5=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,((C_word*)t0)[4]);}
else{
t5=t3;
f_3184(2,t5,C_SCHEME_FALSE);}}

/* k3182 in loop in k3173 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3184,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 466  ##sys#read-char-0 */
t3=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3188 in k3182 in loop in k3173 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3190,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* extras.scm: 468  get-output-string */
t2=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3202,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 470  ##sys#write-char */
t3=*((C_word*)lf[149]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}}

/* k3200 in k3188 in k3182 in loop in k3173 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
/* extras.scm: 471  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3180(t3,((C_word*)t0)[2],t2);}

/* k3158 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3163,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 458  ##sys#read-string! */
t3=*((C_word*)lf[138]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[2],C_fix(0));}

/* k3161 in k3158 in k3149 in body313 in read-string in k1577 */
static void C_ccall f_3163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
/* extras.scm: 461  ##sys#substring */
t3=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* read-string! in k1577 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3048r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3048r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3048r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3050,a[2]=t5,a[3]=t3,a[4]=lf[142],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3092,a[2]=t6,a[3]=lf[143],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3097,a[2]=t7,a[3]=lf[144],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port289302 */
t9=t8;
f_3097(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start290300 */
t11=t7;
f_3092(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body287292 */
t13=t6;
f_3050(t13,t1,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}

/* def-port289 in read-string! in k1577 */
static void C_fcall f_3097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3097,NULL,2,t0,t1);}
/* def-start290300 */
t2=((C_word*)t0)[2];
f_3092(t2,t1,*((C_word*)lf[12]+1));}

/* def-start290 in read-string! in k1577 */
static void C_fcall f_3092(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3092,NULL,3,t0,t1,t2);}
/* body287292 */
t3=((C_word*)t0)[2];
f_3050(t3,t1,t2,C_fix(0));}

/* body287 in read-string! in k1577 */
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3050,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3054,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 442  ##sys#check-port */
t5=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[141]);}

/* k3052 in body287 in read-string! in k1577 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3054,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[6],lf[141]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[3])[1],lf[141]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1]);
t6=(C_word)C_block_size(((C_word*)t0)[6]);
if(C_truep((C_word)C_fixnum_greaterp(t5,t6))){
t7=(C_word)C_block_size(((C_word*)t0)[6]);
t8=(C_word)C_fixnum_difference(t7,((C_word*)t0)[5]);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=t3;
f_3060(t10,t9);}
else{
t7=t3;
f_3060(t7,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_3060(t4,C_SCHEME_UNDEFINED);}}

/* k3058 in k3052 in body287 in read-string! in k1577 */
static void C_fcall f_3060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[141]);
/* extras.scm: 449  ##sys#read-string! */
t3=*((C_word*)lf[138]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6]);}

/* ##sys#read-string! in k1577 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2964,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2968,a[2]=t2,a[3]=t6,a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_slot(t4,C_fix(6)))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3042,a[2]=t7,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 424  ##sys#read-char-0 */
t9=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}
else{
t8=t7;
f_2968(t8,C_SCHEME_UNDEFINED);}}

/* k3040 in ##sys#read-string! in k1577 */
static void C_ccall f_3042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],t1);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_2968(t5,t4);}

/* k2966 in ##sys#read-string! in k1577 */
static void C_fcall f_2968(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2968,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t3=(C_word)C_slot(t2,C_fix(7));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t5,a[6]=lf[139],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2976(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}

/* loop in k2966 in ##sys#read-string! in k1577 */
static void C_fcall f_2976(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2976,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* extras.scm: 429  rdstring */
t6=((C_word*)t0)[4];
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[3],t3,((C_word*)t0)[2],t2);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3025,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 430  ##sys#read-char-0 */
t7=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}}

/* k3023 in loop in k2966 in ##sys#read-string! in k1577 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[4];
f_2980(2,t2,C_fix(0));}
else{
t2=(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[4];
f_2980(2,t3,C_fix(1));}}

/* k2978 in loop in k2966 in ##sys#read-string! in k1577 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(C_word)C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=(C_word)C_fixnum_plus(((C_word*)t0)[3],t1);
t6=(C_truep(((C_word*)t0)[4])?(C_word)C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=(C_word)C_fixnum_plus(((C_word*)t0)[5],t1);
/* extras.scm: 438  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2976(t8,((C_word*)t0)[6],t5,t6,t7);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_fixnum_plus(t1,((C_word*)t0)[5]));}}}

/* read-lines in k1577 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr2r,(void*)f_2874r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2874r(t0,t1,t2);}}

static void C_ccall f_2874r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(11);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_slot(t2,C_fix(0)):*((C_word*)lf[12]+1));
t5=(C_word)C_i_pairp(t2);
t6=(C_truep(t5)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=(C_word)C_i_pairp(t6);
t8=(C_truep(t7)?(C_word)C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=lf[136],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_stringp(t4))){
/* extras.scm: 417  call-with-input-file */
t10=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t10))(4,t10,t1,t4,t9);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2941,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 419  ##sys#check-port */
t11=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t4,lf[134]);}}

/* k2939 in read-lines in k1577 */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 420  doread */
t2=((C_word*)t0)[4];
f_2886(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doread in read-lines in k1577 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2886,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:C_fix(1000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2896,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=lf[135],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2896(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* loop in doread in read-lines in k1577 */
static void C_fcall f_2896(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2896,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm: 411  reverse */
t5=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t5))(3,t5,t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 412  read-line */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k2907 in loop in doread in read-lines in k1577 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* extras.scm: 414  reverse */
t2=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 415  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2896(t4,((C_word*)t0)[5],t2,t3);}}

/* read-line in k1577 */
static void C_ccall f_2734(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2734r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2734r(t0,t1,t2);}}

static void C_ccall f_2734r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):*((C_word*)lf[12]+1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_pairp(t6);
t8=t5;
f_2744(t8,(C_truep(t7)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_2744(t6,C_SCHEME_FALSE);}}

/* k2742 in read-line in k1577 */
static void C_fcall f_2744(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2744,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 371  ##sys#check-port */
t3=*((C_word*)lf[132]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[125]);}

/* k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(8));
if(C_truep(t2)){
/* extras.scm: 372  rl */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t3=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:C_fix(256));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2762,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 375  ##sys#make-string */
t7=*((C_word*)lf[131]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t5)[1]);}}

/* k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2762,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=lf[130],tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_2767(t7,((C_word*)t0)[2],C_fix(0));}

/* loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_fcall f_2767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2767,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[7])?(C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm: 378  ##sys#substring */
t4=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)((C_word*)t0)[6])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 379  ##sys#read-char-0 */
t5=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2780,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=(C_word)C_eqp(((C_word*)t0)[8],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* extras.scm: 383  ##sys#substring */
t3=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);}}
else{
switch(t1){
case C_make_character(10):
/* extras.scm: 385  ##sys#substring */
t2=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);
case C_make_character(13):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2813,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 387  peek-char */
t3=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);
default:
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[8],((C_word*)((C_word*)t0)[3])[1]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2845,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2853,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 394  make-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;
f_2831(t3,C_SCHEME_UNDEFINED);}}}}

/* k2851 in k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 394  ##sys#string-append */
t2=*((C_word*)lf[129]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2843 in k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_2831(t5,t4);}

/* k2829 in k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_fcall f_2831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 397  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2767(t4,((C_word*)t0)[2],t3);}

/* k2811 in k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2813,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_make_character(10));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 389  ##sys#read-char-0 */
t4=*((C_word*)lf[127]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* extras.scm: 391  ##sys#substring */
t3=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[3]);}}

/* k2820 in k2811 in k2778 in loop in k2760 in k2745 in k2742 in read-line in k1577 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 390  ##sys#substring */
t2=*((C_word*)lf[126]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[2]);}

/* randomize in k1577 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_2691r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2691r(t0,t1,t2);}}

static void C_ccall f_2691r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t3;
f_2696(t4,(C_word)C_fudge(C_fix(2)));}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_check_exact_2(t4,lf[122]);
t6=t3;
f_2696(t6,t4);}}

/* k2694 in randomize in k1577 */
static void C_fcall f_2696(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_randomize(t1));}

/* random in k1577 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2679,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[98]);
t4=(C_word)C_eqp(t2,C_fix(0));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_fix(0):(C_word)C_random_fixnum(t2)));}

/* rassoc in k1577 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2629r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2629r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2629r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(8);
t5=(C_word)C_i_check_list_2(t3,lf[118]);
t6=(C_word)C_notvemptyp(t4);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t4,C_fix(0)):*((C_word*)lf[102]+1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2641,a[2]=t2,a[3]=t7,a[4]=t9,a[5]=lf[119],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2641(t11,t1,t3);}

/* loop in rassoc in k1577 */
static void C_fcall f_2641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2641,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_check_pair_2(t3,lf[118]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 334  tst */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2658 in loop in rassoc in k1577 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 336  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2641(t3,((C_word*)t0)[5],t2);}}

/* alist-ref in k1577 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_2505r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2505r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2505r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2507,a[2]=t3,a[3]=t2,a[4]=lf[114],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2576,a[2]=t5,a[3]=lf[115],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2581,a[2]=t6,a[3]=lf[116],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-cmp184200 */
t8=t7;
f_2581(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-default185198 */
t10=t6;
f_2576(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body182187 */
t12=t5;
f_2507(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-cmp184 in alist-ref in k1577 */
static void C_fcall f_2581(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2581,NULL,2,t0,t1);}
/* def-default185198 */
t2=((C_word*)t0)[2];
f_2576(t2,t1,*((C_word*)lf[102]+1));}

/* def-default185 in alist-ref in k1577 */
static void C_fcall f_2576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2576,NULL,3,t0,t1,t2);}
/* body182187 */
t3=((C_word*)t0)[2];
f_2507(t3,t1,t2,C_SCHEME_FALSE);}

/* body182 in alist-ref in k1577 */
static void C_fcall f_2507(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2507,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(*((C_word*)lf[103]+1),t2);
if(C_truep(t5)){
t6=t4;
f_2511(t6,*((C_word*)lf[104]+1));}
else{
t6=(C_word)C_eqp(*((C_word*)lf[102]+1),t2);
if(C_truep(t6)){
t7=t4;
f_2511(t7,*((C_word*)lf[105]+1));}
else{
t7=(C_word)C_eqp(*((C_word*)lf[106]+1),t2);
t8=t4;
f_2511(t8,(C_truep(t7)?*((C_word*)lf[107]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2536,a[2]=t2,a[3]=lf[113],tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2536 in body182 in alist-ref in k1577 */
static void C_ccall f_2536(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2536,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2542,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=lf[112],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2542(t7,t1,t3);}

/* loop */
static void C_fcall f_2542(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2542,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2558,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* extras.scm: 319  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2558(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2556 in loop */
static void C_ccall f_2558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 321  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2542(t3,((C_word*)t0)[5],t2);}}

/* k2509 in body182 in alist-ref in k1577 */
static void C_fcall f_2511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2511,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 322  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2512 in k2509 in body182 in alist-ref in k1577 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_slot(t1,C_fix(1)):((C_word*)t0)[2]));}

/* alist-update! in k1577 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr5rv,(void*)f_2419r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_2419r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2419r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t6=(C_word)C_notvemptyp(t5);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t5,C_fix(0)):*((C_word*)lf[102]+1));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2426,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_eqp(*((C_word*)lf[103]+1),t7);
if(C_truep(t9)){
t10=t8;
f_2426(t10,*((C_word*)lf[104]+1));}
else{
t10=(C_word)C_eqp(*((C_word*)lf[102]+1),t7);
if(C_truep(t10)){
t11=t8;
f_2426(t11,*((C_word*)lf[105]+1));}
else{
t11=(C_word)C_eqp(*((C_word*)lf[106]+1),t7);
t12=t8;
f_2426(t12,(C_truep(t11)?*((C_word*)lf[107]+1):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2458,a[2]=t7,a[3]=lf[109],tmp=(C_word)a,a+=4,tmp)));}}}

/* f_2458 in alist-update! in k1577 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2458,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2464,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=lf[108],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2464(t7,t1,t3);}

/* loop */
static void C_fcall f_2464(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2464,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* extras.scm: 300  cmp */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2480(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2478 in loop */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 302  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2464(t3,((C_word*)t0)[5],t2);}}

/* k2424 in alist-update! in k1577 */
static void C_fcall f_2426(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2426,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 303  aq */
t3=t1;
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2427 in k2424 in alist-update! in k1577 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_setslot(t1,C_fix(1),((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}}

/* shuffle in k1577 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2381,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2409,a[2]=lf[99],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a2408 in shuffle in k1577 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2409,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2417,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 284  random */
t4=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(10000));}

/* k2415 in a2408 in shuffle in k1577 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2391 in shuffle in k1577 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2395,a[2]=lf[96],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 284  sort! */
t3=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2394 in k2391 in shuffle in k1577 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2395,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_lessp(t4,t5));}

/* k2387 in shuffle in k1577 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[95]+1),t1);}

/* compress in k1577 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2301,4,t0,t1,t2,t3);}
t4=lf[88];
t5=(C_word)C_i_check_list_2(t3,lf[87]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2310,a[2]=t4,a[3]=t7,a[4]=lf[91],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2310(t9,t1,t2,t3);}

/* loop in compress in k1577 */
static void C_fcall f_2310(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2310,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
if(C_truep((C_word)C_slot(t2,C_fix(0)))){
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2352,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 277  loop */
t11=t5;
t12=t6;
t13=t7;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 278  loop */
t11=t1;
t12=t4;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
/* extras.scm: 276  ##sys#signal-hook */
t4=*((C_word*)lf[89]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[90],lf[87],((C_word*)t0)[2],t3);}}
else{
/* extras.scm: 274  ##sys#signal-hook */
t4=*((C_word*)lf[89]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[90],lf[87],((C_word*)t0)[2],t2);}}}

/* k2350 in loop in compress in k1577 */
static void C_ccall f_2352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2352,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* join in k1577 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2242r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2242r(t0,t1,t2,t3);}}

static void C_ccall f_2242r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
t6=(C_word)C_i_check_list_2(t5,lf[82]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2254,a[2]=t8,a[3]=t5,a[4]=lf[85],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2254(t10,t1,t2);}

/* loop in join in k1577 */
static void C_fcall f_2254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2254,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2289,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 265  loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}
else{
/* extras.scm: 259  ##sys#not-a-proper-list-error */
t3=*((C_word*)lf[84]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}}}

/* k2287 in loop in join in k1577 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 265  ##sys#append */
t2=*((C_word*)lf[83]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop in k1577 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2157,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[77]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2164,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t3,C_fix(0)))){
/* extras.scm: 240  ##sys#error */
t6=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[77],lf[80],t3);}
else{
t6=t5;
f_2164(2,t6,C_SCHEME_UNDEFINED);}}

/* k2162 in chop in k1577 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=lf[79],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2172(t6,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* loop in k2162 in chop in k1577 */
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2172,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,1,t2));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2193,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=lf[78],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2193(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[4]);}}}

/* do132 in loop in k2162 in chop in k1577 */
static void C_fcall f_2193(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2193,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2207,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 251  reverse */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}
else{
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_slot(t3,C_fix(1));
t9=(C_word)C_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k2205 in do132 in loop in k2162 in chop in k1577 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2211,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* extras.scm: 251  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2172(t4,t2,((C_word*)t0)[2],t3);}

/* k2209 in k2205 in do132 in loop in k2162 in chop in k1577 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* flatten in k1577 */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2116r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2116r(t0,t1,t2);}}

static void C_ccall f_2116r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2122,a[2]=t4,a[3]=lf[75],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2122(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in flatten in k1577 */
static void C_fcall f_2122(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2122,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2148,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 232  loop */
t9=t6;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2155,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 233  loop */
t9=t6;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* k2153 in loop in flatten in k1577 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2146 in loop in flatten in k1577 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 232  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2122(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* butlast in k1577 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2084,3,t0,t1,t2);}
t3=(C_word)C_i_check_pair_2(t2,lf[71]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=t5,a[3]=lf[72],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2093(t7,t1,t2);}

/* loop in butlast in k1577 */
static void C_fcall f_2093(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(4);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2093,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2114,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 222  loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k2112 in loop in butlast in k1577 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* intersperse in k1577 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2051,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2057,a[2]=t5,a[3]=t3,a[4]=lf[69],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2057(t7,t1,t2);}

/* loop in intersperse in k1577 */
static void C_fcall f_2057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2057,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2082,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 215  loop */
t7=t5;
t8=t3;
t1=t7;
t2=t8;
goto loop;}}}

/* k2080 in loop in intersperse in k1577 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2082,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* tail? in k1577 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2023,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t3,lf[65]);
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2035,a[2]=t2,a[3]=lf[66],tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_2035(t6,t3));}}

/* loop in tail? in k1577 */
static C_word C_fcall f_2035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
if(C_truep((C_word)C_eqp(t1,C_SCHEME_END_OF_LIST))){
return(C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_eqp(((C_word*)t0)[2],t1))){
return(C_SCHEME_TRUE);}
else{
t2=(C_word)C_slot(t1,C_fix(1));
t4=t2;
t1=t4;
goto loop;}}}

/* atom? in k1577 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2020,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* any? in k1577 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2017,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* each in k1577 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1961r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1961r(t0,t1,t2);}}

static void C_ccall f_1961r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1969,a[2]=lf[57],tmp=(C_word)a,a+=3,tmp));}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?(C_word)C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1983,a[2]=t2,a[3]=lf[59],tmp=(C_word)a,a+=4,tmp)));}}

/* f_1983 in each in k1577 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_1983r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1983r(t0,t1,t2);}}

static void C_ccall f_1983r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1989,a[2]=t4,a[3]=t2,a[4]=lf[58],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1989(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1989,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2008,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[3]);}}

/* k2006 in loop */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 190  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1989(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1969 in each in k1577 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1969,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[54]+1));}

/* noop in k1577 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1955,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[54]+1));}

/* list-of in k1577 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1915,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1917,a[2]=t2,a[3]=lf[51],tmp=(C_word)a,a+=4,tmp));}

/* f_1917 in list-of in k1577 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1917,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1923,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[50],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1923(t6,t1,t2);}

/* loop */
static void C_fcall f_1923(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1923,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1942,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 173  pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k1940 in loop */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 173  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1923(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* o in k1577 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1876r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1876r(t0,t1,t2);}}

static void C_ccall f_1876r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[16]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1888,a[2]=t4,a[3]=lf[47],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1888(t6,t1,t2);}}

/* loop in o in k1577 */
static void C_fcall f_1888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1888,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_nullp(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t3:(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1902,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[46],tmp=(C_word)a,a+=6,tmp)));}

/* f_1902 in loop in o in k1577 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1902,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1913,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 166  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1888(t5,t4,((C_word*)t0)[2]);}

/* k1911 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1908 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 166  h */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* compose in k1577 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1840r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1840r(t0,t1,t2);}}

static void C_ccall f_1840r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1843,a[2]=t4,a[3]=lf[42],tmp=(C_word)a,a+=4,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[43]+1));}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec in compose in k1577 */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1843r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1843r(t0,t1,t2,t3);}}

static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t2:(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1851,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[41],tmp=(C_word)a,a+=6,tmp)));}

/* f_1851 in rec in compose in k1577 */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1851r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1851r(t0,t1,t2);}}

static void C_ccall f_1851r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=lf[40],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 151  call-with-values */
C_call_with_values(4,0,t1,t3,((C_word*)t0)[2]);}

/* a1856 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k1863 in a1856 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* complement in k1577 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1828,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=t2,a[3]=lf[37],tmp=(C_word)a,a+=4,tmp));}

/* f_1830 in complement in k1577 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1830r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1830r(t0,t1,t2);}}

static void C_ccall f_1830r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1836 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* flip in k1577 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1820,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1822,a[2]=t2,a[3]=lf[34],tmp=(C_word)a,a+=4,tmp));}

/* f_1822 in flip in k1577 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1822,4,t0,t1,t2,t3);}
/* extras.scm: 140  proc */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* constantly in k1577 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_1797r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1797r(t0,t1,t2);}}

static void C_ccall f_1797r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1808,a[2]=t5,a[3]=lf[30],tmp=(C_word)a,a+=4,tmp));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1810,a[2]=t2,a[3]=lf[31],tmp=(C_word)a,a+=4,tmp));}}

/* f_1810 in constantly in k1577 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1810,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_1808 in constantly in k1577 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1808,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* disjoin in k1577 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1760r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1760r(t0,t1,t2);}}

static void C_ccall f_1760r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=t2,a[3]=lf[27],tmp=(C_word)a,a+=4,tmp));}

/* f_1762 in disjoin in k1577 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1762,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1768,a[2]=t2,a[3]=t4,a[4]=lf[26],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1768(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1768,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1778,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=t4;
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,((C_word*)t0)[2]);}}

/* k1776 in loop */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 132  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1768(t3,((C_word*)t0)[4],t2);}}

/* conjoin in k1577 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1727r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1727r(t0,t1,t2);}}

static void C_ccall f_1727r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(4);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t2,a[3]=lf[23],tmp=(C_word)a,a+=4,tmp));}

/* f_1729 in conjoin in k1577 */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1729,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1735,a[2]=t2,a[3]=t4,a[4]=lf[22],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1735(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1735(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1735,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1748,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
t6=t5;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,((C_word*)t0)[2]);}}

/* k1746 in loop */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 125  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1735(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* project in k1577 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1719,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1721,a[2]=t2,a[3]=lf[19],tmp=(C_word)a,a+=4,tmp));}

/* f_1721 in project in k1577 */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1721r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1721r(t0,t1,t2);}}

static void C_ccall f_1721r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,((C_word*)t0)[2]));}

/* identity in k1577 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1716,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* read-file in k1577 */
static void C_ccall f_1581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr2r,(void*)f_1581r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1581r(t0,t1,t2);}}

static void C_ccall f_1581r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[9],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1643,a[2]=t3,a[3]=lf[10],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1648,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[11],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1653,a[2]=t5,a[3]=lf[13],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-port1034 */
t7=t6;
f_1653(t7,t1);}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-reader1132 */
t9=t5;
f_1648(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-max1229 */
t11=t4;
f_1643(t11,t1,t7,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body814 */
t13=t3;
f_1583(t13,t1,t7,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}}

/* def-port10 in read-file in k1577 */
static void C_fcall f_1653(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1653,NULL,2,t0,t1);}
/* def-reader1132 */
t2=((C_word*)t0)[2];
f_1648(t2,t1,*((C_word*)lf[12]+1));}

/* def-reader11 in read-file in k1577 */
static void C_fcall f_1648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1648,NULL,3,t0,t1,t2);}
/* def-max1229 */
t3=((C_word*)t0)[3];
f_1643(t3,t1,t2,((C_word*)t0)[2]);}

/* def-max12 in read-file in k1577 */
static void C_fcall f_1643(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1643,NULL,4,t0,t1,t2,t3);}
/* body814 */
t4=((C_word*)t0)[2];
f_1583(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body8 in read-file in k1577 */
static void C_fcall f_1583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1583,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1586,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=lf[7],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 108  port? */
t7=*((C_word*)lf[8]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k1634 in body8 in read-file in k1577 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 109  slurp */
t2=((C_word*)t0)[5];
f_1586(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* extras.scm: 110  call-with-input-file */
t2=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* slurp in body8 in read-file in k1577 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1586,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1594,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 104  reader */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1592 in slurp in body8 in read-file in k1577 */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1594,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1596(t5,((C_word*)t0)[2],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* do20 in k1592 in slurp in body8 in read-file in k1577 */
static void C_fcall f_1596(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1596,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[6])?(C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm: 107  reverse */
t7=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t7))(3,t7,t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1616,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 104  reader */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}}

/* k1614 in do20 in k1592 in slurp in body8 in read-file in k1577 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1616,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_1596(t4,((C_word*)t0)[2],t1,t2,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[581] = {
{"toplevelextras.scm",(void*)C_extras_toplevel},
{"f_1579extras.scm",(void*)f_1579},
{"f_5163extras.scm",(void*)f_5163},
{"f_6504extras.scm",(void*)f_6504},
{"f_8869extras.scm",(void*)f_8869},
{"f_8882extras.scm",(void*)f_8882},
{"f_8945extras.scm",(void*)f_8945},
{"f_8964extras.scm",(void*)f_8964},
{"f_8903extras.scm",(void*)f_8903},
{"f_8985extras.scm",(void*)f_8985},
{"f_7880extras.scm",(void*)f_7880},
{"f_8468extras.scm",(void*)f_8468},
{"f_8818extras.scm",(void*)f_8818},
{"f_8828extras.scm",(void*)f_8828},
{"f_8845extras.scm",(void*)f_8845},
{"f_8831extras.scm",(void*)f_8831},
{"f_8789extras.scm",(void*)f_8789},
{"f_8735extras.scm",(void*)f_8735},
{"f_8754extras.scm",(void*)f_8754},
{"f_8764extras.scm",(void*)f_8764},
{"f_8746extras.scm",(void*)f_8746},
{"f_8726extras.scm",(void*)f_8726},
{"f_8690extras.scm",(void*)f_8690},
{"f_8700extras.scm",(void*)f_8700},
{"f_8658extras.scm",(void*)f_8658},
{"f_8668extras.scm",(void*)f_8668},
{"f_8637extras.scm",(void*)f_8637},
{"f_8647extras.scm",(void*)f_8647},
{"f_8616extras.scm",(void*)f_8616},
{"f_8626extras.scm",(void*)f_8626},
{"f_8603extras.scm",(void*)f_8603},
{"f_8597extras.scm",(void*)f_8597},
{"f_8591extras.scm",(void*)f_8591},
{"f_8522extras.scm",(void*)f_8522},
{"f_8537extras.scm",(void*)f_8537},
{"f_8553extras.scm",(void*)f_8553},
{"f_8581extras.scm",(void*)f_8581},
{"f_8470extras.scm",(void*)f_8470},
{"f_8485extras.scm",(void*)f_8485},
{"f_8504extras.scm",(void*)f_8504},
{"f_8495extras.scm",(void*)f_8495},
{"f_8402extras.scm",(void*)f_8402},
{"f_8417extras.scm",(void*)f_8417},
{"f_8433extras.scm",(void*)f_8433},
{"f_8337extras.scm",(void*)f_8337},
{"f_8352extras.scm",(void*)f_8352},
{"f_8368extras.scm",(void*)f_8368},
{"f_8314extras.scm",(void*)f_8314},
{"f_8318extras.scm",(void*)f_8318},
{"f_8323extras.scm",(void*)f_8323},
{"f_8321extras.scm",(void*)f_8321},
{"f_8241extras.scm",(void*)f_8241},
{"f_8256extras.scm",(void*)f_8256},
{"f_8272extras.scm",(void*)f_8272},
{"f_8170extras.scm",(void*)f_8170},
{"f_8188extras.scm",(void*)f_8188},
{"f_8211extras.scm",(void*)f_8211},
{"f_8224extras.scm",(void*)f_8224},
{"f_8198extras.scm",(void*)f_8198},
{"f_7944extras.scm",(void*)f_7944},
{"f_7963extras.scm",(void*)f_7963},
{"f_8035extras.scm",(void*)f_8035},
{"f_8051extras.scm",(void*)f_8051},
{"f_8054extras.scm",(void*)f_8054},
{"f_7980extras.scm",(void*)f_7980},
{"f_7999extras.scm",(void*)f_7999},
{"f_7911extras.scm",(void*)f_7911},
{"f_7921extras.scm",(void*)f_7921},
{"f_7894extras.scm",(void*)f_7894},
{"f_7909extras.scm",(void*)f_7909},
{"f_7882extras.scm",(void*)f_7882},
{"f_7888extras.scm",(void*)f_7888},
{"f_7866extras.scm",(void*)f_7866},
{"f_7875extras.scm",(void*)f_7875},
{"f_7872extras.scm",(void*)f_7872},
{"f_7857extras.scm",(void*)f_7857},
{"f_7863extras.scm",(void*)f_7863},
{"f_7613extras.scm",(void*)f_7613},
{"f_7835extras.scm",(void*)f_7835},
{"f_7617extras.scm",(void*)f_7617},
{"f_7625extras.scm",(void*)f_7625},
{"f_7641extras.scm",(void*)f_7641},
{"f_7823extras.scm",(void*)f_7823},
{"f_7751extras.scm",(void*)f_7751},
{"f_7788extras.scm",(void*)f_7788},
{"f_7791extras.scm",(void*)f_7791},
{"f_7779extras.scm",(void*)f_7779},
{"f_7761extras.scm",(void*)f_7761},
{"f_7688extras.scm",(void*)f_7688},
{"f_7728extras.scm",(void*)f_7728},
{"f_7716extras.scm",(void*)f_7716},
{"f_7698extras.scm",(void*)f_7698},
{"f_7666extras.scm",(void*)f_7666},
{"f_7653extras.scm",(void*)f_7653},
{"f_8103extras.scm",(void*)f_8103},
{"f_8126extras.scm",(void*)f_8126},
{"f_8142extras.scm",(void*)f_8142},
{"f_8113extras.scm",(void*)f_8113},
{"f_7656extras.scm",(void*)f_7656},
{"f_7604extras.scm",(void*)f_7604},
{"f_7579extras.scm",(void*)f_7579},
{"f_7583extras.scm",(void*)f_7583},
{"f_7554extras.scm",(void*)f_7554},
{"f_7558extras.scm",(void*)f_7558},
{"f_7522extras.scm",(void*)f_7522},
{"f_7526extras.scm",(void*)f_7526},
{"f_7296extras.scm",(void*)f_7296},
{"f_7520extras.scm",(void*)f_7520},
{"f_7324extras.scm",(void*)f_7324},
{"f_7455extras.scm",(void*)f_7455},
{"f_7490extras.scm",(void*)f_7490},
{"f_7433extras.scm",(void*)f_7433},
{"f_7420extras.scm",(void*)f_7420},
{"f_7412extras.scm",(void*)f_7412},
{"f_7391extras.scm",(void*)f_7391},
{"f_7299extras.scm",(void*)f_7299},
{"f_7309extras.scm",(void*)f_7309},
{"f_7287extras.scm",(void*)f_7287},
{"f_7278extras.scm",(void*)f_7278},
{"f_7183extras.scm",(void*)f_7183},
{"f_7196extras.scm",(void*)f_7196},
{"f_7201extras.scm",(void*)f_7201},
{"f_7243extras.scm",(void*)f_7243},
{"f_7264extras.scm",(void*)f_7264},
{"f_7237extras.scm",(void*)f_7237},
{"f_7096extras.scm",(void*)f_7096},
{"f_7120extras.scm",(void*)f_7120},
{"f_7115extras.scm",(void*)f_7115},
{"f_7110extras.scm",(void*)f_7110},
{"f_7098extras.scm",(void*)f_7098},
{"f_7109extras.scm",(void*)f_7109},
{"f_7090extras.scm",(void*)f_7090},
{"f_7006extras.scm",(void*)f_7006},
{"f_7084extras.scm",(void*)f_7084},
{"f_7010extras.scm",(void*)f_7010},
{"f_7024extras.scm",(void*)f_7024},
{"f_7034extras.scm",(void*)f_7034},
{"f_6979extras.scm",(void*)f_6979},
{"f_7004extras.scm",(void*)f_7004},
{"f_6997extras.scm",(void*)f_6997},
{"f_6993extras.scm",(void*)f_6993},
{"f_6846extras.scm",(void*)f_6846},
{"f_6936extras.scm",(void*)f_6936},
{"f_6943extras.scm",(void*)f_6943},
{"f_6945extras.scm",(void*)f_6945},
{"f_6849extras.scm",(void*)f_6849},
{"f_6900extras.scm",(void*)f_6900},
{"f_6890extras.scm",(void*)f_6890},
{"f_6859extras.scm",(void*)f_6859},
{"f_6862extras.scm",(void*)f_6862},
{"f_6868extras.scm",(void*)f_6868},
{"f_6714extras.scm",(void*)f_6714},
{"f_6796extras.scm",(void*)f_6796},
{"f_6819extras.scm",(void*)f_6819},
{"f_6799extras.scm",(void*)f_6799},
{"f_6717extras.scm",(void*)f_6717},
{"f_6724extras.scm",(void*)f_6724},
{"f_6615extras.scm",(void*)f_6615},
{"f_6649extras.scm",(void*)f_6649},
{"f_6656extras.scm",(void*)f_6656},
{"f_6704extras.scm",(void*)f_6704},
{"f_6676extras.scm",(void*)f_6676},
{"f_6506extras.scm",(void*)f_6506},
{"f_6581extras.scm",(void*)f_6581},
{"f_6609extras.scm",(void*)f_6609},
{"f_6533extras.scm",(void*)f_6533},
{"f_6543extras.scm",(void*)f_6543},
{"f_6490extras.scm",(void*)f_6490},
{"f_6494extras.scm",(void*)f_6494},
{"f_6497extras.scm",(void*)f_6497},
{"f_6480extras.scm",(void*)f_6480},
{"f_6488extras.scm",(void*)f_6488},
{"f_6214extras.scm",(void*)f_6214},
{"f_6220extras.scm",(void*)f_6220},
{"f_6227extras.scm",(void*)f_6227},
{"f_6258extras.scm",(void*)f_6258},
{"f_6445extras.scm",(void*)f_6445},
{"f_6391extras.scm",(void*)f_6391},
{"f_6394extras.scm",(void*)f_6394},
{"f_6373extras.scm",(void*)f_6373},
{"f_6369extras.scm",(void*)f_6369},
{"f_6356extras.scm",(void*)f_6356},
{"f_6352extras.scm",(void*)f_6352},
{"f_6339extras.scm",(void*)f_6339},
{"f_6335extras.scm",(void*)f_6335},
{"f_6322extras.scm",(void*)f_6322},
{"f_6309extras.scm",(void*)f_6309},
{"f_6296extras.scm",(void*)f_6296},
{"f_6271extras.scm",(void*)f_6271},
{"f_6239extras.scm",(void*)f_6239},
{"f_6232extras.scm",(void*)f_6232},
{"f_6162extras.scm",(void*)f_6162},
{"f_6166extras.scm",(void*)f_6166},
{"f_6098extras.scm",(void*)f_6098},
{"f_6113extras.scm",(void*)f_6113},
{"f_6144extras.scm",(void*)f_6144},
{"f_6148extras.scm",(void*)f_6148},
{"f_6133extras.scm",(void*)f_6133},
{"f_5976extras.scm",(void*)f_5976},
{"f_5988extras.scm",(void*)f_5988},
{"f_6021extras.scm",(void*)f_6021},
{"f_6086extras.scm",(void*)f_6086},
{"f_6060extras.scm",(void*)f_6060},
{"f_6016extras.scm",(void*)f_6016},
{"f_6006extras.scm",(void*)f_6006},
{"f_6002extras.scm",(void*)f_6002},
{"f_5774extras.scm",(void*)f_5774},
{"f_5968extras.scm",(void*)f_5968},
{"f_5951extras.scm",(void*)f_5951},
{"f_5811extras.scm",(void*)f_5811},
{"f_5814extras.scm",(void*)f_5814},
{"f_5826extras.scm",(void*)f_5826},
{"f_5831extras.scm",(void*)f_5831},
{"f_5850extras.scm",(void*)f_5850},
{"f_5777extras.scm",(void*)f_5777},
{"f_5782extras.scm",(void*)f_5782},
{"f_5788extras.scm",(void*)f_5788},
{"f_5659extras.scm",(void*)f_5659},
{"f_5663extras.scm",(void*)f_5663},
{"f_5677extras.scm",(void*)f_5677},
{"f_5687extras.scm",(void*)f_5687},
{"f_5692extras.scm",(void*)f_5692},
{"f_5524extras.scm",(void*)f_5524},
{"f_5565extras.scm",(void*)f_5565},
{"f_5592extras.scm",(void*)f_5592},
{"f_5631extras.scm",(void*)f_5631},
{"f_5575extras.scm",(void*)f_5575},
{"f_5545extras.scm",(void*)f_5545},
{"f_5560extras.scm",(void*)f_5560},
{"f_5552extras.scm",(void*)f_5552},
{"f_5460extras.scm",(void*)f_5460},
{"f_5479extras.scm",(void*)f_5479},
{"f_5396extras.scm",(void*)f_5396},
{"f_5415extras.scm",(void*)f_5415},
{"f_5365extras.scm",(void*)f_5365},
{"f_5334extras.scm",(void*)f_5334},
{"f_5315extras.scm",(void*)f_5315},
{"f_5325extras.scm",(void*)f_5325},
{"f_5296extras.scm",(void*)f_5296},
{"f_5306extras.scm",(void*)f_5306},
{"f_5249extras.scm",(void*)f_5249},
{"f_5270extras.scm",(void*)f_5270},
{"f_5283extras.scm",(void*)f_5283},
{"f_5239extras.scm",(void*)f_5239},
{"f_5247extras.scm",(void*)f_5247},
{"f_5194extras.scm",(void*)f_5194},
{"f_5231extras.scm",(void*)f_5231},
{"f_5234extras.scm",(void*)f_5234},
{"f_5165extras.scm",(void*)f_5165},
{"f_5169extras.scm",(void*)f_5169},
{"f_5176extras.scm",(void*)f_5176},
{"f_5178extras.scm",(void*)f_5178},
{"f_5182extras.scm",(void*)f_5182},
{"f_5172extras.scm",(void*)f_5172},
{"f_5084extras.scm",(void*)f_5084},
{"f_5087extras.scm",(void*)f_5087},
{"f_5103extras.scm",(void*)f_5103},
{"f_5112extras.scm",(void*)f_5112},
{"f_3834extras.scm",(void*)f_3834},
{"f_5075extras.scm",(void*)f_5075},
{"f_5079extras.scm",(void*)f_5079},
{"f_4428extras.scm",(void*)f_4428},
{"f_4983extras.scm",(void*)f_4983},
{"f_4993extras.scm",(void*)f_4993},
{"f_4974extras.scm",(void*)f_4974},
{"f_4968extras.scm",(void*)f_4968},
{"f_4946extras.scm",(void*)f_4946},
{"f_4953extras.scm",(void*)f_4953},
{"f_4940extras.scm",(void*)f_4940},
{"f_4934extras.scm",(void*)f_4934},
{"f_4928extras.scm",(void*)f_4928},
{"f_4922extras.scm",(void*)f_4922},
{"f_4916extras.scm",(void*)f_4916},
{"f_4910extras.scm",(void*)f_4910},
{"f_4762extras.scm",(void*)f_4762},
{"f_4908extras.scm",(void*)f_4908},
{"f_4860extras.scm",(void*)f_4860},
{"f_4890extras.scm",(void*)f_4890},
{"f_4875extras.scm",(void*)f_4875},
{"f_4765extras.scm",(void*)f_4765},
{"f_4792extras.scm",(void*)f_4792},
{"f_4788extras.scm",(void*)f_4788},
{"f_4806extras.scm",(void*)f_4806},
{"f_4833extras.scm",(void*)f_4833},
{"f_4829extras.scm",(void*)f_4829},
{"f_4847extras.scm",(void*)f_4847},
{"f_4685extras.scm",(void*)f_4685},
{"f_4691extras.scm",(void*)f_4691},
{"f_4760extras.scm",(void*)f_4760},
{"f_4756extras.scm",(void*)f_4756},
{"f_4748extras.scm",(void*)f_4748},
{"f_4744extras.scm",(void*)f_4744},
{"f_4722extras.scm",(void*)f_4722},
{"f_4714extras.scm",(void*)f_4714},
{"f_4676extras.scm",(void*)f_4676},
{"f_4680extras.scm",(void*)f_4680},
{"f_4648extras.scm",(void*)f_4648},
{"f_4674extras.scm",(void*)f_4674},
{"f_4652extras.scm",(void*)f_4652},
{"f_4583extras.scm",(void*)f_4583},
{"f_4590extras.scm",(void*)f_4590},
{"f_4617extras.scm",(void*)f_4617},
{"f_4643extras.scm",(void*)f_4643},
{"f_4601extras.scm",(void*)f_4601},
{"f_4496extras.scm",(void*)f_4496},
{"f_4509extras.scm",(void*)f_4509},
{"f_4547extras.scm",(void*)f_4547},
{"f_4512extras.scm",(void*)f_4512},
{"f_4541extras.scm",(void*)f_4541},
{"f_4545extras.scm",(void*)f_4545},
{"f_4525extras.scm",(void*)f_4525},
{"f_4464extras.scm",(void*)f_4464},
{"f_4487extras.scm",(void*)f_4487},
{"f_4480extras.scm",(void*)f_4480},
{"f_4431extras.scm",(void*)f_4431},
{"f_4462extras.scm",(void*)f_4462},
{"f_4455extras.scm",(void*)f_4455},
{"f_3947extras.scm",(void*)f_3947},
{"f_4126extras.scm",(void*)f_4126},
{"f_4383extras.scm",(void*)f_4383},
{"f_4400extras.scm",(void*)f_4400},
{"f_4410extras.scm",(void*)f_4410},
{"f_4403extras.scm",(void*)f_4403},
{"f_4390extras.scm",(void*)f_4390},
{"f_4367extras.scm",(void*)f_4367},
{"f_4370extras.scm",(void*)f_4370},
{"f_4377extras.scm",(void*)f_4377},
{"f_4358extras.scm",(void*)f_4358},
{"f_4274extras.scm",(void*)f_4274},
{"f_4277extras.scm",(void*)f_4277},
{"f_4333extras.scm",(void*)f_4333},
{"f_4312extras.scm",(void*)f_4312},
{"f_4319extras.scm",(void*)f_4319},
{"f_4296extras.scm",(void*)f_4296},
{"f_4303extras.scm",(void*)f_4303},
{"f_4268extras.scm",(void*)f_4268},
{"f_4184extras.scm",(void*)f_4184},
{"f_4186extras.scm",(void*)f_4186},
{"f_4193extras.scm",(void*)f_4193},
{"f_4245extras.scm",(void*)f_4245},
{"f_4241extras.scm",(void*)f_4241},
{"f_4224extras.scm",(void*)f_4224},
{"f_4220extras.scm",(void*)f_4220},
{"f_4216extras.scm",(void*)f_4216},
{"f_4165extras.scm",(void*)f_4165},
{"f_4142extras.scm",(void*)f_4142},
{"f_4145extras.scm",(void*)f_4145},
{"f_4152extras.scm",(void*)f_4152},
{"f_4133extras.scm",(void*)f_4133},
{"f_4103extras.scm",(void*)f_4103},
{"f_4107extras.scm",(void*)f_4107},
{"f_3950extras.scm",(void*)f_3950},
{"f_3957extras.scm",(void*)f_3957},
{"f_3968extras.scm",(void*)f_3968},
{"f_3977extras.scm",(void*)f_3977},
{"f_4060extras.scm",(void*)f_4060},
{"f_3995extras.scm",(void*)f_3995},
{"f_3997extras.scm",(void*)f_3997},
{"f_4049extras.scm",(void*)f_4049},
{"f_4045extras.scm",(void*)f_4045},
{"f_4029extras.scm",(void*)f_4029},
{"f_4021extras.scm",(void*)f_4021},
{"f_3928extras.scm",(void*)f_3928},
{"f_3938extras.scm",(void*)f_3938},
{"f_3895extras.scm",(void*)f_3895},
{"f_3889extras.scm",(void*)f_3889},
{"f_3837extras.scm",(void*)f_3837},
{"f_3869extras.scm",(void*)f_3869},
{"f_3776extras.scm",(void*)f_3776},
{"f_3789extras.scm",(void*)f_3789},
{"f_3819extras.scm",(void*)f_3819},
{"f_3810extras.scm",(void*)f_3810},
{"f_3814extras.scm",(void*)f_3814},
{"f_3804extras.scm",(void*)f_3804},
{"f_3794extras.scm",(void*)f_3794},
{"f_3802extras.scm",(void*)f_3802},
{"f_3630extras.scm",(void*)f_3630},
{"f_3713extras.scm",(void*)f_3713},
{"f_3708extras.scm",(void*)f_3708},
{"f_3703extras.scm",(void*)f_3703},
{"f_3632extras.scm",(void*)f_3632},
{"f_3642extras.scm",(void*)f_3642},
{"f_3698extras.scm",(void*)f_3698},
{"f_3689extras.scm",(void*)f_3689},
{"f_3693extras.scm",(void*)f_3693},
{"f_3668extras.scm",(void*)f_3668},
{"f_3684extras.scm",(void*)f_3684},
{"f_3647extras.scm",(void*)f_3647},
{"f_3596extras.scm",(void*)f_3596},
{"f_3600extras.scm",(void*)f_3600},
{"f_3622extras.scm",(void*)f_3622},
{"f_3613extras.scm",(void*)f_3613},
{"f_3617extras.scm",(void*)f_3617},
{"f_3605extras.scm",(void*)f_3605},
{"f_3565extras.scm",(void*)f_3565},
{"f_3569extras.scm",(void*)f_3569},
{"f_3588extras.scm",(void*)f_3588},
{"f_3582extras.scm",(void*)f_3582},
{"f_3574extras.scm",(void*)f_3574},
{"f_3553extras.scm",(void*)f_3553},
{"f_3557extras.scm",(void*)f_3557},
{"f_3560extras.scm",(void*)f_3560},
{"f_3544extras.scm",(void*)f_3544},
{"f_3548extras.scm",(void*)f_3548},
{"f_3513extras.scm",(void*)f_3513},
{"f_3517extras.scm",(void*)f_3517},
{"f_3536extras.scm",(void*)f_3536},
{"f_3530extras.scm",(void*)f_3530},
{"f_3522extras.scm",(void*)f_3522},
{"f_3482extras.scm",(void*)f_3482},
{"f_3486extras.scm",(void*)f_3486},
{"f_3505extras.scm",(void*)f_3505},
{"f_3499extras.scm",(void*)f_3499},
{"f_3491extras.scm",(void*)f_3491},
{"f_3451extras.scm",(void*)f_3451},
{"f_3455extras.scm",(void*)f_3455},
{"f_3474extras.scm",(void*)f_3474},
{"f_3468extras.scm",(void*)f_3468},
{"f_3460extras.scm",(void*)f_3460},
{"f_3430extras.scm",(void*)f_3430},
{"f_3437extras.scm",(void*)f_3437},
{"f_3443extras.scm",(void*)f_3443},
{"f_3341extras.scm",(void*)f_3341},
{"f_3382extras.scm",(void*)f_3382},
{"f_3377extras.scm",(void*)f_3377},
{"f_3346extras.scm",(void*)f_3346},
{"f_3350extras.scm",(void*)f_3350},
{"f_3363extras.scm",(void*)f_3363},
{"f_3360extras.scm",(void*)f_3360},
{"f_3272extras.scm",(void*)f_3272},
{"f_3276extras.scm",(void*)f_3276},
{"f_3279extras.scm",(void*)f_3279},
{"f_3282extras.scm",(void*)f_3282},
{"f_3287extras.scm",(void*)f_3287},
{"f_3291extras.scm",(void*)f_3291},
{"f_3297extras.scm",(void*)f_3297},
{"f_3307extras.scm",(void*)f_3307},
{"f_3300extras.scm",(void*)f_3300},
{"f_3145extras.scm",(void*)f_3145},
{"f_3224extras.scm",(void*)f_3224},
{"f_3219extras.scm",(void*)f_3219},
{"f_3147extras.scm",(void*)f_3147},
{"f_3151extras.scm",(void*)f_3151},
{"f_3175extras.scm",(void*)f_3175},
{"f_3180extras.scm",(void*)f_3180},
{"f_3184extras.scm",(void*)f_3184},
{"f_3190extras.scm",(void*)f_3190},
{"f_3202extras.scm",(void*)f_3202},
{"f_3160extras.scm",(void*)f_3160},
{"f_3163extras.scm",(void*)f_3163},
{"f_3048extras.scm",(void*)f_3048},
{"f_3097extras.scm",(void*)f_3097},
{"f_3092extras.scm",(void*)f_3092},
{"f_3050extras.scm",(void*)f_3050},
{"f_3054extras.scm",(void*)f_3054},
{"f_3060extras.scm",(void*)f_3060},
{"f_2964extras.scm",(void*)f_2964},
{"f_3042extras.scm",(void*)f_3042},
{"f_2968extras.scm",(void*)f_2968},
{"f_2976extras.scm",(void*)f_2976},
{"f_3025extras.scm",(void*)f_3025},
{"f_2980extras.scm",(void*)f_2980},
{"f_2874extras.scm",(void*)f_2874},
{"f_2941extras.scm",(void*)f_2941},
{"f_2886extras.scm",(void*)f_2886},
{"f_2896extras.scm",(void*)f_2896},
{"f_2909extras.scm",(void*)f_2909},
{"f_2734extras.scm",(void*)f_2734},
{"f_2744extras.scm",(void*)f_2744},
{"f_2747extras.scm",(void*)f_2747},
{"f_2762extras.scm",(void*)f_2762},
{"f_2767extras.scm",(void*)f_2767},
{"f_2780extras.scm",(void*)f_2780},
{"f_2853extras.scm",(void*)f_2853},
{"f_2845extras.scm",(void*)f_2845},
{"f_2831extras.scm",(void*)f_2831},
{"f_2813extras.scm",(void*)f_2813},
{"f_2822extras.scm",(void*)f_2822},
{"f_2691extras.scm",(void*)f_2691},
{"f_2696extras.scm",(void*)f_2696},
{"f_2679extras.scm",(void*)f_2679},
{"f_2629extras.scm",(void*)f_2629},
{"f_2641extras.scm",(void*)f_2641},
{"f_2660extras.scm",(void*)f_2660},
{"f_2505extras.scm",(void*)f_2505},
{"f_2581extras.scm",(void*)f_2581},
{"f_2576extras.scm",(void*)f_2576},
{"f_2507extras.scm",(void*)f_2507},
{"f_2536extras.scm",(void*)f_2536},
{"f_2542extras.scm",(void*)f_2542},
{"f_2558extras.scm",(void*)f_2558},
{"f_2511extras.scm",(void*)f_2511},
{"f_2514extras.scm",(void*)f_2514},
{"f_2419extras.scm",(void*)f_2419},
{"f_2458extras.scm",(void*)f_2458},
{"f_2464extras.scm",(void*)f_2464},
{"f_2480extras.scm",(void*)f_2480},
{"f_2426extras.scm",(void*)f_2426},
{"f_2429extras.scm",(void*)f_2429},
{"f_2381extras.scm",(void*)f_2381},
{"f_2409extras.scm",(void*)f_2409},
{"f_2417extras.scm",(void*)f_2417},
{"f_2393extras.scm",(void*)f_2393},
{"f_2395extras.scm",(void*)f_2395},
{"f_2389extras.scm",(void*)f_2389},
{"f_2301extras.scm",(void*)f_2301},
{"f_2310extras.scm",(void*)f_2310},
{"f_2352extras.scm",(void*)f_2352},
{"f_2242extras.scm",(void*)f_2242},
{"f_2254extras.scm",(void*)f_2254},
{"f_2289extras.scm",(void*)f_2289},
{"f_2157extras.scm",(void*)f_2157},
{"f_2164extras.scm",(void*)f_2164},
{"f_2172extras.scm",(void*)f_2172},
{"f_2193extras.scm",(void*)f_2193},
{"f_2207extras.scm",(void*)f_2207},
{"f_2211extras.scm",(void*)f_2211},
{"f_2116extras.scm",(void*)f_2116},
{"f_2122extras.scm",(void*)f_2122},
{"f_2155extras.scm",(void*)f_2155},
{"f_2148extras.scm",(void*)f_2148},
{"f_2084extras.scm",(void*)f_2084},
{"f_2093extras.scm",(void*)f_2093},
{"f_2114extras.scm",(void*)f_2114},
{"f_2051extras.scm",(void*)f_2051},
{"f_2057extras.scm",(void*)f_2057},
{"f_2082extras.scm",(void*)f_2082},
{"f_2023extras.scm",(void*)f_2023},
{"f_2035extras.scm",(void*)f_2035},
{"f_2020extras.scm",(void*)f_2020},
{"f_2017extras.scm",(void*)f_2017},
{"f_1961extras.scm",(void*)f_1961},
{"f_1983extras.scm",(void*)f_1983},
{"f_1989extras.scm",(void*)f_1989},
{"f_2008extras.scm",(void*)f_2008},
{"f_1969extras.scm",(void*)f_1969},
{"f_1955extras.scm",(void*)f_1955},
{"f_1915extras.scm",(void*)f_1915},
{"f_1917extras.scm",(void*)f_1917},
{"f_1923extras.scm",(void*)f_1923},
{"f_1942extras.scm",(void*)f_1942},
{"f_1876extras.scm",(void*)f_1876},
{"f_1888extras.scm",(void*)f_1888},
{"f_1902extras.scm",(void*)f_1902},
{"f_1913extras.scm",(void*)f_1913},
{"f_1910extras.scm",(void*)f_1910},
{"f_1840extras.scm",(void*)f_1840},
{"f_1843extras.scm",(void*)f_1843},
{"f_1851extras.scm",(void*)f_1851},
{"f_1857extras.scm",(void*)f_1857},
{"f_1865extras.scm",(void*)f_1865},
{"f_1828extras.scm",(void*)f_1828},
{"f_1830extras.scm",(void*)f_1830},
{"f_1838extras.scm",(void*)f_1838},
{"f_1820extras.scm",(void*)f_1820},
{"f_1822extras.scm",(void*)f_1822},
{"f_1797extras.scm",(void*)f_1797},
{"f_1810extras.scm",(void*)f_1810},
{"f_1808extras.scm",(void*)f_1808},
{"f_1760extras.scm",(void*)f_1760},
{"f_1762extras.scm",(void*)f_1762},
{"f_1768extras.scm",(void*)f_1768},
{"f_1778extras.scm",(void*)f_1778},
{"f_1727extras.scm",(void*)f_1727},
{"f_1729extras.scm",(void*)f_1729},
{"f_1735extras.scm",(void*)f_1735},
{"f_1748extras.scm",(void*)f_1748},
{"f_1719extras.scm",(void*)f_1719},
{"f_1721extras.scm",(void*)f_1721},
{"f_1716extras.scm",(void*)f_1716},
{"f_1581extras.scm",(void*)f_1581},
{"f_1653extras.scm",(void*)f_1653},
{"f_1648extras.scm",(void*)f_1648},
{"f_1643extras.scm",(void*)f_1643},
{"f_1583extras.scm",(void*)f_1583},
{"f_1636extras.scm",(void*)f_1636},
{"f_1586extras.scm",(void*)f_1586},
{"f_1594extras.scm",(void*)f_1594},
{"f_1596extras.scm",(void*)f_1596},
{"f_1616extras.scm",(void*)f_1616},
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
