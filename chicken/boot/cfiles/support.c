/* Generated from support.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:17
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: support.scm -output-file support.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[700];


/* from k1946 */
static C_word C_fcall stub99(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub99(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k1939 */
static C_word C_fcall stub95(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub95(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8610)
static void C_ccall f_8610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8594)
static void C_ccall f_8594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8599)
static void C_ccall f_8599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_ccall f_8603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8587)
static void C_fcall f_8587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8520)
static void C_ccall f_8520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8557)
static void C_ccall f_8557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8571)
static void C_ccall f_8571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8550)
static void C_ccall f_8550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8451)
static void C_ccall f_8451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8460)
static void C_fcall f_8460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8494)
static void C_ccall f_8494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8506)
static void C_ccall f_8506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8509)
static void C_ccall f_8509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8482)
static void C_ccall f_8482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8439)
static void C_ccall f_8439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8339)
static void C_ccall f_8339(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8348)
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8420)
static void C_ccall f_8420(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8370)
static void C_ccall f_8370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8385)
static void C_ccall f_8385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8393)
static void C_fcall f_8393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8388)
static void C_ccall f_8388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8343)
static void C_ccall f_8343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8333)
static void C_ccall f_8333(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8257)
static void C_ccall f_8257(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8264)
static void C_fcall f_8264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8276)
static void C_ccall f_8276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8287)
static void C_ccall f_8287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8245)
static void C_ccall f_8245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8251)
static void C_ccall f_8251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8233)
static void C_ccall f_8233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8237)
static void C_ccall f_8237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8154)
static void C_ccall f_8154(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8154)
static void C_ccall f_8154r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8173)
static void C_ccall f_8173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8198)
static void C_ccall f_8198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8204)
static void C_fcall f_8204(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8211)
static void C_ccall f_8211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8224)
static void C_ccall f_8224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8228)
static void C_ccall f_8228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8157)
static void C_fcall f_8157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8167)
static void C_ccall f_8167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8120)
static void C_ccall f_8120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8095)
static void C_ccall f_8095(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8080)
static void C_ccall f_8080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8074)
static void C_ccall f_8074(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8066)
static void C_ccall f_8066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8069)
static void C_ccall f_8069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8038)
static void C_ccall f_8038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8028)
static void C_ccall f_8028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8035)
static void C_ccall f_8035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7991)
static void C_fcall f_7991(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7953)
static void C_ccall f_7953(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7963)
static void C_fcall f_7963(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7756)
static void C_ccall f_7756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7935)
static void C_ccall f_7935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7884)
static void C_ccall f_7884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7933)
static void C_ccall f_7933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7887)
static void C_ccall f_7887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7892)
static void C_ccall f_7892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7890)
static void C_ccall f_7890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7847)
static void C_fcall f_7847(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7860)
static void C_ccall f_7860(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7864)
static void C_ccall f_7864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7812)
static void C_fcall f_7812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7818)
static void C_fcall f_7818(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7845)
static void C_ccall f_7845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7831)
static void C_ccall f_7831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7765)
static void C_fcall f_7765(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7771)
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7597)
static void C_ccall f_7597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7741)
static void C_fcall f_7741(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7747)
static void C_ccall f_7747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7600)
static void C_fcall f_7600(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7619)
static void C_fcall f_7619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7703)
static void C_ccall f_7703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7673)
static void C_ccall f_7673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7650)
static void C_fcall f_7650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7519)
static void C_ccall f_7519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7580)
static void C_fcall f_7580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7553)
static void C_fcall f_7553(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7523)
static void C_ccall f_7523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7281)
static void C_ccall f_7281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7462)
static void C_fcall f_7462(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7421)
static void C_fcall f_7421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7374)
static void C_fcall f_7374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7352)
static C_word C_fcall f_7352(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6995)
static void C_ccall f_6995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7275)
static void C_ccall f_7275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7007)
static void C_ccall f_7007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7017)
static void C_fcall f_7017(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7035)
static void C_ccall f_7035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7069)
static void C_fcall f_7069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6998)
static void C_fcall f_6998(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6700)
static void C_ccall f_6700(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6716)
static void C_fcall f_6716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6725)
static void C_fcall f_6725(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6737)
static void C_fcall f_6737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6749)
static void C_fcall f_6749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6789)
static void C_fcall f_6789(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6660)
static void C_ccall f_6660(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6670)
static void C_ccall f_6670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6633)
static void C_fcall f_6633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6611)
static void C_ccall f_6611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6602)
static void C_fcall f_6602(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6592)
static void C_ccall f_6592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5827)
static void C_fcall f_5827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5852)
static void C_fcall f_5852(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5867)
static void C_fcall f_5867(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_fcall f_5882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5920)
static void C_fcall f_5920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5935)
static void C_fcall f_5935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5977)
static void C_fcall f_5977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6004)
static void C_fcall f_6004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6019)
static void C_fcall f_6019(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6335)
static void C_fcall f_6335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6223)
static void C_fcall f_6223(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6191)
static void C_fcall f_6191(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static C_word C_fcall f_6186(C_word *a,C_word t0);
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6093)
static void C_fcall f_6093(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5953)
static void C_fcall f_5953(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5800)
static void C_ccall f_5800(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5762)
static void C_ccall f_5762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5746)
static void C_ccall f_5746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5658)
static void C_ccall f_5658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5570)
static void C_ccall f_5570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5597)
static void C_fcall f_5597(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5545)
static void C_fcall f_5545(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5498)
static void C_fcall f_5498(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5454)
static void C_fcall f_5454(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5415)
static void C_ccall f_5415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5246)
static void C_fcall f_5246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_fcall f_5139(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_fcall f_5061(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4967)
static void C_ccall f_4967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static C_word C_fcall f_4988(C_word t0,C_word t1);
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4939)
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static void C_fcall f_4767(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4902)
static void C_ccall f_4902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4835)
static void C_ccall f_4835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4844)
static void C_ccall f_4844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_fcall f_4761(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4680)
static void C_ccall f_4680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_fcall f_4706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4620)
static void C_fcall f_4620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4640)
static void C_ccall f_4640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4345)
static void C_fcall f_4345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4555)
static void C_fcall f_4555(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_ccall f_4562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4519)
static void C_ccall f_4519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4352)
static void C_ccall f_4352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_fcall f_4063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4185)
static void C_fcall f_4185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4242)
static void C_fcall f_4242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4041)
static void C_fcall f_4041(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_fcall f_3900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3897)
static void C_fcall f_3897(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3770)
static void C_ccall f_3770(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3435)
static void C_ccall f_3435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3451)
static void C_fcall f_3451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_fcall f_3508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_fcall f_3383(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3298)
static void C_fcall f_3298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3308)
static void C_ccall f_3308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_fcall f_3266(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3085)
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3016)
static void C_ccall f_3016(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2871)
static void C_ccall f_2871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2664)
static void C_fcall f_2664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_fcall f_2673(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_fcall f_2720(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_fcall f_2613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_fcall f_2461(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2471)
static void C_fcall f_2471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2480)
static void C_fcall f_2480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_fcall f_2504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2379)
static void C_fcall f_2379(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_fcall f_2407(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2241)
static void C_fcall f_2241(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2078)
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_fcall f_2033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_fcall f_1978(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_fcall f_1804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1826)
static void C_fcall f_1826(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_ccall f_1837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1748)
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1666)
static C_word C_fcall f_1666(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1616)
static void C_fcall f_1616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1595)
static void C_fcall f_1595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1555)
static void C_fcall f_1555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1480)
static void C_fcall f_1480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1433)
static void C_ccall f_1433r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_ccall f_1452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8587)
static void C_fcall trf_8587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8587(t0,t1);}

C_noret_decl(trf_8460)
static void C_fcall trf_8460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8460(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8460(t0,t1);}

C_noret_decl(trf_8348)
static void C_fcall trf_8348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8348(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8348(t0,t1,t2,t3);}

C_noret_decl(trf_8393)
static void C_fcall trf_8393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8393(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8393(t0,t1,t2);}

C_noret_decl(trf_8264)
static void C_fcall trf_8264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8264(t0,t1);}

C_noret_decl(trf_8204)
static void C_fcall trf_8204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8204(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8204(t0,t1,t2,t3);}

C_noret_decl(trf_8157)
static void C_fcall trf_8157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8157(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8157(t0,t1);}

C_noret_decl(trf_7991)
static void C_fcall trf_7991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7991(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7991(t0,t1,t2);}

C_noret_decl(trf_7963)
static void C_fcall trf_7963(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7963(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7963(t0,t1);}

C_noret_decl(trf_7847)
static void C_fcall trf_7847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7847(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7847(t0,t1,t2,t3);}

C_noret_decl(trf_7812)
static void C_fcall trf_7812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7812(t0,t1,t2);}

C_noret_decl(trf_7818)
static void C_fcall trf_7818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7818(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7818(t0,t1,t2);}

C_noret_decl(trf_7765)
static void C_fcall trf_7765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7765(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7765(t0,t1,t2,t3);}

C_noret_decl(trf_7771)
static void C_fcall trf_7771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7771(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7771(t0,t1,t2);}

C_noret_decl(trf_7741)
static void C_fcall trf_7741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7741(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7741(t0,t1,t2,t3);}

C_noret_decl(trf_7600)
static void C_fcall trf_7600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7600(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7600(t0,t1,t2,t3);}

C_noret_decl(trf_7619)
static void C_fcall trf_7619(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7619(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7619(t0,t1);}

C_noret_decl(trf_7650)
static void C_fcall trf_7650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7650(t0,t1);}

C_noret_decl(trf_7580)
static void C_fcall trf_7580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7580(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7580(t0,t1);}

C_noret_decl(trf_7553)
static void C_fcall trf_7553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7553(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7553(t0,t1);}

C_noret_decl(trf_7547)
static void C_fcall trf_7547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7547(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7547(t0,t1);}

C_noret_decl(trf_7462)
static void C_fcall trf_7462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7462(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7462(t0,t1);}

C_noret_decl(trf_7421)
static void C_fcall trf_7421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7421(t0,t1);}

C_noret_decl(trf_7374)
static void C_fcall trf_7374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7374(t0,t1);}

C_noret_decl(trf_7017)
static void C_fcall trf_7017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7017(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7017(t0,t1);}

C_noret_decl(trf_7069)
static void C_fcall trf_7069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7069(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7069(t0,t1);}

C_noret_decl(trf_6998)
static void C_fcall trf_6998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6998(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6998(t0,t1);}

C_noret_decl(trf_6716)
static void C_fcall trf_6716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6716(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6716(t0,t1);}

C_noret_decl(trf_6725)
static void C_fcall trf_6725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6725(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6725(t0,t1);}

C_noret_decl(trf_6737)
static void C_fcall trf_6737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6737(t0,t1);}

C_noret_decl(trf_6749)
static void C_fcall trf_6749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6749(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6749(t0,t1);}

C_noret_decl(trf_6789)
static void C_fcall trf_6789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6789(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6789(t0,t1);}

C_noret_decl(trf_6633)
static void C_fcall trf_6633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6633(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6633(t0,t1);}

C_noret_decl(trf_6602)
static void C_fcall trf_6602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6602(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6602(t0,t1);}

C_noret_decl(trf_5827)
static void C_fcall trf_5827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5827(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5827(t0,t1,t2);}

C_noret_decl(trf_5852)
static void C_fcall trf_5852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5852(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5852(t0,t1);}

C_noret_decl(trf_5867)
static void C_fcall trf_5867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5867(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5867(t0,t1);}

C_noret_decl(trf_5882)
static void C_fcall trf_5882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5882(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5882(t0,t1);}

C_noret_decl(trf_5920)
static void C_fcall trf_5920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5920(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5920(t0,t1);}

C_noret_decl(trf_5935)
static void C_fcall trf_5935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5935(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5935(t0,t1);}

C_noret_decl(trf_5977)
static void C_fcall trf_5977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5977(t0,t1);}

C_noret_decl(trf_6004)
static void C_fcall trf_6004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6004(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6004(t0,t1);}

C_noret_decl(trf_6019)
static void C_fcall trf_6019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6019(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6019(t0,t1);}

C_noret_decl(trf_6335)
static void C_fcall trf_6335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6335(t0,t1);}

C_noret_decl(trf_6223)
static void C_fcall trf_6223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6223(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6223(t0,t1);}

C_noret_decl(trf_6191)
static void C_fcall trf_6191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6191(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6191(t0,t1);}

C_noret_decl(trf_6093)
static void C_fcall trf_6093(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6093(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6093(t0,t1);}

C_noret_decl(trf_5953)
static void C_fcall trf_5953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5953(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5953(t0,t1);}

C_noret_decl(trf_5597)
static void C_fcall trf_5597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5597(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5597(t0,t1);}

C_noret_decl(trf_5545)
static void C_fcall trf_5545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5545(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5545(t0,t1);}

C_noret_decl(trf_5498)
static void C_fcall trf_5498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5498(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5498(t0,t1);}

C_noret_decl(trf_5454)
static void C_fcall trf_5454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5454(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5454(t0,t1);}

C_noret_decl(trf_5246)
static void C_fcall trf_5246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5246(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5246(t0,t1);}

C_noret_decl(trf_5104)
static void C_fcall trf_5104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5104(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5104(t0,t1,t2,t3);}

C_noret_decl(trf_5139)
static void C_fcall trf_5139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5139(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5139(t0,t1,t2,t3);}

C_noret_decl(trf_5061)
static void C_fcall trf_5061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5061(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5061(t0,t1,t2,t3);}

C_noret_decl(trf_5032)
static void C_fcall trf_5032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5032(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5032(t0,t1,t2,t3);}

C_noret_decl(trf_4939)
static void C_fcall trf_4939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4939(t0,t1,t2);}

C_noret_decl(trf_4767)
static void C_fcall trf_4767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4767(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4767(t0,t1,t2,t3);}

C_noret_decl(trf_4761)
static void C_fcall trf_4761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4761(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4761(t0,t1,t2);}

C_noret_decl(trf_4706)
static void C_fcall trf_4706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4706(t0,t1);}

C_noret_decl(trf_4620)
static void C_fcall trf_4620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4620(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4620(t0,t1,t2);}

C_noret_decl(trf_4345)
static void C_fcall trf_4345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4345(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4345(t0,t1);}

C_noret_decl(trf_4555)
static void C_fcall trf_4555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4555(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4555(t0,t1);}

C_noret_decl(trf_4501)
static void C_fcall trf_4501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4501(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4501(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4063)
static void C_fcall trf_4063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4063(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4063(t0,t1);}

C_noret_decl(trf_4185)
static void C_fcall trf_4185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4185(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4185(t0,t1);}

C_noret_decl(trf_4242)
static void C_fcall trf_4242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4242(t0,t1);}

C_noret_decl(trf_4041)
static void C_fcall trf_4041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4041(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4041(t0,t1);}

C_noret_decl(trf_3900)
static void C_fcall trf_3900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3900(t0,t1);}

C_noret_decl(trf_3897)
static void C_fcall trf_3897(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3897(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3897(t0,t1);}

C_noret_decl(trf_3425)
static void C_fcall trf_3425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3425(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3425(t0,t1,t2);}

C_noret_decl(trf_3451)
static void C_fcall trf_3451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3451(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3451(t0,t1);}

C_noret_decl(trf_3508)
static void C_fcall trf_3508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3508(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3508(t0,t1);}

C_noret_decl(trf_3383)
static void C_fcall trf_3383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3383(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3383(t0,t1);}

C_noret_decl(trf_3298)
static void C_fcall trf_3298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3298(t0,t1,t2);}

C_noret_decl(trf_3266)
static void C_fcall trf_3266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3266(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3266(t0,t1);}

C_noret_decl(trf_2664)
static void C_fcall trf_2664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2664(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2664(t0,t1);}

C_noret_decl(trf_2673)
static void C_fcall trf_2673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2673(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2673(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2720)
static void C_fcall trf_2720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2720(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2720(t0,t1);}

C_noret_decl(trf_2613)
static void C_fcall trf_2613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2613(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2613(t0,t1);}

C_noret_decl(trf_2461)
static void C_fcall trf_2461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2461(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2461(t0,t1,t2,t3);}

C_noret_decl(trf_2471)
static void C_fcall trf_2471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2471(t0,t1);}

C_noret_decl(trf_2480)
static void C_fcall trf_2480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2480(t0,t1);}

C_noret_decl(trf_2504)
static void C_fcall trf_2504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2504(t0,t1);}

C_noret_decl(trf_2379)
static void C_fcall trf_2379(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2379(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2379(t0,t1,t2);}

C_noret_decl(trf_2407)
static void C_fcall trf_2407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2407(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2407(t0,t1);}

C_noret_decl(trf_2241)
static void C_fcall trf_2241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2241(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2241(t0,t1);}

C_noret_decl(trf_2078)
static void C_fcall trf_2078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2078(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2078(t0,t1,t2,t3);}

C_noret_decl(trf_2025)
static void C_fcall trf_2025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2025(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2025(t0,t1,t2);}

C_noret_decl(trf_2033)
static void C_fcall trf_2033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2033(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2033(t0,t1);}

C_noret_decl(trf_1978)
static void C_fcall trf_1978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1978(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1978(t0,t1);}

C_noret_decl(trf_1804)
static void C_fcall trf_1804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1804(t0,t1,t2);}

C_noret_decl(trf_1826)
static void C_fcall trf_1826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1826(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1826(t0,t1);}

C_noret_decl(trf_1833)
static void C_fcall trf_1833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1833(t0,t1);}

C_noret_decl(trf_1748)
static void C_fcall trf_1748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1748(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1748(t0,t1,t2,t3);}

C_noret_decl(trf_1616)
static void C_fcall trf_1616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1616(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1616(t0,t1,t2,t3);}

C_noret_decl(trf_1595)
static void C_fcall trf_1595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1595(t0,t1);}

C_noret_decl(trf_1555)
static void C_fcall trf_1555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1555(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1555(t0,t1,t2);}

C_noret_decl(trf_1480)
static void C_fcall trf_1480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1480(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_support_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(87);
if(!C_demand(87)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(4868)){
C_save(t1);
C_rereclaim2(4868*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(87);
C_initialize_lf(lf,700);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[3]=C_static_string(C_heaptop,134,"\012      /    /      /             \012 ___ (___    ___ (     ___  ___ \012|    |   )| |"
"    |___)|___)|   )\012|__  |  / | |__  | \134  |__  |  / \012\012");
lf[5]=C_static_string(C_heaptop,32,"(c)2000-2007 Felix L. Winkelmann");
lf[6]=C_h_intern(&lf[6],30,"\010compilercompiler-cleanup-hook");
lf[7]=C_static_lambda_info(C_heaptop,8,"(f_1401)");
lf[8]=C_h_intern(&lf[8],26,"\010compilerdebugging-chicken");
lf[9]=C_h_intern(&lf[9],26,"\010compilerdisabled-warnings");
lf[10]=C_h_intern(&lf[10],13,"\010compilerbomb");
lf[11]=C_h_intern(&lf[11],5,"error");
lf[12]=C_h_intern(&lf[12],13,"string-append");
lf[13]=C_static_string(C_heaptop,28,"[internal compiler screwup] ");
lf[14]=C_static_string(C_heaptop,27,"[internal compiler screwup]");
lf[15]=C_static_lambda_info(C_heaptop,33,"(##compiler#bomb . msg-and-args9)");
lf[16]=C_h_intern(&lf[16],18,"\010compilerdebugging");
lf[17]=C_h_intern(&lf[17],12,"flush-output");
lf[18]=C_h_intern(&lf[18],7,"newline");
lf[19]=C_h_intern(&lf[19],6,"printf");
lf[20]=C_static_string(C_heaptop,3,"~s ");
lf[21]=C_h_intern(&lf[21],5,"force");
lf[22]=C_static_lambda_info(C_heaptop,11,"(a1462 x13)");
lf[23]=C_h_intern(&lf[23],12,"\003sysfor-each");
lf[24]=C_h_intern(&lf[24],7,"display");
lf[25]=C_static_string(C_heaptop,2,": ");
lf[26]=C_static_string(C_heaptop,2,"~a");
lf[27]=C_static_lambda_info(C_heaptop,44,"(##compiler#debugging mode10 msg11 . args12)");
lf[28]=C_h_intern(&lf[28],25,"\010compilercompiler-warning");
lf[29]=C_h_intern(&lf[29],7,"fprintf");
lf[30]=C_static_string(C_heaptop,9,"Warning: ");
lf[31]=C_h_intern(&lf[31],18,"current-error-port");
lf[32]=C_h_intern(&lf[32],20,"\003syswarnings-enabled");
lf[33]=C_static_lambda_info(C_heaptop,52,"(##compiler#compiler-warning class19 msg20 . args21)");
lf[34]=C_h_intern(&lf[34],4,"quit");
lf[35]=C_h_intern(&lf[35],4,"exit");
lf[36]=C_static_string(C_heaptop,7,"Error: ");
lf[37]=C_static_lambda_info(C_heaptop,21,"(quit msg24 . args25)");
lf[38]=C_h_intern(&lf[38],21,"\003syssyntax-error-hook");
lf[39]=C_h_intern(&lf[39],16,"print-call-chain");
lf[40]=C_h_intern(&lf[40],18,"\003syscurrent-thread");
lf[41]=C_static_string(C_heaptop,21,"\012\011Expansion history:\012");
lf[42]=C_static_string(C_heaptop,5,"\011~s~%");
lf[43]=C_static_lambda_info(C_heaptop,13,"(a1538 g3233)");
lf[44]=C_static_string(C_heaptop,20,"Syntax error: ~a~%~%");
lf[45]=C_static_lambda_info(C_heaptop,40,"(##sys#syntax-error-hook msg29 . args30)");
lf[46]=C_h_intern(&lf[46],12,"syntax-error");
lf[47]=C_h_intern(&lf[47],31,"\010compileremit-syntax-trace-info");
lf[48]=C_static_lambda_info(C_heaptop,49,"(##compiler#emit-syntax-trace-info info37 cntr38)");
lf[49]=C_h_intern(&lf[49],9,"map-llist");
lf[50]=C_static_lambda_info(C_heaptop,14,"(loop llist42)");
lf[51]=C_static_lambda_info(C_heaptop,26,"(map-llist proc39 llist40)");
lf[52]=C_h_intern(&lf[52],24,"\010compilercheck-signature");
lf[53]=C_static_string(C_heaptop,64,"Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[54]=C_h_intern(&lf[54],18,"\010compilerreal-name");
lf[55]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[56]=C_static_lambda_info(C_heaptop,16,"(loop as49 ll50)");
lf[57]=C_static_lambda_info(C_heaptop,49,"(##compiler#check-signature var44 args45 llist46)");
lf[58]=C_h_intern(&lf[58],13,"\010compilerposq");
lf[59]=C_static_lambda_info(C_heaptop,10,"(loop i59)");
lf[60]=C_static_lambda_info(C_heaptop,27,"(##compiler#posq x55 lst56)");
lf[61]=C_h_intern(&lf[61],18,"\010compilerstringify");
lf[62]=C_h_intern(&lf[62],14,"symbol->string");
lf[63]=C_h_intern(&lf[63],7,"sprintf");
lf[64]=C_static_string(C_heaptop,2,"~a");
lf[65]=C_static_lambda_info(C_heaptop,26,"(##compiler#stringify x61)");
lf[66]=C_h_intern(&lf[66],18,"\010compilersymbolify");
lf[67]=C_h_intern(&lf[67],14,"string->symbol");
lf[68]=C_static_string(C_heaptop,2,"~a");
lf[69]=C_static_lambda_info(C_heaptop,26,"(##compiler#symbolify x62)");
lf[70]=C_h_intern(&lf[70],26,"\010compilerbuild-lambda-list");
lf[71]=C_static_lambda_info(C_heaptop,17,"(loop vars67 n68)");
lf[72]=C_static_lambda_info(C_heaptop,51,"(##compiler#build-lambda-list vars63 argc64 rest65)");
lf[73]=C_h_intern(&lf[73],29,"\010compilerstring->c-identifier");
lf[74]=C_h_intern(&lf[74],24,"\003sysstring->c-identifier");
lf[75]=C_h_intern(&lf[75],21,"\010compilerc-ify-string");
lf[76]=C_h_intern(&lf[76],12,"list->string");
tmp=C_make_character(34);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[77]=C_h_pair(C_restore,tmp);
lf[78]=C_h_intern(&lf[78],6,"append");
tmp=C_make_character(92);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[79]=C_h_pair(C_restore,tmp);
lf[80]=C_h_intern(&lf[80],12,"string->list");
tmp=C_make_character(48);
C_save(tmp);
tmp=C_make_character(48);
C_save(tmp);
lf[81]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_make_character(48);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[82]=C_h_pair(C_restore,tmp);
tmp=C_make_character(34);
C_save(tmp);
tmp=C_make_character(39);
C_save(tmp);
tmp=C_make_character(92);
C_save(tmp);
tmp=C_make_character(63);
C_save(tmp);
lf[83]=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
lf[84]=C_static_lambda_info(C_heaptop,14,"(loop chars76)");
lf[85]=C_static_lambda_info(C_heaptop,31,"(##compiler#c-ify-string str74)");
lf[86]=C_h_intern(&lf[86],28,"\010compilervalid-c-identifier\077");
lf[87]=C_static_lambda_info(C_heaptop,11,"(a1906 c89)");
lf[88]=C_h_intern(&lf[88],3,"any");
lf[89]=C_h_intern(&lf[89],8,"->string");
lf[90]=C_static_lambda_info(C_heaptop,39,"(##compiler#valid-c-identifier\077 name84)");
lf[91]=C_h_intern(&lf[91],14,"\010compilerwords");
lf[92]=C_static_lambda_info(C_heaptop,24,"(##compiler#words a9497)");
lf[93]=C_h_intern(&lf[93],21,"\010compilerwords->bytes");
lf[94]=C_static_lambda_info(C_heaptop,32,"(##compiler#words->bytes a98101)");
lf[95]=C_h_intern(&lf[95],34,"\010compilercheck-and-open-input-file");
lf[96]=C_static_string(C_heaptop,1,"-");
lf[97]=C_h_intern(&lf[97],18,"current-input-port");
lf[98]=C_h_intern(&lf[98],15,"open-input-file");
lf[99]=C_static_string(C_heaptop,20,"Can not open file ~s");
lf[100]=C_static_string(C_heaptop,31,"Can not open file ~s in line ~s");
lf[101]=C_h_intern(&lf[101],12,"file-exists\077");
lf[102]=C_static_lambda_info(C_heaptop,57,"(##compiler#check-and-open-input-file fname103 . line104)");
lf[103]=C_h_intern(&lf[103],33,"\010compilerclose-checked-input-file");
lf[104]=C_static_string(C_heaptop,1,"-");
lf[105]=C_h_intern(&lf[105],16,"close-input-port");
lf[106]=C_static_lambda_info(C_heaptop,54,"(##compiler#close-checked-input-file port107 fname108)");
lf[107]=C_h_intern(&lf[107],19,"\010compilerfold-inner");
lf[108]=C_static_lambda_info(C_heaptop,12,"(fold xs112)");
lf[109]=C_h_intern(&lf[109],7,"reverse");
lf[110]=C_static_lambda_info(C_heaptop,38,"(##compiler#fold-inner proc109 lst110)");
lf[111]=C_h_intern(&lf[111],28,"\010compilerfollow-without-loop");
lf[112]=C_static_lambda_info(C_heaptop,13,"(a2092 x2120)");
lf[113]=C_static_lambda_info(C_heaptop,19,"(loop x118 done119)");
lf[114]=C_static_lambda_info(C_heaptop,57,"(##compiler#follow-without-loop seed114 proc115 abort116)");
lf[115]=C_h_intern(&lf[115],18,"\010compilerconstant\077");
lf[116]=C_h_intern(&lf[116],5,"quote");
lf[117]=C_static_lambda_info(C_heaptop,27,"(##compiler#constant\077 x122)");
lf[118]=C_h_intern(&lf[118],29,"\010compilercollapsable-literal\077");
lf[119]=C_static_lambda_info(C_heaptop,38,"(##compiler#collapsable-literal\077 x133)");
lf[120]=C_h_intern(&lf[120],19,"\010compilerimmediate\077");
lf[121]=C_static_lambda_info(C_heaptop,28,"(##compiler#immediate\077 x142)");
lf[122]=C_h_intern(&lf[122],29,"\010compilercompressable-literal");
lf[123]=C_h_intern(&lf[123],5,"every");
lf[124]=C_h_intern(&lf[124],12,"vector->list");
lf[125]=C_static_lambda_info(C_heaptop,10,"(rec x158)");
lf[126]=C_static_lambda_info(C_heaptop,45,"(##compiler#compressable-literal lit153 t154)");
lf[127]=C_h_intern(&lf[127],23,"\010compilerbasic-literal\077");
lf[128]=C_static_lambda_info(C_heaptop,32,"(##compiler#basic-literal\077 x174)");
lf[129]=C_h_intern(&lf[129],32,"\010compilercanonicalize-begin-body");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[130]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[131]=C_h_pair(C_restore,tmp);
lf[132]=C_h_intern(&lf[132],3,"let");
lf[133]=C_h_intern(&lf[133],6,"gensym");
lf[134]=C_h_intern(&lf[134],1,"t");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[135]=C_h_pair(C_restore,tmp);
lf[136]=C_static_lambda_info(C_heaptop,12,"(loop xs185)");
lf[137]=C_static_lambda_info(C_heaptop,44,"(##compiler#canonicalize-begin-body body183)");
lf[138]=C_h_intern(&lf[138],34,"\010compilerextract-mutable-constants");
lf[139]=C_h_intern(&lf[139],12,"\004coreinclude");
lf[140]=C_h_intern(&lf[140],9,"\004coreset!");
lf[141]=C_h_intern(&lf[141],5,"cons*");
lf[142]=C_h_intern(&lf[142],7,"\003sysmap");
lf[143]=C_h_intern(&lf[143],2,"if");
lf[144]=C_h_intern(&lf[144],20,"\004corecompiletimeonly");
lf[145]=C_h_intern(&lf[145],19,"\004corecompiletimetoo");
lf[146]=C_h_intern(&lf[146],4,"set!");
lf[147]=C_h_intern(&lf[147],6,"lambda");
lf[148]=C_h_intern(&lf[148],11,"\004coreinline");
lf[149]=C_h_intern(&lf[149],20,"\004coreinline_allocate");
lf[150]=C_h_intern(&lf[150],18,"\004coreinline_update");
lf[151]=C_h_intern(&lf[151],19,"\004coreinline_loc_ref");
lf[152]=C_h_intern(&lf[152],22,"\004coreinline_loc_update");
lf[153]=C_h_intern(&lf[153],12,"\004coredeclare");
lf[154]=C_h_intern(&lf[154],14,"\004coreimmutable");
lf[155]=C_h_intern(&lf[155],14,"\004coreundefined");
lf[156]=C_h_intern(&lf[156],14,"\004coreprimitive");
lf[157]=C_h_intern(&lf[157],15,"\004coreinline_ref");
lf[158]=C_static_lambda_info(C_heaptop,20,"(g204 op208 args209)");
lf[159]=C_h_intern(&lf[159],10,"alist-cons");
lf[160]=C_h_intern(&lf[160],25,"\010compilermake-random-name");
lf[161]=C_static_lambda_info(C_heaptop,21,"(a2705 var251 val252)");
lf[162]=C_h_intern(&lf[162],3,"map");
lf[163]=C_h_intern(&lf[163],4,"caar");
lf[164]=C_h_intern(&lf[164],5,"cadar");
lf[165]=C_h_intern(&lf[165],5,"cddar");
lf[166]=C_h_intern(&lf[166],4,"cdar");
lf[167]=C_static_lambda_info(C_heaptop,30,"(g199 g200245 g201246 g202247)");
lf[168]=C_static_lambda_info(C_heaptop,11,"(walk x195)");
lf[169]=C_static_lambda_info(C_heaptop,45,"(##compiler#extract-mutable-constants exp192)");
lf[170]=C_h_intern(&lf[170],21,"\010compilerstring->expr");
lf[171]=C_static_string(C_heaptop,35,"can not parse expression: ~s [~a]~%");
lf[172]=C_static_lambda_info(C_heaptop,7,"(a2851)");
lf[173]=C_static_lambda_info(C_heaptop,13,"(a2845 ex262)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[174]=C_h_pair(C_restore,tmp);
lf[175]=C_h_intern(&lf[175],5,"begin");
lf[176]=C_h_intern(&lf[176],4,"read");
lf[177]=C_static_lambda_info(C_heaptop,12,"(a2910 x264)");
lf[178]=C_h_intern(&lf[178],6,"unfold");
lf[179]=C_h_intern(&lf[179],11,"eof-object\077");
lf[180]=C_h_intern(&lf[180],6,"values");
lf[181]=C_static_lambda_info(C_heaptop,7,"(a2904)");
lf[182]=C_h_intern(&lf[182],22,"with-input-from-string");
lf[183]=C_static_lambda_info(C_heaptop,7,"(a2876)");
lf[184]=C_static_lambda_info(C_heaptop,7,"(a2926)");
lf[185]=C_static_lambda_info(C_heaptop,17,"(a2920 . g260265)");
lf[186]=C_static_lambda_info(C_heaptop,7,"(a2870)");
lf[187]=C_h_intern(&lf[187],22,"with-exception-handler");
lf[188]=C_static_lambda_info(C_heaptop,15,"(a2839 g259261)");
lf[189]=C_h_intern(&lf[189],30,"call-with-current-continuation");
lf[190]=C_static_lambda_info(C_heaptop,32,"(##compiler#string->expr str258)");
lf[191]=C_h_intern(&lf[191],30,"\010compilerdecompose-lambda-list");
lf[192]=C_h_intern(&lf[192],25,"\003sysdecompose-lambda-list");
lf[193]=C_h_intern(&lf[193],37,"\010compilerprocess-lambda-documentation");
lf[194]=C_static_lambda_info(C_heaptop,54,"(##compiler#process-lambda-documentation id266 doc267)");
lf[195]=C_h_intern(&lf[195],30,"\010compilerexpand-profile-lambda");
lf[196]=C_h_intern(&lf[196],29,"\010compilerprofile-lambda-index");
lf[197]=C_h_intern(&lf[197],28,"\010compilerprofile-lambda-list");
lf[198]=C_h_intern(&lf[198],17,"\003sysprofile-entry");
lf[199]=C_h_intern(&lf[199],33,"\010compilerprofile-info-vector-name");
lf[200]=C_h_intern(&lf[200],5,"apply");
lf[201]=C_h_intern(&lf[201],16,"\003sysprofile-exit");
lf[202]=C_h_intern(&lf[202],16,"\003sysdynamic-wind");
lf[203]=C_static_lambda_info(C_heaptop,59,"(##compiler#expand-profile-lambda name268 llist269 body270)");
lf[204]=C_h_intern(&lf[204],37,"\010compilerinitialize-analysis-database");
lf[205]=C_h_intern(&lf[205],13,"\010compilerput!");
lf[206]=C_h_intern(&lf[206],8,"constant");
lf[207]=C_static_lambda_info(C_heaptop,12,"(a3005 s281)");
lf[208]=C_h_intern(&lf[208],26,"\010compilermutable-constants");
lf[209]=C_h_intern(&lf[209],35,"\010compilerfoldable-extended-bindings");
lf[210]=C_h_intern(&lf[210],8,"foldable");
lf[211]=C_h_intern(&lf[211],16,"extended-binding");
lf[212]=C_static_lambda_info(C_heaptop,12,"(a3015 s279)");
lf[213]=C_h_intern(&lf[213],17,"extended-bindings");
lf[214]=C_h_intern(&lf[214],35,"\010compilerfoldable-standard-bindings");
lf[215]=C_h_intern(&lf[215],41,"\010compilerside-effecting-standard-bindings");
lf[216]=C_h_intern(&lf[216],14,"side-effecting");
lf[217]=C_h_intern(&lf[217],16,"standard-binding");
lf[218]=C_static_lambda_info(C_heaptop,12,"(a3030 s276)");
lf[219]=C_h_intern(&lf[219],17,"standard-bindings");
lf[220]=C_static_lambda_info(C_heaptop,47,"(##compiler#initialize-analysis-database db275)");
lf[221]=C_h_intern(&lf[221],12,"\010compilerget");
lf[222]=C_h_intern(&lf[222],18,"\003syshash-table-ref");
lf[223]=C_static_lambda_info(C_heaptop,37,"(##compiler#get db284 key285 prop286)");
lf[224]=C_h_intern(&lf[224],16,"\010compilerget-all");
lf[225]=C_static_lambda_info(C_heaptop,15,"(a3084 prop293)");
lf[226]=C_h_intern(&lf[226],10,"filter-map");
lf[227]=C_static_lambda_info(C_heaptop,44,"(##compiler#get-all db289 key290 . props291)");
lf[228]=C_h_intern(&lf[228],19,"\003syshash-table-set!");
lf[229]=C_static_lambda_info(C_heaptop,45,"(##compiler#put! db294 key295 prop296 val297)");
lf[230]=C_h_intern(&lf[230],17,"\010compilercollect!");
lf[231]=C_static_lambda_info(C_heaptop,49,"(##compiler#collect! db300 key301 prop302 val303)");
lf[232]=C_h_intern(&lf[232],15,"\010compilercount!");
lf[233]=C_static_lambda_info(C_heaptop,49,"(##compiler#count! db306 key307 prop308 . val309)");
lf[234]=C_h_intern(&lf[234],17,"\010compilerget-line");
lf[235]=C_h_intern(&lf[235],24,"\003sysline-number-database");
lf[236]=C_static_lambda_info(C_heaptop,28,"(##compiler#get-line exp313)");
lf[237]=C_h_intern(&lf[237],19,"\010compilerget-line-2");
lf[238]=C_static_lambda_info(C_heaptop,30,"(##compiler#get-line-2 exp314)");
lf[239]=C_h_intern(&lf[239],30,"\010compilerfind-lambda-container");
lf[240]=C_h_intern(&lf[240],12,"contained-in");
lf[241]=C_static_lambda_info(C_heaptop,12,"(loop id324)");
lf[242]=C_static_lambda_info(C_heaptop,53,"(##compiler#find-lambda-container id320 cid321 db322)");
lf[243]=C_h_intern(&lf[243],37,"\010compilerdisplay-line-number-database");
lf[244]=C_static_string(C_heaptop,7,"~S ~S~%");
lf[245]=C_h_intern(&lf[245],3,"cdr");
lf[246]=C_static_lambda_info(C_heaptop,21,"(a3321 key329 val330)");
lf[247]=C_h_intern(&lf[247],23,"\003syshash-table-for-each");
lf[248]=C_static_lambda_info(C_heaptop,41,"(##compiler#display-line-number-database)");
lf[249]=C_h_intern(&lf[249],34,"\010compilerdisplay-analysis-database");
lf[250]=C_static_string(C_heaptop,7,"\011css=~s");
lf[251]=C_static_string(C_heaptop,8,"\011refs=~s");
lf[252]=C_static_string(C_heaptop,7,"\011val=~s");
lf[253]=C_static_string(C_heaptop,8,"\011pval=~s");
lf[254]=C_h_intern(&lf[254],7,"unknown");
lf[255]=C_h_intern(&lf[255],8,"captured");
tmp=C_intern(C_heaptop,8,"captured");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cpt");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,8,"assigned");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"set");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"boxed");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"box");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"global");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"glo");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,16,"assigned-locally");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"stl");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,12,"contractable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"con");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,16,"standard-binding");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"stb");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,8,"foldable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"fld");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"simple");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"sim");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"inlinable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"inl");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,14,"side-effecting");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"sef");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,11,"collapsable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"col");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"removable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"rem");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,8,"constant");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"con");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"undefined");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"und");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"replacing");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"rpg");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"unused");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"uud");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,16,"extended-binding");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"xtb");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,13,"inline-export");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"ilx");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,12,"customizable");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cst");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,21,"has-unused-parameters");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"hup");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,10,"boxed-rest");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"bxr");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[256]=C_h_list(22,C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(22);
lf[257]=C_static_string(C_heaptop,3,"\011~a");
lf[258]=C_h_intern(&lf[258],5,"value");
lf[259]=C_h_intern(&lf[259],15,"potential-value");
lf[260]=C_h_intern(&lf[260],10,"replacable");
lf[261]=C_static_string(C_heaptop,6,"\011~a=~s");
lf[262]=C_h_intern(&lf[262],10,"references");
lf[263]=C_h_intern(&lf[263],10,"call-sites");
lf[264]=C_static_string(C_heaptop,16,"Illegal property");
lf[265]=C_h_intern(&lf[265],4,"home");
lf[266]=C_h_intern(&lf[266],8,"contains");
lf[267]=C_h_intern(&lf[267],8,"use-expr");
lf[268]=C_h_intern(&lf[268],12,"closure-size");
lf[269]=C_h_intern(&lf[269],14,"rest-parameter");
lf[270]=C_h_intern(&lf[270],16,"o-r/access-count");
lf[271]=C_h_intern(&lf[271],18,"captured-variables");
lf[272]=C_h_intern(&lf[272],13,"explicit-rest");
lf[273]=C_h_intern(&lf[273],8,"assigned");
lf[274]=C_h_intern(&lf[274],5,"boxed");
lf[275]=C_h_intern(&lf[275],6,"global");
lf[276]=C_h_intern(&lf[276],12,"contractable");
lf[277]=C_h_intern(&lf[277],16,"assigned-locally");
lf[278]=C_h_intern(&lf[278],11,"collapsable");
lf[279]=C_h_intern(&lf[279],9,"removable");
lf[280]=C_h_intern(&lf[280],9,"undefined");
lf[281]=C_h_intern(&lf[281],9,"replacing");
lf[282]=C_h_intern(&lf[282],6,"unused");
lf[283]=C_h_intern(&lf[283],6,"simple");
lf[284]=C_h_intern(&lf[284],9,"inlinable");
lf[285]=C_h_intern(&lf[285],13,"inline-export");
lf[286]=C_h_intern(&lf[286],21,"has-unused-parameters");
lf[287]=C_h_intern(&lf[287],12,"customizable");
lf[288]=C_h_intern(&lf[288],10,"boxed-rest");
lf[289]=C_static_lambda_info(C_heaptop,12,"(loop es340)");
lf[290]=C_h_intern(&lf[290],5,"write");
lf[291]=C_static_lambda_info(C_heaptop,23,"(a3340 sym333 plist334)");
lf[292]=C_static_lambda_info(C_heaptop,44,"(##compiler#display-analysis-database db332)");
lf[293]=C_h_intern(&lf[293],9,"make-node");
lf[294]=C_h_intern(&lf[294],4,"node");
lf[295]=C_static_lambda_info(C_heaptop,49,"(f_3722 class414 parameters415 subexpressions416)");
lf[296]=C_h_intern(&lf[296],5,"node\077");
lf[297]=C_static_lambda_info(C_heaptop,12,"(node\077 x417)");
lf[298]=C_h_intern(&lf[298],15,"node-class-set!");
lf[299]=C_h_intern(&lf[299],14,"\003sysblock-set!");
lf[300]=C_static_lambda_info(C_heaptop,29,"(node-class-set! x418 val419)");
lf[301]=C_h_intern(&lf[301],10,"node-class");
lf[302]=C_static_lambda_info(C_heaptop,17,"(node-class x421)");
lf[303]=C_h_intern(&lf[303],20,"node-parameters-set!");
lf[304]=C_static_lambda_info(C_heaptop,34,"(node-parameters-set! x424 val425)");
lf[305]=C_h_intern(&lf[305],15,"node-parameters");
lf[306]=C_static_lambda_info(C_heaptop,22,"(node-parameters x427)");
lf[307]=C_h_intern(&lf[307],24,"node-subexpressions-set!");
lf[308]=C_static_lambda_info(C_heaptop,38,"(node-subexpressions-set! x430 val431)");
lf[309]=C_h_intern(&lf[309],19,"node-subexpressions");
lf[310]=C_static_lambda_info(C_heaptop,26,"(node-subexpressions x433)");
lf[311]=C_static_lambda_info(C_heaptop,26,"(make-node c440 p441 s442)");
lf[312]=C_h_intern(&lf[312],16,"\010compilervarnode");
lf[313]=C_h_intern(&lf[313],13,"\004corevariable");
lf[314]=C_static_lambda_info(C_heaptop,27,"(##compiler#varnode var443)");
lf[315]=C_h_intern(&lf[315],14,"\010compilerqnode");
lf[316]=C_static_lambda_info(C_heaptop,27,"(##compiler#qnode const447)");
lf[317]=C_h_intern(&lf[317],25,"\010compilerbuild-node-graph");
lf[318]=C_static_string(C_heaptop,14,"bad expression");
lf[319]=C_h_intern(&lf[319],15,"\004coreglobal-ref");
lf[320]=C_h_intern(&lf[320],8,"truncate");
lf[321]=C_h_intern(&lf[321],4,"type");
lf[322]=C_static_string(C_heaptop,59,"literal \047~s\047 is out of range - will be truncated to integer");
lf[323]=C_h_intern(&lf[323],6,"fixnum");
lf[324]=C_h_intern(&lf[324],11,"number-type");
lf[325]=C_static_lambda_info(C_heaptop,12,"(a3969 b472)");
lf[326]=C_h_intern(&lf[326],6,"unzip1");
lf[327]=C_h_intern(&lf[327],9,"\004coreproc");
lf[328]=C_h_intern(&lf[328],29,"\004coreforeign-callback-wrapper");
lf[329]=C_h_intern(&lf[329],5,"sixth");
lf[330]=C_h_intern(&lf[330],5,"fifth");
lf[331]=C_h_intern(&lf[331],8,"\004coreapp");
lf[332]=C_h_intern(&lf[332],9,"\004corecall");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[333]=C_h_pair(C_restore,tmp);
lf[334]=C_static_lambda_info(C_heaptop,7,"(a4221)");
lf[335]=C_h_intern(&lf[335],24,"\010compilersource-filename");
lf[336]=C_h_intern(&lf[336],28,"\003syssymbol->qualified-string");
lf[337]=C_h_intern(&lf[337],34,"\010compileralways-bound-to-procedure");
lf[338]=C_static_lambda_info(C_heaptop,21,"(a4227 name511 ln512)");
lf[339]=C_h_intern(&lf[339],13,"\004corecallunit");
tmp=C_SCHEME_FALSE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[340]=C_h_pair(C_restore,tmp);
lf[341]=C_static_lambda_info(C_heaptop,11,"(walk x454)");
lf[342]=C_h_intern(&lf[342],1,"o");
lf[343]=C_static_string(C_heaptop,27,"eliminated procedure checks");
lf[344]=C_static_lambda_info(C_heaptop,36,"(##compiler#build-node-graph exp451)");
lf[345]=C_h_intern(&lf[345],30,"\010compilerbuild-expression-tree");
lf[346]=C_h_intern(&lf[346],12,"\004coreclosure");
lf[347]=C_h_intern(&lf[347],4,"last");
lf[348]=C_h_intern(&lf[348],4,"list");
lf[349]=C_h_intern(&lf[349],7,"butlast");
lf[350]=C_h_intern(&lf[350],11,"\004corelambda");
lf[351]=C_h_intern(&lf[351],9,"\004corebind");
lf[352]=C_static_lambda_info(C_heaptop,31,"(loop n544 vals545 bindings546)");
lf[353]=C_h_intern(&lf[353],10,"\004coreunbox");
lf[354]=C_h_intern(&lf[354],8,"\004coreref");
lf[355]=C_h_intern(&lf[355],11,"\004coreupdate");
lf[356]=C_h_intern(&lf[356],13,"\004coreupdate_i");
lf[357]=C_h_intern(&lf[357],8,"\004corebox");
lf[358]=C_h_intern(&lf[358],9,"\004corecond");
lf[359]=C_static_lambda_info(C_heaptop,11,"(walk n528)");
lf[360]=C_static_lambda_info(C_heaptop,42,"(##compiler#build-expression-tree node526)");
lf[361]=C_h_intern(&lf[361],21,"\010compilerfold-boolean");
tmp=C_static_string(C_heaptop,5,"C_and");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[362]=C_h_pair(C_restore,tmp);
lf[363]=C_static_lambda_info(C_heaptop,14,"(fold vars558)");
lf[364]=C_static_lambda_info(C_heaptop,40,"(##compiler#fold-boolean proc555 lst556)");
lf[365]=C_h_intern(&lf[365],31,"\010compilerinline-lambda-bindings");
lf[366]=C_h_intern(&lf[366],8,"split-at");
lf[367]=C_static_lambda_info(C_heaptop,7,"(a4673)");
lf[368]=C_static_lambda_info(C_heaptop,29,"(a4691 var574 val575 body576)");
lf[369]=C_h_intern(&lf[369],10,"fold-right");
lf[370]=C_h_intern(&lf[370],4,"take");
lf[371]=C_static_string(C_heaptop,10,"C_a_i_list");
lf[372]=C_h_intern(&lf[372],34,"\010compilercopy-node-tree-and-rename");
lf[373]=C_static_lambda_info(C_heaptop,25,"(a4679 largs570 rargs571)");
lf[374]=C_static_lambda_info(C_heaptop,31,"(a4667 vars567 argc568 rest569)");
lf[375]=C_static_lambda_info(C_heaptop,69,"(##compiler#inline-lambda-bindings llist563 args564 body565 copy\077566)");
lf[376]=C_h_intern(&lf[376],9,"alist-ref");
lf[377]=C_h_intern(&lf[377],3,"eq\077");
lf[378]=C_static_lambda_info(C_heaptop,19,"(rename v592 rl593)");
lf[379]=C_static_lambda_info(C_heaptop,15,"(a4810 g607608)");
lf[380]=C_static_lambda_info(C_heaptop,15,"(a4848 g615616)");
lf[381]=C_static_lambda_info(C_heaptop,15,"(a4885 g625626)");
lf[382]=C_static_lambda_info(C_heaptop,31,"(a4867 vars617 argc618 rest619)");
lf[383]=C_static_lambda_info(C_heaptop,15,"(a4923 g630631)");
lf[384]=C_h_intern(&lf[384],18,"\010compilertree-copy");
lf[385]=C_static_lambda_info(C_heaptop,17,"(walk n594 rl595)");
lf[386]=C_h_intern(&lf[386],4,"cons");
lf[387]=C_static_lambda_info(C_heaptop,65,"(##compiler#copy-node-tree-and-rename node586 vars587 aliases588)");
lf[388]=C_static_lambda_info(C_heaptop,10,"(rec t636)");
lf[389]=C_static_lambda_info(C_heaptop,27,"(##compiler#tree-copy t634)");
lf[390]=C_h_intern(&lf[390],19,"\010compilercopy-node!");
lf[391]=C_static_lambda_info(C_heaptop,7,"(do645)");
lf[392]=C_static_lambda_info(C_heaptop,37,"(##compiler#copy-node! from638 to639)");
lf[393]=C_h_intern(&lf[393],19,"\010compilermatch-node");
lf[394]=C_static_lambda_info(C_heaptop,19,"(resolve v662 x663)");
lf[395]=C_static_lambda_info(C_heaptop,18,"(match1 x668 p669)");
lf[396]=C_static_lambda_info(C_heaptop,18,"(loop ns675 ps676)");
lf[397]=C_static_lambda_info(C_heaptop,18,"(matchn n670 p671)");
lf[398]=C_h_intern(&lf[398],1,"a");
lf[399]=C_static_string(C_heaptop,7,"matched");
lf[400]=C_static_lambda_info(C_heaptop,46,"(##compiler#match-node node655 pat656 vars657)");
lf[401]=C_h_intern(&lf[401],37,"\010compilerexpression-has-side-effects\077");
lf[402]=C_h_intern(&lf[402],24,"foreign-callback-stub-id");
lf[403]=C_static_lambda_info(C_heaptop,13,"(a5259 fs705)");
lf[404]=C_h_intern(&lf[404],4,"find");
lf[405]=C_h_intern(&lf[405],22,"foreign-callback-stubs");
lf[406]=C_static_lambda_info(C_heaptop,11,"(walk n689)");
lf[407]=C_static_lambda_info(C_heaptop,55,"(##compiler#expression-has-side-effects\077 node686 db687)");
lf[408]=C_h_intern(&lf[408],28,"\010compilersimple-lambda-node\077");
lf[409]=C_static_lambda_info(C_heaptop,10,"(rec n715)");
lf[410]=C_static_lambda_info(C_heaptop,40,"(##compiler#simple-lambda-node\077 node709)");
lf[411]=C_h_intern(&lf[411],30,"\010compilerdump-exported-globals");
lf[412]=C_h_intern(&lf[412],26,"\010compilerblock-compilation");
lf[413]=C_static_lambda_info(C_heaptop,12,"(a5419 s733)");
lf[414]=C_h_intern(&lf[414],8,"string<\077");
lf[415]=C_static_lambda_info(C_heaptop,19,"(a5432 s1735 s2736)");
lf[416]=C_h_intern(&lf[416],4,"sort");
lf[417]=C_h_intern(&lf[417],20,"\010compilerexport-list");
lf[418]=C_h_intern(&lf[418],22,"\010compilerblock-globals");
lf[419]=C_static_lambda_info(C_heaptop,23,"(a5446 sym729 plist730)");
lf[420]=C_static_lambda_info(C_heaptop,7,"(a5410)");
lf[421]=C_h_intern(&lf[421],19,"with-output-to-file");
lf[422]=C_static_lambda_info(C_heaptop,48,"(##compiler#dump-exported-globals db726 file727)");
lf[423]=C_h_intern(&lf[423],31,"\010compilerdump-undefined-globals");
lf[424]=C_static_lambda_info(C_heaptop,23,"(a5490 sym739 plist740)");
lf[425]=C_static_lambda_info(C_heaptop,41,"(##compiler#dump-undefined-globals db738)");
lf[426]=C_h_intern(&lf[426],29,"\010compilercheck-global-exports");
lf[427]=C_h_intern(&lf[427],3,"var");
lf[428]=C_static_string(C_heaptop,44,"exported global variable `~S\047 is not defined");
lf[429]=C_static_lambda_info(C_heaptop,15,"(a5527 g747748)");
lf[430]=C_h_intern(&lf[430],6,"delete");
lf[431]=C_static_string(C_heaptop,53,"exported global variable `~S\047 is used but not defined");
lf[432]=C_static_lambda_info(C_heaptop,23,"(a5533 sym744 plist745)");
lf[433]=C_static_lambda_info(C_heaptop,39,"(##compiler#check-global-exports db742)");
lf[434]=C_h_intern(&lf[434],29,"\010compilercheck-global-imports");
lf[435]=C_h_intern(&lf[435],5,"redef");
lf[436]=C_static_string(C_heaptop,48,"redefinition of imported variable `~s\047 from `~s\047");
lf[437]=C_static_string(C_heaptop,35,"variable `~s\047 used but not imported");
lf[438]=C_h_intern(&lf[438],8,"keyword\077");
lf[439]=C_h_intern(&lf[439],21,"\010compilerimport-table");
lf[440]=C_static_lambda_info(C_heaptop,23,"(a5565 sym751 plist752)");
lf[441]=C_static_lambda_info(C_heaptop,39,"(##compiler#check-global-imports db750)");
lf[442]=C_h_intern(&lf[442],28,"\010compilerlookup-exports-file");
lf[443]=C_static_lambda_info(C_heaptop,15,"(a5638 g758759)");
lf[444]=C_h_intern(&lf[444],9,"read-file");
lf[445]=C_h_intern(&lf[445],21,"\010compilerverbose-mode");
lf[446]=C_static_string(C_heaptop,29,"loading exports file ~a ...~%");
lf[447]=C_h_intern(&lf[447],28,"\003sysresolve-include-filename");
lf[448]=C_static_string(C_heaptop,8,".exports");
lf[449]=C_static_lambda_info(C_heaptop,38,"(##compiler#lookup-exports-file id756)");
lf[450]=C_h_intern(&lf[450],36,"\010compilercompute-database-statistics");
lf[451]=C_h_intern(&lf[451],29,"\010compilercurrent-program-size");
lf[452]=C_h_intern(&lf[452],30,"\010compileroriginal-program-size");
lf[453]=C_static_lambda_info(C_heaptop,15,"(a5674 prop769)");
lf[454]=C_static_lambda_info(C_heaptop,23,"(a5668 sym767 plist768)");
lf[455]=C_static_lambda_info(C_heaptop,46,"(##compiler#compute-database-statistics db761)");
lf[456]=C_h_intern(&lf[456],33,"\010compilerprint-program-statistics");
lf[457]=C_static_lambda_info(C_heaptop,7,"(a5745)");
lf[458]=C_static_string(C_heaptop,26,";   database entries: \011~s\012");
lf[459]=C_static_string(C_heaptop,26,";   known call sites: \011~s\012");
lf[460]=C_static_string(C_heaptop,26,";   global variables: \011~s\012");
lf[461]=C_static_string(C_heaptop,26,";   known procedures: \011~s\012");
lf[462]=C_static_string(C_heaptop,37,";   variables with known values: \011~s\012");
lf[463]=C_static_string(C_heaptop,50,";   program size: \011~s \011original program size: \011~s\012");
lf[464]=C_h_intern(&lf[464],1,"s");
lf[465]=C_static_string(C_heaptop,19,"program statistics:");
lf[466]=C_static_lambda_info(C_heaptop,72,"(a5751 size777 osize778 kvars779 kprocs780 globs781 sites782 entries783)");
lf[467]=C_static_lambda_info(C_heaptop,43,"(##compiler#print-program-statistics db776)");
lf[468]=C_h_intern(&lf[468],35,"\010compilerpprint-expressions-to-file");
lf[469]=C_h_intern(&lf[469],17,"close-output-port");
lf[470]=C_h_intern(&lf[470],12,"pretty-print");
lf[471]=C_static_lambda_info(C_heaptop,12,"(a5799 x792)");
lf[472]=C_static_lambda_info(C_heaptop,7,"(a5793)");
lf[473]=C_h_intern(&lf[473],19,"with-output-to-port");
lf[474]=C_h_intern(&lf[474],16,"open-output-file");
lf[475]=C_h_intern(&lf[475],19,"current-output-port");
lf[476]=C_static_lambda_info(C_heaptop,59,"(##compiler#pprint-expressions-to-file exps789 filename790)");
lf[477]=C_h_intern(&lf[477],27,"\010compilerforeign-type-check");
lf[478]=C_h_intern(&lf[478],4,"char");
lf[479]=C_h_intern(&lf[479],13,"unsigned-char");
lf[480]=C_h_intern(&lf[480],6,"unsafe");
lf[481]=C_h_intern(&lf[481],25,"\003sysforeign-char-argument");
lf[482]=C_h_intern(&lf[482],3,"int");
lf[483]=C_h_intern(&lf[483],27,"\003sysforeign-fixnum-argument");
lf[484]=C_h_intern(&lf[484],5,"float");
lf[485]=C_h_intern(&lf[485],27,"\003sysforeign-flonum-argument");
lf[486]=C_h_intern(&lf[486],7,"pointer");
lf[487]=C_h_intern(&lf[487],26,"\003sysforeign-block-argument");
lf[488]=C_h_intern(&lf[488],15,"nonnull-pointer");
lf[489]=C_h_intern(&lf[489],8,"u8vector");
lf[490]=C_h_intern(&lf[490],34,"\003sysforeign-number-vector-argument");
lf[491]=C_h_intern(&lf[491],16,"nonnull-u8vector");
tmp=C_intern(C_heaptop,16,"nonnull-u8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"u8vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-u16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u16vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,16,"nonnull-s8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"s8vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-s16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s16vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-u32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u32vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-s32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s32vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-f32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f32vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,17,"nonnull-f64vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f64vector");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[492]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[493]=C_h_intern(&lf[493],7,"integer");
lf[494]=C_h_intern(&lf[494],28,"\003sysforeign-integer-argument");
lf[495]=C_h_intern(&lf[495],16,"unsigned-integer");
lf[496]=C_h_intern(&lf[496],37,"\003sysforeign-unsigned-integer-argument");
lf[497]=C_h_intern(&lf[497],9,"c-pointer");
lf[498]=C_h_intern(&lf[498],28,"\003sysforeign-pointer-argument");
lf[499]=C_h_intern(&lf[499],17,"nonnull-c-pointer");
lf[500]=C_h_intern(&lf[500],8,"c-string");
lf[501]=C_h_intern(&lf[501],9,"c-string*");
lf[502]=C_h_intern(&lf[502],17,"\003sysmake-c-string");
lf[503]=C_h_intern(&lf[503],27,"\003sysforeign-string-argument");
lf[504]=C_h_intern(&lf[504],16,"nonnull-c-string");
lf[505]=C_h_intern(&lf[505],17,"nonnull-c-string*");
lf[506]=C_h_intern(&lf[506],6,"symbol");
lf[507]=C_h_intern(&lf[507],18,"\003syssymbol->string");
lf[508]=C_h_intern(&lf[508],4,"this");
lf[509]=C_h_intern(&lf[509],8,"slot-ref");
lf[510]=C_static_lambda_info(C_heaptop,6,"(g881)");
lf[511]=C_static_lambda_info(C_heaptop,6,"(g880)");
lf[512]=C_h_intern(&lf[512],3,"ref");
lf[513]=C_h_intern(&lf[513],8,"function");
lf[514]=C_h_intern(&lf[514],8,"instance");
lf[515]=C_h_intern(&lf[515],12,"instance-ref");
lf[516]=C_h_intern(&lf[516],16,"nonnull-instance");
lf[517]=C_h_intern(&lf[517],5,"const");
lf[518]=C_h_intern(&lf[518],27,"\010compilerforeign-type-table");
lf[519]=C_h_intern(&lf[519],18,"unsigned-integer32");
lf[520]=C_h_intern(&lf[520],13,"unsigned-long");
lf[521]=C_h_intern(&lf[521],4,"long");
lf[522]=C_h_intern(&lf[522],9,"integer32");
lf[523]=C_h_intern(&lf[523],17,"nonnull-u16vector");
lf[524]=C_h_intern(&lf[524],16,"nonnull-s8vector");
lf[525]=C_h_intern(&lf[525],17,"nonnull-s16vector");
lf[526]=C_h_intern(&lf[526],17,"nonnull-u32vector");
lf[527]=C_h_intern(&lf[527],17,"nonnull-s32vector");
lf[528]=C_h_intern(&lf[528],17,"nonnull-f32vector");
lf[529]=C_h_intern(&lf[529],17,"nonnull-f64vector");
lf[530]=C_h_intern(&lf[530],9,"u16vector");
lf[531]=C_h_intern(&lf[531],8,"s8vector");
lf[532]=C_h_intern(&lf[532],9,"s16vector");
lf[533]=C_h_intern(&lf[533],9,"u32vector");
lf[534]=C_h_intern(&lf[534],9,"s32vector");
lf[535]=C_h_intern(&lf[535],9,"f32vector");
lf[536]=C_h_intern(&lf[536],9,"f64vector");
lf[537]=C_h_intern(&lf[537],22,"nonnull-scheme-pointer");
lf[538]=C_h_intern(&lf[538],19,"nonnull-byte-vector");
lf[539]=C_h_intern(&lf[539],11,"byte-vector");
lf[540]=C_h_intern(&lf[540],14,"scheme-pointer");
lf[541]=C_h_intern(&lf[541],6,"double");
lf[542]=C_h_intern(&lf[542],6,"number");
lf[543]=C_h_intern(&lf[543],12,"unsigned-int");
lf[544]=C_h_intern(&lf[544],5,"short");
lf[545]=C_h_intern(&lf[545],14,"unsigned-short");
lf[546]=C_h_intern(&lf[546],4,"byte");
lf[547]=C_h_intern(&lf[547],13,"unsigned-byte");
lf[548]=C_h_intern(&lf[548],5,"int32");
lf[549]=C_h_intern(&lf[549],14,"unsigned-int32");
lf[550]=C_static_lambda_info(C_heaptop,13,"(repeat t801)");
lf[551]=C_static_lambda_info(C_heaptop,20,"(a5820 t798 next799)");
lf[552]=C_static_string(C_heaptop,34,"foreign type `~S\047 refers to itself");
lf[553]=C_static_lambda_info(C_heaptop,7,"(a6591)");
lf[554]=C_static_lambda_info(C_heaptop,48,"(##compiler#foreign-type-check param796 type797)");
lf[555]=C_h_intern(&lf[555],36,"\010compilerforeign-type-convert-result");
lf[556]=C_static_lambda_info(C_heaptop,50,"(##compiler#foreign-type-convert-result r894 t895)");
lf[557]=C_h_intern(&lf[557],38,"\010compilerforeign-type-convert-argument");
lf[558]=C_static_lambda_info(C_heaptop,52,"(##compiler#foreign-type-convert-argument a899 t900)");
lf[559]=C_h_intern(&lf[559],27,"\010compilerfinal-foreign-type");
lf[560]=C_static_lambda_info(C_heaptop,20,"(a6665 t905 next906)");
lf[561]=C_static_string(C_heaptop,34,"foreign type `~S\047 refers to itself");
lf[562]=C_static_lambda_info(C_heaptop,7,"(a6693)");
lf[563]=C_static_lambda_info(C_heaptop,37,"(##compiler#final-foreign-type t0904)");
lf[564]=C_h_intern(&lf[564],37,"\010compilerestimate-foreign-result-size");
lf[565]=C_h_intern(&lf[565],9,"integer64");
lf[566]=C_h_intern(&lf[566],4,"bool");
lf[567]=C_h_intern(&lf[567],4,"void");
lf[568]=C_h_intern(&lf[568],13,"scheme-object");
lf[569]=C_static_lambda_info(C_heaptop,20,"(a6705 t911 next912)");
lf[570]=C_static_string(C_heaptop,34,"foreign type `~S\047 refers to itself");
lf[571]=C_static_lambda_info(C_heaptop,7,"(a6988)");
lf[572]=C_static_lambda_info(C_heaptop,49,"(##compiler#estimate-foreign-result-size type910)");
lf[573]=C_h_intern(&lf[573],46,"\010compilerestimate-foreign-result-location-size");
lf[574]=C_static_string(C_heaptop,54,"can not compute size of location for foreign type `~S\047");
lf[575]=C_static_lambda_info(C_heaptop,10,"(err t990)");
lf[576]=C_static_lambda_info(C_heaptop,20,"(a7006 t991 next992)");
lf[577]=C_static_string(C_heaptop,34,"foreign type `~S\047 refers to itself");
lf[578]=C_static_lambda_info(C_heaptop,7,"(a7274)");
lf[579]=C_static_lambda_info(C_heaptop,58,"(##compiler#estimate-foreign-result-location-size type988)");
lf[580]=C_h_intern(&lf[580],30,"\010compilerfinish-foreign-result");
lf[581]=C_h_intern(&lf[581],17,"\003syspeek-c-string");
lf[582]=C_h_intern(&lf[582],25,"\003syspeek-nonnull-c-string");
lf[583]=C_h_intern(&lf[583],26,"\003syspeek-and-free-c-string");
lf[584]=C_h_intern(&lf[584],34,"\003syspeek-and-free-nonnull-c-string");
lf[585]=C_h_intern(&lf[585],17,"\003sysintern-symbol");
lf[586]=C_h_intern(&lf[586],35,"\010tinyclosmake-instance-from-pointer");
lf[587]=C_static_lambda_info(C_heaptop,7,"(g1072)");
lf[588]=C_h_intern(&lf[588],4,"make");
lf[589]=C_static_lambda_info(C_heaptop,52,"(##compiler#finish-foreign-result type1067 body1068)");
lf[590]=C_h_intern(&lf[590],28,"\010compilerscan-used-variables");
lf[591]=C_static_lambda_info(C_heaptop,12,"(walk n1085)");
lf[592]=C_static_lambda_info(C_heaptop,50,"(##compiler#scan-used-variables node1081 vars1082)");
lf[593]=C_h_intern(&lf[593],28,"\010compilerscan-free-variables");
lf[594]=C_h_intern(&lf[594],11,"lset-adjoin");
lf[595]=C_static_lambda_info(C_heaptop,34,"(a7702 vars1127 argc1128 rest1129)");
lf[596]=C_static_lambda_info(C_heaptop,18,"(walk n1106 e1107)");
lf[597]=C_static_lambda_info(C_heaptop,13,"(a7746 n1132)");
lf[598]=C_static_lambda_info(C_heaptop,23,"(walkeach ns1130 e1131)");
lf[599]=C_static_lambda_info(C_heaptop,41,"(##compiler#scan-free-variables node1102)");
lf[600]=C_h_intern(&lf[600],25,"\010compilertopological-sort");
lf[601]=C_static_lambda_info(C_heaptop,13,"(loop at1146)");
lf[602]=C_static_lambda_info(C_heaptop,20,"(insert x1143 y1144)");
lf[603]=C_static_lambda_info(C_heaptop,13,"(loop at1150)");
lf[604]=C_static_lambda_info(C_heaptop,14,"(lookup x1148)");
lf[605]=C_h_intern(&lf[605],7,"colored");
lf[606]=C_static_lambda_info(C_heaptop,13,"(a7859 v1154)");
lf[607]=C_static_lambda_info(C_heaptop,26,"(visit u1152 adj-list1153)");
lf[608]=C_static_lambda_info(C_heaptop,15,"(a7891 def1161)");
lf[609]=C_static_lambda_info(C_heaptop,15,"(a7934 def1160)");
lf[610]=C_static_lambda_info(C_heaptop,46,"(##compiler#topological-sort dag1136 pred1137)");
lf[611]=C_h_intern(&lf[611],23,"\010compilerchop-separator");
lf[612]=C_h_intern(&lf[612],9,"substring");
lf[613]=C_h_intern(&lf[613],32,"\003syspathname-directory-separator");
lf[614]=C_static_lambda_info(C_heaptop,35,"(##compiler#chop-separator str1169)");
lf[615]=C_h_intern(&lf[615],23,"\010compilerchop-extension");
lf[616]=C_static_lambda_info(C_heaptop,12,"(loop i1174)");
lf[617]=C_static_lambda_info(C_heaptop,35,"(##compiler#chop-extension str1171)");
lf[618]=C_h_intern(&lf[618],22,"\010compilerprint-version");
lf[619]=C_static_string(C_heaptop,6,"~A~%~A");
lf[620]=C_h_intern(&lf[620],15,"chicken-version");
lf[621]=C_static_string(C_heaptop,2,"~A");
lf[622]=C_h_intern(&lf[622],9,"\003syserror");
lf[623]=C_static_lambda_info(C_heaptop,34,"(##compiler#print-version . b1176)");
lf[624]=C_h_intern(&lf[624],20,"\010compilerprint-usage");
lf[625]=C_static_string(C_heaptop,4592,"Usage: chicken FILENAME OPTION ...\012\012  FILENAME should be a complete source file "
"name with extension, or \042-\042 for\012  standard input. OPTION may be one of the follo"
"wing:\012\012  General options:\012\012    -help                       display this text and"
" exit\012    -version                    display compiler version and exit\012    -rel"
"ease                    print release number and exit\012    -verbose              "
"      display information on compilation progress\012    -quiet                    "
"  do not display compile information\012\012  File and pathname options:\012\012    -output-"
"file FILENAME       specifies output-filename, default is \047out.c\047\012    -include-p"
"ath PATHNAME      specifies alternative path for included files\012    -to-stdout  "
"                write compiled file to stdout instead of file\012\012  Language option"
"s:\012\012    -feature SYMBOL             register feature identifier\012\012  Syntax relate"
"d options:\012\012    -case-insensitive           don\047t preserve case of read symbols\012"
"    -keyword-style STYLE        allow alternative keyword syntax (none, prefix o"
"r suffix)\012    -run-time-macros            macros are made available at run-time\012"
"\012  Translation options:\012\012    -explicit-use               do not use units \047libra"
"ry\047 and \047eval\047 by default\012    -check-syntax               stop compilation after"
" macro-expansion\012    -analyze-only               stop compilation after first an"
"alysis pass\012\012  Debugging options:\012\012    -no-warnings                disable warni"
"ngs\012    -disable-warning CLASS      disable specific class of warnings\012    -debu"
"g-level NUMBER         set level of available debugging information\012    -no-trac"
"e                   disable tracing information\012    -profile                    "
"executable emits profiling information \012    -profile-name FILENAME      name of "
"the generated profile information file\012    -accumulate-profile         executabl"
"e emits profiling information in append mode\012    -no-lambda-info             omi"
"t additional procedure-information\012    -emit-exports FILENAME      write exporte"
"d toplevel variables to FILENAME\012    -check-imports              look for undefi"
"ned toplevel variables\012    -import FILENAME            read externally exported "
"symbols from FILENAME\012\012  Optimization options:\012\012    -optimize-level NUMBER      "
"enable certain sets of optimization options\012    -optimize-leaf-routines     enab"
"le leaf routine optimization\012    -lambda-lift                enable lambda-lifti"
"ng\012    -no-usual-integrations      standard procedures may be redefined\012    -uns"
"afe                     disable safety checks\012    -block                      en"
"able block-compilation\012    -disable-interrupts         disable interrupts in com"
"piled code\012    -fixnum-arithmetic          assume all numbers are fixnums\012    -b"
"enchmark-mode             fixnum mode, no interrupts and opt.-level 3\012    -disab"
"le-stack-overflow-checks  disables detection of stack-overflows.\012    -inline    "
"                 enable inlining\012    -inline-limit               set inlining th"
"reshold\012\012  Configuration options:\012\012    -unit NAME                  compile file "
"as a library unit\012    -uses NAME                  declare library unit as used.\012"
"    -heap-size NUMBER           specifies heap-size of compiled executable\012    -"
"heap-initial-size NUMBER   specifies heap-size at startup time\012    -heap-growth "
"PERCENTAGE     specifies growth-rate of expanding heap\012    -heap-shrinkage PERCE"
"NTAGE  specifies shrink-rate of contracting heap\012    -nursery NUMBER\012    -stack-"
"size NUMBER          specifies nursery size of compiled executable\012    -extend F"
"ILENAME            load file before compilation commences\012    -prelude EXPRESSIO"
"N         add expression to front of source file\012    -postlude EXPRESSION       "
" add expression to end of source file\012    -prologue FILENAME          include fi"
"le before main source file\012    -epilogue FILENAME          include file after ma"
"in source file\012    -dynamic                    compile as dynamically loadable c"
"ode\012    -require-extension NAME     require extension NAME in compiled code\012    "
"-extension                  compile as extension (dynamic or static)\012\012  Obscure "
"options:\012\012    -debug MODES                display debugging output for the given"
" modes\012    -compress-literals NUMBER   compile literals above threshold as strin"
"gs\012    -unsafe-libraries           marks the generated file as being linked\012    "
"                            with the unsafe runtime system\012    -raw             "
"           do not generate implicit init- and exit code\011\011\011       \012    -emit-exte"
"rnal-prototypes-first  emit protoypes for callbacks before foreign\012             "
"                   declarations\012");
lf[626]=C_static_lambda_info(C_heaptop,24,"(##compiler#print-usage)");
lf[627]=C_h_intern(&lf[627],36,"\010compilermake-block-variable-literal");
lf[628]=C_h_intern(&lf[628],31,"\010compilerblock-variable-literal");
lf[629]=C_static_lambda_info(C_heaptop,49,"(##compiler#make-block-variable-literal name1183)");
lf[630]=C_h_intern(&lf[630],32,"\010compilerblock-variable-literal\077");
lf[631]=C_static_lambda_info(C_heaptop,42,"(##compiler#block-variable-literal\077 x1184)");
lf[632]=C_h_intern(&lf[632],41,"\010compilerblock-variable-literal-name-set!");
lf[633]=C_static_lambda_info(C_heaptop,59,"(##compiler#block-variable-literal-name-set! x1185 val1186)");
lf[634]=C_h_intern(&lf[634],36,"\010compilerblock-variable-literal-name");
lf[635]=C_static_lambda_info(C_heaptop,46,"(##compiler#block-variable-literal-name x1188)");
lf[636]=C_static_string(C_heaptop,7,"~A-~A~A");
lf[637]=C_h_intern(&lf[637],6,"random");
lf[638]=C_h_intern(&lf[638],15,"current-seconds");
lf[639]=C_static_lambda_info(C_heaptop,42,"(##compiler#make-random-name . prefix1193)");
lf[640]=C_h_intern(&lf[640],23,"\010compilerset-real-name!");
lf[641]=C_h_intern(&lf[641],24,"\010compilerreal-name-table");
lf[642]=C_static_lambda_info(C_heaptop,46,"(##compiler#set-real-name! name1196 rname1197)");
lf[643]=C_static_lambda_info(C_heaptop,15,"(resolve n1201)");
lf[644]=C_static_string(C_heaptop,8,"~A in ~A");
lf[645]=C_static_lambda_info(C_heaptop,29,"(loop prev1208 container1209)");
lf[646]=C_static_lambda_info(C_heaptop,39,"(##compiler#real-name var1198 . db1199)");
lf[647]=C_h_intern(&lf[647],19,"\010compilerreal-name2");
lf[648]=C_static_lambda_info(C_heaptop,38,"(##compiler#real-name2 var1213 db1214)");
lf[649]=C_h_intern(&lf[649],32,"\010compilerdisplay-real-name-table");
lf[650]=C_static_string(C_heaptop,7,"~S ~S~%");
lf[651]=C_static_lambda_info(C_heaptop,23,"(a8250 key1216 val1217)");
lf[652]=C_static_lambda_info(C_heaptop,36,"(##compiler#display-real-name-table)");
lf[653]=C_h_intern(&lf[653],28,"\010compilersource-info->string");
lf[654]=C_h_intern(&lf[654],4,"conc");
lf[655]=C_static_string(C_heaptop,2,": ");
lf[656]=C_static_string(C_heaptop,1," ");
lf[657]=C_h_intern(&lf[657],11,"make-string");
lf[658]=C_h_intern(&lf[658],3,"max");
lf[659]=C_static_lambda_info(C_heaptop,41,"(##compiler#source-info->string info1218)");
lf[660]=C_h_intern(&lf[660],12,"string-null\077");
lf[661]=C_static_lambda_info(C_heaptop,20,"(string-null\077 x1227)");
lf[662]=C_h_intern(&lf[662],19,"\010compilerdump-nodes");
lf[663]=C_h_intern(&lf[663],10,"write-char");
lf[664]=C_static_string(C_heaptop,3," ~S");
lf[665]=C_static_lambda_info(C_heaptop,14,"(do1243 i1245)");
lf[666]=C_static_string(C_heaptop,3,"[~S");
lf[667]=C_static_lambda_info(C_heaptop,17,"(a8419 g12401241)");
lf[668]=C_static_string(C_heaptop,10,"~%~A<~A ~S");
lf[669]=C_static_lambda_info(C_heaptop,18,"(loop i1230 n1231)");
lf[670]=C_static_lambda_info(C_heaptop,29,"(##compiler#dump-nodes n1228)");
lf[671]=C_h_intern(&lf[671],18,"\003sysuser-read-hook");
lf[672]=C_h_intern(&lf[672],15,"foreign-declare");
lf[673]=C_h_intern(&lf[673],7,"declare");
lf[674]=C_h_intern(&lf[674],34,"\010compilerscan-sharp-greater-string");
lf[675]=C_h_intern(&lf[675],9,"read-char");
lf[676]=C_static_lambda_info(C_heaptop,40,"(##sys#user-read-hook char1256 port1257)");
lf[677]=C_static_string(C_heaptop,38,"unexpected end of `#> ... <#\047 sequence");
lf[678]=C_h_intern(&lf[678],17,"get-output-string");
lf[679]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[680]=C_h_intern(&lf[680],18,"open-output-string");
lf[681]=C_static_lambda_info(C_heaptop,47,"(##compiler#scan-sharp-greater-string port1260)");
lf[682]=C_h_intern(&lf[682],35,"\010compilerprocess-custom-declaration");
lf[683]=C_h_intern(&lf[683],29,"\010compilercustom-declare-alist");
lf[684]=C_static_lambda_info(C_heaptop,17,"(a8546 g12851289)");
lf[685]=C_static_lambda_info(C_heaptop,8,"(f_8567)");
lf[686]=C_h_intern(&lf[686],31,"\010compileremit-control-file-item");
lf[687]=C_static_lambda_info(C_heaptop,60,"(##compiler#process-custom-declaration spec1270 strings1271)");
lf[688]=C_h_intern(&lf[688],25,"\010compilercsc-control-file");
lf[689]=C_static_string(C_heaptop,4,"~S~%");
lf[690]=C_static_lambda_info(C_heaptop,34,"(##compiler#compiler-cleanup-hook)");
lf[691]=C_static_string(C_heaptop,6,"#%csc\012");
lf[692]=C_h_intern(&lf[692],26,"pathname-replace-extension");
lf[693]=C_static_string(C_heaptop,3,"csc");
lf[694]=C_static_lambda_info(C_heaptop,44,"(##compiler#emit-control-file-item item1291)");
lf[695]=C_h_intern(&lf[695],27,"condition-property-accessor");
lf[696]=C_h_intern(&lf[696],3,"exn");
lf[697]=C_h_intern(&lf[697],7,"message");
lf[698]=C_h_intern(&lf[698],19,"condition-predicate");
lf[699]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,700,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate(&lf[2],lf[3]);
t4=C_mutate(&lf[4],lf[5]);
t5=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=lf[7],tmp=(C_word)a,a+=3,tmp));
t6=C_set_block_item(lf[8],0,C_SCHEME_END_OF_LIST);
t7=C_set_block_item(lf[9],0,C_SCHEME_END_OF_LIST);
t8=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=lf[15],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1433,a[2]=lf[27],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1473,a[2]=lf[33],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=lf[37],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=lf[45],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[46]+1,*((C_word*)lf[38]+1));
t14=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1546,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1549,a[2]=lf[51],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1592,a[2]=lf[57],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1660,a[2]=lf[60],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=lf[65],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=lf[69],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1742,a[2]=lf[72],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[73]+1,C_retrieve(lf[74]));
t22=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1786,a[2]=lf[85],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=lf[90],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1936,a[2]=lf[92],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=lf[94],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=lf[102],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1997,a[2]=lf[106],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[107]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2009,a[2]=lf[110],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2072,a[2]=lf[114],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2103,a[2]=lf[117],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2149,a[2]=lf[119],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[120]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2179,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2215,a[2]=lf[126],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[127]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2313,a[2]=lf[128],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[129]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2373,a[2]=lf[137],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=lf[169],tmp=(C_word)a,a+=3,tmp));
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 328  condition-predicate */
t38=C_retrieve(lf[698]);
((C_proc3)C_retrieve_proc(t38))(3,t38,t37,lf[696]);}

/* k2825 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 329  condition-property-accessor */
t3=C_retrieve(lf[695]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[696],lf[697]);}

/* k2828 in k2825 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
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
C_word ab[222],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
t2=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[190],tmp=(C_word)a,a+=5,tmp));
t3=C_mutate((C_word*)lf[191]+1,C_retrieve(lf[192]));
t4=C_mutate((C_word*)lf[193]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=lf[194],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[195]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=lf[203],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[204]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=lf[220],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[221]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=lf[223],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[224]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=lf[227],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[205]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=lf[229],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[230]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3137,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[232]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3189,a[2]=lf[233],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[234]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3246,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[237]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=lf[238],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3292,a[2]=lf[242],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[243]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3316,a[2]=lf[248],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[249]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3335,a[2]=lf[292],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[293]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3722,a[2]=lf[295],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[296]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3728,a[2]=lf[297],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[298]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3734,a[2]=lf[300],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[301]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=lf[302],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[303]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=lf[304],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=lf[306],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[307]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3770,a[2]=lf[308],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[309]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=lf[310],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[293]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3788,a[2]=lf[311],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[312]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3794,a[2]=lf[314],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[315]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=lf[316],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[317]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3812,a[2]=lf[344],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[345]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4320,a[2]=lf[360],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[361]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=lf[364],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[365]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4662,a[2]=lf[375],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[372]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4755,a[2]=lf[387],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[384]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=lf[389],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[390]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4967,a[2]=lf[392],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[393]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5029,a[2]=lf[400],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[401]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5224,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[408]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5310,a[2]=lf[410],tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[411]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5402,a[2]=lf[422],tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[423]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5485,a[2]=lf[425],tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[426]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5516,a[2]=lf[433],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[434]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5560,a[2]=lf[441],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[442]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5618,a[2]=lf[449],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[450]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5660,a[2]=lf[455],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[456]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5740,a[2]=lf[467],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[468]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5779,a[2]=lf[476],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[477]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5815,a[2]=lf[554],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[555]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6598,a[2]=lf[556],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[557]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6629,a[2]=lf[558],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[559]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6660,a[2]=lf[563],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[564]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6700,a[2]=lf[572],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[573]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6995,a[2]=lf[579],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[580]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7281,a[2]=lf[589],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[590]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7519,a[2]=lf[592],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[593]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7597,a[2]=lf[599],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[600]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7756,a[2]=lf[610],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[611]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7953,a[2]=lf[614],tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[615]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7982,a[2]=lf[617],tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[618]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8024,a[2]=lf[623],tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[624]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8062,a[2]=lf[626],tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[627]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8074,a[2]=lf[629],tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[630]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8080,a[2]=lf[631],tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[632]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8086,a[2]=lf[633],tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[634]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8095,a[2]=lf[635],tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[160]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8104,a[2]=lf[639],tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[640]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8148,a[2]=lf[642],tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8154,a[2]=lf[646],tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[647]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8233,a[2]=lf[648],tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[649]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8245,a[2]=lf[652],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[653]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8257,a[2]=lf[659],tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[660]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8333,a[2]=lf[661],tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[662]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8339,a[2]=lf[670],tmp=(C_word)a,a+=3,tmp));
t72=C_retrieve(lf[671]);
t73=C_mutate((C_word*)lf[671]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8426,a[2]=t72,a[3]=lf[676],tmp=(C_word)a,a+=4,tmp));
t74=C_mutate((C_word*)lf[674]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8451,a[2]=lf[681],tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[682]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8520,a[2]=lf[687],tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[686]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8583,a[2]=lf[694],tmp=(C_word)a,a+=3,tmp));
t77=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t77+1)))(2,t77,C_SCHEME_UNDEFINED);}

/* ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8583,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8587,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[688]))){
t4=t3;
f_8587(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8594,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8610,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1462 pathname-replace-extension */
t6=C_retrieve(lf[692]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,C_retrieve(lf[335]),lf[693]);}}

/* k8608 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1462 open-output-file */
t2=*((C_word*)lf[474]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k8592 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8594,2,t0,t1);}
t2=C_mutate((C_word*)lf[688]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1463 display */
t4=*((C_word*)lf[24]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[691],C_retrieve(lf[688]));}

/* k8595 in k8592 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8597,2,t0,t1);}
t2=*((C_word*)lf[6]+1);
t3=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8599,a[2]=t2,a[3]=lf[690],tmp=(C_word)a,a+=4,tmp));
t4=((C_word*)t0)[2];
f_8587(t4,t3);}

/* ##compiler#compiler-cleanup-hook in k8595 in k8592 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8603,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1467 close-output-port */
t3=*((C_word*)lf[469]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[688]));}

/* k8601 in ##compiler#compiler-cleanup-hook in k8595 in k8592 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_ccall f_8603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1468 old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k8585 in ##compiler#emit-control-file-item in k2828 in k2825 */
static void C_fcall f_8587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1469 fprintf */
t2=C_retrieve(lf[29]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_retrieve(lf[688]),lf[689],((C_word*)t0)[2]);}

/* ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8520,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cadr(t2);
t6=(C_word)C_i_caddr(t2);
t7=(C_word)C_i_cdddr(t2);
t8=(C_word)C_a_i_cons(&a,2,t4,t5);
t9=(C_word)C_i_assoc(t8,C_retrieve(lf[683]));
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8542,a[2]=t3,a[3]=t1,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t11)[1])){
t13=t12;
f_8542(2,t13,C_SCHEME_UNDEFINED);}
else{
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8557,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t12,a[7]=t11,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* support.scm: 1449 open-output-file */
t14=*((C_word*)lf[474]+1);
((C_proc3)C_retrieve_proc(t14))(3,t14,t13,t6);}}

/* k8555 in ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8557,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[7])[1],C_retrieve(lf[683]));
t5=C_mutate((C_word*)lf[683]+1,t4);
t6=*((C_word*)lf[6]+1);
t7=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8567,a[2]=t1,a[3]=t6,a[4]=lf[685],tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8581,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1457 cons* */
t9=C_retrieve(lf[141]);
((C_proc6)C_retrieve_proc(t9))(6,t9,t8,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8579 in k8555 in ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1457 ##compiler#emit-control-file-item */
t2=C_retrieve(lf[686]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_8567 in k8555 in ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8571,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1455 close-output-port */
t3=*((C_word*)lf[469]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k8569 */
static void C_ccall f_8571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1456 old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k8540 in ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8542,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=*((C_word*)lf[24]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8550,a[2]=t2,a[3]=t3,a[4]=lf[684],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* a8546 in k8540 in ##compiler#process-custom-declaration in k2828 in k2825 */
static void C_ccall f_8550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8550,3,t0,t1,t2);}
/* support.scm: 1458 g1284 */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8455,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1419 open-output-string */
t4=C_retrieve(lf[680]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8455,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8460,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[679],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8460(t5,((C_word*)t0)[2]);}

/* loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_fcall f_8460(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8460,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1421 read-char */
t3=*((C_word*)lf[675]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8464,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* support.scm: 1422 quit */
t2=*((C_word*)lf[34]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],lf[677]);}
else{
switch(t1){
case C_make_character(10):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8482,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1424 newline */
t3=*((C_word*)lf[18]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);
case C_make_character(60):
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8494,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1427 read-char */
t3=*((C_word*)lf[675]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8515,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1435 write-char */
t3=*((C_word*)lf[663]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[3]);}}}

/* k8513 in k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1436 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8460(t2,((C_word*)t0)[2]);}

/* k8492 in k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8494,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(35),t1);
if(C_truep(t2)){
/* support.scm: 1429 get-output-string */
t3=C_retrieve(lf[678]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8506,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1431 write-char */
t4=*((C_word*)lf[663]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_make_character(60),((C_word*)t0)[3]);}}

/* k8504 in k8492 in k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8509,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1432 write-char */
t3=*((C_word*)lf[663]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8507 in k8504 in k8492 in k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1433 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8460(t2,((C_word*)t0)[2]);}

/* k8480 in k8462 in loop in k8453 in ##compiler#scan-sharp-greater-string in k2828 in k2825 */
static void C_ccall f_8482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1425 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8460(t2,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k2828 in k2825 */
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8426,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_make_character(62),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8436,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1413 read-char */
t6=*((C_word*)lf[675]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
/* support.scm: 1416 old-hook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k8434 in ##sys#user-read-hook in k2828 in k2825 */
static void C_ccall f_8436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8439,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1414 ##compiler#scan-sharp-greater-string */
t3=C_retrieve(lf[674]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k8437 in k8434 in ##sys#user-read-hook in k2828 in k2825 */
static void C_ccall f_8439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8439,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[672],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[673],t2));}

/* ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8339(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8339,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8343,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8348,a[2]=t5,a[3]=lf[669],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8348(t7,t3,C_fix(0),t2);}

/* loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_fcall f_8348(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8348,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8361,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* support.scm: 1392 make-string */
t11=*((C_word*)lf[657]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,t2,C_make_character(32));}

/* k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8361,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8367,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 1394 printf */
t4=C_retrieve(lf[19]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,lf[668],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8370,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[667],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8419 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8420(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8420,3,t0,t1,t2);}
/* loop1229 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8348(t3,t1,((C_word*)t0)[2],t2);}

/* k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8370,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8376,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(4)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8385,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
/* support.scm: 1398 printf */
t6=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,lf[666],t5);}
else{
t4=t3;
f_8376(2,t4,C_SCHEME_UNDEFINED);}}

/* k8383 in k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8388,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8393,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=lf[665],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_8393(t6,t2,C_fix(5));}

/* do1243 in k8383 in k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_fcall f_8393(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8393,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8403,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],t2);
/* support.scm: 1401 printf */
t5=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[664],t4);}}

/* k8401 in do1243 in k8383 in k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8393(t3,((C_word*)t0)[2],t2);}

/* k8386 in k8383 in k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1402 write-char */
t2=*((C_word*)lf[663]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(93));}

/* k8374 in k8368 in k8365 in k8359 in loop in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1403 write-char */
t2=*((C_word*)lf[663]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(62));}

/* k8341 in ##compiler#dump-nodes in k2828 in k2825 */
static void C_ccall f_8343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1404 newline */
t2=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* string-null? in k2828 in k2825 */
static void C_ccall f_8333(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8333,3,t0,t1,t2);}
/* support.scm: 1382 string-null? */
t3=C_retrieve(lf[660]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* ##compiler#source-info->string in k2828 in k2825 */
static void C_ccall f_8257(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8257,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8264,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cdddr(t2);
t7=t3;
f_8264(t7,(C_word)C_i_nullp(t6));}
else{
t6=t3;
f_8264(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_8264(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_8264(t4,C_SCHEME_FALSE);}}

/* k8262 in ##compiler#source-info->string in k2828 in k2825 */
static void C_fcall f_8264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8264,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
t4=(C_word)C_i_caddr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8276,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1375 ->string */
t6=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
if(C_truep(((C_word*)t0)[3])){
/* ->string */
t2=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k8274 in k8262 in ##compiler#source-info->string in k2828 in k2825 */
static void C_ccall f_8276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8283,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_string_length(t1);
t5=(C_word)C_fixnum_difference(C_fix(4),t4);
/* support.scm: 1376 max */
t6=*((C_word*)lf[658]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t3,C_fix(0),t5);}

/* k8285 in k8274 in k8262 in ##compiler#source-info->string in k2828 in k2825 */
static void C_ccall f_8287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1376 make-string */
t2=*((C_word*)lf[657]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k8281 in k8274 in k8262 in ##compiler#source-info->string in k2828 in k2825 */
static void C_ccall f_8283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1376 conc */
t2=C_retrieve(lf[654]);
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[655],((C_word*)t0)[3],t1,lf[656],((C_word*)t0)[2]);}

/* ##compiler#display-real-name-table in k2828 in k2825 */
static void C_ccall f_8245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8251,a[2]=lf[651],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1367 ##sys#hash-table-for-each */
t3=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,C_retrieve(lf[641]));}

/* a8250 in ##compiler#display-real-name-table in k2828 in k2825 */
static void C_ccall f_8251(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8251,4,t0,t1,t2,t3);}
/* support.scm: 1369 printf */
t4=C_retrieve(lf[19]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[650],t2,t3);}

/* ##compiler#real-name2 in k2828 in k2825 */
static void C_ccall f_8233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8233,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8237,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1363 ##sys#hash-table-ref */
t5=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[641]),t2);}

/* k8235 in ##compiler#real-name2 in k2828 in k2825 */
static void C_ccall f_8237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1364 ##compiler#real-name */
t2=C_retrieve(lf[54]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8154(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3rv,(void*)f_8154r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_8154r(t0,t1,t2,t3);}}

static void C_ccall f_8154r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8157,a[2]=lf[643],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8173,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1347 resolve */
f_8157(t5,t2);}

/* k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8173,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[5]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1351 ##sys#symbol->qualified-string */
t5=C_retrieve(lf[336]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t1);}
else{
/* support.scm: 1360 ##sys#symbol->qualified-string */
t3=C_retrieve(lf[336]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],t1);}}
else{
/* support.scm: 1348 ##sys#symbol->qualified-string */
t3=C_retrieve(lf[336]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8202,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1352 ##compiler#get */
t3=C_retrieve(lf[221]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[5],((C_word*)t0)[2],lf[240]);}

/* k8200 in k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8202,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8204,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=lf[645],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8204(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k8200 in k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_fcall f_8204(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8204,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 1354 resolve */
f_8157(t4,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k8209 in loop in k8200 in k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8211,2,t0,t1);}
t2=(C_word)C_eqp(t1,((C_word*)t0)[6]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8224,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1357 sprintf */
t4=C_retrieve(lf[63]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[644],((C_word*)t0)[4],t1);}}

/* k8222 in k8209 in loop in k8200 in k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8228,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1358 ##compiler#get */
t3=C_retrieve(lf[221]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[240]);}

/* k8226 in k8222 in k8209 in loop in k8200 in k8196 in k8171 in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1357 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8204(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* resolve in ##compiler#real-name in k2828 in k2825 */
static void C_fcall f_8157(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8157,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8161,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1342 ##sys#hash-table-ref */
t4=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[641]),t2);}

/* k8159 in resolve in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8161,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8167,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1344 ##sys#hash-table-ref */
t3=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[641]),t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k8165 in k8159 in resolve in ##compiler#real-name in k2828 in k2825 */
static void C_ccall f_8167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* ##compiler#set-real-name! in k2828 in k2825 */
static void C_ccall f_8148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8148,4,t0,t1,t2,t3);}
/* support.scm: 1338 ##sys#hash-table-set! */
t4=C_retrieve(lf[228]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,C_retrieve(lf[641]),t2,t3);}

/* ##compiler#make-random-name in k2828 in k2825 */
static void C_ccall f_8104(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_8104r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8104r(t0,t1,t2);}}

static void C_ccall f_8104r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8112,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8116,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* support.scm: 1325 gensym */
t5=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_8116(2,t6,(C_word)C_i_car(t2));}
else{
/* support.scm: 1325 ##sys#error */
t6=*((C_word*)lf[622]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t2);}}}

/* k8114 in ##compiler#make-random-name in k2828 in k2825 */
static void C_ccall f_8116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8120,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1326 current-seconds */
t3=C_retrieve(lf[638]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8118 in k8114 in ##compiler#make-random-name in k2828 in k2825 */
static void C_ccall f_8120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8124,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1327 random */
t3=C_retrieve(lf[637]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(1000));}

/* k8122 in k8118 in k8114 in ##compiler#make-random-name in k2828 in k2825 */
static void C_ccall f_8124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1324 sprintf */
t2=C_retrieve(lf[63]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],lf[636],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8110 in ##compiler#make-random-name in k2828 in k2825 */
static void C_ccall f_8112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1323 string->symbol */
t2=*((C_word*)lf[67]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* ##compiler#block-variable-literal-name in k2828 in k2825 */
static void C_ccall f_8095(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8095,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[628]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* ##compiler#block-variable-literal-name-set! in k2828 in k2825 */
static void C_ccall f_8086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8086,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[628]);
/* support.scm: 1316 ##sys#block-set! */
t5=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* ##compiler#block-variable-literal? in k2828 in k2825 */
static void C_ccall f_8080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8080,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[628]));}

/* ##compiler#make-block-variable-literal in k2828 in k2825 */
static void C_ccall f_8074(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8074,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[628],t2));}

/* ##compiler#print-usage in k2828 in k2825 */
static void C_ccall f_8062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8066,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1214 ##compiler#print-version */
t3=C_retrieve(lf[618]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8064 in ##compiler#print-usage in k2828 in k2825 */
static void C_ccall f_8066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1215 newline */
t3=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8067 in k8064 in ##compiler#print-usage in k2828 in k2825 */
static void C_ccall f_8069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1216 display */
t2=*((C_word*)lf[24]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[625]);}

/* ##compiler#print-version in k2828 in k2825 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_8024r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8024r(t0,t1,t2);}}

static void C_ccall f_8024r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8028,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8038,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t5=t4;
f_8038(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_8038(2,t6,(C_word)C_i_car(t2));}
else{
/* support.scm: 1210 ##sys#error */
t6=*((C_word*)lf[622]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t2);}}}

/* k8036 in ##compiler#print-version in k2828 in k2825 */
static void C_ccall f_8038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1210 printf */
t2=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[621],lf[3]);}
else{
t2=((C_word*)t0)[2];
f_8028(2,t2,C_SCHEME_UNDEFINED);}}

/* k8026 in ##compiler#print-version in k2828 in k2825 */
static void C_ccall f_8028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1211 chicken-version */
t3=C_retrieve(lf[620]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k8033 in k8026 in ##compiler#print-version in k2828 in k2825 */
static void C_ccall f_8035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1211 printf */
t2=C_retrieve(lf[19]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[619],t1,lf[5]);}

/* ##compiler#chop-extension in k2828 in k2825 */
static void C_ccall f_7982(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7982,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7991,a[2]=t6,a[3]=t2,a[4]=lf[616],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7991(t8,t1,t4);}

/* loop in ##compiler#chop-extension in k2828 in k2825 */
static void C_fcall f_7991(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7991,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t5=(C_word)C_eqp(C_make_character(46),t4);
if(C_truep(t5)){
/* support.scm: 1203 substring */
t6=*((C_word*)lf[612]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,((C_word*)t0)[3],C_fix(0),t2);}
else{
t6=(C_word)C_fixnum_decrease(t2);
/* support.scm: 1204 loop */
t8=t1;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* ##compiler#chop-separator in k2828 in k2825 */
static void C_ccall f_7953(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7953,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7963,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t4,C_fix(0)))){
t6=(C_word)C_i_string_ref(t2,t4);
t7=t5;
f_7963(t7,(C_word)C_eqp(t6,C_retrieve(lf[613])));}
else{
t6=t5;
f_7963(t6,C_SCHEME_FALSE);}}

/* k7961 in ##compiler#chop-separator in k2828 in k2825 */
static void C_fcall f_7963(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1196 substring */
t2=*((C_word*)lf[612]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[34],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7756,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7765,a[2]=t3,a[3]=t5,a[4]=lf[602],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7812,a[2]=t5,a[3]=t3,a[4]=lf[604],tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7847,a[2]=t8,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=lf[607],tmp=(C_word)a,a+=7,tmp));
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7884,a[2]=t2,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7935,a[2]=t8,a[3]=lf[609],tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_cdr(t2);
/* for-each */
t16=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t13,t14,t15);}}

/* a7934 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7935,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
/* support.scm: 1179 insert */
t5=((C_word*)t0)[2];
f_7765(t5,t1,t3,t4);}

/* k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7929,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1182 caar */
t4=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k7927 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7933,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1182 cdar */
t3=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k7931 in k7927 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1182 visit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7847(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7885 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7890,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[608],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* for-each */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a7891 in k7885 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7892,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 1184 lookup */
t5=((C_word*)t0)[2];
f_7812(t5,t3,t4);}

/* k7894 in a7891 in k7885 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(t1,lf[605]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 1186 visit */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7847(t5,((C_word*)t0)[4],t3,t4);}}

/* k7888 in k7885 in k7882 in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* visit in ##compiler#topological-sort in k2828 in k2825 */
static void C_fcall f_7847(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7847,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7851,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* support.scm: 1167 insert */
t5=((C_word*)t0)[2];
f_7765(t5,t4,t2,lf[605]);}

/* k7849 in visit in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7854,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7860,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[606],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a7859 in k7849 in visit in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7860(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7860,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7864,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1170 lookup */
t4=((C_word*)t0)[2];
f_7812(t4,t3,t2);}

/* k7862 in a7859 in k7849 in visit in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,lf[605]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
/* support.scm: 1172 visit */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7847(t4,((C_word*)t0)[4],((C_word*)t0)[2],t3);}}

/* k7852 in k7849 in visit in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7854,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* lookup in ##compiler#topological-sort in k2828 in k2825 */
static void C_fcall f_7812(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7812,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7818,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=lf[603],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7818(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in lookup in ##compiler#topological-sort in k2828 in k2825 */
static void C_fcall f_7818(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7818,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7831,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7845,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1162 caar */
t5=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k7843 in loop in lookup in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1162 pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7829 in loop in lookup in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1162 cdar */
t2=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 1163 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7818(t3,((C_word*)t0)[4],t2);}}

/* insert in ##compiler#topological-sort in k2828 in k2825 */
static void C_fcall f_7765(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7765,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7771,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=lf[601],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_7771(t7,t1,((C_word*)((C_word*)t0)[3])[1]);}

/* loop in insert in ##compiler#topological-sort in k2828 in k2825 */
static void C_fcall f_7771(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7771,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7810,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1156 caar */
t5=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k7808 in loop in insert in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1156 pred */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7790 in loop in insert in ##compiler#topological-sort in k2828 in k2825 */
static void C_ccall f_7792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_cdr(t2,((C_word*)t0)[3]));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* support.scm: 1157 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7771(t3,((C_word*)t0)[4],t2);}}

/* ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7597(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7597,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7600,a[2]=t8,a[3]=t6,a[4]=t4,a[5]=lf[596],tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7741,a[2]=t6,a[3]=lf[598],tmp=(C_word)a,a+=4,tmp));
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7754,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1139 walk */
t12=((C_word*)t6)[1];
f_7600(t12,t11,t2,C_SCHEME_END_OF_LIST);}

/* k7752 in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* walkeach in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_fcall f_7741(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7741,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7747,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[597],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a7746 in walkeach in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7747,3,t0,t1,t2);}
/* support.scm: 1137 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7600(t3,t1,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_fcall f_7600(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7600,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[116]);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t7,a[8]=t9,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t10)){
t12=t11;
f_7619(t12,t10);}
else{
t12=(C_word)C_eqp(t9,lf[155]);
if(C_truep(t12)){
t13=t11;
f_7619(t13,t12);}
else{
t13=(C_word)C_eqp(t9,lf[156]);
if(C_truep(t13)){
t14=t11;
f_7619(t14,t13);}
else{
t14=(C_word)C_eqp(t9,lf[327]);
t15=t11;
f_7619(t15,(C_truep(t14)?t14:(C_word)C_eqp(t9,lf[157])));}}}}

/* k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_fcall f_7619(C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7619,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[8],lf[313]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[6]))){
t4=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7638,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1121 lset-adjoin */
t5=C_retrieve(lf[594]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,*((C_word*)lf[377]+1),((C_word*)((C_word*)t0)[5])[1],t3);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[8],lf[146]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7650,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[6]))){
t6=t5;
f_7650(t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7664,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1124 lset-adjoin */
t7=C_retrieve(lf[594]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,*((C_word*)lf[377]+1),((C_word*)((C_word*)t0)[5])[1],t4);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[8],lf[132]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7673,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* support.scm: 1127 walk */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7600(t7,t5,t6,((C_word*)t0)[6]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[8],lf[350]);
if(C_truep(t5)){
t6=(C_word)C_i_caddr(((C_word*)t0)[7]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7703,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[595],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1130 ##compiler#decompose-lambda-list */
t8=C_retrieve(lf[191]);
((C_proc4)C_retrieve_proc(t8))(4,t8,((C_word*)t0)[9],t6,t7);}
else{
/* support.scm: 1134 walkeach */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7741(t6,((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[6]);}}}}}}

/* a7702 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7703,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7715,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1133 append */
t7=*((C_word*)lf[78]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,((C_word*)t0)[2]);}

/* k7713 in a7702 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1133 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7600(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7671 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7673,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7684,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1128 append */
t4=*((C_word*)lf[78]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7682 in k7671 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1128 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7600(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7662 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7650(t3,t2);}

/* k7648 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_fcall f_7650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
/* support.scm: 1125 walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7600(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k7636 in k7617 in walk in ##compiler#scan-free-variables in k2828 in k2825 */
static void C_ccall f_7638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#scan-used-variables in k2828 in k2825 */
static void C_ccall f_7519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7519,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7523,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7525,a[2]=t3,a[3]=t5,a[4]=t8,a[5]=lf[591],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7525(3,t10,t6,t2);}

/* walk in ##compiler#scan-used-variables in k2828 in k2825 */
static void C_ccall f_7525(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7525,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[313]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,lf[146]));
if(C_truep(t8)){
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7547,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7553,a[2]=t12,a[3]=((C_word*)t0)[3],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t14=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[3])[1]);
t15=t13;
f_7553(t15,(C_word)C_i_not(t14));}
else{
t14=t13;
f_7553(t14,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t6,lf[116]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7580,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t11=t10;
f_7580(t11,t9);}
else{
t11=(C_word)C_eqp(t6,lf[155]);
t12=t10;
f_7580(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[156])));}}}

/* k7578 in walk in ##compiler#scan-used-variables in k2828 in k2825 */
static void C_fcall f_7580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
/* for-each */
t2=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k7551 in walk in ##compiler#scan-used-variables in k2828 in k2825 */
static void C_fcall f_7553(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7553,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_7547(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_7547(t2,C_SCHEME_UNDEFINED);}}

/* k7545 in walk in ##compiler#scan-used-variables in k2828 in k2825 */
static void C_fcall f_7547(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k7521 in ##compiler#scan-used-variables in k2828 in k2825 */
static void C_ccall f_7523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#finish-foreign-result in k2828 in k2825 */
static void C_ccall f_7281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[102],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7281,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[500]);
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,2,lf[116],C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[581],t3,t6));}
else{
t6=(C_word)C_eqp(t4,lf[504]);
if(C_truep(t6)){
t7=(C_word)C_a_i_list(&a,2,lf[116],C_fix(0));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,3,lf[582],t3,t7));}
else{
t7=(C_word)C_eqp(t4,lf[501]);
if(C_truep(t7)){
t8=(C_word)C_a_i_list(&a,2,lf[116],C_fix(0));
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,3,lf[583],t3,t8));}
else{
t8=(C_word)C_eqp(t4,lf[505]);
if(C_truep(t8)){
t9=(C_word)C_a_i_list(&a,2,lf[116],C_fix(0));
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,3,lf[584],t3,t9));}
else{
t9=(C_word)C_eqp(t4,lf[506]);
if(C_truep(t9)){
t10=(C_word)C_a_i_list(&a,2,lf[116],C_fix(0));
t11=(C_word)C_a_i_list(&a,3,lf[581],t3,t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_list(&a,2,lf[585],t11));}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7352,a[2]=t3,a[3]=lf[587],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t11=(C_word)C_i_car(t2);
t12=(C_word)C_eqp(t11,lf[514]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7374,a[2]=t3,a[3]=t10,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t14=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t14))){
t15=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t15))){
t16=(C_word)C_i_cdddr(t2);
t17=t13;
f_7374(t17,(C_word)C_i_nullp(t16));}
else{
t16=t13;
f_7374(t16,C_SCHEME_FALSE);}}
else{
t15=t13;
f_7374(t15,C_SCHEME_FALSE);}}
else{
t13=(C_word)C_i_car(t2);
t14=(C_word)C_eqp(t13,lf[515]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7421,a[2]=t3,a[3]=t10,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t16=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t16))){
t17=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t17))){
t18=(C_word)C_i_cdddr(t2);
t19=t15;
f_7421(t19,(C_word)C_i_nullp(t18));}
else{
t18=t15;
f_7421(t18,C_SCHEME_FALSE);}}
else{
t17=t15;
f_7421(t17,C_SCHEME_FALSE);}}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7462,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t16=(C_word)C_i_car(t2);
t17=(C_word)C_eqp(t16,lf[516]);
if(C_truep(t17)){
t18=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t18))){
t19=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t19))){
t20=(C_word)C_i_cdddr(t2);
t21=t15;
f_7462(t21,(C_word)C_i_nullp(t20));}
else{
t20=t15;
f_7462(t20,C_SCHEME_FALSE);}}
else{
t19=t15;
f_7462(t19,C_SCHEME_FALSE);}}
else{
t18=t15;
f_7462(t18,C_SCHEME_FALSE);}}}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t3);}}}}}}}

/* k7460 in ##compiler#finish-foreign-result in k2828 in k2825 */
static void C_fcall f_7462(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7462,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,lf[116],lf[508]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,4,lf[588],t3,t4,((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k7419 in ##compiler#finish-foreign-result in k2828 in k2825 */
static void C_fcall f_7421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7421,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* support.scm: 1084 g1072 */
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,f_7352(C_a_i(&a,9),((C_word*)t0)[3],t3));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k7372 in ##compiler#finish-foreign-result in k2828 in k2825 */
static void C_fcall f_7374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7374,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* support.scm: 1084 g1072 */
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,f_7352(C_a_i(&a,9),((C_word*)t0)[3],t3));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* g1072 in ##compiler#finish-foreign-result in k2828 in k2825 */
static C_word C_fcall f_7352(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return((C_word)C_a_i_list(&a,3,lf[586],((C_word*)t0)[2],t1));}

/* ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_ccall f_6995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6995,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6998,a[2]=lf[575],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7007,a[2]=t3,a[3]=lf[576],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7275,a[2]=t2,a[3]=lf[578],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1051 ##compiler#follow-without-loop */
t6=*((C_word*)lf[111]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t2,t4,t5);}

/* a7274 in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_ccall f_7275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7275,2,t0,t1);}
/* support.scm: 1071 quit */
t2=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[577],((C_word*)t0)[2]);}

/* a7006 in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_ccall f_7007(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7007,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[478]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7017,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_7017(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[482]);
if(C_truep(t7)){
t8=t6;
f_7017(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[544]);
if(C_truep(t8)){
t9=t6;
f_7017(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[566]);
if(C_truep(t9)){
t10=t6;
f_7017(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[545]);
if(C_truep(t10)){
t11=t6;
f_7017(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[479]);
if(C_truep(t11)){
t12=t6;
f_7017(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[543]);
if(C_truep(t12)){
t13=t6;
f_7017(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[521]);
if(C_truep(t13)){
t14=t6;
f_7017(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[520]);
if(C_truep(t14)){
t15=t6;
f_7017(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[546]);
if(C_truep(t15)){
t16=t6;
f_7017(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[547]);
if(C_truep(t16)){
t17=t6;
f_7017(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[497]);
if(C_truep(t17)){
t18=t6;
f_7017(t18,t17);}
else{
t18=(C_word)C_eqp(t4,lf[486]);
if(C_truep(t18)){
t19=t6;
f_7017(t19,t18);}
else{
t19=(C_word)C_eqp(t4,lf[499]);
if(C_truep(t19)){
t20=t6;
f_7017(t20,t19);}
else{
t20=(C_word)C_eqp(t4,lf[495]);
if(C_truep(t20)){
t21=t6;
f_7017(t21,t20);}
else{
t21=(C_word)C_eqp(t4,lf[493]);
if(C_truep(t21)){
t22=t6;
f_7017(t22,t21);}
else{
t22=(C_word)C_eqp(t4,lf[484]);
if(C_truep(t22)){
t23=t6;
f_7017(t23,t22);}
else{
t23=(C_word)C_eqp(t4,lf[500]);
if(C_truep(t23)){
t24=t6;
f_7017(t24,t23);}
else{
t24=(C_word)C_eqp(t4,lf[506]);
if(C_truep(t24)){
t25=t6;
f_7017(t25,t24);}
else{
t25=(C_word)C_eqp(t4,lf[540]);
if(C_truep(t25)){
t26=t6;
f_7017(t26,t25);}
else{
t26=(C_word)C_eqp(t4,lf[537]);
if(C_truep(t26)){
t27=t6;
f_7017(t27,t26);}
else{
t27=(C_word)C_eqp(t4,lf[548]);
if(C_truep(t27)){
t28=t6;
f_7017(t28,t27);}
else{
t28=(C_word)C_eqp(t4,lf[549]);
if(C_truep(t28)){
t29=t6;
f_7017(t29,t28);}
else{
t29=(C_word)C_eqp(t4,lf[522]);
if(C_truep(t29)){
t30=t6;
f_7017(t30,t29);}
else{
t30=(C_word)C_eqp(t4,lf[519]);
if(C_truep(t30)){
t31=t6;
f_7017(t31,t30);}
else{
t31=(C_word)C_eqp(t4,lf[504]);
if(C_truep(t31)){
t32=t6;
f_7017(t32,t31);}
else{
t32=(C_word)C_eqp(t4,lf[501]);
t33=t6;
f_7017(t33,(C_truep(t32)?t32:(C_word)C_eqp(t4,lf[505])));}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k7015 in a7006 in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_fcall f_7017(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7017,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 1059 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[6],C_fix(1));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[541]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[542]));
if(C_truep(t3)){
/* support.scm: 1061 ##compiler#words->bytes */
t4=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[6],C_fix(2));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7035,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* support.scm: 1063 ##sys#hash-table-ref */
t5=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[518]),((C_word*)t0)[3]);}
else{
t5=t4;
f_7035(2,t5,C_SCHEME_FALSE);}}}}

/* k7033 in k7015 in a7006 in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_ccall f_7035(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7035,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* support.scm: 1065 next */
t4=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_eqp(t2,lf[512]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_7069(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[488]);
if(C_truep(t5)){
t6=t4;
f_7069(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[486]);
if(C_truep(t6)){
t7=t4;
f_7069(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[497]);
if(C_truep(t7)){
t8=t4;
f_7069(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[499]);
t9=t4;
f_7069(t9,(C_truep(t8)?t8:(C_word)C_eqp(t2,lf[513])));}}}}}
else{
/* support.scm: 1070 err */
f_6998(((C_word*)t0)[4],((C_word*)t0)[3]);}}}

/* k7067 in k7033 in k7015 in a7006 in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_fcall f_7069(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1068 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[4],C_fix(1));}
else{
/* support.scm: 1069 err */
f_6998(((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* err in ##compiler#estimate-foreign-result-location-size in k2828 in k2825 */
static void C_fcall f_6998(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6998,NULL,2,t1,t2);}
/* support.scm: 1050 quit */
t3=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[574],t2);}

/* ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_ccall f_6700(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6700,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=lf[569],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6989,a[2]=t2,a[3]=lf[571],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1023 ##compiler#follow-without-loop */
t5=*((C_word*)lf[111]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,t2,t3,t4);}

/* a6988 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_ccall f_6989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6989,2,t0,t1);}
/* support.scm: 1046 quit */
t2=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[570],((C_word*)t0)[2]);}

/* a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6706,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[478]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6716,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_6716(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[482]);
if(C_truep(t7)){
t8=t6;
f_6716(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[544]);
if(C_truep(t8)){
t9=t6;
f_6716(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[566]);
if(C_truep(t9)){
t10=t6;
f_6716(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[567]);
if(C_truep(t10)){
t11=t6;
f_6716(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[545]);
if(C_truep(t11)){
t12=t6;
f_6716(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[568]);
if(C_truep(t12)){
t13=t6;
f_6716(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[479]);
if(C_truep(t13)){
t14=t6;
f_6716(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[543]);
if(C_truep(t14)){
t15=t6;
f_6716(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[546]);
if(C_truep(t15)){
t16=t6;
f_6716(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[547]);
if(C_truep(t16)){
t17=t6;
f_6716(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[548]);
t18=t6;
f_6716(t18,(C_truep(t17)?t17:(C_word)C_eqp(t4,lf[549])));}}}}}}}}}}}}

/* k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_fcall f_6716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6716,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[500]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_6725(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[504]);
if(C_truep(t4)){
t5=t3;
f_6725(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[497]);
if(C_truep(t5)){
t6=t3;
f_6725(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[499]);
if(C_truep(t6)){
t7=t3;
f_6725(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[506]);
if(C_truep(t7)){
t8=t3;
f_6725(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[501]);
t9=t3;
f_6725(t9,(C_truep(t8)?t8:(C_word)C_eqp(((C_word*)t0)[4],lf[505])));}}}}}}}

/* k6723 in k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_fcall f_6725(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6725,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 1031 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],C_fix(3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[495]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_6737(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[521]);
if(C_truep(t4)){
t5=t3;
f_6737(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[493]);
if(C_truep(t5)){
t6=t3;
f_6737(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[520]);
if(C_truep(t6)){
t7=t3;
f_6737(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[522]);
t8=t3;
f_6737(t8,(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[519])));}}}}}}

/* k6735 in k6723 in k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_fcall f_6737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6737,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 1033 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],C_fix(4));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[484]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6749,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_6749(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[541]);
if(C_truep(t4)){
t5=t3;
f_6749(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[542]);
t6=t3;
f_6749(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[4],lf[565])));}}}}

/* k6747 in k6735 in k6723 in k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_fcall f_6749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6749,NULL,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 1035 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[4],C_fix(4));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
/* support.scm: 1037 ##sys#hash-table-ref */
t3=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[518]),((C_word*)t0)[2]);}
else{
t3=t2;
f_6755(2,t3,C_SCHEME_FALSE);}}}

/* k6753 in k6747 in k6735 in k6723 in k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6755,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* support.scm: 1039 next */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],t3);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[512]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=t4;
f_6789(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[488]);
if(C_truep(t5)){
t6=t4;
f_6789(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[486]);
if(C_truep(t6)){
t7=t4;
f_6789(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[497]);
if(C_truep(t7)){
t8=t4;
f_6789(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[499]);
if(C_truep(t8)){
t9=t4;
f_6789(t9,t8);}
else{
t9=(C_word)C_eqp(t2,lf[513]);
if(C_truep(t9)){
t10=t4;
f_6789(t10,t9);}
else{
t10=(C_word)C_eqp(t2,lf[514]);
if(C_truep(t10)){
t11=t4;
f_6789(t11,t10);}
else{
t11=(C_word)C_eqp(t2,lf[515]);
t12=t4;
f_6789(t12,(C_truep(t11)?t11:(C_word)C_eqp(t2,lf[516])));}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}}

/* k6787 in k6753 in k6747 in k6735 in k6723 in k6714 in a6705 in ##compiler#estimate-foreign-result-size in k2828 in k2825 */
static void C_fcall f_6789(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1043 ##compiler#words->bytes */
t2=*((C_word*)lf[93]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}

/* ##compiler#final-foreign-type in k2828 in k2825 */
static void C_ccall f_6660(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6660,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6666,a[2]=lf[560],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6694,a[2]=t2,a[3]=lf[562],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1010 ##compiler#follow-without-loop */
t5=*((C_word*)lf[111]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,t2,t3,t4);}

/* a6693 in ##compiler#final-foreign-type in k2828 in k2825 */
static void C_ccall f_6694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6694,2,t0,t1);}
/* support.scm: 1017 quit */
t2=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[561],((C_word*)t0)[2]);}

/* a6665 in ##compiler#final-foreign-type in k2828 in k2825 */
static void C_ccall f_6666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6666,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6670,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 1013 ##sys#hash-table-ref */
t5=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[518]),t2);}
else{
t5=t4;
f_6670(2,t5,C_SCHEME_FALSE);}}

/* k6668 in a6665 in ##compiler#final-foreign-type in k2828 in k2825 */
static void C_ccall f_6670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* support.scm: 1015 next */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[3],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* ##compiler#foreign-type-convert-argument in k2828 in k2825 */
static void C_ccall f_6629(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6629,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6633,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_symbolp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6642,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1004 ##sys#hash-table-ref */
t6=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,C_retrieve(lf[518]),t3);}
else{
t5=t4;
f_6633(t5,C_SCHEME_FALSE);}}

/* k6640 in ##compiler#foreign-type-convert-argument in k2828 in k2825 */
static void C_ccall f_6642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6642,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(C_word)C_i_vector_ref(t1,C_fix(1));
t3=((C_word*)t0)[3];
f_6633(t3,(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[3];
f_6633(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_6633(t2,C_SCHEME_FALSE);}}

/* k6631 in ##compiler#foreign-type-convert-argument in k2828 in k2825 */
static void C_fcall f_6633(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* ##compiler#foreign-type-convert-result in k2828 in k2825 */
static void C_ccall f_6598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6598,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6602,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_symbolp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6611,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 997  ##sys#hash-table-ref */
t6=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,C_retrieve(lf[518]),t3);}
else{
t5=t4;
f_6602(t5,C_SCHEME_FALSE);}}

/* k6609 in ##compiler#foreign-type-convert-result in k2828 in k2825 */
static void C_ccall f_6611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6611,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(C_word)C_i_vector_ref(t1,C_fix(2));
t3=((C_word*)t0)[3];
f_6602(t3,(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[3];
f_6602(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_6602(t2,C_SCHEME_FALSE);}}

/* k6600 in ##compiler#foreign-type-convert-result in k2828 in k2825 */
static void C_fcall f_6602(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5815,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5821,a[2]=t2,a[3]=lf[551],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6592,a[2]=t3,a[3]=lf[553],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 900  ##compiler#follow-without-loop */
t6=*((C_word*)lf[111]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t3,t4,t5);}

/* a6591 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6592,2,t0,t1);}
/* support.scm: 990  quit */
t2=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[552],((C_word*)t0)[2]);}

/* a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5821,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5827,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[550],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5827(t7,t1,t2);}

/* repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5827(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5827,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_eqp(t3,lf[478]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[479]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[4]:(C_word)C_a_i_list(&a,2,lf[481],((C_word*)t0)[4])));}
else{
t6=(C_word)C_eqp(t3,lf[482]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_5852(t8,t6);}
else{
t8=(C_word)C_eqp(t3,lf[543]);
if(C_truep(t8)){
t9=t7;
f_5852(t9,t8);}
else{
t9=(C_word)C_eqp(t3,lf[544]);
if(C_truep(t9)){
t10=t7;
f_5852(t10,t9);}
else{
t10=(C_word)C_eqp(t3,lf[545]);
if(C_truep(t10)){
t11=t7;
f_5852(t11,t10);}
else{
t11=(C_word)C_eqp(t3,lf[546]);
if(C_truep(t11)){
t12=t7;
f_5852(t12,t11);}
else{
t12=(C_word)C_eqp(t3,lf[547]);
if(C_truep(t12)){
t13=t7;
f_5852(t13,t12);}
else{
t13=(C_word)C_eqp(t3,lf[548]);
t14=t7;
f_5852(t14,(C_truep(t13)?t13:(C_word)C_eqp(t3,lf[549])));}}}}}}}}

/* k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5852(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5852,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[6]:(C_word)C_a_i_list(&a,2,lf[483],((C_word*)t0)[6])));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[484]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5867(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[541]);
t5=t3;
f_5867(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[542])));}}}

/* k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5867(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5867,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[6]:(C_word)C_a_i_list(&a,2,lf[485],((C_word*)t0)[6])));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[486]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5882(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[539]);
t5=t3;
f_5882(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[540])));}}}

/* k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5882,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 910  gensym */
t3=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[488]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5920(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[537]);
t5=t3;
f_5920(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[538])));}}}

/* k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5920(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5920,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[6]:(C_word)C_a_i_list(&a,2,lf[487],((C_word*)t0)[6])));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[489]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5935(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[530]);
if(C_truep(t4)){
t5=t3;
f_5935(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[531]);
if(C_truep(t5)){
t6=t3;
f_5935(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[532]);
if(C_truep(t6)){
t7=t3;
f_5935(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[533]);
if(C_truep(t7)){
t8=t3;
f_5935(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[534]);
if(C_truep(t8)){
t9=t3;
f_5935(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[535]);
t10=t3;
f_5935(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[5],lf[536])));}}}}}}}}

/* k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5935(C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5935,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5938,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 922  gensym */
t3=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[491]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5977(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[523]);
if(C_truep(t4)){
t5=t3;
f_5977(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[524]);
if(C_truep(t5)){
t6=t3;
f_5977(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[525]);
if(C_truep(t6)){
t7=t3;
f_5977(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[526]);
if(C_truep(t7)){
t8=t3;
f_5977(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[527]);
if(C_truep(t8)){
t9=t3;
f_5977(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[528]);
t10=t3;
f_5977(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[4],lf[529])));}}}}}}}}

/* k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5977(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5977,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[480]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_i_assq(((C_word*)t0)[5],lf[492]);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_list(&a,2,lf[116],t3);
t5=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[490],t4,((C_word*)t0)[6]));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[493]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6004,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6004(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[521]);
t5=t3;
f_6004(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[4],lf[522])));}}}

/* k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6004(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6004,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[6]:(C_word)C_a_i_list(&a,2,lf[494],((C_word*)t0)[6])));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[495]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6019(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[519]);
t5=t3;
f_6019(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[520])));}}}

/* k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6019(C_word t0,C_word t1){
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
C_word ab[75],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6019,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[480]))?((C_word*)t0)[6]:(C_word)C_a_i_list(&a,2,lf[496],((C_word*)t0)[6])));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[497]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6034,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 942  gensym */
t4=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[499]);
if(C_truep(t3)){
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[498],((C_word*)t0)[6]));}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[500]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[501]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 950  gensym */
t7=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[504]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[505]));
if(C_truep(t7)){
if(C_truep(C_retrieve(lf[480]))){
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,2,lf[502],((C_word*)t0)[6]));}
else{
t8=(C_word)C_a_i_list(&a,2,lf[503],((C_word*)t0)[6]);
t9=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,2,lf[502],t8));}}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[506]);
if(C_truep(t8)){
if(C_truep(C_retrieve(lf[480]))){
t9=(C_word)C_a_i_list(&a,2,lf[507],((C_word*)t0)[6]);
t10=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,2,lf[502],t9));}
else{
t9=(C_word)C_a_i_list(&a,2,lf[507],((C_word*)t0)[6]);
t10=(C_word)C_a_i_list(&a,2,lf[503],t9);
t11=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,2,lf[502],t10));}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* support.scm: 966  ##sys#hash-table-ref */
t10=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,C_retrieve(lf[518]),((C_word*)t0)[3]);}
else{
t10=t9;
f_6163(2,t10,C_SCHEME_FALSE);}}}}}}}}

/* k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6163(C_word c,C_word t0,C_word t1){
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
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6163,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* support.scm: 968  next */
t4=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[5],t3);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6191,a[2]=((C_word*)t0)[3],a[3]=lf[510],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6223,a[2]=((C_word*)t0)[3],a[3]=lf[511],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(C_word)C_eqp(t5,lf[512]);
if(C_truep(t6)){
/* support.scm: 970  g880 */
t7=t4;
f_6223(t7,((C_word*)t0)[5]);}
else{
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_eqp(t7,lf[486]);
if(C_truep(t8)){
/* support.scm: 970  g880 */
t9=t4;
f_6223(t9,((C_word*)t0)[5]);}
else{
t9=(C_word)C_i_car(((C_word*)t0)[4]);
t10=(C_word)C_eqp(t9,lf[513]);
if(C_truep(t10)){
/* support.scm: 970  g880 */
t11=t4;
f_6223(t11,((C_word*)t0)[5]);}
else{
t11=(C_word)C_i_car(((C_word*)t0)[4]);
t12=(C_word)C_eqp(t11,lf[497]);
if(C_truep(t12)){
/* support.scm: 970  g880 */
t13=t4;
f_6223(t13,((C_word*)t0)[5]);}
else{
t13=(C_word)C_i_car(((C_word*)t0)[4]);
t14=(C_word)C_eqp(t13,lf[514]);
if(C_truep(t14)){
/* support.scm: 970  g881 */
t15=t3;
f_6191(t15,((C_word*)t0)[5]);}
else{
t15=(C_word)C_i_car(((C_word*)t0)[4]);
t16=(C_word)C_eqp(t15,lf[515]);
if(C_truep(t16)){
/* support.scm: 970  g881 */
t17=t3;
f_6191(t17,((C_word*)t0)[5]);}
else{
t17=(C_word)C_i_car(((C_word*)t0)[4]);
t18=(C_word)C_eqp(t17,lf[516]);
if(C_truep(t18)){
t19=(C_word)C_a_i_list(&a,2,lf[116],lf[508]);
t20=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,(C_word)C_a_i_list(&a,3,lf[509],((C_word*)t0)[3],t19));}
else{
t19=(C_word)C_i_car(((C_word*)t0)[4]);
t20=(C_word)C_eqp(t19,lf[517]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6335,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t22=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t22))){
t23=(C_word)C_i_cddr(((C_word*)t0)[4]);
t24=t21;
f_6335(t24,(C_word)C_i_nullp(t23));}
else{
t23=t21;
f_6335(t23,C_SCHEME_FALSE);}}
else{
t21=(C_word)C_i_car(((C_word*)t0)[4]);
t22=(C_word)C_eqp(t21,lf[488]);
if(C_truep(t22)){
/* support.scm: 970  g884 */
t23=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t23))(2,t23,f_6186(C_a_i(&a,6),t2));}
else{
t23=(C_word)C_i_car(((C_word*)t0)[4]);
t24=(C_word)C_eqp(t23,lf[499]);
/* support.scm: 970  g884 */
t25=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t25))(2,t25,(C_truep(t24)?f_6186(C_a_i(&a,6),t2):((C_word*)t0)[3]));}}}}}}}}}}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}

/* k6333 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* support.scm: 970  repeat */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5827(t3,((C_word*)t0)[3],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* g880 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6223(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6223,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6227,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 972  gensym */
t3=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6225 in g880 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6227,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,lf[498],t1);
t5=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t6=(C_word)C_a_i_list(&a,4,lf[143],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[132],t3,t6));}

/* g881 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6191(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6191,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6195,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 978  gensym */
t3=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6193 in g881 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6195,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,lf[116],lf[508]);
t5=(C_word)C_a_i_list(&a,3,lf[509],((C_word*)t0)[3],t4);
t6=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t7=(C_word)C_a_i_list(&a,4,lf[143],t1,t5,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,3,lf[132],t3,t7));}

/* g884 in k6161 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static C_word C_fcall f_6186(C_word *a,C_word t0){
C_word tmp;
C_word t1;
C_stack_check;
return((C_word)C_a_i_list(&a,2,lf[498],((C_word*)t0)[2]));}

/* k6076 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6078,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6093,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[480]))){
t5=t4;
f_6093(t5,(C_word)C_a_i_list(&a,2,lf[502],t1));}
else{
t5=(C_word)C_a_i_list(&a,2,lf[503],t1);
t6=t4;
f_6093(t6,(C_word)C_a_i_list(&a,2,lf[502],t5));}}

/* k6091 in k6076 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_6093(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6093,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t3=(C_word)C_a_i_list(&a,4,lf[143],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],t3));}

/* k6032 in k6017 in k6002 in k5975 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6034,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,lf[498],t1);
t5=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t6=(C_word)C_a_i_list(&a,4,lf[143],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[132],t3,t6));}

/* k5936 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_5938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5938,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5953,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[480]))){
t5=t4;
f_5953(t5,t1);}
else{
t5=(C_word)C_a_i_list(&a,2,lf[116],((C_word*)t0)[2]);
t6=t4;
f_5953(t6,(C_word)C_a_i_list(&a,3,lf[490],t5,t1));}}

/* k5951 in k5936 in k5933 in k5918 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_fcall f_5953(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5953,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t3=(C_word)C_a_i_list(&a,4,lf[143],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],t3));}

/* k5883 in k5880 in k5865 in k5850 in repeat in a5820 in ##compiler#foreign-type-check in k2828 in k2825 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5885,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_truep(C_retrieve(lf[480]))?t1:(C_word)C_a_i_list(&a,2,lf[487],t1));
t5=(C_word)C_a_i_list(&a,2,lf[116],C_SCHEME_FALSE);
t6=(C_word)C_a_i_list(&a,4,lf[143],t1,t4,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[132],t3,t6));}

/* ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5779,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5783,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm: 881  open-output-file */
t5=*((C_word*)lf[474]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}
else{
/* support.scm: 881  current-output-port */
t5=*((C_word*)lf[475]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}

/* k5781 in ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5786,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5794,a[2]=((C_word*)t0)[2],a[3]=lf[472],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 882  with-output-to-port */
t4=C_retrieve(lf[473]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t1,t3);}

/* a5793 in k5781 in ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5800,a[2]=lf[471],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a5799 in a5793 in k5781 in ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5800(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5800,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5804,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 886  pretty-print */
t4=C_retrieve(lf[470]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5802 in a5799 in a5793 in k5781 in ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 887  newline */
t2=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5784 in k5781 in ##compiler#pprint-expressions-to-file in k2828 in k2825 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* support.scm: 889  close-output-port */
t2=*((C_word*)lf[469]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5740(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5740,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5746,a[2]=t2,a[3]=lf[457],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5752,a[2]=lf[466],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5752,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5759,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* support.scm: 869  ##compiler#debugging */
t10=*((C_word*)lf[16]+1);
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,lf[464],lf[465]);}

/* k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5759,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5762,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* support.scm: 870  printf */
t3=C_retrieve(lf[19]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[463],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5760 in k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 871  printf */
t3=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[462],((C_word*)t0)[2]);}

/* k5763 in k5760 in k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 872  printf */
t3=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[461],((C_word*)t0)[2]);}

/* k5766 in k5763 in k5760 in k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 873  printf */
t3=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[460],((C_word*)t0)[2]);}

/* k5769 in k5766 in k5763 in k5760 in k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 874  printf */
t3=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[459],((C_word*)t0)[2]);}

/* k5772 in k5769 in k5766 in k5763 in k5760 in k5757 in a5751 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 875  printf */
t2=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[458],((C_word*)t0)[2]);}

/* a5745 in ##compiler#print-program-statistics in k2828 in k2825 */
static void C_ccall f_5746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5746,2,t0,t1);}
/* support.scm: 868  ##compiler#compute-database-statistics */
t2=C_retrieve(lf[450]);
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* ##compiler#compute-database-statistics in k2828 in k2825 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[26],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5660,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5664,a[2]=t10,a[3]=t12,a[4]=t8,a[5]=t4,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5669,a[2]=t12,a[3]=t4,a[4]=t6,a[5]=t8,a[6]=t10,a[7]=lf[454],tmp=(C_word)a,a+=8,tmp);
/* support.scm: 844  ##sys#hash-table-for-each */
t15=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t15))(4,t15,t13,t14,t2);}

/* a5668 in ##compiler#compute-database-statistics in k2828 in k2825 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5669,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[453],tmp=(C_word)a,a+=8,tmp);
/* for-each */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a5674 in a5668 in ##compiler#compute-database-statistics in k2828 in k2825 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5675,3,t0,t1,t2);}
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_eqp(t5,lf[275]);
if(C_truep(t6)){
t7=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t7=(C_word)C_eqp(t5,lf[258]);
if(C_truep(t7)){
t8=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t10=(C_word)C_i_cdr(t2);
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(lf[350],t11);
if(C_truep(t12)){
t13=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t14=C_mutate(((C_word *)((C_word*)t0)[3])+1,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_UNDEFINED);}}
else{
t8=(C_word)C_eqp(t5,lf[263]);
if(C_truep(t8)){
t9=(C_word)C_i_cdr(t2);
t10=(C_word)C_i_length(t9);
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}}}}

/* k5662 in ##compiler#compute-database-statistics in k2828 in k2825 */
static void C_ccall f_5664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 858  values */
C_values(9,0,((C_word*)t0)[7],C_retrieve(lf[451]),C_retrieve(lf[452]),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5618,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5622,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5654,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5658,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 817  ->string */
t6=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k5656 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 817  string-append */
t2=*((C_word*)lf[12]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[448]);}

/* k5652 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 816  ##sys#resolve-include-filename */
t2=C_retrieve(lf[447]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k5620 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5622,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5631,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 819  file-exists? */
t3=C_retrieve(lf[101]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5629 in k5620 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5631,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[445]))){
/* support.scm: 821  printf */
t3=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[446],((C_word*)t0)[2]);}
else{
t3=t2;
f_5634(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5632 in k5629 in k5620 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5639,a[2]=((C_word*)t0)[4],a[3]=lf[443],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5647,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 822  read-file */
t4=C_retrieve(lf[444]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k5645 in k5632 in k5629 in k5620 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5638 in k5632 in k5629 in k5620 in ##compiler#lookup-exports-file in k2828 in k2825 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5639,3,t0,t1,t2);}
/* ##sys#hash-table-set! */
t3=C_retrieve(lf[228]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,C_retrieve(lf[439]),t2,((C_word*)t0)[2]);}

/* ##compiler#check-global-imports in k2828 in k2825 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5560,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5566,a[2]=lf[440],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 802  ##sys#hash-table-for-each */
t4=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* a5565 in ##compiler#check-global-imports in k2828 in k2825 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5566,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5570,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 804  ##sys#hash-table-ref */
t5=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[439]),t2);}

/* k5568 in a5565 in ##compiler#check-global-imports in k2828 in k2825 */
static void C_ccall f_5570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5570,2,t0,t1);}
t2=(C_word)C_i_assq(lf[262],((C_word*)t0)[4]);
t3=(C_word)C_i_assq(lf[273],((C_word*)t0)[4]);
if(C_truep((C_word)C_i_assq(lf[275],((C_word*)t0)[4]))){
if(C_truep(t3)){
if(C_truep(t1)){
/* support.scm: 810  ##compiler#compiler-warning */
t4=*((C_word*)lf[28]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[3],lf[435],lf[436],((C_word*)t0)[2],t1);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t5=t1;
if(C_truep(t5)){
t6=t4;
f_5597(t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5616,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 811  keyword? */
t7=C_retrieve(lf[438]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}}
else{
t5=t4;
f_5597(t5,C_SCHEME_FALSE);}}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k5614 in k5568 in a5565 in ##compiler#check-global-imports in k2828 in k2825 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5597(t2,(C_word)C_i_not(t1));}

/* k5595 in k5568 in a5565 in ##compiler#check-global-imports in k2828 in k2825 */
static void C_fcall f_5597(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 812  ##compiler#compiler-warning */
t2=*((C_word*)lf[28]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[427],lf[437],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5516,3,t0,t1,t2);}
if(C_truep(C_retrieve(lf[417]))){
t3=C_retrieve(lf[417]);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5523,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5534,a[2]=t4,a[3]=lf[432],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 793  ##sys#hash-table-for-each */
t7=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a5533 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5534,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5538,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5545,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t6=(C_word)C_i_assq(lf[273],t3);
t7=t5;
f_5545(t7,(C_word)C_i_not(t6));}
else{
t6=t5;
f_5545(t6,C_SCHEME_FALSE);}}

/* k5543 in a5533 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_fcall f_5545(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 796  ##compiler#compiler-warning */
t2=*((C_word*)lf[28]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[427],lf[431],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_5538(2,t2,C_SCHEME_UNDEFINED);}}

/* k5536 in a5533 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 797  delete */
t3=C_retrieve(lf[430]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[377]+1));}

/* k5540 in k5536 in a5533 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5521 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5528,a[2]=lf[429],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[2])[1]);}

/* a5527 in k5521 in ##compiler#check-global-exports in k2828 in k2825 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5528,3,t0,t1,t2);}
/* ##compiler#compiler-warning */
t3=*((C_word*)lf[28]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,lf[427],lf[428],t2);}

/* ##compiler#dump-undefined-globals in k2828 in k2825 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5485,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5491,a[2]=lf[424],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 782  ##sys#hash-table-for-each */
t4=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* a5490 in ##compiler#dump-undefined-globals in k2828 in k2825 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5491,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5498,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_assq(lf[275],t3))){
t5=(C_word)C_i_assq(lf[273],t3);
t6=t4;
f_5498(t6,(C_word)C_i_not(t5));}
else{
t5=t4;
f_5498(t5,C_SCHEME_FALSE);}}

/* k5496 in a5490 in ##compiler#dump-undefined-globals in k2828 in k2825 */
static void C_fcall f_5498(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5498,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5501,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 786  write */
t3=*((C_word*)lf[290]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5499 in k5496 in a5490 in ##compiler#dump-undefined-globals in k2828 in k2825 */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 787  newline */
t2=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5402(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5402,4,t0,t1,t2,t3);}
if(C_truep(C_retrieve(lf[412]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5411,a[2]=t2,a[3]=lf[420],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 762  with-output-to-file */
t5=C_retrieve(lf[421]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}}

/* a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5411,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5415,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5447,a[2]=t3,a[3]=lf[419],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 765  ##sys#hash-table-for-each */
t6=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a5446 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5447,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5454,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_assq(lf[275],t3))){
if(C_truep((C_word)C_i_assq(lf[273],t3))){
t5=(C_truep(C_retrieve(lf[417]))?(C_word)C_i_memq(t2,C_retrieve(lf[417])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t4;
f_5454(t6,t5);}
else{
t6=(C_word)C_i_memq(t2,C_retrieve(lf[418]));
t7=t4;
f_5454(t7,(C_word)C_i_not(t6));}}
else{
t5=t4;
f_5454(t5,C_SCHEME_FALSE);}}
else{
t5=t4;
f_5454(t5,C_SCHEME_FALSE);}}

/* k5452 in a5446 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_fcall f_5454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5454,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5413 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5420,a[2]=lf[413],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5431,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5433,a[2]=lf[415],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 777  sort */
t5=C_retrieve(lf[416]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)((C_word*)t0)[2])[1],t4);}

/* a5432 in k5413 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5433,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t3,C_fix(1));
/* support.scm: 779  string<? */
t6=*((C_word*)lf[414]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t4,t5);}

/* k5429 in k5413 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5419 in k5413 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5420(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5420,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5424,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 775  write */
t4=*((C_word*)lf[290]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5422 in a5419 in k5413 in a5410 in ##compiler#dump-exported-globals in k2828 in k2825 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 776  newline */
t2=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#simple-lambda-node? in k2828 in k2825 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5310,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_pairp(t5);
t7=(C_truep(t6)?(C_word)C_i_car(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
if(C_truep((C_word)C_i_cadr(t4))){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5334,a[2]=t9,a[3]=t7,a[4]=lf[409],tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5334(3,t11,t1,t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* rec in ##compiler#simple-lambda-node? in k2828 in k2825 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5334,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(t4,lf[332]);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(lf[313],t9);
if(C_truep(t10)){
t11=(C_word)C_slot(t8,C_fix(2));
t12=(C_word)C_i_car(t11);
t13=(C_word)C_eqp(((C_word*)t0)[3],t12);
if(C_truep(t13)){
t14=(C_word)C_i_cdr(t7);
/* support.scm: 753  every */
t15=C_retrieve(lf[123]);
((C_proc4)C_retrieve_proc(t15))(4,t15,t1,((C_word*)((C_word*)t0)[2])[1],t14);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_eqp(t4,lf[339]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
/* support.scm: 755  every */
t9=C_retrieve(lf[123]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* ##compiler#expression-has-side-effects? in k2828 in k2825 */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5224,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=t5,a[3]=lf[406],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_5230(3,t7,t1,t2);}

/* walk in ##compiler#expression-has-side-effects? in k2828 in k2825 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5230,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[313]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5246,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_5246(t9,t7);}
else{
t9=(C_word)C_eqp(t6,lf[116]);
if(C_truep(t9)){
t10=t8;
f_5246(t10,t9);}
else{
t10=(C_word)C_eqp(t6,lf[155]);
if(C_truep(t10)){
t11=t8;
f_5246(t11,t10);}
else{
t11=(C_word)C_eqp(t6,lf[327]);
t12=t8;
f_5246(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[319])));}}}}

/* k5244 in walk in ##compiler#expression-has-side-effects? in k2828 in k2825 */
static void C_fcall f_5246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5246,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[350]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5260,a[2]=t5,a[3]=lf[403],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 736  find */
t7=C_retrieve(lf[404]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[6],t6,C_retrieve(lf[405]));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[143]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[132]));
if(C_truep(t4)){
/* support.scm: 737  any */
t5=C_retrieve(lf[88]);
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}

/* a5259 in k5244 in walk in ##compiler#expression-has-side-effects? in k2828 in k2825 */
static void C_ccall f_5260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5260,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 736  foreign-callback-stub-id */
t4=C_retrieve(lf[402]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5266 in a5259 in k5244 in walk in ##compiler#expression-has-side-effects? in k2828 in k2825 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[28],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5029,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5032,a[2]=t4,a[3]=t6,a[4]=lf[394],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5061,a[2]=t9,a[3]=t7,a[4]=lf[395],tmp=(C_word)a,a+=5,tmp));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5104,a[2]=t9,a[3]=t12,a[4]=t7,a[5]=lf[397],tmp=(C_word)a,a+=6,tmp));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5208,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 720  matchn */
t15=((C_word*)t12)[1];
f_5104(t15,t14,t2,t3);}

/* k5206 in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5208,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5214,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(C_word)C_slot(t3,C_fix(1));
t5=((C_word*)t0)[3];
t6=(C_word)C_slot(t5,C_fix(2));
/* support.scm: 723  ##compiler#debugging */
t7=*((C_word*)lf[16]+1);
((C_proc7)C_retrieve_proc(t7))(7,t7,t2,lf[398],lf[399],t4,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5212 in k5206 in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* matchn in ##compiler#match-node in k2828 in k2825 */
static void C_fcall f_5104(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5104,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 709  resolve */
t4=((C_word*)t0)[4];
f_5032(t4,t1,t3,t2);}
else{
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_i_car(t3);
t7=(C_word)C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5126,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_cadr(t3);
/* support.scm: 711  match1 */
t12=((C_word*)((C_word*)t0)[2])[1];
f_5061(t12,t8,t10,t11);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* k5124 in matchn in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5139,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=lf[396],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5139(t8,((C_word*)t0)[2],t3,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in k5124 in matchn in ##compiler#match-node in k2828 in k2825 */
static void C_fcall f_5139(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5139,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t2));}
else{
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 715  resolve */
t4=((C_word*)t0)[4];
f_5032(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5170,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
/* support.scm: 717  matchn */
t7=((C_word*)((C_word*)t0)[2])[1];
f_5104(t7,t4,t5,t6);}}}}

/* k5168 in loop in k5124 in matchn in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 718  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5139(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match1 in ##compiler#match-node in k2828 in k2825 */
static void C_fcall f_5061(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5061,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 702  resolve */
t4=((C_word*)t0)[3];
f_5032(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5083,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
/* support.scm: 704  match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* k5081 in match1 in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 704  match1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5061(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* resolve in ##compiler#match-node in k2828 in k2825 */
static void C_fcall f_5032(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5032,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_equalp(t3,t5));}
else{
if(C_truep((C_word)C_i_memq(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 697  alist-cons */
t6=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,t2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(t2,t3));}}}

/* k5054 in resolve in ##compiler#match-node in k2828 in k2825 */
static void C_ccall f_5056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* ##compiler#copy-node! in k2828 in k2825 */
static void C_ccall f_4967(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4967,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4971,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
/* support.scm: 679  node-class-set! */
t7=C_retrieve(lf[298]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t3,t6);}

/* k4969 in ##compiler#copy-node! in k2828 in k2825 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(2));
/* support.scm: 680  node-parameters-set! */
t5=C_retrieve(lf[303]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[3],t4);}

/* k4972 in k4969 in ##compiler#copy-node! in k2828 in k2825 */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(3));
/* support.scm: 681  node-subexpressions-set! */
t5=C_retrieve(lf[307]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[3],t4);}

/* k4975 in k4972 in k4969 in ##compiler#copy-node! in k2828 in k2825 */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4977,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(C_word)C_block_size(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,a[6]=lf[391],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4988(t4,C_fix(4)));}

/* do645 in k4975 in k4972 in k4969 in ##compiler#copy-node! in k2828 in k2825 */
static C_word C_fcall f_4988(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
t2=(C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:(C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]));
if(C_truep(t3)){
return(C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t1);
t5=(C_word)C_i_setslot(((C_word*)t0)[2],t1,t4);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}

/* ##compiler#tree-copy in k2828 in k2825 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4933,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4939,a[2]=t4,a[3]=lf[388],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4939(t6,t1,t2);}

/* rec in ##compiler#tree-copy in k2828 in k2825 */
static void C_fcall f_4939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4939,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 675  rec */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4951 in rec in ##compiler#tree-copy in k2828 in k2825 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4957,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 675  rec */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4939(t4,t2,t3);}

/* k4955 in k4951 in rec in ##compiler#tree-copy in k2828 in k2825 */
static void C_ccall f_4957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4957,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4755,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 643  map */
t6=*((C_word*)lf[162]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,*((C_word*)lf[386]+1),t3,t4);}

/* k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=lf[378],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=t4,a[3]=t2,a[4]=lf[385],tmp=(C_word)a,a+=5,tmp));
/* support.scm: 670  walk */
t6=((C_word*)t4)[1];
f_4767(t6,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_fcall f_4767(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4767,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[313]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4790,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t12=(C_word)C_i_car(t7);
/* support.scm: 650  rename */
f_4761(t11,t12,t3);}
else{
t11=(C_word)C_eqp(t9,lf[146]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4819,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_i_car(t7);
/* support.scm: 651  rename */
f_4761(t12,t13,t3);}
else{
t12=(C_word)C_eqp(t9,lf[132]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4835,a[2]=t3,a[3]=t13,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 654  gensym */
t15=C_retrieve(lf[133]);
((C_proc3)C_retrieve_proc(t15))(3,t15,t14,t13);}
else{
t13=(C_word)C_eqp(t9,lf[350]);
if(C_truep(t13)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4868,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=t7,a[7]=lf[382],tmp=(C_word)a,a+=8,tmp);
/* support.scm: 658  ##compiler#decompose-lambda-list */
t16=C_retrieve(lf[191]);
((C_proc4)C_retrieve_proc(t16))(4,t16,t1,t14,t15);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4916,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 669  ##compiler#tree-copy */
t15=C_retrieve(lf[384]);
((C_proc3)C_retrieve_proc(t15))(3,t15,t14,t7);}}}}}

/* k4914 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[383],tmp=(C_word)a,a+=5,tmp);
/* map */
t4=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a4923 in k4914 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4924,3,t0,t1,t2);}
/* walk591 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4767(t3,t1,t2,((C_word*)t0)[2]);}

/* k4917 in k4914 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4919,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4868,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* map */
t6=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_retrieve(lf[133]),t2);}

/* k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4875,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* support.scm: 662  append */
t3=*((C_word*)lf[78]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k4873 in k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4875,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_i_cadr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4902,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* support.scm: 666  rename */
f_4761(t5,((C_word*)t0)[3],t1);}
else{
t6=t5;
f_4910(2,t6,C_SCHEME_FALSE);}}

/* k4908 in k4873 in k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 666  ##compiler#build-lambda-list */
t2=*((C_word*)lf[70]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4900 in k4873 in k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4902,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4881,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[381],tmp=(C_word)a,a+=5,tmp);
/* map */
t6=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a4885 in k4900 in k4873 in k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4886,3,t0,t1,t2);}
/* walk591 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4767(t3,t1,t2,((C_word*)t0)[2]);}

/* k4879 in k4900 in k4873 in k4870 in a4867 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4881,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[350],((C_word*)t0)[2],t1));}

/* k4833 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 655  alist-cons */
t3=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4836 in k4833 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4838,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4844,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4849,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[380],tmp=(C_word)a,a+=5,tmp);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a4848 in k4836 in k4833 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4849,3,t0,t1,t2);}
/* walk591 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4767(t3,t1,t2,((C_word*)t0)[2]);}

/* k4842 in k4836 in k4833 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4844,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[132],((C_word*)t0)[2],t1));}

/* k4817 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4819,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4806,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[379],tmp=(C_word)a,a+=5,tmp);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a4810 in k4817 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4811,3,t0,t1,t2);}
/* walk591 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4767(t3,t1,t2,((C_word*)t0)[2]);}

/* k4804 in k4817 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[146],((C_word*)t0)[2],t1));}

/* k4788 in walk in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 650  ##compiler#varnode */
t2=C_retrieve(lf[312]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* rename in k4757 in ##compiler#copy-node-tree-and-rename in k2828 in k2825 */
static void C_fcall f_4761(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4761,NULL,3,t1,t2,t3);}
/* support.scm: 644  alist-ref */
t4=C_retrieve(lf[376]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,t2,t3,*((C_word*)lf[377]+1),t2);}

/* ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4662,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4668,a[2]=t4,a[3]=t5,a[4]=t3,a[5]=lf[374],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 621  ##compiler#decompose-lambda-list */
t7=C_retrieve(lf[191]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t1,t2,t6);}

/* a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4668,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4674,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=lf[367],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4680,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=lf[373],tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4680,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[4])){
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve(lf[133]),((C_word*)t0)[2]);}
else{
t5=t4;
f_4684(2,t5,((C_word*)t0)[2]);}}

/* k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
/* support.scm: 627  ##compiler#copy-node-tree-and-rename */
t3=C_retrieve(lf[372]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}
else{
t3=t2;
f_4687(2,t3,((C_word*)t0)[3]);}}

/* k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4692,a[2]=lf[368],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4706,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 633  last */
t5=C_retrieve(lf[347]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=t3;
f_4706(t4,t1);}}

/* k4745 in k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4723,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[2]))){
/* support.scm: 635  ##compiler#qnode */
t4=C_retrieve(lf[315]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_length(((C_word*)t0)[2]);
t5=(C_word)C_fixnum_times(C_fix(3),t4);
t6=(C_word)C_a_i_list(&a,2,lf[371],t5);
t7=((C_word*)t0)[2];
t8=t3;
f_4723(2,t8,(C_word)C_a_i_record(&a,4,lf[294],lf[149],t6,t7));}}

/* k4721 in k4745 in k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4723,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
f_4706(t3,(C_word)C_a_i_record(&a,4,lf[294],lf[132],((C_word*)t0)[2],t2));}

/* k4704 in k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_fcall f_4706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4706,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 639  take */
t3=C_retrieve(lf[370]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4708 in k4704 in k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 629  fold-right */
t2=C_retrieve(lf[369]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a4691 in k4685 in k4682 in a4679 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4692,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t2);
t6=(C_word)C_a_i_list(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[294],lf[132],t5,t6));}

/* a4673 in a4667 in ##compiler#inline-lambda-bindings in k2828 in k2825 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4674,2,t0,t1);}
/* support.scm: 624  split-at */
t2=C_retrieve(lf[366]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#fold-boolean in k2828 in k2825 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4614,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4620,a[2]=t5,a[3]=t2,a[4]=lf[363],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4620(t7,t1,t3);}

/* fold in ##compiler#fold-boolean in k2828 in k2825 */
static void C_fcall f_4620(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4620,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[3],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4640,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cadr(t2);
/* support.scm: 617  proc */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t5,t6);}}

/* k4638 in fold in ##compiler#fold-boolean in k2828 in k2825 */
static void C_ccall f_4640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 618  fold */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4620(t4,t2,t3);}

/* k4642 in k4638 in fold in ##compiler#fold-boolean in k2828 in k2825 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4644,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[294],lf[148],lf[362],t2));}

/* ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4320,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4326,a[2]=t4,a[3]=lf[359],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4326(3,t6,t1,t2);}

/* walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4326,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[143]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4345,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_4345(t11,t9);}
else{
t11=(C_word)C_eqp(t8,lf[357]);
t12=t10;
f_4345(t12,(C_truep(t11)?t11:(C_word)C_eqp(t8,lf[358])));}}

/* k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_fcall f_4345(C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4345,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4352,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[346]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[313]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[319]));
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_car(((C_word*)t0)[2]));}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[116]);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,2,lf[116],t6));}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[132]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4419,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 591  butlast */
t10=C_retrieve(lf[349]);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t0)[3]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[350]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=(C_truep(t8)?lf[147]:lf[350]);
t10=(C_word)C_i_caddr(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4444,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 598  walk */
t13=((C_word*)((C_word*)t0)[4])[1];
f_4326(3,t13,t11,t12);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[332]);
if(C_truep(t8)){
/* map */
t9=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[339]);
if(C_truep(t9)){
t10=(C_word)C_i_car(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4477,a[2]=t10,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* map */
t12=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[155]);
if(C_truep(t10)){
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t11=(C_word)C_eqp(((C_word*)t0)[5],lf[351]);
if(C_truep(t11)){
t12=(C_word)C_i_car(((C_word*)t0)[2]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4501,a[2]=t14,a[3]=((C_word*)t0)[4],a[4]=lf[352],tmp=(C_word)a,a+=5,tmp));
t16=((C_word*)t14)[1];
f_4501(t16,((C_word*)t0)[6],t12,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[353]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4555,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t12)){
t14=t13;
f_4555(t14,t12);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[354]);
if(C_truep(t14)){
t15=t13;
f_4555(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[5],lf[355]);
t16=t13;
f_4555(t16,(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[5],lf[356])));}}}}}}}}}}}}}

/* k4553 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_fcall f_4555(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4555,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 608  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4326(3,t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}}

/* k4583 in k4553 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 609  append */
t2=*((C_word*)lf[78]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4579 in k4553 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4560 in k4553 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4566,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* map */
t4=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)((C_word*)t0)[2])[1],t3);}

/* k4564 in k4560 in k4553 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 608  cons* */
t2=C_retrieve(lf[141]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_fcall f_4501(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4501,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4515,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 605  reverse */
t7=*((C_word*)lf[109]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}
else{
t6=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_i_cdr(t3);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4542,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_i_car(t3);
/* support.scm: 606  walk */
t10=((C_word*)((C_word*)t0)[3])[1];
f_4326(3,t10,t8,t9);}}

/* k4540 in loop in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4542,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* support.scm: 606  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4501(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k4513 in loop in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4519,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 605  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4326(3,t4,t2,t3);}

/* k4517 in k4513 in loop in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4519,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[351],((C_word*)t0)[2],t1));}

/* k4475 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 600  cons* */
t2=C_retrieve(lf[141]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[339],((C_word*)t0)[2],t1);}

/* k4442 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4444,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k4421 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k4417 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 591  map */
t2=*((C_word*)lf[162]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[348]+1),((C_word*)t0)[2],t1);}

/* k4405 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4411,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 592  last */
t4=C_retrieve(lf[347]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4413 in k4405 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 592  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4326(3,t2,((C_word*)t0)[2],t1);}

/* k4409 in k4405 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],t1));}

/* k4367 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[346],t2));}

/* k4350 in k4343 in walk in ##compiler#build-expression-tree in k2828 in k2825 */
static void C_ccall f_4352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4352,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3812,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3815,a[2]=t4,a[3]=t6,a[4]=lf[341],tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4315,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 575  walk */
t9=((C_word*)t6)[1];
f_3815(3,t9,t8,t2);}

/* k4313 in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4318,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 576  ##compiler#debugging */
t3=*((C_word*)lf[16]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[342],lf[343],((C_word*)((C_word*)t0)[2])[1]);}

/* k4316 in k4313 in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3815(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t38;
C_word t39;
C_word *a;
loop:
a=C_alloc(49);
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)tr3,(void*)f_3815,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 512  ##compiler#varnode */
t3=C_retrieve(lf[312]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
/* support.scm: 513  ##compiler#bomb */
t3=*((C_word*)lf[10]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,lf[318]);}
else{
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[319]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[294],lf[319],t7,C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_eqp(t4,lf[143]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t4,lf[155]));
if(C_truep(t7)){
t8=(C_word)C_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3874,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(C_word)C_i_cdr(t2);
/* map */
t11=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,((C_word*)((C_word*)t0)[3])[1],t10);}
else{
t8=(C_word)C_eqp(t4,lf[116]);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(t2);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=t9,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_numberp(t9))){
t12=(C_word)C_eqp(lf[323],C_retrieve(lf[324]));
if(C_truep(t12)){
t13=(C_word)C_i_integerp(t9);
t14=t11;
f_3900(t14,(C_word)C_i_not(t13));}
else{
t13=t11;
f_3900(t13,C_SCHEME_FALSE);}}
else{
t12=t11;
f_3900(t12,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t4,lf[132]);
if(C_truep(t9)){
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_i_caddr(t2);
if(C_truep((C_word)C_i_nullp(t10))){
/* support.scm: 533  walk */
t38=t1;
t39=t11;
t1=t38;
t2=t39;
c=3;
goto loop;}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3950,a[2]=t2,a[3]=t11,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 534  unzip1 */
t13=C_retrieve(lf[326]);
((C_proc3)C_retrieve_proc(t13))(3,t13,t12,t10);}}
else{
t10=(C_word)C_eqp(t4,lf[147]);
if(C_truep(t10)){
t11=(C_word)C_i_cadr(t2);
t12=(C_word)C_a_i_list(&a,1,t11);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4001,a[2]=t12,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_caddr(t2);
/* support.scm: 537  walk */
t38=t13;
t39=t14;
t1=t38;
t2=t39;
c=3;
goto loop;}
else{
t11=(C_word)C_eqp(t4,lf[156]);
if(C_truep(t11)){
t12=(C_word)C_i_cadr(t2);
t13=(C_word)C_i_car(t2);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t13,a[5]=t1,a[6]=t12,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t12))){
t15=(C_word)C_i_car(t12);
t16=t14;
f_4041(t16,(C_word)C_eqp(lf[116],t15));}
else{
t15=t14;
f_4041(t15,C_SCHEME_FALSE);}}
else{
t12=(C_word)C_eqp(t4,lf[146]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t12)){
t14=t13;
f_4063(t14,t12);}
else{
t14=(C_word)C_eqp(t4,lf[148]);
t15=t13;
f_4063(t15,(C_truep(t14)?t14:(C_word)C_eqp(t4,lf[339])));}}}}}}}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4305,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[3])[1],t2);}}}}

/* k4303 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4305,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[332],lf[340],t1));}

/* k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_4063(C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4063,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4072,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cddr(((C_word*)t0)[6]);
/* map */
t7=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)((C_word*)t0)[4])[1],t6);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[327]);
if(C_truep(t2)){
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
t4=(C_word)C_a_i_list(&a,2,t3,C_SCHEME_TRUE);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[294],lf[327],t4,C_SCHEME_END_OF_LIST));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[3],lf[140]);
if(C_truep(t3)){
t4=(C_word)C_i_cadr(((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[6]);
/* map */
t8=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)((C_word*)t0)[4])[1],t7);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[3],lf[328]);
if(C_truep(t4)){
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
t6=(C_word)C_i_cadr(t5);
t7=(C_word)C_i_caddr(((C_word*)t0)[6]);
t8=(C_word)C_i_cadr(t7);
t9=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t10=(C_word)C_i_cadr(t9);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4164,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t10,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* support.scm: 553  fifth */
t12=C_retrieve(lf[330]);
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,((C_word*)t0)[6]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[3],lf[149]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_4185(t7,t5);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[3],lf[157]);
if(C_truep(t7)){
t8=t6;
f_4185(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[3],lf[150]);
if(C_truep(t8)){
t9=t6;
f_4185(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[3],lf[151]);
t10=t6;
f_4185(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[3],lf[152])));}}}}}}}}

/* k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_4185(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4185,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4194,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[6]);
/* map */
t6=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)((C_word*)t0)[4])[1],t5);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[331]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[4])[1],t4);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[6],a[3]=lf[334],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=lf[338],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 561  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[5],t3,t4);}}}

/* a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4228,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4242,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[337])))){
t5=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t4;
f_4242(t7,C_SCHEME_TRUE);}
else{
t5=t4;
f_4242(t5,C_SCHEME_FALSE);}}

/* k4240 in a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_4242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4242,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 570  ##compiler#real-name */
t4=C_retrieve(lf[54]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* support.scm: 572  ##sys#symbol->qualified-string */
t3=C_retrieve(lf[336]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k4247 in k4240 in a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4256(2,t3,t1);}
else{
/* support.scm: 571  ##sys#symbol->qualified-string */
t3=C_retrieve(lf[336]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k4254 in k4247 in k4240 in a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4256,2,t0,t1);}
t2=((C_word*)t0)[3];
f_4246(2,t2,(C_word)C_a_i_list(&a,3,C_retrieve(lf[335]),((C_word*)t0)[2],t1));}

/* k4244 in k4240 in a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4235,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k4233 in k4244 in k4240 in a4227 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[332],((C_word*)t0)[2],t1));}

/* a4221 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4222,2,t0,t1);}
/* support.scm: 562  ##compiler#get-line-2 */
t2=C_retrieve(lf[237]);
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k4208 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4210,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[332],lf[333],t1));}

/* k4192 in k4183 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4194,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k4162 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4164,2,t0,t1);}
t2=(C_word)C_i_cadr(t1);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4144,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4148,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 554  sixth */
t6=C_retrieve(lf[329]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k4146 in k4162 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 554  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3815(3,t2,((C_word*)t0)[2],t1);}

/* k4142 in k4162 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4144,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[294],lf[328],((C_word*)t0)[2],t2));}

/* k4109 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[146],((C_word*)t0)[2],t1));}

/* k4070 in k4061 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k4039 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_4041(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4041,NULL,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_cadr(((C_word*)t0)[6]):((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4027,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* map */
t6=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)((C_word*)t0)[2])[1],t5);}

/* k4025 in k4039 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4027,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k3999 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[294],lf[147],((C_word*)t0)[2],t2));}

/* k3948 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3953,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[4],a[3]=lf[325],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* map */
t6=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* a3969 in k3948 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3970,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
/* support.scm: 535  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3815(3,t4,t1,t3);}

/* k3958 in k3948 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3968,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 536  walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3815(3,t3,t2,((C_word*)t0)[2]);}

/* k3966 in k3958 in k3948 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* support.scm: 535  append */
t3=*((C_word*)lf[78]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3951 in k3948 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3953,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],lf[132],((C_word*)t0)[2],t1));}

/* k3898 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_3900(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3900,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 524  ##compiler#compiler-warning */
t3=*((C_word*)lf[28]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[321],lf[322],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3897(t2,((C_word*)t0)[2]);}}

/* k3901 in k3898 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 527  truncate */
t3=*((C_word*)lf[320]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3908 in k3901 in k3898 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3897(t2,(C_word)C_i_inexact_to_exact(t1));}

/* k3895 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_fcall f_3897(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 520  ##compiler#qnode */
t2=C_retrieve(lf[315]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3872 in walk in ##compiler#build-node-graph in k2828 in k2825 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3874,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[294],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1));}

/* ##compiler#qnode in k2828 in k2825 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3803,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[294],lf[116],t3,C_SCHEME_END_OF_LIST));}

/* ##compiler#varnode in k2828 in k2825 */
static void C_ccall f_3794(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3794,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[294],lf[313],t3,C_SCHEME_END_OF_LIST));}

/* make-node in k2828 in k2825 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3788,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[294],t2,t3,t4));}

/* node-subexpressions in k2828 in k2825 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3779,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[294]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* node-subexpressions-set! in k2828 in k2825 */
static void C_ccall f_3770(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3770,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[294]);
/* support.scm: 498  ##sys#block-set! */
t5=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* node-parameters in k2828 in k2825 */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3761,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[294]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* node-parameters-set! in k2828 in k2825 */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3752,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[294]);
/* support.scm: 498  ##sys#block-set! */
t5=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* node-class in k2828 in k2825 */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3743,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[294]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* node-class-set! in k2828 in k2825 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3734,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[294]);
/* support.scm: 498  ##sys#block-set! */
t5=*((C_word*)lf[299]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* node? in k2828 in k2825 */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3728,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[294]));}

/* f_3722 in k2828 in k2825 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3722,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[294],t2,t3,t4));}

/* ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3335,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3341,a[2]=lf[291],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 455  ##sys#hash-table-for-each */
t4=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,t2);}

/* a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3341,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3345,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t11,a[6]=t9,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* support.scm: 461  write */
t13=*((C_word*)lf[290]+1);
((C_proc3)C_retrieve_proc(t13))(3,t13,t12,t2);}

/* k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3348,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=lf[289],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3425(t6,t2,((C_word*)t0)[2]);}

/* loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_fcall f_3425(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3425,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* support.scm: 465  caar */
t4=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3435(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,lf[255]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3451(t5,t3);}
else{
t5=(C_word)C_eqp(t1,lf[273]);
if(C_truep(t5)){
t6=t4;
f_3451(t6,t5);}
else{
t6=(C_word)C_eqp(t1,lf[274]);
if(C_truep(t6)){
t7=t4;
f_3451(t7,t6);}
else{
t7=(C_word)C_eqp(t1,lf[275]);
if(C_truep(t7)){
t8=t4;
f_3451(t8,t7);}
else{
t8=(C_word)C_eqp(t1,lf[276]);
if(C_truep(t8)){
t9=t4;
f_3451(t9,t8);}
else{
t9=(C_word)C_eqp(t1,lf[217]);
if(C_truep(t9)){
t10=t4;
f_3451(t10,t9);}
else{
t10=(C_word)C_eqp(t1,lf[210]);
if(C_truep(t10)){
t11=t4;
f_3451(t11,t10);}
else{
t11=(C_word)C_eqp(t1,lf[277]);
if(C_truep(t11)){
t12=t4;
f_3451(t12,t11);}
else{
t12=(C_word)C_eqp(t1,lf[216]);
if(C_truep(t12)){
t13=t4;
f_3451(t13,t12);}
else{
t13=(C_word)C_eqp(t1,lf[278]);
if(C_truep(t13)){
t14=t4;
f_3451(t14,t13);}
else{
t14=(C_word)C_eqp(t1,lf[279]);
if(C_truep(t14)){
t15=t4;
f_3451(t15,t14);}
else{
t15=(C_word)C_eqp(t1,lf[280]);
if(C_truep(t15)){
t16=t4;
f_3451(t16,t15);}
else{
t16=(C_word)C_eqp(t1,lf[281]);
if(C_truep(t16)){
t17=t4;
f_3451(t17,t16);}
else{
t17=(C_word)C_eqp(t1,lf[282]);
if(C_truep(t17)){
t18=t4;
f_3451(t18,t17);}
else{
t18=(C_word)C_eqp(t1,lf[283]);
if(C_truep(t18)){
t19=t4;
f_3451(t19,t18);}
else{
t19=(C_word)C_eqp(t1,lf[284]);
if(C_truep(t19)){
t20=t4;
f_3451(t20,t19);}
else{
t20=(C_word)C_eqp(t1,lf[285]);
if(C_truep(t20)){
t21=t4;
f_3451(t21,t20);}
else{
t21=(C_word)C_eqp(t1,lf[286]);
if(C_truep(t21)){
t22=t4;
f_3451(t22,t21);}
else{
t22=(C_word)C_eqp(t1,lf[211]);
if(C_truep(t22)){
t23=t4;
f_3451(t23,t22);}
else{
t23=(C_word)C_eqp(t1,lf[287]);
if(C_truep(t23)){
t24=t4;
f_3451(t24,t23);}
else{
t24=(C_word)C_eqp(t1,lf[206]);
t25=t4;
f_3451(t25,(C_truep(t24)?t24:(C_word)C_eqp(t1,lf[288])));}}}}}}}}}}}}}}}}}}}}}

/* k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_fcall f_3451(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3451,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 469  caar */
t3=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[254]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,lf[254]);
t4=((C_word*)t0)[8];
f_3438(2,t4,t3);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[258]);
if(C_truep(t3)){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[254]);
if(C_truep(t4)){
t5=((C_word*)t0)[8];
f_3438(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3489,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 473  cdar */
t6=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[6],lf[259]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3499,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 475  cdar */
t6=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[6],lf[260]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_3508(t7,t5);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[6],lf[265]);
if(C_truep(t7)){
t8=t6;
f_3508(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[6],lf[266]);
if(C_truep(t8)){
t9=t6;
f_3508(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[6],lf[240]);
if(C_truep(t9)){
t10=t6;
f_3508(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[6],lf[267]);
if(C_truep(t10)){
t11=t6;
f_3508(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[6],lf[268]);
if(C_truep(t11)){
t12=t6;
f_3508(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[6],lf[269]);
if(C_truep(t12)){
t13=t6;
f_3508(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[6],lf[270]);
if(C_truep(t13)){
t14=t6;
f_3508(t14,t13);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[6],lf[271]);
t15=t6;
f_3508(t15,(C_truep(t14)?t14:(C_word)C_eqp(((C_word*)t0)[6],lf[272])));}}}}}}}}}}}}}

/* k3506 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_fcall f_3508(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3508,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3515,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 478  caar */
t3=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[262]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 480  cdar */
t4=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[263]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 482  cdar */
t5=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=(C_word)C_i_car(((C_word*)t0)[5]);
/* support.scm: 483  ##compiler#bomb */
t5=*((C_word*)lf[10]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[6],lf[264],t4);}}}}

/* k3537 in k3506 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3438(2,t3,t2);}

/* k3527 in k3506 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3438(2,t3,t2);}

/* k3513 in k3506 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3519,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 478  cdar */
t3=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3517 in k3513 in k3506 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 478  printf */
t2=C_retrieve(lf[19]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[261],((C_word*)t0)[2],t1);}

/* k3497 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3438(2,t3,t2);}

/* k3487 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3438(2,t3,t2);}

/* k3464 in k3449 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_assq(t1,lf[256]);
t3=(C_word)C_i_cdr(t2);
/* support.scm: 469  printf */
t4=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],lf[257],t3);}

/* k3436 in k3433 in loop in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 484  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3425(t3,((C_word*)t0)[2],t2);}

/* k3346 in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3383,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[3])[1],lf[254]);
t5=t3;
f_3383(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_3383(t4,C_SCHEME_FALSE);}}

/* k3381 in k3346 in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_fcall f_3383(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3383,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
/* support.scm: 486  printf */
t7=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[3],lf[252],t6);}
else{
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
/* support.scm: 487  printf */
t7=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[3],lf[253],t6);}
else{
t2=((C_word*)t0)[3];
f_3351(2,t2,C_SCHEME_UNDEFINED);}}}

/* k3349 in k3346 in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3354,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(C_word)C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm: 488  printf */
t4=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[251],t3);}
else{
t3=t2;
f_3354(2,t3,C_SCHEME_UNDEFINED);}}

/* k3352 in k3349 in k3346 in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(C_word)C_i_length(((C_word*)((C_word*)t0)[2])[1]);
/* support.scm: 489  printf */
t4=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[250],t3);}
else{
t3=t2;
f_3357(2,t3,C_SCHEME_UNDEFINED);}}

/* k3355 in k3352 in k3349 in k3346 in k3343 in a3340 in ##compiler#display-analysis-database in k2828 in k2825 */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 490  newline */
t2=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#display-line-number-database in k2828 in k2825 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3322,a[2]=lf[246],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 440  ##sys#hash-table-for-each */
t3=C_retrieve(lf[247]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,C_retrieve(lf[235]));}

/* a3321 in ##compiler#display-line-number-database in k2828 in k2825 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3322,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3333,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[245]+1),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k3331 in a3321 in ##compiler#display-line-number-database in k2828 in k2825 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 442  printf */
t2=C_retrieve(lf[19]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[244],((C_word*)t0)[2],t1);}

/* ##compiler#find-lambda-container in k2828 in k2825 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3292,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3298,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=lf[241],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3298(t8,t1,t2);}

/* loop in ##compiler#find-lambda-container in k2828 in k2825 */
static void C_fcall f_3298(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3298,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3308,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 436  ##compiler#get */
t5=C_retrieve(lf[221]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],t2,lf[240]);}}

/* k3306 in loop in ##compiler#find-lambda-container in k2828 in k2825 */
static void C_ccall f_3308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 437  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3298(t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#get-line-2 in k2828 in k2825 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3256,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3263,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 428  ##sys#hash-table-ref */
t5=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[235]),t3);}

/* k3261 in ##compiler#get-line-2 in k2828 in k2825 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_cdr(t1);
t4=t2;
f_3266(t4,(C_word)C_i_assq(((C_word*)t0)[2],t3));}
else{
t3=t2;
f_3266(t3,C_SCHEME_FALSE);}}

/* k3264 in k3261 in ##compiler#get-line-2 in k2828 in k2825 */
static void C_fcall f_3266(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(t1);
/* support.scm: 430  values */
C_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
/* support.scm: 431  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* ##compiler#get-line in k2828 in k2825 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3246,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
/* support.scm: 424  ##compiler#get */
t4=C_retrieve(lf[221]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,C_retrieve(lf[235]),t3,t2);}

/* ##compiler#count! in k2828 in k2825 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_3189r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3189r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3189r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3193,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 412  ##sys#hash-table-ref */
t7=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,t3);}

/* k3191 in ##compiler#count! in k2828 in k2825 */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3193,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_i_car(((C_word*)t0)[6]):C_fix(1));
if(C_truep(t1)){
t4=(C_word)C_i_assq(((C_word*)t0)[5],t1);
if(C_truep(t4)){
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_fixnum_plus(t5,t3);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(t4,C_fix(1),t6));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3223,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 417  alist-cons */
t7=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,((C_word*)t0)[5],t3,t6);}}
else{
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,1,t4);
/* support.scm: 418  ##sys#hash-table-set! */
t6=C_retrieve(lf[228]);
((C_proc5)C_retrieve_proc(t6))(5,t6,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t5);}}

/* k3221 in k3191 in ##compiler#count! in k2828 in k2825 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#collect! in k2828 in k2825 */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3137,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3141,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 404  ##sys#hash-table-ref */
t7=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,t3);}

/* k3139 in ##compiler#collect! in k2828 in k2825 */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3141,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(1),t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3168,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t5=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 408  alist-cons */
t6=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t3,((C_word*)t0)[6],t4,t5);}}
else{
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* support.scm: 409  ##sys#hash-table-set! */
t4=C_retrieve(lf[228]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}}

/* k3166 in k3139 in ##compiler#collect! in k2828 in k2825 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#put! in k2828 in k2825 */
static void C_ccall f_3091(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3091,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3095,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 396  ##sys#hash-table-ref */
t7=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,t3);}

/* k3093 in ##compiler#put! in k2828 in k2825 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3095,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3117,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 400  alist-cons */
t5=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[6],((C_word*)t0)[4],t4);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* support.scm: 401  ##sys#hash-table-set! */
t4=C_retrieve(lf[228]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k3115 in k3093 in ##compiler#put! in k2828 in k2825 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#get-all in k2828 in k2825 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_3073r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3073r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3073r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3077,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 390  ##sys#hash-table-ref */
t6=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k3075 in ##compiler#get-all in k2828 in k2825 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3077,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3085,a[2]=t1,a[3]=lf[225],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 392  filter-map */
t3=C_retrieve(lf[226]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* a3084 in k3075 in ##compiler#get-all in k2828 in k2825 */
static void C_ccall f_3085(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3085,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* ##compiler#get in k2828 in k2825 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3055,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3059,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 384  ##sys#hash-table-ref */
t6=C_retrieve(lf[222]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,t3);}

/* k3057 in ##compiler#get in k2828 in k2825 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2994,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3031,a[2]=t2,a[3]=lf[218],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_retrieve(lf[219]));}

/* a3030 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3031,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 370  ##compiler#put! */
t4=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[2],t2,lf[217],C_SCHEME_TRUE);}

/* k3033 in a3030 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[215])))){
/* support.scm: 371  ##compiler#put! */
t3=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[2],((C_word*)t0)[4],lf[216],C_SCHEME_TRUE);}
else{
t3=t2;
f_3038(2,t3,C_SCHEME_UNDEFINED);}}

/* k3036 in k3033 in a3030 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[214])))){
/* support.scm: 372  ##compiler#put! */
t2=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[4],lf[210],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2996 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3016,a[2]=((C_word*)t0)[3],a[3]=lf[212],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve(lf[213]));}

/* a3015 in k2996 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3016(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3016,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3020,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 376  ##compiler#put! */
t4=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[2],t2,lf[211],C_SCHEME_TRUE);}

/* k3018 in a3015 in k2996 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[209])))){
/* support.scm: 377  ##compiler#put! */
t2=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[4],lf[210],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2999 in k2996 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[3],a[3]=lf[207],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t3=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_retrieve(lf[208]));}

/* a3005 in k2999 in k2996 in ##compiler#initialize-analysis-database in k2828 in k2825 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3006,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
/* support.scm: 380  ##compiler#put! */
t4=C_retrieve(lf[205]);
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t3,lf[206],C_SCHEME_TRUE);}

/* ##compiler#expand-profile-lambda in k2828 in k2825 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2937,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[196]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2941,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 352  gensym */
t7=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}

/* k2939 in ##compiler#expand-profile-lambda in k2828 in k2825 */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 353  alist-cons */
t3=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[6],((C_word*)t0)[2],C_retrieve(lf[197]));}

/* k2943 in k2939 in ##compiler#expand-profile-lambda in k2828 in k2825 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1){
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
C_word ab[96],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2945,2,t0,t1);}
t2=C_mutate((C_word*)lf[197]+1,t1);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
t4=C_mutate((C_word*)lf[196]+1,t3);
t5=(C_word)C_a_i_list(&a,2,lf[116],((C_word*)t0)[6]);
t6=(C_word)C_a_i_list(&a,3,lf[198],t5,C_retrieve(lf[199]));
t7=(C_word)C_a_i_list(&a,3,lf[147],C_SCHEME_END_OF_LIST,t6);
t8=(C_word)C_a_i_list(&a,3,lf[147],((C_word*)t0)[5],((C_word*)t0)[4]);
t9=(C_word)C_a_i_list(&a,3,lf[200],t8,((C_word*)t0)[3]);
t10=(C_word)C_a_i_list(&a,3,lf[147],C_SCHEME_END_OF_LIST,t9);
t11=(C_word)C_a_i_list(&a,2,lf[116],((C_word*)t0)[6]);
t12=(C_word)C_a_i_list(&a,3,lf[201],t11,C_retrieve(lf[199]));
t13=(C_word)C_a_i_list(&a,3,lf[147],C_SCHEME_END_OF_LIST,t12);
t14=(C_word)C_a_i_list(&a,4,lf[202],t7,t10,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_list(&a,3,lf[147],((C_word*)t0)[3],t14));}

/* ##compiler#process-lambda-documentation in k2828 in k2825 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2934,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2831,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=lf[188],tmp=(C_word)a,a+=6,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[189]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2840,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2846,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[173],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2871,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=lf[186],tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
t5=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2877,a[2]=((C_word*)t0)[3],a[3]=lf[183],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],a[3]=lf[185],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2920 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2921r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2921r(t0,t1,t2);}}

static void C_ccall f_2921r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2927,a[2]=t2,a[3]=lf[184],tmp=(C_word)a,a+=4,tmp);
/* g259261 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2926 in a2920 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2876 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 337  with-input-from-string */
t4=C_retrieve(lf[182]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}

/* a2904 in a2876 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2911,a[2]=lf[177],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2919,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 337  read */
t4=*((C_word*)lf[176]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2917 in a2904 in a2876 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 337  unfold */
t2=C_retrieve(lf[178]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],*((C_word*)lf[179]+1),*((C_word*)lf[180]+1),((C_word*)t0)[2],t1);}

/* a2910 in a2904 in a2876 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2911,3,t0,t1,t2);}
/* support.scm: 337  read */
t3=*((C_word*)lf[176]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k2879 in a2876 in a2870 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[174]);}
else{
t2=(C_word)C_i_cdr(t1);
t3=(C_word)C_i_nullp(t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_word)C_i_car(t1):(C_word)C_a_i_cons(&a,2,lf[175],t1)));}}

/* a2845 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2846,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[172],tmp=(C_word)a,a+=7,tmp);
/* g259261 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2851 in a2845 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2863,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 334  exn? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}

/* k2861 in a2851 in a2845 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 335  exn-msg */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* support.scm: 336  ->string */
t2=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2858 in a2851 in a2845 in a2839 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 332  quit */
t2=*((C_word*)lf[34]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[171],((C_word*)t0)[2],t1);}

/* k2836 in ##compiler#string->expr in k2828 in k2825 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#extract-mutable-constants */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2456,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2459,a[2]=t4,a[3]=t6,a[4]=lf[168],tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 324  walk */
t9=((C_word*)t6)[1];
f_2459(3,t9,t8,t2);}

/* k2818 in ##compiler#extract-mutable-constants */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 325  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2459,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2461,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[158],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_not_pair_p(t2))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[116]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2613,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_cddr(t2);
t9=t6;
f_2613(t9,(C_word)C_i_nullp(t8));}
else{
t8=t6;
f_2613(t8,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2664,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(t7,lf[132]);
if(C_truep(t8)){
t9=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cadr(t2);
t11=t6;
f_2664(t11,(C_word)C_i_listp(t10));}
else{
t10=t6;
f_2664(t10,C_SCHEME_FALSE);}}
else{
t9=t6;
f_2664(t9,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k2662 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2664(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2664,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[167],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2673(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* g204207 */
t4=((C_word*)t0)[3];
f_2461(t4,((C_word*)t0)[2],t2,t3);}}

/* g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2673(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2673,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2683,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* reverse */
t6=*((C_word*)lf[109]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2774,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* cdar */
t8=*((C_word*)lf[166]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t2);}
else{
t7=t5;
f_2720(t7,C_SCHEME_FALSE);}}}

/* k2772 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2770,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* cddar */
t3=*((C_word*)lf[165]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2720(t2,C_SCHEME_FALSE);}}

/* k2768 in k2772 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2720(t2,(C_word)C_i_nullp(t1));}

/* k2718 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2720(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2720,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* cadar */
t4=*((C_word*)lf[164]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* g204207 */
t4=((C_word*)t0)[2];
f_2461(t4,((C_word*)t0)[4],t2,t3);}}

/* k2741 in k2718 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2739,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* caar */
t4=*((C_word*)lf[163]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2737 in k2741 in k2718 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2739,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* g199244 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2673(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2686,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* reverse */
t3=*((C_word*)lf[109]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2684 in k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2686,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2700,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[3],a[3]=lf[161],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[162]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[2],t1);}

/* a2705 in k2684 in k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2706,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2714,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* walk194 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2459(3,t5,t4,t3);}

/* k2712 in a2705 in k2684 in k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k2698 in k2684 in k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k2702 in k2698 in k2684 in k2681 in g199 in k2662 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2704,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[132],t2));}

/* k2611 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2613,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2633,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##compiler#collapsable-literal? */
t4=*((C_word*)lf[118]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* g204207 */
t4=((C_word*)t0)[2];
f_2461(t4,((C_word*)t0)[4],t2,t3);}}

/* k2631 in k2611 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##compiler#make-random-name */
t3=C_retrieve(lf[160]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k2623 in k2631 in k2611 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2629,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* alist-cons */
t3=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k2627 in k2623 in k2631 in k2611 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* g204 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2461(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2461,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[139]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_2471(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[153]);
if(C_truep(t7)){
t8=t6;
f_2471(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[154]);
if(C_truep(t8)){
t9=t6;
f_2471(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[155]);
if(C_truep(t9)){
t10=t6;
f_2471(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[156]);
t11=t6;
f_2471(t11,(C_truep(t10)?t10:(C_word)C_eqp(t4,lf[157])));}}}}}

/* k2469 in g204 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2471(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2471,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[140]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2480,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_2480(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[146]);
if(C_truep(t4)){
t5=t3;
f_2480(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[147]);
if(C_truep(t5)){
t6=t3;
f_2480(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[148]);
if(C_truep(t6)){
t7=t3;
f_2480(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[149]);
if(C_truep(t7)){
t8=t3;
f_2480(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[150]);
if(C_truep(t8)){
t9=t3;
f_2480(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[151]);
t10=t3;
f_2480(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[5],lf[152])));}}}}}}}}

/* k2478 in k2469 in g204 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2480(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2480,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2491,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* map */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[4])[1],t4);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[143]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_2504(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[3],lf[144]);
t5=t3;
f_2504(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[3],lf[145])));}}}

/* k2502 in k2478 in k2469 in g204 in walk in ##compiler#extract-mutable-constants */
static void C_fcall f_2504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2504,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3]);}
else{
/* map */
t2=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}}

/* k2509 in k2502 in k2478 in k2469 in g204 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2489 in k2478 in k2469 in g204 in walk in ##compiler#extract-mutable-constants */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 319  cons* */
t2=C_retrieve(lf[141]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#canonicalize-begin-body */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2373,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=t4,a[3]=lf[136],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2379(t6,t1,t2);}

/* loop in ##compiler#canonicalize-begin-body */
static void C_fcall f_2379(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2379,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[130]);}
else{
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_car(t2));}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_equalp(t4,lf[131]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2407,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_2407(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2444,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 295  ##compiler#constant? */
t8=*((C_word*)lf[115]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t4);}}}}

/* k2442 in loop in ##compiler#canonicalize-begin-body */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_2407(t2,(C_truep(t1)?t1:(C_word)C_i_equalp(((C_word*)t0)[2],lf[135])));}

/* k2405 in loop in ##compiler#canonicalize-begin-body */
static void C_fcall f_2407(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2407,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 297  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2379(t3,((C_word*)t0)[2],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 298  gensym */
t3=C_retrieve(lf[133]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[134]);}}

/* k2435 in k2405 in loop in ##compiler#canonicalize-begin-body */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 299  loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2379(t7,t5,t6);}

/* k2423 in k2435 in k2405 in loop in ##compiler#canonicalize-begin-body */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2425,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[132],((C_word*)t0)[2],t1));}

/* ##compiler#basic-literal? */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2313,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 280  ##compiler#constant? */
t6=*((C_word*)lf[115]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}}}

/* k2327 in ##compiler#basic-literal? */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2371,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 281  vector->list */
t4=*((C_word*)lf[124]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_2335(2,t3,C_SCHEME_FALSE);}}}

/* k2369 in k2327 in ##compiler#basic-literal? */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 281  every */
t2=C_retrieve(lf[123]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],*((C_word*)lf[127]+1),t1);}

/* k2333 in k2327 in ##compiler#basic-literal? */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* support.scm: 283  ##compiler#basic-literal? */
t4=*((C_word*)lf[127]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k2348 in k2333 in k2327 in ##compiler#basic-literal? */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 284  ##compiler#basic-literal? */
t3=*((C_word*)lf[127]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#compressable-literal */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2215,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2219,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2230,a[2]=t8,a[3]=t5,a[4]=lf[125],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2230(3,t10,t6,t2);}

/* rec in ##compiler#compressable-literal */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2230,3,t0,t1,t2);}
t3=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=(C_word)C_i_numberp(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_2241(t7,t5);}
else{
t7=(C_word)C_charp(t2);
if(C_truep(t7)){
t8=t6;
f_2241(t8,t7);}
else{
t8=(C_word)C_i_stringp(t2);
if(C_truep(t8)){
t9=t6;
f_2241(t9,t8);}
else{
t9=(C_word)C_booleanp(t2);
if(C_truep(t9)){
t10=t6;
f_2241(t10,t9);}
else{
t10=(C_word)C_i_nullp(t2);
t11=t6;
f_2241(t11,(C_truep(t10)?t10:(C_word)C_i_symbolp(t2)));}}}}}

/* k2239 in rec in ##compiler#compressable-literal */
static void C_fcall f_2241(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2241,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(C_word)C_fixnum_decrease(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2260,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[4]);
/* support.scm: 272  rec */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2230(3,t6,t4,t5);}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 273  vector->list */
t3=*((C_word*)lf[124]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}}

/* k2282 in k2239 in rec in ##compiler#compressable-literal */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 273  every */
t2=C_retrieve(lf[123]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2258 in k2239 in rec in ##compiler#compressable-literal */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 272  rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2230(3,t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2217 in ##compiler#compressable-literal */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=((C_word*)t0)[3];
t4=(C_word)C_fixnum_greaterp(t2,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?((C_word*)((C_word*)t0)[4])[1]:C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#immediate? */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2179,3,t0,t1,t2);}
t3=(C_word)C_fixnump(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_eqp(C_SCHEME_UNDEFINED,t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_nullp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_eofp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_charp(t2);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_truep(t7)?t7:(C_word)C_booleanp(t2)));}}}}}

/* ##compiler#collapsable-literal? */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2149,3,t0,t1,t2);}
t3=(C_word)C_booleanp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_eofp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_numberp(t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:(C_word)C_i_symbolp(t2)));}}}}

/* ##compiler#constant? */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2103,3,t0,t1,t2);}
t3=(C_word)C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_booleanp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_eofp(t2);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t8=(C_word)C_i_car(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(lf[116],t8));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}}}}

/* ##compiler#follow-without-loop */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2072,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2078,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=lf[113],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2078(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in ##compiler#follow-without-loop */
static void C_fcall f_2078(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2078,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_member(t2,t3))){
/* support.scm: 236  abort */
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2093,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=lf[112],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 237  proc */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t4);}}

/* a2092 in loop in ##compiler#follow-without-loop */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2093,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* support.scm: 237  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2078(t4,t1,t2,t3);}

/* ##compiler#fold-inner */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2009,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 226  reverse */
t6=*((C_word*)lf[109]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}}

/* k2021 in ##compiler#fold-inner */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2023,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2025,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[108],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2025(t5,((C_word*)t0)[2],t1);}

/* fold in k2021 in ##compiler#fold-inner */
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2025,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_cadr(t2);
t6=(C_word)C_i_car(t2);
t7=t3;
f_2033(t7,(C_word)C_a_i_list(&a,2,t5,t6));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2054,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* support.scm: 231  fold */
t10=t5;
t11=t6;
t1=t10;
t2=t11;
goto loop;}}

/* k2052 in fold in k2021 in ##compiler#fold-inner */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2054,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2033(t3,(C_word)C_a_i_list(&a,2,t1,t2));}

/* k2031 in fold in k2021 in ##compiler#fold-inner */
static void C_fcall f_2033(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#close-checked-input-file */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1997,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_string_equal_p(t3,lf[104]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm: 221  close-input-port */
t4=*((C_word*)lf[105]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}}

/* ##compiler#check-and-open-input-file */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1950r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1950r(t0,t1,t2,t3);}}

static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
if(C_truep((C_word)C_i_string_equal_p(t2,lf[96]))){
/* support.scm: 215  current-input-port */
t4=*((C_word*)lf[97]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1966,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 216  file-exists? */
t5=C_retrieve(lf[101]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k1964 in ##compiler#check-and-open-input-file */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1966,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 216  open-input-file */
t2=*((C_word*)lf[98]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_vemptyp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_1978(t4,t2);}
else{
t4=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_1978(t5,(C_word)C_i_not(t4));}}}

/* k1976 in k1964 in ##compiler#check-and-open-input-file */
static void C_fcall f_1978(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm: 217  quit */
t2=*((C_word*)lf[34]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],lf[99],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* support.scm: 218  quit */
t3=*((C_word*)lf[34]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[4],lf[100],((C_word*)t0)[3],t2);}}

/* ##compiler#words->bytes */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1943,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub99(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#words */
static void C_ccall f_1936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1936,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub95(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#valid-c-identifier? */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1880,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1884,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 196  ->string */
t5=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k1932 in ##compiler#valid-c-identifier? */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 196  string->list */
t2=*((C_word*)lf[80]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1882 in ##compiler#valid-c-identifier? */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1907,a[2]=lf[87],tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_cdr(t1);
/* support.scm: 200  any */
t7=C_retrieve(lf[88]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a1906 in k1882 in ##compiler#valid-c-identifier? */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1907,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:(C_word)C_eqp(C_make_character(95),t2)));}}

/* ##compiler#c-ify-string */
static void C_ccall f_1786(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1786,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 181  string->list */
t5=*((C_word*)lf[80]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k1800 in ##compiler#c-ify-string */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1802,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1804,a[2]=t3,a[3]=lf[84],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1804(t5,((C_word*)t0)[2],t1);}

/* loop in k1800 in ##compiler#c-ify-string */
static void C_fcall f_1804(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1804,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[77]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_fix((C_word)C_character_code(t3));
t5=(C_word)C_fixnum_lessp(t4,C_fix(32));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1826,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_1826(t7,t5);}
else{
t7=(C_word)C_fixnum_greaterp(t4,C_fix(128));
t8=t6;
f_1826(t8,(C_truep(t7)?t7:(C_word)C_i_memq(t3,lf[83])));}}}

/* k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_fcall f_1826(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1826,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(8)))){
t3=t2;
f_1833(t3,lf[81]);}
else{
t3=(C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(64));
t4=t2;
f_1833(t4,(C_truep(t3)?lf[82]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* support.scm: 193  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1804(t4,t2,t3);}}

/* k1863 in k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1865,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1831 in k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_fcall f_1833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1833,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 191  number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(8));}

/* k1847 in k1831 in k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 191  string->list */
t2=*((C_word*)lf[80]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1835 in k1831 in k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_ccall f_1837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1841,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 192  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1804(t4,t2,t3);}

/* k1839 in k1835 in k1831 in k1824 in loop in k1800 in ##compiler#c-ify-string */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 187  append */
t2=*((C_word*)lf[78]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],lf[79],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1796 in ##compiler#c-ify-string */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1798,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_make_character(34),t1);
/* support.scm: 178  list->string */
t3=*((C_word*)lf[76]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* ##compiler#build-lambda-list */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1742,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1748,a[2]=t6,a[3]=t4,a[4]=lf[71],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1748(t8,t1,t2,t3);}

/* loop in ##compiler#build-lambda-list */
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1748,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1772,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_decrease(t3);
/* support.scm: 173  loop */
t12=t7;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k1770 in loop in ##compiler#build-lambda-list */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#symbolify */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1717,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
/* support.scm: 167  string->symbol */
t3=*((C_word*)lf[67]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1740,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 168  sprintf */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[68],t2);}}}

/* k1738 in ##compiler#symbolify */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 168  string->symbol */
t2=*((C_word*)lf[67]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* ##compiler#stringify */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1696,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 162  symbol->string */
t3=*((C_word*)lf[62]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
/* support.scm: 163  sprintf */
t3=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[64],t2);}}}

/* ##compiler#posq */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1660,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=t2,a[3]=lf[59],tmp=(C_word)a,a+=4,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_1666(t4,t3,C_fix(0)));}

/* loop in ##compiler#posq */
static C_word C_fcall f_1666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=(C_word)C_i_car(t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=(C_word)C_i_cdr(t1);
t6=(C_word)C_fixnum_increase(t2);
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* ##compiler#check-signature */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1592,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1595,a[2]=t2,a[3]=t4,a[4]=lf[55],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1616,a[2]=t7,a[3]=t5,a[4]=lf[56],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1616(t9,t1,t3,t4);}

/* loop in ##compiler#check-signature */
static void C_fcall f_1616(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1616,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm: 146  err */
t4=((C_word*)t0)[3];
f_1595(t4,t1);}}
else{
t4=(C_word)C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* support.scm: 148  err */
t5=((C_word*)t0)[3];
f_1595(t5,t1);}
else{
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_i_cdr(t3);
/* support.scm: 149  loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* err in ##compiler#check-signature */
static void C_fcall f_1595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1595,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1603,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 143  ##compiler#real-name */
t3=C_retrieve(lf[54]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1601 in err in ##compiler#check-signature */
static void C_ccall f_1603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1607,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* support.scm: 144  map-llist */
t4=*((C_word*)lf[49]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,C_retrieve(lf[54]),t3);}

/* k1605 in k1601 in err in ##compiler#check-signature */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 142  quit */
t2=*((C_word*)lf[34]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[53],((C_word*)t0)[2],t1);}

/* map-llist */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1549,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1555,a[2]=t5,a[3]=t2,a[4]=lf[50],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1555(t7,t1,t3);}

/* loop in map-llist */
static void C_fcall f_1555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1555,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 137  proc */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 138  proc */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k1576 in loop in map-llist */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1582,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 138  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1555(t4,t2,t3);}

/* k1580 in k1576 in loop in map-llist */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1582,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#emit-syntax-trace-info */
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1546,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_emit_syntax_trace_info(t2,t3,C_retrieve(lf[40])));}

/* ##sys#syntax-error-hook */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1521r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1521r(t0,t1,t2,t3);}}

static void C_ccall f_1521r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1525,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 123  current-error-port */
t5=C_retrieve(lf[31]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1523 in ##sys#syntax-error-hook */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1525,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 124  fprintf */
t3=C_retrieve(lf[29]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,t1,lf[44],((C_word*)t0)[2]);}

/* k1526 in k1523 in ##sys#syntax-error-hook */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1531,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1539,a[2]=((C_word*)t0)[3],a[3]=lf[43],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1538 in k1526 in k1523 in ##sys#syntax-error-hook */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1539,3,t0,t1,t2);}
/* fprintf */
t3=C_retrieve(lf[29]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,((C_word*)t0)[2],lf[42],t2);}

/* k1529 in k1526 in k1523 in ##sys#syntax-error-hook */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 126  print-call-chain */
t3=C_retrieve(lf[39]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[2],C_fix(0),C_retrieve(lf[40]),lf[41]);}

/* k1532 in k1529 in k1526 in k1523 in ##sys#syntax-error-hook */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 127  exit */
t2=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(70));}

/* quit */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1502r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1502r(t0,t1,t2,t3);}}

static void C_ccall f_1502r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1506,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 116  current-error-port */
t5=C_retrieve(lf[31]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1504 in quit */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 117  string-append */
t4=*((C_word*)lf[12]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[36],((C_word*)t0)[2]);}

/* k1517 in k1504 in quit */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[29]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1507 in k1504 in quit */
static void C_ccall f_1509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 118  newline */
t3=*((C_word*)lf[18]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1510 in k1507 in k1504 in quit */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 119  exit */
t2=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(1));}

/* ##compiler#compiler-warning */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1473r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1473r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1473r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1480,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[32]))){
t6=(C_word)C_i_memq(t2,*((C_word*)lf[9]+1));
t7=t5;
f_1480(t7,(C_word)C_i_not(t6));}
else{
t6=t5;
f_1480(t6,C_SCHEME_FALSE);}}

/* k1478 in ##compiler#compiler-warning */
static void C_fcall f_1480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1480,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 111  current-error-port */
t3=C_retrieve(lf[31]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1481 in k1478 in ##compiler#compiler-warning */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1493,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 112  string-append */
t4=*((C_word*)lf[12]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[30],((C_word*)t0)[2]);}

/* k1491 in k1481 in k1478 in ##compiler#compiler-warning */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[29]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1484 in k1481 in k1478 in ##compiler#compiler-warning */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 113  newline */
t2=*((C_word*)lf[18]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#debugging */
static void C_ccall f_1433(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_1433r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1433r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1433r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_memq(t2,*((C_word*)lf[8]+1)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1443,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 100  printf */
t6=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[26],t3);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k1441 in ##compiler#debugging */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1458,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 103  display */
t4=*((C_word*)lf[24]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[25]);}
else{
t3=t2;
f_1446(2,t3,C_SCHEME_UNDEFINED);}}

/* k1456 in k1441 in ##compiler#debugging */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1463,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a1462 in k1456 in k1441 in ##compiler#debugging */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1463,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1471,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 104  force */
t4=C_retrieve(lf[21]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1469 in a1462 in k1456 in k1441 in ##compiler#debugging */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 104  printf */
t2=C_retrieve(lf[19]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[20],t1);}

/* k1444 in k1441 in ##compiler#debugging */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 105  newline */
t3=*((C_word*)lf[18]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1447 in k1444 in k1441 in ##compiler#debugging */
static void C_ccall f_1449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 106  flush-output */
t3=*((C_word*)lf[17]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1450 in k1447 in k1444 in k1441 in ##compiler#debugging */
static void C_ccall f_1452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* ##compiler#bomb */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1406r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1406r(t0,t1,t2);}}

static void C_ccall f_1406r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1420,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 94   string-append */
t5=*((C_word*)lf[12]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[13],t4);}
else{
/* support.scm: 95   error */
t3=*((C_word*)lf[11]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,lf[14]);}}

/* k1418 in ##compiler#bomb */
static void C_ccall f_1420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[11]+1),t1,t2);}

/* f_1401 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[554] = {
{"toplevelsupport.scm",(void*)C_support_toplevel},
{"f_2827support.scm",(void*)f_2827},
{"f_2830support.scm",(void*)f_2830},
{"f_8583support.scm",(void*)f_8583},
{"f_8610support.scm",(void*)f_8610},
{"f_8594support.scm",(void*)f_8594},
{"f_8597support.scm",(void*)f_8597},
{"f_8599support.scm",(void*)f_8599},
{"f_8603support.scm",(void*)f_8603},
{"f_8587support.scm",(void*)f_8587},
{"f_8520support.scm",(void*)f_8520},
{"f_8557support.scm",(void*)f_8557},
{"f_8581support.scm",(void*)f_8581},
{"f_8567support.scm",(void*)f_8567},
{"f_8571support.scm",(void*)f_8571},
{"f_8542support.scm",(void*)f_8542},
{"f_8550support.scm",(void*)f_8550},
{"f_8451support.scm",(void*)f_8451},
{"f_8455support.scm",(void*)f_8455},
{"f_8460support.scm",(void*)f_8460},
{"f_8464support.scm",(void*)f_8464},
{"f_8515support.scm",(void*)f_8515},
{"f_8494support.scm",(void*)f_8494},
{"f_8506support.scm",(void*)f_8506},
{"f_8509support.scm",(void*)f_8509},
{"f_8482support.scm",(void*)f_8482},
{"f_8426support.scm",(void*)f_8426},
{"f_8436support.scm",(void*)f_8436},
{"f_8439support.scm",(void*)f_8439},
{"f_8339support.scm",(void*)f_8339},
{"f_8348support.scm",(void*)f_8348},
{"f_8361support.scm",(void*)f_8361},
{"f_8367support.scm",(void*)f_8367},
{"f_8420support.scm",(void*)f_8420},
{"f_8370support.scm",(void*)f_8370},
{"f_8385support.scm",(void*)f_8385},
{"f_8393support.scm",(void*)f_8393},
{"f_8403support.scm",(void*)f_8403},
{"f_8388support.scm",(void*)f_8388},
{"f_8376support.scm",(void*)f_8376},
{"f_8343support.scm",(void*)f_8343},
{"f_8333support.scm",(void*)f_8333},
{"f_8257support.scm",(void*)f_8257},
{"f_8264support.scm",(void*)f_8264},
{"f_8276support.scm",(void*)f_8276},
{"f_8287support.scm",(void*)f_8287},
{"f_8283support.scm",(void*)f_8283},
{"f_8245support.scm",(void*)f_8245},
{"f_8251support.scm",(void*)f_8251},
{"f_8233support.scm",(void*)f_8233},
{"f_8237support.scm",(void*)f_8237},
{"f_8154support.scm",(void*)f_8154},
{"f_8173support.scm",(void*)f_8173},
{"f_8198support.scm",(void*)f_8198},
{"f_8202support.scm",(void*)f_8202},
{"f_8204support.scm",(void*)f_8204},
{"f_8211support.scm",(void*)f_8211},
{"f_8224support.scm",(void*)f_8224},
{"f_8228support.scm",(void*)f_8228},
{"f_8157support.scm",(void*)f_8157},
{"f_8161support.scm",(void*)f_8161},
{"f_8167support.scm",(void*)f_8167},
{"f_8148support.scm",(void*)f_8148},
{"f_8104support.scm",(void*)f_8104},
{"f_8116support.scm",(void*)f_8116},
{"f_8120support.scm",(void*)f_8120},
{"f_8124support.scm",(void*)f_8124},
{"f_8112support.scm",(void*)f_8112},
{"f_8095support.scm",(void*)f_8095},
{"f_8086support.scm",(void*)f_8086},
{"f_8080support.scm",(void*)f_8080},
{"f_8074support.scm",(void*)f_8074},
{"f_8062support.scm",(void*)f_8062},
{"f_8066support.scm",(void*)f_8066},
{"f_8069support.scm",(void*)f_8069},
{"f_8024support.scm",(void*)f_8024},
{"f_8038support.scm",(void*)f_8038},
{"f_8028support.scm",(void*)f_8028},
{"f_8035support.scm",(void*)f_8035},
{"f_7982support.scm",(void*)f_7982},
{"f_7991support.scm",(void*)f_7991},
{"f_7953support.scm",(void*)f_7953},
{"f_7963support.scm",(void*)f_7963},
{"f_7756support.scm",(void*)f_7756},
{"f_7935support.scm",(void*)f_7935},
{"f_7884support.scm",(void*)f_7884},
{"f_7929support.scm",(void*)f_7929},
{"f_7933support.scm",(void*)f_7933},
{"f_7887support.scm",(void*)f_7887},
{"f_7892support.scm",(void*)f_7892},
{"f_7896support.scm",(void*)f_7896},
{"f_7890support.scm",(void*)f_7890},
{"f_7847support.scm",(void*)f_7847},
{"f_7851support.scm",(void*)f_7851},
{"f_7860support.scm",(void*)f_7860},
{"f_7864support.scm",(void*)f_7864},
{"f_7854support.scm",(void*)f_7854},
{"f_7812support.scm",(void*)f_7812},
{"f_7818support.scm",(void*)f_7818},
{"f_7845support.scm",(void*)f_7845},
{"f_7831support.scm",(void*)f_7831},
{"f_7765support.scm",(void*)f_7765},
{"f_7771support.scm",(void*)f_7771},
{"f_7810support.scm",(void*)f_7810},
{"f_7792support.scm",(void*)f_7792},
{"f_7597support.scm",(void*)f_7597},
{"f_7754support.scm",(void*)f_7754},
{"f_7741support.scm",(void*)f_7741},
{"f_7747support.scm",(void*)f_7747},
{"f_7600support.scm",(void*)f_7600},
{"f_7619support.scm",(void*)f_7619},
{"f_7703support.scm",(void*)f_7703},
{"f_7715support.scm",(void*)f_7715},
{"f_7673support.scm",(void*)f_7673},
{"f_7684support.scm",(void*)f_7684},
{"f_7664support.scm",(void*)f_7664},
{"f_7650support.scm",(void*)f_7650},
{"f_7638support.scm",(void*)f_7638},
{"f_7519support.scm",(void*)f_7519},
{"f_7525support.scm",(void*)f_7525},
{"f_7580support.scm",(void*)f_7580},
{"f_7553support.scm",(void*)f_7553},
{"f_7547support.scm",(void*)f_7547},
{"f_7523support.scm",(void*)f_7523},
{"f_7281support.scm",(void*)f_7281},
{"f_7462support.scm",(void*)f_7462},
{"f_7421support.scm",(void*)f_7421},
{"f_7374support.scm",(void*)f_7374},
{"f_7352support.scm",(void*)f_7352},
{"f_6995support.scm",(void*)f_6995},
{"f_7275support.scm",(void*)f_7275},
{"f_7007support.scm",(void*)f_7007},
{"f_7017support.scm",(void*)f_7017},
{"f_7035support.scm",(void*)f_7035},
{"f_7069support.scm",(void*)f_7069},
{"f_6998support.scm",(void*)f_6998},
{"f_6700support.scm",(void*)f_6700},
{"f_6989support.scm",(void*)f_6989},
{"f_6706support.scm",(void*)f_6706},
{"f_6716support.scm",(void*)f_6716},
{"f_6725support.scm",(void*)f_6725},
{"f_6737support.scm",(void*)f_6737},
{"f_6749support.scm",(void*)f_6749},
{"f_6755support.scm",(void*)f_6755},
{"f_6789support.scm",(void*)f_6789},
{"f_6660support.scm",(void*)f_6660},
{"f_6694support.scm",(void*)f_6694},
{"f_6666support.scm",(void*)f_6666},
{"f_6670support.scm",(void*)f_6670},
{"f_6629support.scm",(void*)f_6629},
{"f_6642support.scm",(void*)f_6642},
{"f_6633support.scm",(void*)f_6633},
{"f_6598support.scm",(void*)f_6598},
{"f_6611support.scm",(void*)f_6611},
{"f_6602support.scm",(void*)f_6602},
{"f_5815support.scm",(void*)f_5815},
{"f_6592support.scm",(void*)f_6592},
{"f_5821support.scm",(void*)f_5821},
{"f_5827support.scm",(void*)f_5827},
{"f_5852support.scm",(void*)f_5852},
{"f_5867support.scm",(void*)f_5867},
{"f_5882support.scm",(void*)f_5882},
{"f_5920support.scm",(void*)f_5920},
{"f_5935support.scm",(void*)f_5935},
{"f_5977support.scm",(void*)f_5977},
{"f_6004support.scm",(void*)f_6004},
{"f_6019support.scm",(void*)f_6019},
{"f_6163support.scm",(void*)f_6163},
{"f_6335support.scm",(void*)f_6335},
{"f_6223support.scm",(void*)f_6223},
{"f_6227support.scm",(void*)f_6227},
{"f_6191support.scm",(void*)f_6191},
{"f_6195support.scm",(void*)f_6195},
{"f_6186support.scm",(void*)f_6186},
{"f_6078support.scm",(void*)f_6078},
{"f_6093support.scm",(void*)f_6093},
{"f_6034support.scm",(void*)f_6034},
{"f_5938support.scm",(void*)f_5938},
{"f_5953support.scm",(void*)f_5953},
{"f_5885support.scm",(void*)f_5885},
{"f_5779support.scm",(void*)f_5779},
{"f_5783support.scm",(void*)f_5783},
{"f_5794support.scm",(void*)f_5794},
{"f_5800support.scm",(void*)f_5800},
{"f_5804support.scm",(void*)f_5804},
{"f_5786support.scm",(void*)f_5786},
{"f_5740support.scm",(void*)f_5740},
{"f_5752support.scm",(void*)f_5752},
{"f_5759support.scm",(void*)f_5759},
{"f_5762support.scm",(void*)f_5762},
{"f_5765support.scm",(void*)f_5765},
{"f_5768support.scm",(void*)f_5768},
{"f_5771support.scm",(void*)f_5771},
{"f_5774support.scm",(void*)f_5774},
{"f_5746support.scm",(void*)f_5746},
{"f_5660support.scm",(void*)f_5660},
{"f_5669support.scm",(void*)f_5669},
{"f_5675support.scm",(void*)f_5675},
{"f_5664support.scm",(void*)f_5664},
{"f_5618support.scm",(void*)f_5618},
{"f_5658support.scm",(void*)f_5658},
{"f_5654support.scm",(void*)f_5654},
{"f_5622support.scm",(void*)f_5622},
{"f_5631support.scm",(void*)f_5631},
{"f_5634support.scm",(void*)f_5634},
{"f_5647support.scm",(void*)f_5647},
{"f_5639support.scm",(void*)f_5639},
{"f_5560support.scm",(void*)f_5560},
{"f_5566support.scm",(void*)f_5566},
{"f_5570support.scm",(void*)f_5570},
{"f_5616support.scm",(void*)f_5616},
{"f_5597support.scm",(void*)f_5597},
{"f_5516support.scm",(void*)f_5516},
{"f_5534support.scm",(void*)f_5534},
{"f_5545support.scm",(void*)f_5545},
{"f_5538support.scm",(void*)f_5538},
{"f_5542support.scm",(void*)f_5542},
{"f_5523support.scm",(void*)f_5523},
{"f_5528support.scm",(void*)f_5528},
{"f_5485support.scm",(void*)f_5485},
{"f_5491support.scm",(void*)f_5491},
{"f_5498support.scm",(void*)f_5498},
{"f_5501support.scm",(void*)f_5501},
{"f_5402support.scm",(void*)f_5402},
{"f_5411support.scm",(void*)f_5411},
{"f_5447support.scm",(void*)f_5447},
{"f_5454support.scm",(void*)f_5454},
{"f_5415support.scm",(void*)f_5415},
{"f_5433support.scm",(void*)f_5433},
{"f_5431support.scm",(void*)f_5431},
{"f_5420support.scm",(void*)f_5420},
{"f_5424support.scm",(void*)f_5424},
{"f_5310support.scm",(void*)f_5310},
{"f_5334support.scm",(void*)f_5334},
{"f_5224support.scm",(void*)f_5224},
{"f_5230support.scm",(void*)f_5230},
{"f_5246support.scm",(void*)f_5246},
{"f_5260support.scm",(void*)f_5260},
{"f_5268support.scm",(void*)f_5268},
{"f_5029support.scm",(void*)f_5029},
{"f_5208support.scm",(void*)f_5208},
{"f_5214support.scm",(void*)f_5214},
{"f_5104support.scm",(void*)f_5104},
{"f_5126support.scm",(void*)f_5126},
{"f_5139support.scm",(void*)f_5139},
{"f_5170support.scm",(void*)f_5170},
{"f_5061support.scm",(void*)f_5061},
{"f_5083support.scm",(void*)f_5083},
{"f_5032support.scm",(void*)f_5032},
{"f_5056support.scm",(void*)f_5056},
{"f_4967support.scm",(void*)f_4967},
{"f_4971support.scm",(void*)f_4971},
{"f_4974support.scm",(void*)f_4974},
{"f_4977support.scm",(void*)f_4977},
{"f_4988support.scm",(void*)f_4988},
{"f_4933support.scm",(void*)f_4933},
{"f_4939support.scm",(void*)f_4939},
{"f_4953support.scm",(void*)f_4953},
{"f_4957support.scm",(void*)f_4957},
{"f_4755support.scm",(void*)f_4755},
{"f_4759support.scm",(void*)f_4759},
{"f_4767support.scm",(void*)f_4767},
{"f_4916support.scm",(void*)f_4916},
{"f_4924support.scm",(void*)f_4924},
{"f_4919support.scm",(void*)f_4919},
{"f_4868support.scm",(void*)f_4868},
{"f_4872support.scm",(void*)f_4872},
{"f_4875support.scm",(void*)f_4875},
{"f_4910support.scm",(void*)f_4910},
{"f_4902support.scm",(void*)f_4902},
{"f_4886support.scm",(void*)f_4886},
{"f_4881support.scm",(void*)f_4881},
{"f_4835support.scm",(void*)f_4835},
{"f_4838support.scm",(void*)f_4838},
{"f_4849support.scm",(void*)f_4849},
{"f_4844support.scm",(void*)f_4844},
{"f_4819support.scm",(void*)f_4819},
{"f_4811support.scm",(void*)f_4811},
{"f_4806support.scm",(void*)f_4806},
{"f_4790support.scm",(void*)f_4790},
{"f_4761support.scm",(void*)f_4761},
{"f_4662support.scm",(void*)f_4662},
{"f_4668support.scm",(void*)f_4668},
{"f_4680support.scm",(void*)f_4680},
{"f_4684support.scm",(void*)f_4684},
{"f_4687support.scm",(void*)f_4687},
{"f_4747support.scm",(void*)f_4747},
{"f_4723support.scm",(void*)f_4723},
{"f_4706support.scm",(void*)f_4706},
{"f_4710support.scm",(void*)f_4710},
{"f_4692support.scm",(void*)f_4692},
{"f_4674support.scm",(void*)f_4674},
{"f_4614support.scm",(void*)f_4614},
{"f_4620support.scm",(void*)f_4620},
{"f_4640support.scm",(void*)f_4640},
{"f_4644support.scm",(void*)f_4644},
{"f_4320support.scm",(void*)f_4320},
{"f_4326support.scm",(void*)f_4326},
{"f_4345support.scm",(void*)f_4345},
{"f_4555support.scm",(void*)f_4555},
{"f_4585support.scm",(void*)f_4585},
{"f_4581support.scm",(void*)f_4581},
{"f_4562support.scm",(void*)f_4562},
{"f_4566support.scm",(void*)f_4566},
{"f_4501support.scm",(void*)f_4501},
{"f_4542support.scm",(void*)f_4542},
{"f_4515support.scm",(void*)f_4515},
{"f_4519support.scm",(void*)f_4519},
{"f_4477support.scm",(void*)f_4477},
{"f_4444support.scm",(void*)f_4444},
{"f_4423support.scm",(void*)f_4423},
{"f_4419support.scm",(void*)f_4419},
{"f_4407support.scm",(void*)f_4407},
{"f_4415support.scm",(void*)f_4415},
{"f_4411support.scm",(void*)f_4411},
{"f_4369support.scm",(void*)f_4369},
{"f_4352support.scm",(void*)f_4352},
{"f_3812support.scm",(void*)f_3812},
{"f_4315support.scm",(void*)f_4315},
{"f_4318support.scm",(void*)f_4318},
{"f_3815support.scm",(void*)f_3815},
{"f_4305support.scm",(void*)f_4305},
{"f_4063support.scm",(void*)f_4063},
{"f_4185support.scm",(void*)f_4185},
{"f_4228support.scm",(void*)f_4228},
{"f_4242support.scm",(void*)f_4242},
{"f_4249support.scm",(void*)f_4249},
{"f_4256support.scm",(void*)f_4256},
{"f_4246support.scm",(void*)f_4246},
{"f_4235support.scm",(void*)f_4235},
{"f_4222support.scm",(void*)f_4222},
{"f_4210support.scm",(void*)f_4210},
{"f_4194support.scm",(void*)f_4194},
{"f_4164support.scm",(void*)f_4164},
{"f_4148support.scm",(void*)f_4148},
{"f_4144support.scm",(void*)f_4144},
{"f_4111support.scm",(void*)f_4111},
{"f_4072support.scm",(void*)f_4072},
{"f_4041support.scm",(void*)f_4041},
{"f_4027support.scm",(void*)f_4027},
{"f_4001support.scm",(void*)f_4001},
{"f_3950support.scm",(void*)f_3950},
{"f_3970support.scm",(void*)f_3970},
{"f_3960support.scm",(void*)f_3960},
{"f_3968support.scm",(void*)f_3968},
{"f_3953support.scm",(void*)f_3953},
{"f_3900support.scm",(void*)f_3900},
{"f_3903support.scm",(void*)f_3903},
{"f_3910support.scm",(void*)f_3910},
{"f_3897support.scm",(void*)f_3897},
{"f_3874support.scm",(void*)f_3874},
{"f_3803support.scm",(void*)f_3803},
{"f_3794support.scm",(void*)f_3794},
{"f_3788support.scm",(void*)f_3788},
{"f_3779support.scm",(void*)f_3779},
{"f_3770support.scm",(void*)f_3770},
{"f_3761support.scm",(void*)f_3761},
{"f_3752support.scm",(void*)f_3752},
{"f_3743support.scm",(void*)f_3743},
{"f_3734support.scm",(void*)f_3734},
{"f_3728support.scm",(void*)f_3728},
{"f_3722support.scm",(void*)f_3722},
{"f_3335support.scm",(void*)f_3335},
{"f_3341support.scm",(void*)f_3341},
{"f_3345support.scm",(void*)f_3345},
{"f_3425support.scm",(void*)f_3425},
{"f_3435support.scm",(void*)f_3435},
{"f_3451support.scm",(void*)f_3451},
{"f_3508support.scm",(void*)f_3508},
{"f_3539support.scm",(void*)f_3539},
{"f_3529support.scm",(void*)f_3529},
{"f_3515support.scm",(void*)f_3515},
{"f_3519support.scm",(void*)f_3519},
{"f_3499support.scm",(void*)f_3499},
{"f_3489support.scm",(void*)f_3489},
{"f_3466support.scm",(void*)f_3466},
{"f_3438support.scm",(void*)f_3438},
{"f_3348support.scm",(void*)f_3348},
{"f_3383support.scm",(void*)f_3383},
{"f_3351support.scm",(void*)f_3351},
{"f_3354support.scm",(void*)f_3354},
{"f_3357support.scm",(void*)f_3357},
{"f_3316support.scm",(void*)f_3316},
{"f_3322support.scm",(void*)f_3322},
{"f_3333support.scm",(void*)f_3333},
{"f_3292support.scm",(void*)f_3292},
{"f_3298support.scm",(void*)f_3298},
{"f_3308support.scm",(void*)f_3308},
{"f_3256support.scm",(void*)f_3256},
{"f_3263support.scm",(void*)f_3263},
{"f_3266support.scm",(void*)f_3266},
{"f_3246support.scm",(void*)f_3246},
{"f_3189support.scm",(void*)f_3189},
{"f_3193support.scm",(void*)f_3193},
{"f_3223support.scm",(void*)f_3223},
{"f_3137support.scm",(void*)f_3137},
{"f_3141support.scm",(void*)f_3141},
{"f_3168support.scm",(void*)f_3168},
{"f_3091support.scm",(void*)f_3091},
{"f_3095support.scm",(void*)f_3095},
{"f_3117support.scm",(void*)f_3117},
{"f_3073support.scm",(void*)f_3073},
{"f_3077support.scm",(void*)f_3077},
{"f_3085support.scm",(void*)f_3085},
{"f_3055support.scm",(void*)f_3055},
{"f_3059support.scm",(void*)f_3059},
{"f_2994support.scm",(void*)f_2994},
{"f_3031support.scm",(void*)f_3031},
{"f_3035support.scm",(void*)f_3035},
{"f_3038support.scm",(void*)f_3038},
{"f_2998support.scm",(void*)f_2998},
{"f_3016support.scm",(void*)f_3016},
{"f_3020support.scm",(void*)f_3020},
{"f_3001support.scm",(void*)f_3001},
{"f_3006support.scm",(void*)f_3006},
{"f_2937support.scm",(void*)f_2937},
{"f_2941support.scm",(void*)f_2941},
{"f_2945support.scm",(void*)f_2945},
{"f_2934support.scm",(void*)f_2934},
{"f_2831support.scm",(void*)f_2831},
{"f_2840support.scm",(void*)f_2840},
{"f_2871support.scm",(void*)f_2871},
{"f_2921support.scm",(void*)f_2921},
{"f_2927support.scm",(void*)f_2927},
{"f_2877support.scm",(void*)f_2877},
{"f_2905support.scm",(void*)f_2905},
{"f_2919support.scm",(void*)f_2919},
{"f_2911support.scm",(void*)f_2911},
{"f_2881support.scm",(void*)f_2881},
{"f_2846support.scm",(void*)f_2846},
{"f_2852support.scm",(void*)f_2852},
{"f_2863support.scm",(void*)f_2863},
{"f_2860support.scm",(void*)f_2860},
{"f_2838support.scm",(void*)f_2838},
{"f_2456support.scm",(void*)f_2456},
{"f_2820support.scm",(void*)f_2820},
{"f_2459support.scm",(void*)f_2459},
{"f_2664support.scm",(void*)f_2664},
{"f_2673support.scm",(void*)f_2673},
{"f_2774support.scm",(void*)f_2774},
{"f_2770support.scm",(void*)f_2770},
{"f_2720support.scm",(void*)f_2720},
{"f_2743support.scm",(void*)f_2743},
{"f_2739support.scm",(void*)f_2739},
{"f_2683support.scm",(void*)f_2683},
{"f_2686support.scm",(void*)f_2686},
{"f_2706support.scm",(void*)f_2706},
{"f_2714support.scm",(void*)f_2714},
{"f_2700support.scm",(void*)f_2700},
{"f_2704support.scm",(void*)f_2704},
{"f_2613support.scm",(void*)f_2613},
{"f_2633support.scm",(void*)f_2633},
{"f_2625support.scm",(void*)f_2625},
{"f_2629support.scm",(void*)f_2629},
{"f_2461support.scm",(void*)f_2461},
{"f_2471support.scm",(void*)f_2471},
{"f_2480support.scm",(void*)f_2480},
{"f_2504support.scm",(void*)f_2504},
{"f_2511support.scm",(void*)f_2511},
{"f_2491support.scm",(void*)f_2491},
{"f_2373support.scm",(void*)f_2373},
{"f_2379support.scm",(void*)f_2379},
{"f_2444support.scm",(void*)f_2444},
{"f_2407support.scm",(void*)f_2407},
{"f_2437support.scm",(void*)f_2437},
{"f_2425support.scm",(void*)f_2425},
{"f_2313support.scm",(void*)f_2313},
{"f_2329support.scm",(void*)f_2329},
{"f_2371support.scm",(void*)f_2371},
{"f_2335support.scm",(void*)f_2335},
{"f_2350support.scm",(void*)f_2350},
{"f_2215support.scm",(void*)f_2215},
{"f_2230support.scm",(void*)f_2230},
{"f_2241support.scm",(void*)f_2241},
{"f_2284support.scm",(void*)f_2284},
{"f_2260support.scm",(void*)f_2260},
{"f_2219support.scm",(void*)f_2219},
{"f_2179support.scm",(void*)f_2179},
{"f_2149support.scm",(void*)f_2149},
{"f_2103support.scm",(void*)f_2103},
{"f_2072support.scm",(void*)f_2072},
{"f_2078support.scm",(void*)f_2078},
{"f_2093support.scm",(void*)f_2093},
{"f_2009support.scm",(void*)f_2009},
{"f_2023support.scm",(void*)f_2023},
{"f_2025support.scm",(void*)f_2025},
{"f_2054support.scm",(void*)f_2054},
{"f_2033support.scm",(void*)f_2033},
{"f_1997support.scm",(void*)f_1997},
{"f_1950support.scm",(void*)f_1950},
{"f_1966support.scm",(void*)f_1966},
{"f_1978support.scm",(void*)f_1978},
{"f_1943support.scm",(void*)f_1943},
{"f_1936support.scm",(void*)f_1936},
{"f_1880support.scm",(void*)f_1880},
{"f_1934support.scm",(void*)f_1934},
{"f_1884support.scm",(void*)f_1884},
{"f_1907support.scm",(void*)f_1907},
{"f_1786support.scm",(void*)f_1786},
{"f_1802support.scm",(void*)f_1802},
{"f_1804support.scm",(void*)f_1804},
{"f_1826support.scm",(void*)f_1826},
{"f_1865support.scm",(void*)f_1865},
{"f_1833support.scm",(void*)f_1833},
{"f_1849support.scm",(void*)f_1849},
{"f_1837support.scm",(void*)f_1837},
{"f_1841support.scm",(void*)f_1841},
{"f_1798support.scm",(void*)f_1798},
{"f_1742support.scm",(void*)f_1742},
{"f_1748support.scm",(void*)f_1748},
{"f_1772support.scm",(void*)f_1772},
{"f_1717support.scm",(void*)f_1717},
{"f_1740support.scm",(void*)f_1740},
{"f_1696support.scm",(void*)f_1696},
{"f_1660support.scm",(void*)f_1660},
{"f_1666support.scm",(void*)f_1666},
{"f_1592support.scm",(void*)f_1592},
{"f_1616support.scm",(void*)f_1616},
{"f_1595support.scm",(void*)f_1595},
{"f_1603support.scm",(void*)f_1603},
{"f_1607support.scm",(void*)f_1607},
{"f_1549support.scm",(void*)f_1549},
{"f_1555support.scm",(void*)f_1555},
{"f_1578support.scm",(void*)f_1578},
{"f_1582support.scm",(void*)f_1582},
{"f_1546support.scm",(void*)f_1546},
{"f_1521support.scm",(void*)f_1521},
{"f_1525support.scm",(void*)f_1525},
{"f_1528support.scm",(void*)f_1528},
{"f_1539support.scm",(void*)f_1539},
{"f_1531support.scm",(void*)f_1531},
{"f_1534support.scm",(void*)f_1534},
{"f_1502support.scm",(void*)f_1502},
{"f_1506support.scm",(void*)f_1506},
{"f_1519support.scm",(void*)f_1519},
{"f_1509support.scm",(void*)f_1509},
{"f_1512support.scm",(void*)f_1512},
{"f_1473support.scm",(void*)f_1473},
{"f_1480support.scm",(void*)f_1480},
{"f_1483support.scm",(void*)f_1483},
{"f_1493support.scm",(void*)f_1493},
{"f_1486support.scm",(void*)f_1486},
{"f_1433support.scm",(void*)f_1433},
{"f_1443support.scm",(void*)f_1443},
{"f_1458support.scm",(void*)f_1458},
{"f_1463support.scm",(void*)f_1463},
{"f_1471support.scm",(void*)f_1471},
{"f_1446support.scm",(void*)f_1446},
{"f_1449support.scm",(void*)f_1449},
{"f_1452support.scm",(void*)f_1452},
{"f_1406support.scm",(void*)f_1406},
{"f_1420support.scm",(void*)f_1420},
{"f_1401support.scm",(void*)f_1401},
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
