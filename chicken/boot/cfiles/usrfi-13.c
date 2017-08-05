/* Generated from srfi-13.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-13.scm -output-file usrfi-13.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: srfi_13
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_14_toplevel)
C_externimport void C_ccall C_srfi_14_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[158];


C_noret_decl(C_srfi_13_toplevel)
C_externexport void C_ccall C_srfi_13_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7391)
static void C_ccall f_7391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7346)
static void C_fcall f_7346(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7352)
static void C_fcall f_7352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7374)
static void C_ccall f_7374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7256)
static void C_fcall f_7256(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7269)
static void C_ccall f_7269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7287)
static void C_fcall f_7287(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7122)
static void C_ccall f_7122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_7122)
static void C_ccall f_7122r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7150)
static void C_ccall f_7150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7140)
static void C_ccall f_7140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7037)
static void C_ccall f_7037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7100)
static void C_ccall f_7100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7103)
static void C_ccall f_7103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7097)
static void C_ccall f_7097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7018)
static void C_ccall f_7018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7008)
static void C_ccall f_7008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6908)
static void C_ccall f_6908(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6908)
static void C_ccall f_6908r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6926)
static void C_ccall f_6926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6932)
static void C_fcall f_6932(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6970)
static void C_ccall f_6970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6920)
static void C_ccall f_6920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_6861)
static void C_ccall f_6861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6894)
static void C_ccall f_6894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6814)
static void C_fcall f_6814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6818)
static void C_ccall f_6818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6821)
static void C_ccall f_6821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6826)
static void C_fcall f_6826(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6824)
static void C_ccall f_6824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6712)
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6762)
static void C_fcall f_6762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6633)
static C_word C_fcall f_6633(C_word t0,C_word t1);
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6548)
static void C_fcall f_6548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6577)
static C_word C_fcall f_6577(C_word t0,C_word t1);
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6440)
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6499)
static void C_fcall f_6499(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6515)
static void C_ccall f_6515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6382)
static void C_ccall f_6382r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6404)
static void C_fcall f_6404(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6388)
static void C_ccall f_6388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6349)
static C_word C_fcall f_6349(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_6333)
static void C_ccall f_6333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static C_word C_fcall f_6300(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6181)
static void C_fcall f_6181(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6213)
static void C_fcall f_6213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6166)
static void C_ccall f_6166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_6116)
static void C_fcall f_6116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6123)
static void C_ccall f_6123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5993)
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_fcall f_6017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6032)
static void C_fcall f_6032(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_ccall f_6003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5884)
static void C_ccall f_5884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5851)
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5789)
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5672)
static void C_fcall f_5672(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5722)
static C_word C_fcall f_5722(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5684)
static C_word C_fcall f_5684(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5624)
static C_word C_fcall f_5624(C_word t0,C_word t1);
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5479)
static void C_ccall f_5479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_fcall f_5569(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static void C_fcall f_5530(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static C_word C_fcall f_5491(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5438)
static void C_fcall f_5438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5399)
static void C_fcall f_5399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5360)
static C_word C_fcall f_5360(C_word t0,C_word t1);
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5233)
static C_word C_fcall f_5233(C_word t0,C_word t1);
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_fcall f_5180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5141)
static void C_fcall f_5141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static C_word C_fcall f_5102(C_word t0,C_word t1);
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_fcall f_5045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5010)
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static C_word C_fcall f_4975(C_word t0,C_word t1);
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4871)
static void C_ccall f_4871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4340)
static void C_fcall f_4340(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4346)
static void C_fcall f_4346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4225)
static void C_fcall f_4225(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4182)
static void C_fcall f_4182(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4118)
static void C_fcall f_4118(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4153)
static C_word C_fcall f_4153(C_word t0,C_word t1);
C_noret_decl(f_4102)
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4083)
static void C_fcall f_4083(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4070)
static void C_ccall f_4070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4035)
static void C_fcall f_4035(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4010)
static void C_ccall f_4010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3984)
static void C_fcall f_3984(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3926)
static void C_ccall f_3926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3933)
static void C_fcall f_3933(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3882)
static void C_fcall f_3882(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3807)
static void C_fcall f_3807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3756)
static void C_fcall f_3756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3708)
static void C_fcall f_3708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3657)
static void C_fcall f_3657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3587)
static void C_ccall f_3587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3606)
static void C_fcall f_3606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_ccall f_3581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3508)
static void C_ccall f_3508r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3520)
static void C_ccall f_3520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3555)
static void C_fcall f_3555(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3446)
static void C_ccall f_3446r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3480)
static void C_fcall f_3480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_fcall f_3324(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_fcall f_3359(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_fcall f_3262(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_fcall f_3297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3158)
static void C_ccall f_3158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2845)
static void C_fcall f_2845(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_fcall f_2858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_fcall f_2871(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2906)
static void C_ccall f_2906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_fcall f_2881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_fcall f_2772(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_fcall f_2785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_fcall f_2800(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_fcall f_2687(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_fcall f_2713(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2723)
static void C_fcall f_2723(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_fcall f_2614(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_fcall f_2627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_fcall f_2632(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2642)
static void C_fcall f_2642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2591)
static void C_fcall f_2591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2548)
static void C_fcall f_2548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_fcall f_2507(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static C_word C_fcall f_2472(C_word t0,C_word t1);
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_fcall f_2418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_fcall f_2377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2342)
static C_word C_fcall f_2342(C_word t0,C_word t1);
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2299)
static void C_fcall f_2299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2258)
static void C_fcall f_2258(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_fcall f_2079(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_2085)
static void C_fcall f_2085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_fcall f_1900(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_1906)
static void C_fcall f_1906(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_fcall f_1990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1851)
static void C_fcall f_1851(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1805)
static void C_fcall f_1805(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_fcall f_1750(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1760)
static void C_fcall f_1760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_fcall f_1681(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1701)
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1623)
static void C_fcall f_1623(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1630)
static void C_fcall f_1630(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1525)
static void C_ccall f_1525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_7346)
static void C_fcall trf_7346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7346(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7346(t0,t1,t2,t3);}

C_noret_decl(trf_7352)
static void C_fcall trf_7352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7352(t0,t1,t2);}

C_noret_decl(trf_7256)
static void C_fcall trf_7256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7256(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7256(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7287)
static void C_fcall trf_7287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7287(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7287(t0,t1,t2,t3);}

C_noret_decl(trf_6932)
static void C_fcall trf_6932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6932(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6932(t0,t1,t2,t3);}

C_noret_decl(trf_6814)
static void C_fcall trf_6814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6814(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6814(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6826)
static void C_fcall trf_6826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6826(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6826(t0,t1,t2,t3);}

C_noret_decl(trf_6712)
static void C_fcall trf_6712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6712(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6712(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6762)
static void C_fcall trf_6762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6762(t0,t1);}

C_noret_decl(trf_6548)
static void C_fcall trf_6548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6548(t0,t1,t2,t3);}

C_noret_decl(trf_6440)
static void C_fcall trf_6440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6440(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6440(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6499)
static void C_fcall trf_6499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6499(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6499(t0,t1,t2,t3);}

C_noret_decl(trf_6404)
static void C_fcall trf_6404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6404(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6404(t0,t1,t2,t3);}

C_noret_decl(trf_6181)
static void C_fcall trf_6181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6181(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6181(t0,t1,t2,t3);}

C_noret_decl(trf_6213)
static void C_fcall trf_6213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6213(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6213(t0,t1,t2);}

C_noret_decl(trf_6116)
static void C_fcall trf_6116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6116(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6116(t0,t1,t2);}

C_noret_decl(trf_6017)
static void C_fcall trf_6017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6017(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6017(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6032)
static void C_fcall trf_6032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6032(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6032(t0,t1,t2);}

C_noret_decl(trf_5893)
static void C_fcall trf_5893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5893(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5893(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5851)
static void C_fcall trf_5851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5851(t0,t1,t2);}

C_noret_decl(trf_5789)
static void C_fcall trf_5789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5789(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5789(t0,t1,t2);}

C_noret_decl(trf_5672)
static void C_fcall trf_5672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5672(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5672(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5569)
static void C_fcall trf_5569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5569(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5569(t0,t1,t2,t3);}

C_noret_decl(trf_5530)
static void C_fcall trf_5530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5530(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5530(t0,t1,t2,t3);}

C_noret_decl(trf_5438)
static void C_fcall trf_5438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5438(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5438(t0,t1,t2);}

C_noret_decl(trf_5399)
static void C_fcall trf_5399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5399(t0,t1,t2);}

C_noret_decl(trf_5303)
static void C_fcall trf_5303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5303(t0,t1,t2);}

C_noret_decl(trf_5268)
static void C_fcall trf_5268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5268(t0,t1,t2);}

C_noret_decl(trf_5180)
static void C_fcall trf_5180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5180(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5180(t0,t1,t2);}

C_noret_decl(trf_5141)
static void C_fcall trf_5141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5141(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5141(t0,t1,t2);}

C_noret_decl(trf_5045)
static void C_fcall trf_5045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5045(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5045(t0,t1,t2);}

C_noret_decl(trf_5010)
static void C_fcall trf_5010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5010(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5010(t0,t1,t2);}

C_noret_decl(trf_4340)
static void C_fcall trf_4340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4340(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4340(t0,t1,t2,t3);}

C_noret_decl(trf_4346)
static void C_fcall trf_4346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4346(t0,t1,t2);}

C_noret_decl(trf_4225)
static void C_fcall trf_4225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4225(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4225(t0,t1);}

C_noret_decl(trf_4182)
static void C_fcall trf_4182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4182(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4182(t0,t1);}

C_noret_decl(trf_4100)
static void C_fcall trf_4100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4100(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4100(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4118)
static void C_fcall trf_4118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4118(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4118(t0,t1,t2,t3);}

C_noret_decl(trf_4102)
static void C_fcall trf_4102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4102(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4102(t0,t1,t2,t3);}

C_noret_decl(trf_4083)
static void C_fcall trf_4083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4083(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4083(t0,t1);}

C_noret_decl(trf_4035)
static void C_fcall trf_4035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4035(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4035(t0,t1);}

C_noret_decl(trf_3984)
static void C_fcall trf_3984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3984(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3984(t0,t1);}

C_noret_decl(trf_3933)
static void C_fcall trf_3933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3933(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3933(t0,t1);}

C_noret_decl(trf_3882)
static void C_fcall trf_3882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3882(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3882(t0,t1);}

C_noret_decl(trf_3807)
static void C_fcall trf_3807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3807(t0,t1);}

C_noret_decl(trf_3756)
static void C_fcall trf_3756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3756(t0,t1);}

C_noret_decl(trf_3708)
static void C_fcall trf_3708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3708(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3708(t0,t1);}

C_noret_decl(trf_3657)
static void C_fcall trf_3657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3657(t0,t1);}

C_noret_decl(trf_3606)
static void C_fcall trf_3606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3606(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3606(t0,t1);}

C_noret_decl(trf_3555)
static void C_fcall trf_3555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3555(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3555(t0,t1);}

C_noret_decl(trf_3480)
static void C_fcall trf_3480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3480(t0,t1);}

C_noret_decl(trf_3324)
static void C_fcall trf_3324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3324(void *dummy){
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
f_3324(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(trf_3359)
static void C_fcall trf_3359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3359(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3359(t0,t1);}

C_noret_decl(trf_3262)
static void C_fcall trf_3262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3262(void *dummy){
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
f_3262(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(trf_3297)
static void C_fcall trf_3297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3297(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3297(t0,t1);}

C_noret_decl(trf_2845)
static void C_fcall trf_2845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2845(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2845(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2858)
static void C_fcall trf_2858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2858(t0,t1);}

C_noret_decl(trf_2871)
static void C_fcall trf_2871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2871(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2871(t0,t1,t2,t3);}

C_noret_decl(trf_2881)
static void C_fcall trf_2881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2881(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2881(t0,t1);}

C_noret_decl(trf_2772)
static void C_fcall trf_2772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2772(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2772(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2785)
static void C_fcall trf_2785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2785(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2785(t0,t1);}

C_noret_decl(trf_2790)
static void C_fcall trf_2790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2790(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2790(t0,t1,t2,t3);}

C_noret_decl(trf_2800)
static void C_fcall trf_2800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2800(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2800(t0,t1);}

C_noret_decl(trf_2687)
static void C_fcall trf_2687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2687(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2687(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2700(t0,t1);}

C_noret_decl(trf_2713)
static void C_fcall trf_2713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2713(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2713(t0,t1,t2,t3);}

C_noret_decl(trf_2723)
static void C_fcall trf_2723(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2723(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2723(t0,t1);}

C_noret_decl(trf_2614)
static void C_fcall trf_2614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2614(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2614(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2627)
static void C_fcall trf_2627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2627(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2627(t0,t1);}

C_noret_decl(trf_2632)
static void C_fcall trf_2632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2632(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2632(t0,t1,t2,t3);}

C_noret_decl(trf_2642)
static void C_fcall trf_2642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2642(t0,t1);}

C_noret_decl(trf_2591)
static void C_fcall trf_2591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2591(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2591(t0,t1,t2);}

C_noret_decl(trf_2548)
static void C_fcall trf_2548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2548(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2548(t0,t1,t2);}

C_noret_decl(trf_2507)
static void C_fcall trf_2507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2507(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2507(t0,t1,t2);}

C_noret_decl(trf_2418)
static void C_fcall trf_2418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2418(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2418(t0,t1,t2);}

C_noret_decl(trf_2377)
static void C_fcall trf_2377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2377(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2377(t0,t1,t2);}

C_noret_decl(trf_2299)
static void C_fcall trf_2299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2299(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2299(t0,t1,t2);}

C_noret_decl(trf_2258)
static void C_fcall trf_2258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2258(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2258(t0,t1,t2);}

C_noret_decl(trf_2079)
static void C_fcall trf_2079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2079(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_2079(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_2085)
static void C_fcall trf_2085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2085(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2085(t0,t1,t2,t3);}

C_noret_decl(trf_2172)
static void C_fcall trf_2172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2172(t0,t1,t2,t3);}

C_noret_decl(trf_1900)
static void C_fcall trf_1900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1900(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_1900(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_1906)
static void C_fcall trf_1906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1906(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1906(t0,t1,t2,t3);}

C_noret_decl(trf_1990)
static void C_fcall trf_1990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1990(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1990(t0,t1,t2,t3);}

C_noret_decl(trf_1851)
static void C_fcall trf_1851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1851(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1851(t0,t1,t2,t3);}

C_noret_decl(trf_1805)
static void C_fcall trf_1805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1805(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1805(t0,t1,t2,t3);}

C_noret_decl(trf_1750)
static void C_fcall trf_1750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1750(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1750(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1760)
static void C_fcall trf_1760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1760(t0,t1,t2);}

C_noret_decl(trf_1681)
static void C_fcall trf_1681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1681(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1681(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1701)
static void C_fcall trf_1701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1701(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1701(t0,t1,t2,t3);}

C_noret_decl(trf_1623)
static void C_fcall trf_1623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1623(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1623(t0,t1,t2,t3);}

C_noret_decl(trf_1630)
static void C_fcall trf_1630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1630(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1630(t0,t1);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_13_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_13_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_13_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1080)){
C_save(t1);
C_rereclaim2(1080*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,158);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],22,"string-parse-start+end");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_static_string(C_heaptop,26,"Illegal substring END spec");
lf[5]=C_static_string(C_heaptop,32,"Illegal substring START/END spec");
lf[6]=C_static_string(C_heaptop,28,"Illegal substring START spec");
lf[7]=C_h_intern(&lf[7],28,"string-parse-final-start+end");
lf[8]=C_static_string(C_heaptop,28,"Extra arguments to procedure");
lf[9]=C_h_intern(&lf[9],18,"substring-spec-ok\077");
lf[10]=C_h_intern(&lf[10],20,"check-substring-spec");
lf[11]=C_static_string(C_heaptop,23,"Illegal substring spec.");
lf[12]=C_h_intern(&lf[12],16,"substring/shared");
lf[14]=C_h_intern(&lf[14],13,"\003syssubstring");
lf[15]=C_h_intern(&lf[15],11,"string-copy");
lf[16]=C_h_intern(&lf[16],10,"string-map");
lf[18]=C_h_intern(&lf[18],11,"make-string");
lf[19]=C_h_intern(&lf[19],11,"string-map!");
lf[21]=C_h_intern(&lf[21],11,"string-fold");
lf[22]=C_h_intern(&lf[22],17,"string-fold-right");
lf[23]=C_h_intern(&lf[23],13,"string-unfold");
lf[24]=C_static_string(C_heaptop,0,"");
lf[25]=C_static_string(C_heaptop,0,"");
lf[27]=C_h_intern(&lf[27],3,"min");
lf[28]=C_h_intern(&lf[28],19,"string-unfold-right");
lf[29]=C_static_string(C_heaptop,0,"");
lf[30]=C_static_string(C_heaptop,0,"");
lf[31]=C_h_intern(&lf[31],15,"string-for-each");
lf[32]=C_h_intern(&lf[32],21,"string-for-each-index");
lf[33]=C_h_intern(&lf[33],12,"string-every");
lf[34]=C_h_intern(&lf[34],18,"char-set-contains\077");
lf[35]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[36]=C_h_intern(&lf[36],9,"char-set\077");
lf[37]=C_h_intern(&lf[37],10,"string-any");
lf[38]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[39]=C_h_intern(&lf[39],15,"string-tabulate");
lf[43]=C_h_intern(&lf[43],9,"char-ci=\077");
lf[45]=C_h_intern(&lf[45],20,"string-prefix-length");
lf[46]=C_h_intern(&lf[46],20,"string-suffix-length");
lf[47]=C_h_intern(&lf[47],23,"string-prefix-length-ci");
lf[48]=C_h_intern(&lf[48],23,"string-suffix-length-ci");
lf[49]=C_h_intern(&lf[49],14,"string-prefix\077");
lf[50]=C_h_intern(&lf[50],14,"string-suffix\077");
lf[51]=C_h_intern(&lf[51],17,"string-prefix-ci\077");
lf[52]=C_h_intern(&lf[52],17,"string-suffix-ci\077");
lf[55]=C_h_intern(&lf[55],9,"char-ci<\077");
lf[56]=C_h_intern(&lf[56],14,"string-compare");
lf[57]=C_h_intern(&lf[57],17,"string-compare-ci");
lf[58]=C_h_intern(&lf[58],7,"string=");
lf[59]=C_h_intern(&lf[59],6,"values");
lf[60]=C_h_intern(&lf[60],8,"string<>");
lf[61]=C_h_intern(&lf[61],7,"string<");
lf[62]=C_h_intern(&lf[62],7,"string>");
lf[63]=C_h_intern(&lf[63],8,"string<=");
lf[64]=C_h_intern(&lf[64],8,"string>=");
lf[65]=C_h_intern(&lf[65],10,"string-ci=");
lf[66]=C_h_intern(&lf[66],11,"string-ci<>");
lf[67]=C_h_intern(&lf[67],10,"string-ci<");
lf[68]=C_h_intern(&lf[68],10,"string-ci>");
lf[69]=C_h_intern(&lf[69],11,"string-ci<=");
lf[70]=C_h_intern(&lf[70],11,"string-ci>=");
lf[72]=C_h_intern(&lf[72],6,"modulo");
lf[73]=C_h_intern(&lf[73],11,"string-hash");
lf[74]=C_h_intern(&lf[74],13,"char->integer");
lf[75]=C_h_intern(&lf[75],14,"string-hash-ci");
lf[76]=C_h_intern(&lf[76],13,"string-upcase");
lf[77]=C_h_intern(&lf[77],11,"char-upcase");
lf[78]=C_h_intern(&lf[78],14,"string-upcase!");
lf[79]=C_h_intern(&lf[79],15,"string-downcase");
lf[80]=C_h_intern(&lf[80],13,"char-downcase");
lf[81]=C_h_intern(&lf[81],16,"string-downcase!");
lf[83]=C_h_intern(&lf[83],11,"string-skip");
lf[84]=C_h_intern(&lf[84],12,"string-index");
lf[85]=C_h_intern(&lf[85],17,"string-titlecase!");
lf[86]=C_h_intern(&lf[86],16,"string-titlecase");
lf[87]=C_h_intern(&lf[87],11,"string-take");
lf[88]=C_h_intern(&lf[88],17,"string-take-right");
lf[89]=C_h_intern(&lf[89],11,"string-drop");
lf[90]=C_h_intern(&lf[90],17,"string-drop-right");
lf[91]=C_h_intern(&lf[91],11,"string-trim");
lf[92]=C_h_intern(&lf[92],19,"char-set:whitespace");
lf[93]=C_static_string(C_heaptop,0,"");
lf[94]=C_h_intern(&lf[94],17,"string-trim-right");
lf[95]=C_static_string(C_heaptop,0,"");
lf[96]=C_h_intern(&lf[96],17,"string-skip-right");
lf[97]=C_h_intern(&lf[97],16,"string-trim-both");
lf[98]=C_static_string(C_heaptop,0,"");
lf[99]=C_h_intern(&lf[99],16,"string-pad-right");
lf[100]=C_h_intern(&lf[100],10,"string-pad");
lf[101]=C_h_intern(&lf[101],13,"string-delete");
lf[102]=C_h_intern(&lf[102],8,"char-set");
lf[103]=C_static_string(C_heaptop,54,"string-delete criteria not predicate, char or char-set");
lf[104]=C_h_intern(&lf[104],13,"string-filter");
lf[105]=C_static_string(C_heaptop,54,"string-delete criteria not predicate, char or char-set");
lf[106]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[107]=C_h_intern(&lf[107],18,"string-index-right");
lf[108]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[109]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[110]=C_static_string(C_heaptop,43,"CRITERIA param is neither char-set or char.");
lf[111]=C_h_intern(&lf[111],12,"string-count");
lf[112]=C_static_string(C_heaptop,43,"CRITERIA param is neither char-set or char.");
lf[113]=C_h_intern(&lf[113],12,"string-fill!");
lf[114]=C_h_intern(&lf[114],12,"string-copy!");
lf[115]=C_h_intern(&lf[115],15,"string-contains");
lf[116]=C_h_intern(&lf[116],18,"string-contains-ci");
lf[118]=C_h_intern(&lf[118],23,"make-kmp-restart-vector");
lf[119]=C_h_intern(&lf[119],6,"char=\077");
lf[120]=C_h_intern(&lf[120],11,"make-vector");
lf[121]=C_h_intern(&lf[121],8,"kmp-step");
lf[122]=C_h_intern(&lf[122],25,"string-kmp-partial-search");
lf[123]=C_h_intern(&lf[123],12,"string-null\077");
lf[124]=C_h_intern(&lf[124],14,"string-reverse");
lf[125]=C_h_intern(&lf[125],15,"string-reverse!");
lf[126]=C_h_intern(&lf[126],12,"string->list");
lf[127]=C_h_intern(&lf[127],20,"string-append/shared");
lf[128]=C_h_intern(&lf[128],25,"string-concatenate/shared");
lf[129]=C_static_string(C_heaptop,0,"");
lf[130]=C_h_intern(&lf[130],18,"string-concatenate");
lf[131]=C_h_intern(&lf[131],26,"string-concatenate-reverse");
lf[132]=C_static_string(C_heaptop,0,"");
lf[134]=C_h_intern(&lf[134],33,"string-concatenate-reverse/shared");
lf[135]=C_static_string(C_heaptop,0,"");
lf[136]=C_h_intern(&lf[136],14,"string-replace");
lf[137]=C_h_intern(&lf[137],15,"string-tokenize");
lf[138]=C_h_intern(&lf[138],16,"char-set:graphic");
lf[139]=C_h_intern(&lf[139],10,"xsubstring");
lf[140]=C_static_string(C_heaptop,0,"");
lf[141]=C_static_string(C_heaptop,34,"Cannot replicate empty (sub)string");
lf[144]=C_h_intern(&lf[144],13,"string-xcopy!");
lf[145]=C_static_string(C_heaptop,34,"Cannot replicate empty (sub)string");
lf[146]=C_h_intern(&lf[146],11,"string-join");
lf[147]=C_static_string(C_heaptop,1," ");
lf[148]=C_h_intern(&lf[148],5,"infix");
lf[149]=C_h_intern(&lf[149],12,"strict-infix");
lf[150]=C_h_intern(&lf[150],6,"prefix");
lf[151]=C_h_intern(&lf[151],6,"suffix");
lf[152]=C_static_string(C_heaptop,20,"Illegal join grammar");
lf[153]=C_static_string(C_heaptop,54,"Empty list cannot be joined with STRICT-INFIX grammar.");
lf[154]=C_static_string(C_heaptop,0,"");
lf[155]=C_static_string(C_heaptop,27,"STRINGS parameter not list.");
lf[156]=C_h_intern(&lf[156],17,"register-feature!");
lf[157]=C_h_intern(&lf[157],7,"srfi-13");
C_register_lf2(lf,158,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1418,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_14_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1416 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 64   register-feature! */
t3=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[157]);}

/* k1419 in k1416 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
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
C_word ab[198],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1421,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1423,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1513,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1540,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1580,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[12]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1596,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[13],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1623,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1645,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1663,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[17],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1681,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1732,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[20],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1750,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1787,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1829,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[23]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1875,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2054,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2240,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2281,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2318,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2448,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2578,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate(&lf[40],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2614,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate(&lf[41],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2687,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate(&lf[42],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2772,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate(&lf[44],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2845,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2930,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2960,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2990,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3020,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3050,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3080,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3110,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3140,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate(&lf[53],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3262,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate(&lf[54],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3324,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3386,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3416,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3446,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3508,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3575,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3626,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3677,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3725,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3773,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3835,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3902,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3953,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4004,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4052,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate(&lf[71],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4100,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4172,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4215,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4268,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4286,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4304,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4322,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate(&lf[82],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4340,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4399,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4417,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4442,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[88]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4448,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[89]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4461,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4470,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4483,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4525,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4571,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4621,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4676,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4735,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4843,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[84]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4951,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[107]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5074,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[83]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5209,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5332,tmp=(C_word)a,a+=2,tmp));
t75=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5467,tmp=(C_word)a,a+=2,tmp));
t76=C_mutate((C_word*)lf[113]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5602,tmp=(C_word)a,a+=2,tmp));
t77=C_mutate((C_word*)lf[114]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5643,tmp=(C_word)a,a+=2,tmp));
t78=C_mutate(&lf[26],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5672,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5753,tmp=(C_word)a,a+=2,tmp));
t80=C_mutate((C_word*)lf[116]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5815,tmp=(C_word)a,a+=2,tmp));
t81=C_mutate(&lf[117],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5877,tmp=(C_word)a,a+=2,tmp));
t82=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5975,tmp=(C_word)a,a+=2,tmp));
t83=C_mutate((C_word*)lf[121]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6110,tmp=(C_word)a,a+=2,tmp));
t84=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6148,tmp=(C_word)a,a+=2,tmp));
t85=C_mutate((C_word*)lf[123]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6269,tmp=(C_word)a,a+=2,tmp));
t86=C_mutate((C_word*)lf[124]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6272,tmp=(C_word)a,a+=2,tmp));
t87=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6327,tmp=(C_word)a,a+=2,tmp));
t88=C_mutate((C_word*)lf[126]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6382,tmp=(C_word)a,a+=2,tmp));
t89=C_mutate((C_word*)lf[127]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6428,tmp=(C_word)a,a+=2,tmp));
t90=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6434,tmp=(C_word)a,a+=2,tmp));
t91=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6536,tmp=(C_word)a,a+=2,tmp));
t92=C_mutate((C_word*)lf[131]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6609,tmp=(C_word)a,a+=2,tmp));
t93=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6691,tmp=(C_word)a,a+=2,tmp));
t94=C_mutate(&lf[133],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6814,tmp=(C_word)a,a+=2,tmp));
t95=C_mutate((C_word*)lf[136]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6857,tmp=(C_word)a,a+=2,tmp));
t96=C_mutate((C_word*)lf[137]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6908,tmp=(C_word)a,a+=2,tmp));
t97=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6990,tmp=(C_word)a,a+=2,tmp));
t98=C_mutate(&lf[143],*((C_word*)lf[113]+1));
t99=C_mutate((C_word*)lf[144]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7122,tmp=(C_word)a,a+=2,tmp));
t100=C_mutate(&lf[142],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7256,tmp=(C_word)a,a+=2,tmp));
t101=C_mutate((C_word*)lf[146]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7329,tmp=(C_word)a,a+=2,tmp));
t102=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t102+1)))(2,t102,C_SCHEME_UNDEFINED);}

/* string-join in k1419 in k1416 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_7329r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7329r(t0,t1,t2,t3);}}

static void C_ccall f_7329r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[147]:(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?lf[148]:(C_word)C_u_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t7,C_fix(1)));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7346,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7391,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t14=(C_word)C_eqp(t9,lf[148]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t9,lf[149]));
if(C_truep(t15)){
t16=(C_word)C_u_i_car(t2);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7408,a[2]=t16,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t18=(C_word)C_slot(t2,C_fix(1));
/* srfi-13.scm: 1935 buildit */
t19=t12;
f_7346(t19,t17,t18,C_SCHEME_END_OF_LIST);}
else{
t16=(C_word)C_eqp(t9,lf[150]);
if(C_truep(t16)){
/* srfi-13.scm: 1937 buildit */
t17=t12;
f_7346(t17,t13,t2,C_SCHEME_END_OF_LIST);}
else{
t17=(C_word)C_eqp(t9,lf[151]);
if(C_truep(t17)){
t18=(C_word)C_u_i_car(t2);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7438,a[2]=t18,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t20=(C_word)C_slot(t2,C_fix(1));
t21=(C_word)C_a_i_list(&a,1,t5);
/* srfi-13.scm: 1940 buildit */
t22=t12;
f_7346(t22,t19,t20,t21);}
else{
/* srfi-13.scm: 1942 ##sys#error */
t18=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t18+1)))(6,t18,t13,lf[146],lf[152],t9,*((C_word*)lf[146]+1));}}}}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t13=(C_word)C_eqp(t9,lf[149]);
if(C_truep(t13)){
/* srfi-13.scm: 1951 ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t1,lf[146],lf[153],*((C_word*)lf[146]+1));}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[154]);}}
else{
/* srfi-13.scm: 1946 ##sys#error */
t13=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t1,lf[146],lf[155],t2,*((C_word*)lf[146]+1));}}}

/* k7436 in string-join in k1419 in k1416 */
static void C_ccall f_7438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7438,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7391(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7406 in string-join in k1419 in k1416 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7408,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7391(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7389 in string-join in k1419 in k1416 */
static void C_ccall f_7391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1931 string-concatenate */
t2=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* buildit in string-join in k1419 in k1416 */
static void C_fcall f_7346(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7346,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7352,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7352(t7,t1,t2);}

/* recur in buildit in string-join in k1419 in k1416 */
static void C_fcall f_7352(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7352,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7374,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-13.scm: 1927 recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k7372 in recur in buildit in string-join in k1419 in k1416 */
static void C_ccall f_7374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7374,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* %multispan-repcopy! in k1419 in k1416 */
static void C_fcall f_7256(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7256,NULL,8,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_u_fixnum_difference(t8,t7);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7327,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=t9,a[7]=t8,a[8]=t5,a[9]=t6,a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1886 modulo */
t11=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t5,t9);}

/* k7325 in %multispan-repcopy! in k1419 in k1416 */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7327,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[10],t1);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1890 %string-copy! */
f_5672(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t2,((C_word*)t0)[7]);}

/* k7267 in k7325 in %multispan-repcopy! in k1419 in k1416 */
static void C_ccall f_7269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7269,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[8],t2);
t4=(C_word)C_fixnum_divide(t3,((C_word*)t0)[7]);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7287,a[2]=((C_word*)t0)[10],a[3]=t7,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_7287(t9,((C_word*)t0)[2],t5,t4);}

/* do1278 in k7267 in k7325 in %multispan-repcopy! in k1419 in k1416 */
static void C_fcall f_7287(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7287,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[9]);
t6=(C_word)C_u_fixnum_difference(((C_word*)t0)[8],t5);
t7=(C_word)C_u_fixnum_plus(((C_word*)t0)[7],t6);
/* srfi-13.scm: 1901 %string-copy! */
f_5672(t1,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[7],t7);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7312,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1903 %string-copy! */
f_5672(t5,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[2]);}}

/* k7310 in do1278 in k7267 in k7325 in %multispan-repcopy! in k1419 in k1416 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7287(t4,((C_word*)t0)[2],t2,t3);}

/* string-xcopy! in k1419 in k1416 */
static void C_ccall f_7122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr6r,(void*)f_7122r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_7122r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_7122r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(11);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7128,a[2]=t5,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7169,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1850 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t7,t8);}

/* a7168 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7169,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[5]);
t6=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],t5);
t7=(C_word)C_u_fixnum_difference(t4,t3);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7182,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[3],a[10]=t7,a[11]=t1,a[12]=t5,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 1864 check-substring-spec */
t9=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,*((C_word*)lf[144]+1),((C_word*)t0)[3],((C_word*)t0)[4],t6);}

/* k7180 in a7168 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7182(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7182,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[12],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[10],C_fix(0));
if(C_truep(t3)){
/* srfi-13.scm: 1866 ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc12)(void*)(*((C_word*)t4+1)))(12,t4,((C_word*)t0)[11],lf[144],lf[145],*((C_word*)lf[144]+1),((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(C_word)C_eqp(C_fix(1),((C_word*)t0)[10]);
if(C_truep(t4)){
t5=(C_word)C_subchar(((C_word*)t0)[7],((C_word*)t0)[4]);
/* srfi-13.scm: 1871 ##srfi13#string-fill! */
t6=lf[143];
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,((C_word*)t0)[11],((C_word*)t0)[9],t5,((C_word*)t0)[8],((C_word*)t0)[2]);}
else{
t5=(C_word)C_fixnum_divide(((C_word*)t0)[6],((C_word*)t0)[10]);
t6=(C_word)C_fixnum_divide(((C_word*)t0)[5],((C_word*)t0)[10]);
t7=(C_word)C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 1876 modulo */
t9=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,((C_word*)t0)[6],((C_word*)t0)[10]);}
else{
/* srfi-13.scm: 1880 %multispan-repcopy! */
f_7256(((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}}}}}

/* k7233 in k7180 in a7168 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7235,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7231,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1877 modulo */
t4=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7229 in k7233 in k7180 in a7168 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[7],t1);
/* srfi-13.scm: 1875 %string-copy! */
f_5672(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a7127 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7128,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7140,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7150,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1852 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t2,t3);}
else{
t2=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[3]));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1859 values */
C_values(5,0,t1,t3,C_fix(0),t2);}}

/* a7149 in a7127 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7150,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(((C_word*)t0)[2]);
/* srfi-13.scm: 1857 values */
C_values(5,0,t1,t4,t2,t3);}

/* a7139 in a7127 in string-xcopy! in k1419 in k1416 */
static void C_ccall f_7140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7140,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1852 string-parse-final-start+end */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[144]+1),((C_word*)t0)[2],t2);}

/* xsubstring in k1419 in k1416 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_6990r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6990r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6990r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6996,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7037,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1804 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a7036 in xsubstring in k1419 in k1416 */
static void C_ccall f_7037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7037,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_u_fixnum_difference(t4,t3);
t6=(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[3]);
t7=(C_word)C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[140]);}
else{
t8=(C_word)C_eqp(t5,C_fix(0));
if(C_truep(t8)){
/* srfi-13.scm: 1820 ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc10)(void*)(*((C_word*)t9+1)))(10,t9,t1,lf[139],lf[141],*((C_word*)lf[139]+1),((C_word*)t0)[2],((C_word*)t0)[3],t2,t3,t4);}
else{
t9=(C_word)C_eqp(C_fix(1),t5);
if(C_truep(t9)){
t10=(C_word)C_subchar(((C_word*)t0)[2],t3);
/* srfi-13.scm: 1824 make-string */
t11=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t6,t10);}
else{
t10=(C_word)C_fixnum_divide(((C_word*)t0)[3],t5);
t11=(C_word)C_fixnum_divide(t2,t5);
t12=(C_word)C_eqp(t10,t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7097,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1828 modulo */
t14=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t13,((C_word*)t0)[3],t5);}
else{
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7100,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1832 make-string */
t14=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t6);}}}}}

/* k7098 in a7036 in xsubstring in k1419 in k1416 */
static void C_ccall f_7100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7103,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1833 %multispan-repcopy! */
f_7256(t2,t1,C_fix(0),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7101 in k7098 in a7036 in xsubstring in k1419 in k1416 */
static void C_ccall f_7103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k7095 in a7036 in xsubstring in k1419 in k1416 */
static void C_ccall f_7097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7097,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7093,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1829 modulo */
t4=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7091 in k7095 in a7036 in xsubstring in k1419 in k1416 */
static void C_ccall f_7093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],t1);
/* srfi-13.scm: 1828 ##sys#substring */
t3=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a6995 in xsubstring in k1419 in k1416 */
static void C_ccall f_6996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6996,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7008,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7018,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1806 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t2,t3);}
else{
t2=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[3]));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1816 values */
C_values(5,0,t1,t3,C_fix(0),t2);}}

/* a7017 in a6995 in xsubstring in k1419 in k1416 */
static void C_ccall f_7018(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7018,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(((C_word*)t0)[2]);
/* srfi-13.scm: 1813 values */
C_values(5,0,t1,t4,t2,t3);}

/* a7007 in a6995 in xsubstring in k1419 in k1416 */
static void C_ccall f_7008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7008,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1806 string-parse-final-start+end */
t3=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[139]+1),((C_word*)t0)[2],t2);}

/* string-tokenize in k1419 in k1416 */
static void C_ccall f_6908(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_6908r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6908r(t0,t1,t2,t3);}}

static void C_ccall f_6908r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[138]+1):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6920,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6926,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a6925 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6926,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6932,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6932(t7,t1,t3,C_SCHEME_END_OF_LIST);}

/* lp in a6925 in string-tokenize in k1419 in k1416 */
static void C_fcall f_6932(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6932,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[3];
t6=t2;
if(C_truep((C_word)C_fixnum_lessp(t5,t6))){
/* srfi-13.scm: 1761 string-index-right */
t7=*((C_word*)lf[107]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
t7=t4;
f_6936(2,t7,C_SCHEME_FALSE);}}

/* k6934 in lp in a6925 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6936,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(C_fix(1),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6945,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1764 string-skip-right */
t4=*((C_word*)lf[96]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}

/* k6943 in k6934 in lp in a6925 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6945,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6959,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_u_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1767 ##sys#substring */
t4=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],t3,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6970,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1769 ##sys#substring */
t3=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k6968 in k6943 in k6934 in lp in a6925 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6970,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k6957 in k6943 in k6934 in lp in a6925 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6959,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* srfi-13.scm: 1766 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6932(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a6919 in string-tokenize in k1419 in k1416 */
static void C_ccall f_6920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6920,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[137]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-replace in k1419 in k1416 */
static void C_ccall f_6857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr6r,(void*)f_6857r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_6857r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_6857r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6861,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t2,a[6]=t6,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1738 check-substring-spec */
t8=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,*((C_word*)lf[136]+1),t2,t4,t5);}

/* k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1739 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a6871 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6872,4,t0,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[5]));
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[3]);
t7=(C_word)C_u_fixnum_difference(t4,t6);
t8=(C_word)C_u_fixnum_plus(t7,t5);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6885,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1743 make-string */
t10=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}

/* k6883 in a6871 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 1744 %string-copy! */
f_5672(t2,t1,C_fix(0),((C_word*)t0)[7],C_fix(0),((C_word*)t0)[9]);}

/* k6886 in k6883 in a6871 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6888,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6891,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 1745 %string-copy! */
f_5672(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6889 in k6886 in k6883 in a6871 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6894,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 1746 %string-copy! */
f_5672(t2,((C_word*)t0)[7],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6892 in k6889 in k6886 in k6883 in a6871 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a6865 in k6859 in string-replace in k1419 in k1416 */
static void C_ccall f_6866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6866,2,t0,t1);}
/* srfi-13.scm: 1739 string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[136]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_fcall f_6814(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6814,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6818,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_u_fixnum_plus(t5,t2);
/* srfi-13.scm: 1718 make-string */
t8=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k6816 in %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_ccall f_6818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6821,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1719 %string-copy! */
f_5672(t2,t1,((C_word*)t0)[5],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k6819 in k6816 in %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_ccall f_6821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6824,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6826,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6826(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k6819 in k6816 in %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_fcall f_6826(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6826,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_fix((C_word)C_header_size(t4));
t7=(C_word)C_u_fixnum_difference(t2,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6848,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1726 %string-copy! */
f_5672(t8,((C_word*)t0)[2],t7,t4,C_fix(0),t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6846 in lp in k6819 in k6816 in %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1727 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_6826(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6822 in k6819 in k6816 in %finish-string-concatenate-reverse in k1419 in k1416 */
static void C_ccall f_6824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-concatenate-reverse/shared in k1419 in k1416 */
static void C_ccall f_6691(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6691r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6691r(t0,t1,t2,t3);}}

static void C_ccall f_6691r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[135]:(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?(C_word)C_fix((C_word)C_header_size(t5)):(C_word)C_u_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t7,C_fix(1)));
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6712,a[2]=t9,a[3]=t5,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_6712(t15,t1,C_fix(0),C_SCHEME_FALSE,t2);}

/* lp in string-concatenate-reverse/shared in k1419 in k1416 */
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6712,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_u_i_car(t4);
t6=(C_word)C_fix((C_word)C_header_size(t5));
t7=(C_word)C_u_fixnum_plus(t2,t6);
t8=t3;
t9=(C_truep(t8)?t8:(C_word)C_eqp(t6,C_fix(0)));
t10=(C_truep(t9)?t3:t4);
t11=(C_word)C_slot(t4,C_fix(1));
/* srfi-13.scm: 1704 lp */
t19=t1;
t20=t7;
t21=t10;
t22=t11;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
/* srfi-13.scm: 1708 substring/shared */
t6=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t7)){
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_fix((C_word)C_header_size(t8));
t10=t2;
t11=t6;
f_6762(t11,(C_word)C_eqp(t10,t9));}
else{
t8=t6;
f_6762(t8,C_SCHEME_FALSE);}}}}

/* k6760 in lp in string-concatenate-reverse/shared in k1419 in k1416 */
static void C_fcall f_6762(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_i_car(((C_word*)t0)[5]));}
else{
/* srfi-13.scm: 1715 %finish-string-concatenate-reverse */
f_6814(((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* string-concatenate-reverse in k1419 in k1416 */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr3r,(void*)f_6609r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6609r(t0,t1,t2,t3);}}

static void C_ccall f_6609r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(2);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[132]:(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?(C_word)C_fix((C_word)C_header_size(t5)):(C_word)C_u_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t7,C_fix(1)));
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6633,tmp=(C_word)a,a+=2,tmp);
t13=f_6633(C_fix(0),t2);
/* srfi-13.scm: 1689 %finish-string-concatenate-reverse */
f_6814(t1,t13,t2,t5,t9);}

/* lp in string-concatenate-reverse in k1419 in k1416 */
static C_word C_fcall f_6633(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_fix((C_word)C_header_size(t3));
t5=(C_word)C_u_fixnum_plus(t1,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(t1);}}

/* string-concatenate in k1419 in k1416 */
static void C_ccall f_6536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6536,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6577,tmp=(C_word)a,a+=2,tmp);
t4=f_6577(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6543,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1656 make-string */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k6541 in string-concatenate in k1419 in k1416 */
static void C_ccall f_6543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6546,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6548,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6548(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* lp in k6541 in string-concatenate in k1419 in k1416 */
static void C_fcall f_6548(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6548,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_fix((C_word)C_header_size(t4));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6564,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1661 %string-copy! */
f_5672(t6,((C_word*)t0)[2],t2,t4,C_fix(0),t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6562 in lp in k6541 in string-concatenate in k1419 in k1416 */
static void C_ccall f_6564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1662 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6548(t4,((C_word*)t0)[2],t2,t3);}

/* k6544 in k6541 in string-concatenate in k1419 in k1416 */
static void C_ccall f_6546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* do1134 in string-concatenate in k1419 in k1416 */
static C_word C_fcall f_6577(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_u_i_car(t1);
t5=(C_word)C_fix((C_word)C_header_size(t4));
t6=(C_word)C_u_fixnum_plus(t2,t5);
t8=t3;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(t2);}}

/* string-concatenate/shared in k1419 in k1416 */
static void C_ccall f_6434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6434,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6440,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_6440(t6,t1,t2,C_fix(0),C_SCHEME_FALSE);}

/* lp in string-concatenate/shared in k1419 in k1416 */
static void C_fcall f_6440(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6440,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_u_i_car(t2);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_fix((C_word)C_header_size(t5));
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
/* srfi-13.scm: 1629 lp */
t19=t1;
t20=t6;
t21=t3;
t22=t4;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t9=(C_word)C_u_fixnum_plus(t3,t7);
t10=t4;
t11=(C_truep(t10)?t10:t2);
/* srfi-13.scm: 1630 lp */
t19=t1;
t20=t6;
t21=t9;
t22=t11;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}}
else{
t5=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[129]);}
else{
t6=(C_word)C_u_i_car(t4);
t7=(C_word)C_fix((C_word)C_header_size(t6));
t8=t3;
t9=(C_word)C_eqp(t8,t7);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_u_i_car(t4));}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6494,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1637 make-string */
t11=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t3);}}}}

/* k6492 in lp in string-concatenate/shared in k1419 in k1416 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6497,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6499,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6499(t6,t2,((C_word*)t0)[2],C_fix(0));}

/* lp in k6492 in lp in string-concatenate/shared in k1419 in k1416 */
static void C_fcall f_6499(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6499,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_fix((C_word)C_header_size(t4));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6515,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1642 %string-copy! */
f_5672(t6,((C_word*)t0)[2],t3,t4,C_fix(0),t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6513 in lp in k6492 in lp in string-concatenate/shared in k1419 in k1416 */
static void C_ccall f_6515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* srfi-13.scm: 1643 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6499(t4,((C_word*)t0)[2],t2,t3);}

/* k6495 in k6492 in lp in string-concatenate/shared in k1419 in k1416 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-append/shared in k1419 in k1416 */
static void C_ccall f_6428(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6428r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6428r(t0,t1,t2);}}

static void C_ccall f_6428r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-13.scm: 1620 string-concatenate/shared */
t3=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* string->list in k1419 in k1416 */
static void C_ccall f_6382(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6382r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6382r(t0,t1,t2,t3);}}

static void C_ccall f_6382r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6388,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6394,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a6393 in string->list in k1419 in k1416 */
static void C_ccall f_6394(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6394,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6404,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6404(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* do1106 in a6393 in string->list in k1419 in k1416 */
static void C_fcall f_6404(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6404,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_subchar(((C_word*)t0)[3],t2);
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t10=t1;
t11=t6;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* a6387 in string->list in k1419 in k1416 */
static void C_ccall f_6388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6388,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[126]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-reverse! in k1419 in k1416 */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6327r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6327r(t0,t1,t2,t3);}}

static void C_ccall f_6327r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6333,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6339,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a6338 in string-reverse! in k1419 in k1416 */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6339,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6349(t5,t4,t2));}

/* do1094 in a6338 in string-reverse! in k1419 in k1416 */
static C_word C_fcall f_6349(C_word t0,C_word t1,C_word t2){
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
loop:
t3=t1;
t4=t2;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_subchar(((C_word*)t0)[2],t1);
t6=(C_word)C_subchar(((C_word*)t0)[2],t2);
t7=(C_word)C_setsubchar(((C_word*)t0)[2],t1,t6);
t8=(C_word)C_setsubchar(((C_word*)t0)[2],t2,t5);
t9=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t10=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t12=t9;
t13=t10;
t1=t12;
t2=t13;
goto loop;}}

/* a6332 in string-reverse! in k1419 in k1416 */
static void C_ccall f_6333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6333,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[125]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-reverse in k1419 in k1416 */
static void C_ccall f_6272(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6272r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6272r(t0,t1,t2,t3);}}

static void C_ccall f_6272r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6278,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6284,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a6283 in string-reverse in k1419 in k1416 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6284,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6291,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1562 make-string */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k6289 in a6283 in string-reverse in k1419 in k1416 */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6291,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6300,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=f_6300(t3,((C_word*)t0)[3],t2);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* do1083 in k6289 in a6283 in string-reverse in k1419 in k1416 */
static C_word C_fcall f_6300(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
loop:
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
return(C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_subchar(((C_word*)t0)[3],t1);
t5=(C_word)C_setsubchar(((C_word*)t0)[2],t2,t4);
t6=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t7=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* a6277 in string-reverse in k1419 in k1416 */
static void C_ccall f_6278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6278,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-null? in k1419 in k1416 */
static void C_ccall f_6269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6269,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_null_p(t2));}

/* string-kmp-partial-search in k1419 in k1416 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr6r,(void*)f_6148r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_6148r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_6148r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(12);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[119]+1):(C_word)C_u_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t6,C_fix(1)));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):(C_word)C_u_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t10,C_fix(1)));
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6166,a[2]=t14,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t16=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6172,a[2]=t5,a[3]=t8,a[4]=t2,a[5]=t12,a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t15,t16);}

/* a6171 in string-kmp-partial-search in k1419 in k1416 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6172,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[7]));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=t7,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t5,tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_6181(t9,t1,t3,((C_word*)t0)[2]);}

/* lp in a6171 in string-kmp-partial-search in k1419 in k1416 */
static void C_fcall f_6181(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6181,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_eqp(t4,((C_word*)t0)[9]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_u_fixnum_negate(t2));}
else{
t6=t2;
t7=((C_word*)t0)[8];
t8=(C_word)C_eqp(t6,t7);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t3);}
else{
t9=(C_word)C_subchar(((C_word*)t0)[7],t2);
t10=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6211,a[2]=t10,a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6213,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t13,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_6213(t15,t11,t3);}}}

/* lp2 in lp in a6171 in string-kmp-partial-search in k1419 in k1416 */
static void C_fcall f_6213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6213,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[5]);
t5=(C_word)C_subchar(((C_word*)t0)[4],t4);
/* srfi-13.scm: 1542 c= */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,((C_word*)t0)[2],t5);}

/* k6218 in lp2 in lp in a6171 in string-kmp-partial-search in k1419 in k1416 */
static void C_ccall f_6220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
/* srfi-13.scm: 1546 lp2 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6213(t4,((C_word*)t0)[5],t2);}}}

/* k6209 in lp in a6171 in string-kmp-partial-search in k1419 in k1416 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1540 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6181(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a6165 in string-kmp-partial-search in k1419 in k1416 */
static void C_ccall f_6166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6166,2,t0,t1);}
/* srfi-13.scm: 1531 string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[122]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* kmp-step in k1419 in k1416 */
static void C_ccall f_6110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_6110,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6116,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t7,a[6]=t9,a[7]=t3,tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_6116(t11,t1,t5);}

/* lp in kmp-step in k1419 in k1416 */
static void C_fcall f_6116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6116,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6123,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[5]);
t5=(C_word)C_subchar(((C_word*)t0)[4],t4);
/* srfi-13.scm: 1509 c= */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,((C_word*)t0)[2],t5);}

/* k6121 in lp in kmp-step in k1419 in k1416 */
static void C_ccall f_6123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
/* srfi-13.scm: 1513 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6116(t4,((C_word*)t0)[5],t2);}}}

/* make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_5975r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5975r(t0,t1,t2,t3);}}

static void C_ccall f_5975r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[119]+1):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5987,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5993,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_5993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5993,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_u_fixnum_difference(t4,t3);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6000,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1463 make-vector */
t7=*((C_word*)lf[120]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,C_fix(-1));}

/* k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6003,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[5],C_fix(0)))){
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_subchar(((C_word*)t0)[4],((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6017(t8,t2,C_fix(0),C_fix(-1),((C_word*)t0)[3]);}
else{
t3=t2;
f_6003(2,t3,C_SCHEME_UNDEFINED);}}

/* lp1 in k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_fcall f_6017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6017,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
if(C_truep((C_word)C_fixnum_lessp(t5,((C_word*)t0)[8]))){
t6=(C_word)C_subchar(((C_word*)t0)[7],t4);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6032,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t4,a[10]=((C_word*)t0)[6],a[11]=t2,tmp=(C_word)a,a+=12,tmp));
t10=((C_word*)t8)[1];
f_6032(t10,t1,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* lp2 in lp1 in k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_fcall f_6032(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6032,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t4)){
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[11],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6059,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t5,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1481 c= */
t7=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6065,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t2,a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t6=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[3]);
t7=(C_word)C_subchar(((C_word*)t0)[2],t6);
/* srfi-13.scm: 1485 c= */
t8=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[6],t7);}}

/* k6063 in lp2 in lp1 in k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(C_fix(1),((C_word*)t0)[8]);
t3=(C_word)C_u_fixnum_plus(C_fix(1),((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],t2,t3);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-13.scm: 1489 lp1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6017(t6,((C_word*)t0)[3],t2,t3,t5);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],((C_word*)t0)[7]);
/* srfi-13.scm: 1491 lp2 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6032(t3,((C_word*)t0)[3],t2);}}

/* k6057 in lp2 in lp1 in k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_6059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_truep(t1)?C_fix(-1):C_fix(0));
t3=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1482 lp1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6017(t5,((C_word*)t0)[2],((C_word*)t0)[5],C_fix(0),t4);}

/* k6001 in k5998 in a5992 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_6003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a5986 in make-kmp-restart-vector in k1419 in k1416 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5987,2,t0,t1);}
/* srfi-13.scm: 1461 string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[118]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %kmp-search in k1419 in k1416 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5877,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_u_fixnum_difference(t6,t5);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5884,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t5,a[6]=t3,a[7]=t9,a[8]=t7,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 1410 make-kmp-restart-vector */
t11=*((C_word*)lf[118]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,t2,t4,t5,t6);}

/* k5882 in %kmp-search in k1419 in k1416 */
static void C_ccall f_5884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5884,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5893,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_5893(t6,((C_word*)t0)[2],((C_word*)t0)[8],C_fix(0),t2,((C_word*)t0)[7]);}

/* lp in k5882 in %kmp-search in k1419 in k1416 */
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5893,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t3;
t7=(C_word)C_eqp(t6,((C_word*)t0)[8]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[8]));}
else{
t8=t5;
t9=t4;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5915,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t11=(C_word)C_subchar(((C_word*)t0)[5],t2);
t12=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],t3);
t13=(C_word)C_subchar(((C_word*)t0)[3],t12);
/* srfi-13.scm: 1421 c= */
t14=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t11,t13);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}}

/* k5913 in lp in k5882 in %kmp-search in k1419 in k1416 */
static void C_ccall f_5915(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_u_fixnum_plus(C_fix(1),((C_word*)t0)[9]);
t3=(C_word)C_u_fixnum_plus(C_fix(1),((C_word*)t0)[8]);
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[7],C_fix(1));
t5=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],C_fix(1));
/* srfi-13.scm: 1423 lp */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5893(t6,((C_word*)t0)[4],t2,t3,t4,t5);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[8]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[9],C_fix(1));
t5=(C_word)C_u_fixnum_difference(((C_word*)t0)[7],C_fix(1));
/* srfi-13.scm: 1427 lp */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5893(t6,((C_word*)t0)[4],t4,C_fix(0),t5,((C_word*)t0)[2]);}
else{
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1428 lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5893(t5,((C_word*)t0)[4],((C_word*)t0)[9],t2,((C_word*)t0)[7],t4);}}}

/* string-contains-ci in k1419 in k1416 */
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5815r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5815r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5815r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[115]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5821,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5827,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a5826 in string-contains-ci in k1419 in k1416 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5827,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5833,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5839,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5838 in a5826 in string-contains-ci in k1419 in k1416 */
static void C_ccall f_5839(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5839,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5851,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_5851(t9,t1,((C_word*)t0)[2]);}

/* lp in a5838 in a5826 in string-contains-ci in k1419 in k1416 */
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5851,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[8]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5864,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[6]);
/* srfi-13.scm: 1380 string-ci= */
t5=*((C_word*)lf[65]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5862 in lp in a5838 in a5826 in string-contains-ci in k1419 in k1416 */
static void C_ccall f_5864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1382 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5851(t3,((C_word*)t0)[4],t2);}}

/* a5832 in a5826 in string-contains-ci in k1419 in k1416 */
static void C_ccall f_5833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5833,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5820 in string-contains-ci in k1419 in k1416 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-contains in k1419 in k1416 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5753r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5753r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5753r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[115]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5759,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5765,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a5764 in string-contains in k1419 in k1416 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5765,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5771,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5777,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5776 in a5764 in string-contains in k1419 in k1416 */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5777,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5789,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_5789(t9,t1,((C_word*)t0)[2]);}

/* lp in a5776 in a5764 in string-contains in k1419 in k1416 */
static void C_fcall f_5789(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5789,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[8]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5802,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[6]);
/* srfi-13.scm: 1369 string= */
t5=*((C_word*)lf[58]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5800 in lp in a5776 in a5764 in string-contains in k1419 in k1416 */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1371 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5789(t3,((C_word*)t0)[4],t2);}}

/* a5770 in a5764 in string-contains in k1419 in k1416 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5758 in string-contains in k1419 in k1416 */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5759,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-copy! in k1419 in k1416 */
static void C_fcall f_5672(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5672,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=t5;
t8=t3;
if(C_truep((C_word)C_fixnum_greaterp(t7,t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5684,a[2]=t2,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,f_5684(t9,t5,t3));}
else{
t9=(C_word)C_u_fixnum_difference(t6,C_fix(1));
t10=(C_word)C_u_fixnum_difference(t6,t5);
t11=(C_word)C_u_fixnum_plus((C_word)C_u_fixnum_plus(C_fix(-1),t3),t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5722,a[2]=t2,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,f_5722(t12,t9,t11));}}

/* do955 in %string-copy! in k1419 in k1416 */
static C_word C_fcall f_5722(C_word t0,C_word t1,C_word t2){
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
loop:
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_subchar(((C_word*)t0)[3],t1);
t6=(C_word)C_setsubchar(((C_word*)t0)[2],t2,t5);
t7=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t8=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* do949 in %string-copy! in k1419 in k1416 */
static C_word C_fcall f_5684(C_word t0,C_word t1,C_word t2){
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
loop:
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_subchar(((C_word*)t0)[3],t1);
t6=(C_word)C_setsubchar(((C_word*)t0)[2],t2,t5);
t7=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t8=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* string-copy! in k1419 in k1416 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_5643r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5643r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5643r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5655,a[2]=t4,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a5654 in string-copy! in k1419 in k1416 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5655,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5659,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],t5);
/* srfi-13.scm: 1338 check-substring-spec */
t7=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,*((C_word*)lf[114]+1),((C_word*)t0)[4],((C_word*)t0)[3],t6);}

/* k5657 in a5654 in string-copy! in k1419 in k1416 */
static void C_ccall f_5659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1339 %string-copy! */
f_5672(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5648 in string-copy! in k1419 in k1416 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5649,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-fill! in k1419 in k1416 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_5602r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5602r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5602r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5608,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5614,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5613 in string-fill! in k1419 in k1416 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5614,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5624(t5,t4));}

/* do932 in a5613 in string-fill! in k1419 in k1416 */
static C_word C_fcall f_5624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
return(C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_setsubchar(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t5=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}

/* a5607 in string-fill! in k1419 in k1416 */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5608,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[113]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-count in k1419 in k1416 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_5467r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5467r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5473,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5479,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5478 in string-count in k1419 in k1416 */
static void C_ccall f_5479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5479,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5491(t4,t2,C_fix(0)));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5525,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1304 char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5523 in a5478 in string-count in k1419 in k1416 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5525,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5530,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5530(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5569(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
/* srfi-13.scm: 1316 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[111],lf[112],*((C_word*)lf[111]+1),((C_word*)t0)[4]);}}}

/* do922 in k5523 in a5478 in string-count in k1419 in k1416 */
static void C_fcall f_5569(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5569,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5590,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1313 criteria */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}

/* k5588 in do922 in k5523 in a5478 in string-count in k1419 in k1416 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5569(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* do917 in k5523 in a5478 in string-count in k1419 in k1416 */
static void C_fcall f_5530(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5530,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5551,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1306 char-set-contains? */
t9=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[2],t8);}}

/* k5549 in do917 in k5523 in a5478 in string-count in k1419 in k1416 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5530(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* do912 in a5478 in string-count in k1419 in k1416 */
static C_word C_fcall f_5491(C_word t0,C_word t1,C_word t2){
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
loop:
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
return(t2);}
else{
t5=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t6=(C_word)C_subchar(((C_word*)t0)[3],t1);
t7=(C_word)C_eqp(((C_word*)t0)[2],t6);
t8=(C_truep(t7)?(C_word)C_u_fixnum_plus(t2,C_fix(1)):t2);
t10=t5;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* a5472 in string-count in k1419 in k1416 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5473,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[111]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-skip-right in k1419 in k1416 */
static void C_ccall f_5332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_5332r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5332r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5332r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5338,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5344,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5343 in string-skip-right in k1419 in k1416 */
static void C_ccall f_5344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5344,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5360(t5,t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5390,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1278 char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5388 in a5343 in string-skip-right in k1419 in k1416 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5390,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5399(t6,((C_word*)t0)[2],t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5438(t6,((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 1289 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[96],lf[110],*((C_word*)lf[96]+1),((C_word*)t0)[3]);}}}

/* lp in k5388 in a5343 in string-skip-right in k1419 in k1416 */
static void C_fcall f_5438(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5438,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5451,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1287 criteria */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5449 in lp in k5388 in a5343 in string-skip-right in k1419 in k1416 */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1287 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5438(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in k5388 in a5343 in string-skip-right in k1419 in k1416 */
static void C_fcall f_5399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5399,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5412,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1281 char-set-contains? */
t6=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5410 in lp in k5388 in a5343 in string-skip-right in k1419 in k1416 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1282 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5399(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in a5343 in string-skip-right in k1419 in k1416 */
static C_word C_fcall f_5360(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
t2=t1;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t3=(C_word)C_subchar(((C_word*)t0)[3],t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}
else{
return(t1);}}
else{
return(C_SCHEME_FALSE);}}

/* a5337 in string-skip-right in k1419 in k1416 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[96]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-skip in k1419 in k1416 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_5209r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5209r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5209r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5215,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5221,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5220 in string-skip in k1419 in k1416 */
static void C_ccall f_5221(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5221,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5233(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5263,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1256 char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5261 in a5220 in string-skip in k1419 in k1416 */
static void C_ccall f_5263(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5263,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5268(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5303,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5303(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1267 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[83],lf[109],*((C_word*)lf[83]+1),((C_word*)t0)[4]);}}}

/* lp in k5261 in a5220 in string-skip in k1419 in k1416 */
static void C_fcall f_5303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5303,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5316,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1265 criteria */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5314 in lp in k5261 in a5220 in string-skip in k1419 in k1416 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1265 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5303(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in k5261 in a5220 in string-skip in k1419 in k1416 */
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5268,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5281,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1259 char-set-contains? */
t7=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5279 in lp in k5261 in a5220 in string-skip in k1419 in k1416 */
static void C_ccall f_5281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1260 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5268(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in a5220 in string-skip in k1419 in k1416 */
static C_word C_fcall f_5233(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_subchar(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}
else{
return(t1);}}
else{
return(C_SCHEME_FALSE);}}

/* a5214 in string-skip in k1419 in k1416 */
static void C_ccall f_5215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5215,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[83]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-index-right in k1419 in k1416 */
static void C_ccall f_5074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_5074r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5074r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5074r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5086,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a5085 in string-index-right in k1419 in k1416 */
static void C_ccall f_5086(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5086,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5102(t5,t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5132,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1235 char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5130 in a5085 in string-index-right in k1419 in k1416 */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5132,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5141,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5141(t6,((C_word*)t0)[2],t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5180(t6,((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 1245 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[107],lf[108],*((C_word*)lf[107]+1),((C_word*)t0)[3]);}}}

/* lp in k5130 in a5085 in string-index-right in k1419 in k1416 */
static void C_fcall f_5180(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5180,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1243 criteria */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5191 in lp in k5130 in a5085 in string-index-right in k1419 in k1416 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1244 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5180(t3,((C_word*)t0)[4],t2);}}

/* lp in k5130 in a5085 in string-index-right in k1419 in k1416 */
static void C_fcall f_5141(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5141,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5154,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1238 char-set-contains? */
t6=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5152 in lp in k5130 in a5085 in string-index-right in k1419 in k1416 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1239 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5141(t3,((C_word*)t0)[4],t2);}}

/* lp in a5085 in string-index-right in k1419 in k1416 */
static C_word C_fcall f_5102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
t2=t1;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t3=(C_word)C_subchar(((C_word*)t0)[3],t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t1);}
else{
t5=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a5079 in string-index-right in k1419 in k1416 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5080,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[107]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-index in k1419 in k1416 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_4951r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4951r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4951r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4957,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4963,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a4962 in string-index in k1419 in k1416 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4963,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4975(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5005,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1215 char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5003 in a4962 in string-index in k1419 in k1416 */
static void C_ccall f_5005(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5005,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5010,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5010(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5045(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1225 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[84],lf[106],*((C_word*)lf[84]+1),((C_word*)t0)[4]);}}}

/* lp in k5003 in a4962 in string-index in k1419 in k1416 */
static void C_fcall f_5045(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5045,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1223 criteria */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5056 in lp in k5003 in a4962 in string-index in k1419 in k1416 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1224 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5045(t3,((C_word*)t0)[4],t2);}}

/* lp in k5003 in a4962 in string-index in k1419 in k1416 */
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5010,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1218 char-set-contains? */
t7=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5021 in lp in k5003 in a4962 in string-index in k1419 in k1416 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1219 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5010(t3,((C_word*)t0)[4],t2);}}

/* lp in a4962 in string-index in k1419 in k1416 */
static C_word C_fcall f_4975(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_subchar(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t1);}
else{
t6=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a4956 in string-index in k1419 in k1416 */
static void C_ccall f_4957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4957,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[84]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-filter in k1419 in k1416 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_4843r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4843r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4843r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4849,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4855,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4855(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4855,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4868,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1171 make-string */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4898,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4937,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1180 char-set? */
t6=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k4935 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_4898(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-13.scm: 1181 char-set */
t2=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1182 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[104],lf[105],((C_word*)t0)[2]);}}}

/* k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1184 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4923 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4924,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4931,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1184 char-set-contains? */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4929 in a4923 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1)):((C_word*)t0)[2]));}

/* k4899 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1188 make-string */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4902 in k4899 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4907,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1189 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4908 in k4902 in k4899 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4909,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4916,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1189 char-set-contains? */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4914 in a4908 in k4902 in k4899 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4905 in k4902 in k4899 in k4896 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4866 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4871,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1172 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4881 in k4866 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4882,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4889,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1173 criteria */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4887 in a4881 in k4866 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4869 in k4866 in a4854 in string-filter in k1419 in k1416 */
static void C_ccall f_4871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1178 ##sys#substring */
t4=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* a4848 in string-filter in k1419 in k1416 */
static void C_ccall f_4849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4849,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[104]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-delete in k1419 in k1416 */
static void C_ccall f_4735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_4735r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4735r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4735r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4741,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4747,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4747,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4760,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1144 make-string */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4790,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1152 char-set? */
t6=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k4827 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_4790(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-13.scm: 1153 char-set */
t2=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1154 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[101],lf[103],((C_word*)t0)[2]);}}}

/* k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4816,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1155 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4815 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4816(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4816,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4823,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1155 char-set-contains? */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4821 in a4815 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:(C_word)C_u_fixnum_plus(((C_word*)t0)[2],C_fix(1))));}

/* k4791 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4796,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1159 make-string */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4794 in k4791 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4801,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1160 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4800 in k4794 in k4791 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4801,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4808,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1160 char-set-contains? */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4806 in a4800 in k4794 in k4791 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4797 in k4794 in k4791 in k4788 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4758 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4763,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1145 string-fold */
t4=*((C_word*)lf[21]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4773 in k4758 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4774,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4781,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1146 criteria */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4779 in a4773 in k4758 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4761 in k4758 in a4746 in string-delete in k1419 in k1416 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1150 ##sys#substring */
t4=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* a4740 in string-delete in k1419 in k1416 */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4741,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[101]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-pad in k1419 in k1416 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_4676r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4676r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4676r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?C_make_character(32):(C_word)C_u_i_car(t4));
t7=(C_word)C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t4,C_fix(1)));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4688,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4694,a[2]=t6,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}

/* a4693 in string-pad in k1419 in k1416 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4694,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_less_or_equal_p(t5,t4))){
t6=(C_word)C_u_fixnum_difference(t3,((C_word*)t0)[4]);
/* srfi-13.scm: 1119 %substring/shared */
f_1623(t1,((C_word*)t0)[3],t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4714,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1120 make-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k4712 in a4693 in string-pad in k1419 in k1416 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4717,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 1121 %string-copy! */
f_5672(t2,t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4715 in k4712 in a4693 in string-pad in k1419 in k1416 */
static void C_ccall f_4717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4687 in string-pad in k1419 in k1416 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4688,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[100]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-pad-right in k1419 in k1416 */
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_4621r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4621r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?C_make_character(32):(C_word)C_u_i_car(t4));
t7=(C_word)C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t4,C_fix(1)));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4633,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4639,a[2]=t6,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}

/* a4638 in string-pad-right in k1419 in k1416 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4639,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_less_or_equal_p(t5,t4))){
t6=(C_word)C_u_fixnum_plus(t2,((C_word*)t0)[4]);
/* srfi-13.scm: 1108 %substring/shared */
f_1623(t1,((C_word*)t0)[3],t2,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4659,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1109 make-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k4657 in a4638 in string-pad-right in k1419 in k1416 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4662,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1110 %string-copy! */
f_5672(t2,t1,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4660 in k4657 in a4638 in string-pad-right in k1419 in k1416 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4632 in string-pad-right in k1419 in k1416 */
static void C_ccall f_4633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4633,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[99]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim-both in k1419 in k1416 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4571r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4571r(t0,t1,t2,t3);}}

static void C_ccall f_4571r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[92]+1):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4583,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4589,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a4588 in string-trim-both in k1419 in k1416 */
static void C_ccall f_4589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4589,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4593,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1096 string-skip */
t5=*((C_word*)lf[83]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4591 in a4588 in string-trim-both in k1419 in k1416 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4593,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4607,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1098 string-skip-right */
t3=*((C_word*)lf[96]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[98]);}}

/* k4605 in k4591 in a4588 in string-trim-both in k1419 in k1416 */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1098 %substring/shared */
f_1623(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a4582 in string-trim-both in k1419 in k1416 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4583,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[97]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim-right in k1419 in k1416 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4525r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4525r(t0,t1,t2,t3);}}

static void C_ccall f_4525r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[92]+1):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4537,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4543,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a4542 in string-trim-right in k1419 in k1416 */
static void C_ccall f_4543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4543,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4547,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1089 string-skip-right */
t5=*((C_word*)lf[96]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4545 in a4542 in string-trim-right in k1419 in k1416 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1090 %substring/shared */
f_1623(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[95]);}}

/* a4536 in string-trim-right in k1419 in k1416 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4537,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[94]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim in k1419 in k1416 */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4483r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4483r(t0,t1,t2,t3);}}

static void C_ccall f_4483r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[92]+1):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4495,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4501,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a4500 in string-trim in k1419 in k1416 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4501,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4505,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1082 string-skip */
t5=*((C_word*)lf[83]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4503 in a4500 in string-trim in k1419 in k1416 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-13.scm: 1083 %substring/shared */
f_1623(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[93]);}}

/* a4494 in string-trim in k1419 in k1416 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4495,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[91]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-drop-right in k1419 in k1416 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4470,4,t0,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(t2));
t5=(C_word)C_u_fixnum_difference(t4,t3);
/* srfi-13.scm: 1076 %substring/shared */
f_1623(t1,t2,C_fix(0),t5);}

/* string-drop in k1419 in k1416 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4461,4,t0,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(t2));
/* srfi-13.scm: 1068 %substring/shared */
f_1623(t1,t2,t3,t4);}

/* string-take-right in k1419 in k1416 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4448,4,t0,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(t2));
t5=(C_word)C_u_fixnum_difference(t4,t3);
/* srfi-13.scm: 1060 %substring/shared */
f_1623(t1,t2,t5,t4);}

/* string-take in k1419 in k1416 */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4442,4,t0,t1,t2,t3);}
/* srfi-13.scm: 1052 %substring/shared */
f_1623(t1,t2,C_fix(0),t3);}

/* string-titlecase in k1419 in k1416 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4417r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4417r(t0,t1,t2,t3);}}

static void C_ccall f_4417r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4428 in string-titlecase in k1419 in k1416 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4429,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4433,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1023 ##sys#substring */
t5=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],t2,t3);}

/* k4431 in a4428 in string-titlecase in k1419 in k1416 */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4436,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-13.scm: 1024 %string-titlecase! */
f_4340(t2,t1,C_fix(0),t3);}

/* k4434 in k4431 in a4428 in string-titlecase in k1419 in k1416 */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4422 in string-titlecase in k1419 in k1416 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4423,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[85]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-titlecase! in k1419 in k1416 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4399r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4399r(t0,t1,t2,t3);}}

static void C_ccall f_4399r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4405,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4410 in string-titlecase! in k1419 in k1416 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4411,4,t0,t1,t2,t3);}
/* srfi-13.scm: 1019 %string-titlecase! */
f_4340(t1,((C_word*)t0)[2],t2,t3);}

/* a4404 in string-titlecase! in k1419 in k1416 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4405,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[85]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-titlecase! in k1419 in k1416 */
static void C_fcall f_4340(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4340,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=t4,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4346(t8,t1,t3);}

/* lp in %string-titlecase! in k1419 in k1416 */
static void C_fcall f_4346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4346,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4393,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 1007 string-index */
t5=*((C_word*)lf[84]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,((C_word*)t0)[4],t4,t2,((C_word*)t0)[2]);}

/* a4392 in lp in %string-titlecase! in k1419 in k1416 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4393,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_char_alphabeticp(t2));}

/* k4348 in lp in %string-titlecase! in k1419 in k1416 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4350,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_subchar(((C_word*)t0)[5],t1);
t3=(C_word)C_u_i_char_upcase(t2);
t4=(C_word)C_setsubchar(((C_word*)t0)[5],t1,t3);
t5=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4380,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 1011 string-skip */
t8=*((C_word*)lf[83]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,((C_word*)t0)[5],t7,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* a4379 in k4348 in lp in %string-titlecase! in k1419 in k1416 */
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4380,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_char_alphabeticp(t2));}

/* k4360 in k4348 in lp in %string-titlecase! in k1419 in k1416 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4362,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4368,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1013 string-downcase! */
t3=*((C_word*)lf[81]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1);}
else{
/* srfi-13.scm: 1015 string-downcase! */
t2=*((C_word*)lf[81]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4366 in k4360 in k4348 in lp in %string-titlecase! in k1419 in k1416 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1014 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4346(t3,((C_word*)t0)[2],t2);}

/* string-downcase! in k1419 in k1416 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4322r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4322r(t0,t1,t2,t3);}}

static void C_ccall f_4322r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4328,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4334,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4333 in string-downcase! in k1419 in k1416 */
static void C_ccall f_4334(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4334,4,t0,t1,t2,t3);}
/* srfi-13.scm: 1003 %string-map! */
f_1750(t1,*((C_word*)lf[80]+1),((C_word*)t0)[2],t2,t3);}

/* a4327 in string-downcase! in k1419 in k1416 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4328,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[81]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-downcase in k1419 in k1416 */
static void C_ccall f_4304(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4304r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4304r(t0,t1,t2,t3);}}

static void C_ccall f_4304r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4316,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4315 in string-downcase in k1419 in k1416 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4316,4,t0,t1,t2,t3);}
/* srfi-13.scm: 999  %string-map */
f_1681(t1,*((C_word*)lf[80]+1),((C_word*)t0)[2],t2,t3);}

/* a4309 in string-downcase in k1419 in k1416 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-upcase! in k1419 in k1416 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4286r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4286r(t0,t1,t2,t3);}}

static void C_ccall f_4286r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4292,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4297 in string-upcase! in k1419 in k1416 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4298,4,t0,t1,t2,t3);}
/* srfi-13.scm: 995  %string-map! */
f_1750(t1,*((C_word*)lf[77]+1),((C_word*)t0)[2],t2,t3);}

/* a4291 in string-upcase! in k1419 in k1416 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4292,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[78]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-upcase in k1419 in k1416 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4268r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4268r(t0,t1,t2,t3);}}

static void C_ccall f_4268r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4274,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4280,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4279 in string-upcase in k1419 in k1416 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4280,4,t0,t1,t2,t3);}
/* srfi-13.scm: 991  %string-map */
f_1681(t1,*((C_word*)lf[77]+1),((C_word*)t0)[2],t2,t3);}

/* a4273 in string-upcase in k1419 in k1416 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[76]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-hash-ci in k1419 in k1416 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4215r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4215r(t0,t1,t2,t3);}}

static void C_ccall f_4215r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):(C_word)C_u_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_word)C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4225,a[2]=t1,a[3]=t7,a[4]=t9,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t11)){
t12=C_set_block_item(t7,0,C_fix(4194304));
t13=t10;
f_4225(t13,t12);}
else{
t12=t10;
f_4225(t12,C_SCHEME_UNDEFINED);}}

/* k4223 in string-hash-ci in k1419 in k1416 */
static void C_fcall f_4225(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4225,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4230,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 973  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4235 in k4223 in string-hash-ci in k1419 in k1416 */
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4236,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4242,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 974  %string-hash */
f_4100(t1,((C_word*)t0)[3],t4,((C_word*)((C_word*)t0)[2])[1],t2,t3);}

/* a4241 in a4235 in k4223 in string-hash-ci in k1419 in k1416 */
static void C_ccall f_4242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4242,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_downcase(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fix((C_word)C_character_code(t3)));}

/* a4229 in k4223 in string-hash-ci in k1419 in k1416 */
static void C_ccall f_4230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4230,2,t0,t1);}
/* srfi-13.scm: 973  string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[75]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-hash in k1419 in k1416 */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4172r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4172r(t0,t1,t2,t3);}}

static void C_ccall f_4172r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):(C_word)C_u_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_word)C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4182,a[2]=t1,a[3]=t7,a[4]=t9,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t11)){
t12=C_set_block_item(t7,0,C_fix(4194304));
t13=t10;
f_4182(t13,t12);}
else{
t12=t10;
f_4182(t12,C_SCHEME_UNDEFINED);}}

/* k4180 in string-hash in k1419 in k1416 */
static void C_fcall f_4182(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4182,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4187,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 963  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4192 in k4180 in string-hash in k1419 in k1416 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4193,4,t0,t1,t2,t3);}
/* srfi-13.scm: 964  %string-hash */
f_4100(t1,((C_word*)t0)[3],*((C_word*)lf[74]+1),((C_word*)((C_word*)t0)[2])[1],t2,t3);}

/* a4186 in k4180 in string-hash in k1419 in k1416 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4187,2,t0,t1);}
/* srfi-13.scm: 963  string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[73]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-hash in k1419 in k1416 */
static void C_fcall f_4100(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4100,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4102,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4153,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=f_4153(t8,C_fix(65536));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4118,a[2]=t2,a[3]=t7,a[4]=t11,a[5]=t9,a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp));
t13=((C_word*)t11)[1];
f_4118(t13,t1,t5,C_fix(0));}

/* lp in %string-hash in k1419 in k1416 */
static void C_fcall f_4118(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4118,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[7];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
/* srfi-13.scm: 953  modulo */
t6=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t3,((C_word*)t0)[6]);}
else{
t6=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t7=(C_word)C_fixnum_times(C_fix(37),t3);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4151,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 954  iref */
t9=((C_word*)t0)[3];
f_4102(t9,t8,((C_word*)t0)[2],t2);}}

/* k4149 in lp in %string-hash in k1419 in k1416 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t3=(C_word)C_u_fixnum_and(((C_word*)t0)[5],t2);
/* srfi-13.scm: 954  lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4118(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* lp in %string-hash in k1419 in k1416 */
static C_word C_fcall f_4153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
t2=t1;
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,t3))){
return((C_word)C_u_fixnum_difference(t1,C_fix(1)));}
else{
t4=(C_word)C_u_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* iref in %string-hash in k1419 in k1416 */
static void C_fcall f_4102(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4102,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_subchar(t2,t3);
/* srfi-13.scm: 948  char->int */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* string-ci>= in k1419 in k1416 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4052r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4052r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4052r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[70]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4064,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a4063 in string-ci>= in k1419 in k1416 */
static void C_ccall f_4064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4064,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4070,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a4075 in a4063 in string-ci>= in k1419 in k1416 */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4076,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4083,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_4083(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_4083(t6,C_SCHEME_FALSE);}}

/* k4081 in a4075 in a4063 in string-ci>= in k1419 in k1416 */
static void C_fcall f_4083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4083,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greater_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4091,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 928  %string-compare-ci */
f_3324(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,*((C_word*)lf[59]+1),*((C_word*)lf[59]+1));}}

/* a4090 in k4081 in a4075 in a4063 in string-ci>= in k1419 in k1416 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4091,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4069 in a4063 in string-ci>= in k1419 in k1416 */
static void C_ccall f_4070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4070,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4057 in string-ci>= in k1419 in k1416 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci<= in k1419 in k1416 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4004r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4004r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4004r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[69]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4010,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4016,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a4015 in string-ci<= in k1419 in k1416 */
static void C_ccall f_4016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4016,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4022,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a4027 in a4015 in string-ci<= in k1419 in k1416 */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4028,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4035,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_4035(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_4035(t6,C_SCHEME_FALSE);}}

/* k4033 in a4027 in a4015 in string-ci<= in k1419 in k1416 */
static void C_fcall f_4035(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4035,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_less_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4043,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 917  %string-compare-ci */
f_3324(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[59]+1),*((C_word*)lf[59]+1),t2);}}

/* a4042 in k4033 in a4027 in a4015 in string-ci<= in k1419 in k1416 */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4043,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4021 in a4015 in string-ci<= in k1419 in k1416 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4009 in string-ci<= in k1419 in k1416 */
static void C_ccall f_4010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4010,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci> in k1419 in k1416 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3953r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3953r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3953r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[68]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3959,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3965,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3964 in string-ci> in k1419 in k1416 */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3965,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3977,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3976 in a3964 in string-ci> in k1419 in k1416 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3977,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3984,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3984(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3984(t6,C_SCHEME_FALSE);}}

/* k3982 in a3976 in a3964 in string-ci> in k1419 in k1416 */
static void C_fcall f_3984(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3984,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greaterp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3992,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3995,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 906  %string-compare-ci */
f_3324(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,t3,*((C_word*)lf[59]+1));}}

/* a3994 in k3982 in a3976 in a3964 in string-ci> in k1419 in k1416 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3995,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3991 in k3982 in a3976 in a3964 in string-ci> in k1419 in k1416 */
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3992,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3970 in a3964 in string-ci> in k1419 in k1416 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3971,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3958 in string-ci> in k1419 in k1416 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3959,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci< in k1419 in k1416 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3902r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3902r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3902r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[67]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3908,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3914,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3913 in string-ci< in k1419 in k1416 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3914,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3920,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3926,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3925 in a3913 in string-ci< in k1419 in k1416 */
static void C_ccall f_3926(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3926,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3933,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3933(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3933(t6,C_SCHEME_FALSE);}}

/* k3931 in a3925 in a3913 in string-ci< in k1419 in k1416 */
static void C_fcall f_3933(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3933,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_lessp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3941,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3944,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 895  %string-compare-ci */
f_3324(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[59]+1),t2,t3);}}

/* a3943 in k3931 in a3925 in a3913 in string-ci< in k1419 in k1416 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3944,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3940 in k3931 in a3925 in a3913 in string-ci< in k1419 in k1416 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3941,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3919 in a3913 in string-ci< in k1419 in k1416 */
static void C_ccall f_3920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3920,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3907 in string-ci< in k1419 in k1416 */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3908,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci<> in k1419 in k1416 */
static void C_ccall f_3835(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3835r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3835r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3835r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[66]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3841,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3847,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3846 in string-ci<> in k1419 in k1416 */
static void C_ccall f_3847(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3847,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3853,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3858 in a3846 in string-ci<> in k1419 in k1416 */
static void C_ccall f_3859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3859,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3882,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
t11=t2;
t12=t8;
f_3882(t12,(C_word)C_eqp(t10,t11));}
else{
t10=t8;
f_3882(t10,C_SCHEME_FALSE);}}}

/* k3880 in a3858 in a3846 in string-ci<> in k1419 in k1416 */
static void C_fcall f_3882(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3882,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3877,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 884  %string-compare-ci */
f_3324(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[59]+1),t2,*((C_word*)lf[59]+1));}}

/* a3876 in k3880 in a3858 in a3846 in string-ci<> in k1419 in k1416 */
static void C_ccall f_3877(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3877,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3852 in a3846 in string-ci<> in k1419 in k1416 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3853,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3840 in string-ci<> in k1419 in k1416 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3841,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci= in k1419 in k1416 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3773r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3773r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3773r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[65]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3779,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3785,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3784 in string-ci= in k1419 in k1416 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3785,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3791,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3797,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3796 in a3784 in string-ci= in k1419 in k1416 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3797,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3807,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t8=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=t2;
t11=t7;
f_3807(t11,(C_word)C_eqp(t9,t10));}
else{
t9=t7;
f_3807(t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3805 in a3796 in a3784 in string-ci= in k1419 in k1416 */
static void C_fcall f_3807(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3807,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3815,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3818,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 874  %string-compare-ci */
f_3324(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,*((C_word*)lf[59]+1),t3);}}

/* a3817 in k3805 in a3796 in a3784 in string-ci= in k1419 in k1416 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3818,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3814 in k3805 in a3796 in a3784 in string-ci= in k1419 in k1416 */
static void C_ccall f_3815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3815,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3790 in a3784 in string-ci= in k1419 in k1416 */
static void C_ccall f_3791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3791,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3778 in string-ci= in k1419 in k1416 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string>= in k1419 in k1416 */
static void C_ccall f_3725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3725r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3725r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3725r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[64]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3731,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3737,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3736 in string>= in k1419 in k1416 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3737,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3743,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3749,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3748 in a3736 in string>= in k1419 in k1416 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3749,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3756,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3756(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3756(t6,C_SCHEME_FALSE);}}

/* k3754 in a3748 in a3736 in string>= in k1419 in k1416 */
static void C_fcall f_3756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3756,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greater_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3764,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 864  %string-compare */
f_3262(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,*((C_word*)lf[59]+1),*((C_word*)lf[59]+1));}}

/* a3763 in k3754 in a3748 in a3736 in string>= in k1419 in k1416 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3764,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3742 in a3736 in string>= in k1419 in k1416 */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3743,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3730 in string>= in k1419 in k1416 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3731,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string<= in k1419 in k1416 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3677r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3677r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3677r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[63]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3683,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3689,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3688 in string<= in k1419 in k1416 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3689,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3695,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3700 in a3688 in string<= in k1419 in k1416 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3701,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3708,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3708(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3708(t6,C_SCHEME_FALSE);}}

/* k3706 in a3700 in a3688 in string<= in k1419 in k1416 */
static void C_fcall f_3708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3708,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_less_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3716,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 853  %string-compare */
f_3262(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[59]+1),*((C_word*)lf[59]+1),t2);}}

/* a3715 in k3706 in a3700 in a3688 in string<= in k1419 in k1416 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3716,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3694 in a3688 in string<= in k1419 in k1416 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3695,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3682 in string<= in k1419 in k1416 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string> in k1419 in k1416 */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3626r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3626r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3626r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[62]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3632,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3638,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3637 in string> in k1419 in k1416 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3638,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3644,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3649 in a3637 in string> in k1419 in k1416 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3650,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3657,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3657(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3657(t6,C_SCHEME_FALSE);}}

/* k3655 in a3649 in a3637 in string> in k1419 in k1416 */
static void C_fcall f_3657(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3657,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greaterp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3665,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3668,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 842  %string-compare */
f_3262(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,t3,*((C_word*)lf[59]+1));}}

/* a3667 in k3655 in a3649 in a3637 in string> in k1419 in k1416 */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3668,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3664 in k3655 in a3649 in a3637 in string> in k1419 in k1416 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3665,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3643 in a3637 in string> in k1419 in k1416 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3644,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3631 in string> in k1419 in k1416 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string< in k1419 in k1416 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3575r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3575r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[61]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3581,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3587,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3586 in string< in k1419 in k1416 */
static void C_ccall f_3587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3587,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3593,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3598 in a3586 in string< in k1419 in k1416 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3599,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3606,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3606(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3606(t6,C_SCHEME_FALSE);}}

/* k3604 in a3598 in a3586 in string< in k1419 in k1416 */
static void C_fcall f_3606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3606,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_lessp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3614,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3617,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 831  %string-compare */
f_3262(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[59]+1),t2,t3);}}

/* a3616 in k3604 in a3598 in a3586 in string< in k1419 in k1416 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3617,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3613 in k3604 in a3598 in a3586 in string< in k1419 in k1416 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3614,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3592 in a3586 in string< in k1419 in k1416 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3580 in string< in k1419 in k1416 */
static void C_ccall f_3581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3581,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string<> in k1419 in k1416 */
static void C_ccall f_3508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3508r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3508r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3508r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[60]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3514,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3520,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3519 in string<> in k1419 in k1416 */
static void C_ccall f_3520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3520,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3526,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3531 in a3519 in string<> in k1419 in k1416 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3532,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3555,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
t11=t2;
t12=t8;
f_3555(t12,(C_word)C_eqp(t10,t11));}
else{
t10=t8;
f_3555(t10,C_SCHEME_FALSE);}}}

/* k3553 in a3531 in a3519 in string<> in k1419 in k1416 */
static void C_fcall f_3555(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3555,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3550,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 820  %string-compare */
f_3262(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[59]+1),t2,*((C_word*)lf[59]+1));}}

/* a3549 in k3553 in a3531 in a3519 in string<> in k1419 in k1416 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3550,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3525 in a3519 in string<> in k1419 in k1416 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3526,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3513 in string<> in k1419 in k1416 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string= in k1419 in k1416 */
static void C_ccall f_3446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3446r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3446r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3446r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[58]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3458,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3457 in string= in k1419 in k1416 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3458,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3464,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3469 in a3457 in string= in k1419 in k1416 */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3470,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_u_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3480,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t8=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=t2;
t11=t7;
f_3480(t11,(C_word)C_eqp(t9,t10));}
else{
t9=t7;
f_3480(t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3478 in a3469 in a3457 in string= in k1419 in k1416 */
static void C_fcall f_3480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3480,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3488,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3491,tmp=(C_word)a,a+=2,tmp);
/* srfi-13.scm: 810  %string-compare */
f_3262(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,*((C_word*)lf[59]+1),t3);}}

/* a3490 in k3478 in a3469 in a3457 in string= in k1419 in k1416 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3491,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3487 in k3478 in a3469 in a3457 in string= in k1419 in k1416 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3488,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3463 in a3457 in string= in k1419 in k1416 */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3464,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3451 in string= in k1419 in k1416 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-compare-ci in k1419 in k1416 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr7r,(void*)f_3416r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_3416r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_3416r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t8=*((C_word*)lf[57]+1);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3422,a[2]=t7,a[3]=t2,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3428,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t2,a[6]=t3,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}

/* a3427 in string-compare-ci in k1419 in k1416 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3428,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3434,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3439 in a3427 in string-compare-ci in k1419 in k1416 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3440,4,t0,t1,t2,t3);}
/* srfi-13.scm: 794  %string-compare-ci */
f_3324(t1,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3433 in a3427 in string-compare-ci in k1419 in k1416 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3421 in string-compare-ci in k1419 in k1416 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3422,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-compare in k1419 in k1416 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr7r,(void*)f_3386r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_3386r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_3386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t8=*((C_word*)lf[56]+1);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3392,a[2]=t7,a[3]=t2,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3398,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t2,a[6]=t3,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}

/* a3397 in string-compare in k1419 in k1416 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3398,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3404,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3409 in a3397 in string-compare in k1419 in k1416 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3410,4,t0,t1,t2,t3);}
/* srfi-13.scm: 786  %string-compare */
f_3262(t1,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3403 in a3397 in string-compare in k1419 in k1416 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3391 in string-compare in k1419 in k1416 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3392,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-compare-ci in k1419 in k1416 */
static void C_fcall f_3324(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3324,NULL,10,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
t11=(C_word)C_u_fixnum_difference(t4,t3);
t12=(C_word)C_u_fixnum_difference(t7,t6);
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3334,a[2]=t5,a[3]=t6,a[4]=t2,a[5]=t10,a[6]=t3,a[7]=t4,a[8]=t1,a[9]=t8,a[10]=t9,a[11]=t12,a[12]=t11,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 771  %string-prefix-length-ci */
f_2772(t13,t2,t3,t4,t5,t6,t7);}

/* k3332 in %string-compare-ci in k1419 in k1416 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[12]);
if(C_truep(t3)){
t4=t1;
t5=(C_word)C_eqp(t4,((C_word*)t0)[11]);
t6=(C_truep(t5)?((C_word*)t0)[10]:((C_word*)t0)[9]);
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3359,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=t1;
t7=(C_word)C_eqp(t6,((C_word*)t0)[11]);
if(C_truep(t7)){
t8=t5;
f_3359(t8,((C_word*)t0)[5]);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t10=(C_word)C_subchar(((C_word*)t0)[4],t9);
t11=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],t1);
t12=(C_word)C_subchar(((C_word*)t0)[2],t11);
/* srfi-13.scm: 775  char-ci<? */
t13=*((C_word*)lf[55]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t8,t10,t12);}}}

/* k3366 in k3332 in %string-compare-ci in k1419 in k1416 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
f_3359(t2,(C_truep(t1)?((C_word*)t0)[3]:((C_word*)t0)[2]));}

/* k3357 in k3332 in %string-compare-ci in k1419 in k1416 */
static void C_fcall f_3359(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-compare in k1419 in k1416 */
static void C_fcall f_3262(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3262,NULL,10,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
t11=(C_word)C_u_fixnum_difference(t4,t3);
t12=(C_word)C_u_fixnum_difference(t7,t6);
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3272,a[2]=t5,a[3]=t6,a[4]=t2,a[5]=t10,a[6]=t3,a[7]=t4,a[8]=t1,a[9]=t8,a[10]=t9,a[11]=t12,a[12]=t11,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 757  %string-prefix-length */
f_2614(t13,t2,t3,t4,t5,t6,t7);}

/* k3270 in %string-compare in k1419 in k1416 */
static void C_ccall f_3272(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3272,2,t0,t1);}
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[12]);
if(C_truep(t3)){
t4=t1;
t5=(C_word)C_eqp(t4,((C_word*)t0)[11]);
t6=(C_truep(t5)?((C_word*)t0)[10]:((C_word*)t0)[9]);
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t4=(C_word)C_u_fixnum_plus(t1,((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3297,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=t1;
t7=(C_word)C_eqp(t6,((C_word*)t0)[11]);
if(C_truep(t7)){
t8=t5;
f_3297(t8,((C_word*)t0)[5]);}
else{
t8=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_word)C_subchar(((C_word*)t0)[4],t8);
t10=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],t1);
t11=(C_word)C_subchar(((C_word*)t0)[2],t10);
t12=(C_word)C_fixnum_lessp(t9,t11);
t13=t5;
f_3297(t13,(C_truep(t12)?((C_word*)t0)[9]:((C_word*)t0)[5]));}}}

/* k3295 in k3270 in %string-compare in k1419 in k1416 */
static void C_fcall f_3297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3140r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3140r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3140r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[52]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3146,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3152,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3151 in string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3152,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3158,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3163 in a3151 in string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3164,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_u_fixnum_difference(t6,t5);
t9=(C_word)C_u_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3256,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 741  %string-suffix-length-ci */
f_2845(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3254 in a3163 in a3151 in string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3157 in a3151 in string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3158,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3145 in string-suffix-ci? in k1419 in k1416 */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3146,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3110r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3110r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3110r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[51]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3116,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3122,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3121 in string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3122,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3128,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3133 in a3121 in string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3134,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_u_fixnum_difference(t6,t5);
t9=(C_word)C_u_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3233,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 735  %string-prefix-length-ci */
f_2772(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3231 in a3133 in a3121 in string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3127 in a3121 in string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3128,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3115 in string-prefix-ci? in k1419 in k1416 */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix? in k1419 in k1416 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3080r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3080r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3080r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[50]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3086,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3092,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3091 in string-suffix? in k1419 in k1416 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3092,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3098,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3103 in a3091 in string-suffix? in k1419 in k1416 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3104,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_u_fixnum_difference(t6,t5);
t9=(C_word)C_u_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 729  %string-suffix-length */
f_2687(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3208 in a3103 in a3091 in string-suffix? in k1419 in k1416 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3097 in a3091 in string-suffix? in k1419 in k1416 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3098,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3085 in string-suffix? in k1419 in k1416 */
static void C_ccall f_3086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3086,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix? in k1419 in k1416 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3050r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3050r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3050r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[49]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3056,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3062,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3061 in string-prefix? in k1419 in k1416 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3062,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3068,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3073 in a3061 in string-prefix? in k1419 in k1416 */
static void C_ccall f_3074(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3074,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_u_fixnum_difference(t6,t5);
t9=(C_word)C_u_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3187,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 722  %string-prefix-length */
f_2614(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3185 in a3073 in a3061 in string-prefix? in k1419 in k1416 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(t1,((C_word*)t0)[2]));}

/* a3067 in a3061 in string-prefix? in k1419 in k1416 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3068,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3055 in string-prefix? in k1419 in k1416 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3056,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_3020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_3020r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3020r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3020r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[48]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3026,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3032,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3031 in string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3032,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3043 in a3031 in string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3044,4,t0,t1,t2,t3);}
/* srfi-13.scm: 686  %string-suffix-length-ci */
f_2845(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a3037 in a3031 in string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3025 in string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2990r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2990r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2990r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[47]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2996,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3002,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a3001 in string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3002,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3008,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a3013 in a3001 in string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3014,4,t0,t1,t2,t3);}
/* srfi-13.scm: 681  %string-prefix-length-ci */
f_2772(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a3007 in a3001 in string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_3008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3008,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2995 in string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-length in k1419 in k1416 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2960r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2960r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2960r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[46]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2966,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2972,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a2971 in string-suffix-length in k1419 in k1416 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2972,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2978,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2983 in a2971 in string-suffix-length in k1419 in k1416 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2984,4,t0,t1,t2,t3);}
/* srfi-13.scm: 676  %string-suffix-length */
f_2687(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2977 in a2971 in string-suffix-length in k1419 in k1416 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2965 in string-suffix-length in k1419 in k1416 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-length in k1419 in k1416 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2930r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2930r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2930r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(10);
t5=*((C_word*)lf[45]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2936,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2942,a[2]=t2,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a2941 in string-prefix-length in k1419 in k1416 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2942,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2948,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2953 in a2941 in string-prefix-length in k1419 in k1416 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2954,4,t0,t1,t2,t3);}
/* srfi-13.scm: 671  %string-prefix-length */
f_2614(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2947 in a2941 in string-prefix-length in k1419 in k1416 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2935 in string-prefix-length in k1419 in k1416 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-suffix-length-ci in k1419 in k1416 */
static void C_fcall f_2845(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2845,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2849,a[2]=t5,a[3]=t2,a[4]=t7,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_u_fixnum_difference(t4,t3);
t10=(C_word)C_u_fixnum_difference(t7,t6);
/* srfi-13.scm: 654  min */
t11=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2847 in %string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2849,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[4];
t7=t3;
f_2858(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2858(t5,C_SCHEME_FALSE);}}

/* k2856 in k2847 in %string-suffix-length-ci in k1419 in k1416 */
static void C_fcall f_2858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2858,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2871(t7,((C_word*)t0)[8],t2,t3);}}

/* lp in k2856 in k2847 in %string-suffix-length-ci in k1419 in k1416 */
static void C_fcall f_2871(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2871,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_lessp(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2881(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2906,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_subchar(((C_word*)t0)[3],t2);
t9=(C_word)C_subchar(((C_word*)t0)[2],t3);
/* srfi-13.scm: 662  char-ci=? */
t10=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}}

/* k2904 in lp in k2856 in k2847 in %string-suffix-length-ci in k1419 in k1416 */
static void C_ccall f_2906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2881(t2,(C_word)C_i_not(t1));}

/* k2879 in lp in k2856 in k2847 in %string-suffix-length-ci in k1419 in k1416 */
static void C_fcall f_2881(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_difference(t2,C_fix(1)));}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 665  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2871(t4,((C_word*)t0)[4],t2,t3);}}

/* %string-prefix-length-ci in k1419 in k1416 */
static void C_fcall f_2772(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2772,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2776,a[2]=t6,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_u_fixnum_difference(t4,t3);
t10=(C_word)C_u_fixnum_difference(t7,t6);
/* srfi-13.scm: 640  min */
t11=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2774 in %string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=t3;
f_2785(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2785(t5,C_SCHEME_FALSE);}}

/* k2783 in k2774 in %string-prefix-length-ci in k1419 in k1416 */
static void C_fcall f_2785(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2785,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2790(t5,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* lp in k2783 in k2774 in %string-prefix-length-ci in k1419 in k1416 */
static void C_fcall f_2790(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2790,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2800(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_subchar(((C_word*)t0)[3],t2);
t9=(C_word)C_subchar(((C_word*)t0)[2],t3);
/* srfi-13.scm: 648  char-ci=? */
t10=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}}

/* k2819 in lp in k2783 in k2774 in %string-prefix-length-ci in k1419 in k1416 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2800(t2,(C_word)C_i_not(t1));}

/* k2798 in lp in k2783 in k2774 in %string-prefix-length-ci in k1419 in k1416 */
static void C_fcall f_2800(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]));}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 651  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2790(t4,((C_word*)t0)[6],t2,t3);}}

/* %string-suffix-length in k1419 in k1416 */
static void C_fcall f_2687(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2687,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2691,a[2]=t5,a[3]=t2,a[4]=t7,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_u_fixnum_difference(t4,t3);
t10=(C_word)C_u_fixnum_difference(t7,t6);
/* srfi-13.scm: 626  min */
t11=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2689 in %string-suffix-length in k1419 in k1416 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2691,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[4];
t7=t3;
f_2700(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2700(t5,C_SCHEME_FALSE);}}

/* k2698 in k2689 in %string-suffix-length in k1419 in k1416 */
static void C_fcall f_2700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2700,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2713(t7,((C_word*)t0)[8],t2,t3);}}

/* lp in k2698 in k2689 in %string-suffix-length in k1419 in k1416 */
static void C_fcall f_2713(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2713,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_lessp(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2723(t7,t5);}
else{
t7=(C_word)C_subchar(((C_word*)t0)[3],t2);
t8=(C_word)C_subchar(((C_word*)t0)[2],t3);
t9=(C_word)C_eqp(t7,t8);
t10=t6;
f_2723(t10,(C_word)C_i_not(t9));}}

/* k2721 in lp in k2698 in k2689 in %string-suffix-length in k1419 in k1416 */
static void C_fcall f_2723(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_difference(t2,C_fix(1)));}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 637  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2713(t4,((C_word*)t0)[4],t2,t3);}}

/* %string-prefix-length in k1419 in k1416 */
static void C_fcall f_2614(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2614,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2618,a[2]=t6,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_u_fixnum_difference(t4,t3);
t10=(C_word)C_u_fixnum_difference(t7,t6);
/* srfi-13.scm: 612  min */
t11=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2616 in %string-prefix-length in k1419 in k1416 */
static void C_ccall f_2618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2618,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=t3;
f_2627(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2627(t5,C_SCHEME_FALSE);}}

/* k2625 in k2616 in %string-prefix-length in k1419 in k1416 */
static void C_fcall f_2627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2627,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2632(t5,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* lp in k2625 in k2616 in %string-prefix-length in k1419 in k1416 */
static void C_fcall f_2632(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2632,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2642(t7,t5);}
else{
t7=(C_word)C_subchar(((C_word*)t0)[3],t2);
t8=(C_word)C_subchar(((C_word*)t0)[2],t3);
t9=(C_word)C_eqp(t7,t8);
t10=t6;
f_2642(t10,(C_word)C_i_not(t9));}}

/* k2640 in lp in k2625 in k2616 in %string-prefix-length in k1419 in k1416 */
static void C_fcall f_2642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]));}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 623  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2632(t4,((C_word*)t0)[6],t2,t3);}}

/* string-tabulate in k1419 in k1416 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2578,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2582,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 594  make-string */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k2580 in string-tabulate in k1419 in k1416 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2591,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2591(t7,t2,t3);}

/* do262 in k2580 in string-tabulate in k1419 in k1416 */
static void C_fcall f_2591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2591,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2612,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 597  proc */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k2610 in do262 in k2580 in string-tabulate in k1419 in k1416 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2591(t4,((C_word*)t0)[2],t3);}

/* k2583 in k2580 in string-tabulate in k1419 in k1416 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-any in k1419 in k1416 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2448r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2448r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2448r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2454,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2460,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2459 in string-any in k1419 in k1416 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2460,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2472(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2502,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 571  char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k2500 in a2459 in string-any in k1419 in k1416 */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2502,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2507(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[6];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2548,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2548(t7,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
/* srfi-13.scm: 585  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[38],*((C_word*)lf[37]+1),((C_word*)t0)[4]);}}}

/* lp in k2500 in a2459 in string-any in k1419 in k1416 */
static void C_fcall f_2548(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2548,NULL,3,t0,t1,t2);}
t3=(C_word)C_subchar(((C_word*)t0)[5],t2);
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t5=((C_word*)t0)[4];
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
/* srfi-13.scm: 582  criteria */
t7=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2567,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 583  criteria */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}

/* k2565 in lp in k2500 in a2459 in string-any in k1419 in k1416 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* srfi-13.scm: 583  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2548(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* lp in k2500 in a2459 in string-any in k1419 in k1416 */
static void C_fcall f_2507(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2507,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 574  char-set-contains? */
t7=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k2515 in lp in k2500 in a2459 in string-any in k1419 in k1416 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 575  lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2507(t3,((C_word*)t0)[4],t2);}}

/* lp in a2459 in string-any in k1419 in k1416 */
static C_word C_fcall f_2472(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_subchar(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t5);}
else{
t6=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a2453 in string-any in k1419 in k1416 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2454,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[37]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-every in k1419 in k1416 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2318r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2318r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2329 in string-every in k1419 in k1416 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2330,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2342,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2342(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2372,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 545  char-set? */
t5=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k2370 in a2329 in string-every in k1419 in k1416 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2372,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2377(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[6];
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2418,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2418(t8,((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
/* srfi-13.scm: 559  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[33],lf[35],*((C_word*)lf[33]+1),((C_word*)t0)[4]);}}}

/* lp in k2370 in a2329 in string-every in k1419 in k1416 */
static void C_fcall f_2418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2418,NULL,3,t0,t1,t2);}
t3=(C_word)C_subchar(((C_word*)t0)[5],t2);
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t5=((C_word*)t0)[4];
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
/* srfi-13.scm: 556  criteria */
t7=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2440,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 557  criteria */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}

/* k2438 in lp in k2370 in a2329 in string-every in k1419 in k1416 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-13.scm: 557  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2418(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lp in k2370 in a2329 in string-every in k1419 in k1416 */
static void C_fcall f_2377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2377,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
t5=(C_word)C_fixnum_greater_or_equal_p(t3,t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2390,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 548  char-set-contains? */
t8=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k2388 in lp in k2370 in a2329 in string-every in k1419 in k1416 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 549  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2377(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lp in a2329 in string-every in k1419 in k1416 */
static C_word C_fcall f_2342(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
t2=t1;
t3=((C_word*)t0)[4];
t4=(C_word)C_fixnum_greater_or_equal_p(t2,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=(C_word)C_subchar(((C_word*)t0)[3],t1);
t6=(C_word)C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* a2323 in string-every in k1419 in k1416 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-for-each-index in k1419 in k1416 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_2281r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2281r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2293,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2292 in string-for-each-index in k1419 in k1416 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2293,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2299(t7,t1,t2);}

/* lp in a2292 in string-for-each-index in k1419 in k1416 */
static void C_fcall f_2299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2299,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2309,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 535  proc */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k2307 in lp in a2292 in string-for-each-index in k1419 in k1416 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 535  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2299(t3,((C_word*)t0)[2],t2);}

/* a2286 in string-for-each-index in k1419 in k1416 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2287,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[32]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-for-each in k1419 in k1416 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_2240r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2240r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2240r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2246,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2252,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a2251 in string-for-each in k1419 in k1416 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2252,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2258(t7,t1,t2);}

/* lp in a2251 in string-for-each in k1419 in k1416 */
static void C_fcall f_2258(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2258,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2268,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 528  proc */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k2266 in lp in a2251 in string-for-each in k1419 in k1416 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 529  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2258(t3,((C_word*)t0)[2],t2);}

/* a2245 in string-for-each in k1419 in k1416 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2246,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[31]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-unfold-right in k1419 in k1416 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr6r,(void*)f_2054r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2054r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(11);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?lf[29]:(C_word)C_u_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t6,C_fix(1)));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2222,tmp=(C_word)a,a+=2,tmp):(C_word)C_u_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t10,C_fix(1)));
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2077,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t12,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 481  make-string */
t16=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(40));}

/* k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2077,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2079(t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_fix(0),t1,C_fix(40),C_fix(40),((C_word*)t0)[2]);}

/* lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_fcall f_2079(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2079,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t2,a[10]=t3,a[11]=t5,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_2085(t11,t1,t6,t7);}

/* lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_fcall f_2085(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2085,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
/* srfi-13.scm: 486  p */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2209,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 503  make-final */
t3=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 487  f */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k2093 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 488  g */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2096 in k2093 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2098,2,t0,t1);}
t2=((C_word*)t0)[10];
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[10],C_fix(1));
t4=(C_word)C_setsubchar(((C_word*)t0)[9],t3,((C_word*)t0)[8]);
/* srfi-13.scm: 492  lp2 */
t5=((C_word*)((C_word*)t0)[7])[1];
f_2085(t5,((C_word*)t0)[6],t3,t1);}
else{
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2119,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 495  min */
t5=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(4096),t3);}}

/* k2117 in k2096 in k2093 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 496  make-string */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2120 in k2117 in k2096 in k2093 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2122,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[10],C_fix(1));
t3=(C_word)C_setsubchar(t1,t2,((C_word*)t0)[9]);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 499  lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2079(t6,((C_word*)t0)[3],t4,t5,t1,((C_word*)t0)[10],t2,((C_word*)t0)[2]);}

/* k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2142,2,t0,t1);}
t2=(C_word)C_fix((C_word)C_header_size(t1));
t3=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[8]));
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t5=(C_word)C_u_fixnum_plus((C_word)C_u_fixnum_plus(t3,((C_word*)t0)[5]),t4);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2157,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=t2,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
t7=(C_word)C_u_fixnum_plus(t5,t2);
/* srfi-13.scm: 508  make-string */
t8=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2157,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 509  %string-copy! */
f_5672(t2,t1,C_fix(0),((C_word*)t0)[2],C_fix(0),((C_word*)t0)[10]);}

/* k2158 in k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 510  %string-copy! */
f_5672(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2161 in k2158 in k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2166,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2172(t7,t2,t3,((C_word*)t0)[2]);}

/* lp in k2161 in k2158 in k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2172,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_fix((C_word)C_header_size(t4));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2191,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 517  %string-copy! */
f_5672(t7,((C_word*)t0)[4],t2,t4,C_fix(0),t6);}
else{
/* srfi-13.scm: 519  %string-copy! */
f_5672(t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}}

/* k2189 in lp in k2161 in k2158 in k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 518  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2172(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2164 in k2161 in k2158 in k2155 in k2140 in k2207 in lp2 in lp in k2075 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2222 in string-unfold-right in k1419 in k1416 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2222,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[30]);}

/* string-unfold in k1419 in k1416 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr6r,(void*)f_1875r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_1875r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_1875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(11);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?lf[24]:(C_word)C_u_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t6,C_fix(1)));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2036,tmp=(C_word)a,a+=2,tmp):(C_word)C_u_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t10,C_fix(1)));
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1898,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t12,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 436  make-string */
t16=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(40));}

/* k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1900(t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_fix(0),t1,C_fix(40),C_fix(0),((C_word*)t0)[2]);}

/* lp in k1896 in string-unfold in k1419 in k1416 */
static void C_fcall f_1900(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1900,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=t5,a[8]=((C_word*)t0)[6],a[9]=t4,a[10]=t2,a[11]=t3,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp));
t11=((C_word*)t9)[1];
f_1906(t11,t1,t6,t7);}

/* lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_fcall f_1906(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1906,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
/* srfi-13.scm: 441  p */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2023,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1961,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 456  make-final */
t3=((C_word*)t0)[8];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 442  f */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}}

/* k1914 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 443  g */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1917 in k1914 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
t2=((C_word*)t0)[10];
t3=((C_word*)t0)[9];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_setsubchar(((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[7]);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* srfi-13.scm: 446  lp2 */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1906(t6,((C_word*)t0)[5],t5,t1);}
else{
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[9],((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1941,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 449  min */
t6=*((C_word*)lf[27]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(4096),t4);}}

/* k1939 in k1917 in k1914 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1944,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 450  make-string */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1942 in k1939 in k1917 in k1914 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1944,2,t0,t1);}
t2=(C_word)C_setsubchar(t1,C_fix(0),((C_word*)t0)[10]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[7],((C_word*)t0)[6]);
/* srfi-13.scm: 452  lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1900(t5,((C_word*)t0)[4],t3,t4,t1,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}

/* k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1961,2,t0,t1);}
t2=(C_word)C_fix((C_word)C_header_size(t1));
t3=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[7]));
t4=(C_word)C_u_fixnum_plus((C_word)C_u_fixnum_plus(t3,((C_word*)t0)[6]),((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1973,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_u_fixnum_plus(t4,t2);
/* srfi-13.scm: 460  make-string */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1976,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 461  %string-copy! */
f_5672(t2,t1,((C_word*)t0)[10],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1976,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 463  %string-copy! */
f_5672(t3,((C_word*)t0)[6],t2,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[8]);}

/* k1980 in k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1985,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[6],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1990(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k1980 in k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_fcall f_1990(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1990,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_fix((C_word)C_header_size(t4));
t7=(C_word)C_u_fixnum_difference(t2,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2012,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 470  %string-copy! */
f_5672(t8,((C_word*)t0)[2],t7,t4,C_fix(0),t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2010 in lp in k1980 in k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 471  lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1990(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1983 in k1980 in k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 472  %string-copy! */
f_5672(t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k1986 in k1983 in k1980 in k1974 in k1971 in k1959 in k2021 in lp2 in lp in k1896 in string-unfold in k1419 in k1416 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2036 in string-unfold in k1419 in k1416 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2036,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[25]);}

/* string-fold-right in k1419 in k1416 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_1829r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1829r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1829r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1841,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a1840 in string-fold-right in k1419 in k1416 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1841,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1851(t8,t1,((C_word*)t0)[2],t4);}

/* lp in a1840 in string-fold-right in k1419 in k1416 */
static void C_fcall f_1851(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1851,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1865,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_subchar(((C_word*)t0)[3],t3);
/* srfi-13.scm: 361  kons */
t8=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* k1863 in lp in a1840 in string-fold-right in k1419 in k1416 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 361  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1851(t3,((C_word*)t0)[2],t1,t2);}

/* a1834 in string-fold-right in k1419 in k1416 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[22]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-fold in k1419 in k1416 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5r,(void*)f_1787r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1787r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1787r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1793,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1799,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}

/* a1798 in string-fold in k1419 in k1416 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1799,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1805(t7,t1,((C_word*)t0)[2],t2);}

/* lp in a1798 in string-fold in k1419 in k1416 */
static void C_fcall f_1805(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1805,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1819,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_subchar(((C_word*)t0)[3],t3);
/* srfi-13.scm: 354  kons */
t8=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* k1817 in lp in a1798 in string-fold in k1419 in k1416 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 354  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1805(t3,((C_word*)t0)[2],t1,t2);}

/* a1792 in string-fold in k1419 in k1416 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[21]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-map! in k1419 in k1416 */
static void C_fcall f_1750(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1750,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_word)C_u_fixnum_difference(t5,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1760,a[2]=t2,a[3]=t8,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1760(t10,t1,t6);}

/* do68 in %string-map! in k1419 in k1416 */
static void C_fcall f_1760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1760,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1781,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[4],t2);
/* srfi-13.scm: 348  proc */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k1779 in do68 in %string-map! in k1419 in k1416 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1760(t4,((C_word*)t0)[2],t3);}

/* string-map! in k1419 in k1416 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_1732r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1732r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1732r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1738,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1744,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a1743 in string-map! in k1419 in k1416 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1744,4,t0,t1,t2,t3);}
/* srfi-13.scm: 343  %string-map! */
f_1750(t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a1737 in string-map! in k1419 in k1416 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[19]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-map in k1419 in k1416 */
static void C_fcall f_1681(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1681,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_word)C_u_fixnum_difference(t5,t4);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1688,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 333  make-string */
t8=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}

/* k1686 in %string-map in k1419 in k1416 */
static void C_ccall f_1688(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1691,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1701(t8,t2,t3,t4);}

/* do52 in k1686 in %string-map in k1419 in k1416 */
static void C_fcall f_1701(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1701,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1726,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_subchar(((C_word*)t0)[3],t2);
/* srfi-13.scm: 337  proc */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k1724 in do52 in k1686 in %string-map in k1419 in k1416 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_1701(t5,((C_word*)t0)[2],t3,t4);}

/* k1689 in k1686 in %string-map in k1419 in k1416 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-map in k1419 in k1416 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4r,(void*)f_1663r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1663r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1669,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1675,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a1674 in string-map in k1419 in k1416 */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1675,4,t0,t1,t2,t3);}
/* srfi-13.scm: 329  %string-map */
f_1681(t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a1668 in string-map in k1419 in k1416 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1669,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-copy in k1419 in k1416 */
static void C_ccall f_1645(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1645r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1645r(t0,t1,t2,t3);}}

static void C_ccall f_1645r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1651,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a1656 in string-copy in k1419 in k1416 */
static void C_ccall f_1657(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1657,4,t0,t1,t2,t3);}
/* srfi-13.scm: 296  ##sys#substring */
t4=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* a1650 in string-copy in k1419 in k1416 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1651,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[15]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %substring/shared in k1419 in k1416 */
static void C_fcall f_1623(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1623,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1630,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t6)){
t7=(C_word)C_fix((C_word)C_header_size(t2));
t8=t4;
t9=t5;
f_1630(t9,(C_word)C_eqp(t8,t7));}
else{
t7=t5;
f_1630(t7,C_SCHEME_FALSE);}}

/* k1628 in %substring/shared in k1419 in k1416 */
static void C_fcall f_1630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
/* srfi-13.scm: 292  ##sys#substring */
t2=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* substring/shared in k1419 in k1416 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1596r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1596r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1596r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t5=(C_word)C_fix((C_word)C_header_size(t2));
t6=(C_word)C_i_nullp(t4);
t7=(C_truep(t6)?t5:(C_word)C_u_i_car(t4));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1606,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 277  check-substring-spec */
t9=*((C_word*)lf[10]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[12],t2,t3,t7);}

/* k1604 in substring/shared in k1419 in k1416 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 278  %substring/shared */
f_1623(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* check-substring-spec in k1419 in k1416 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1580,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1594,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 245  substring-spec-ok? */
t7=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,t5);}

/* k1592 in check-substring-spec in k1419 in k1416 */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* srfi-13.scm: 246  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[6],lf[10],lf[11],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* substring-spec-ok? in k1419 in k1416 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1540,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_stringp(t2))){
if(C_truep((C_word)C_fixnump(t3))){
if(C_truep((C_word)C_fixnump(t4))){
t5=t3;
if(C_truep((C_word)C_fixnum_less_or_equal_p(C_fix(0),t5))){
t6=t3;
t7=t4;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t6,t7))){
t8=(C_word)C_fix((C_word)C_header_size(t2));
t9=t4;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_fixnum_less_or_equal_p(t9,t8));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* string-parse-final-start+end in k1419 in k1416 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1513,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1519,a[2]=t4,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1525,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}

/* a1524 in string-parse-final-start+end in k1419 in k1416 */
static void C_ccall f_1525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1525,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t2))){
/* srfi-13.scm: 229  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[7],lf[8],((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 230  values */
C_values(4,0,t1,t3,t4);}}

/* a1518 in string-parse-final-start+end in k1419 in k1416 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
/* srfi-13.scm: 228  string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-parse-start+end in k1419 in k1416 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1423,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fix((C_word)C_header_size(t3));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_u_i_car(t4);
t7=(C_word)C_slot(t4,C_fix(1));
t8=(C_truep((C_word)C_fixnump(t6))?(C_word)C_fixnum_greater_or_equal_p(t6,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1450,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=t3,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 211  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}
else{
/* srfi-13.scm: 223  ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,lf[2],lf[6],t2,t6,t3);}}
else{
/* srfi-13.scm: 225  values */
C_values(5,0,t1,C_SCHEME_END_OF_LIST,C_fix(0),t5);}}

/* a1485 in string-parse-start+end in k1419 in k1416 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1486,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[4],t4))){
/* srfi-13.scm: 220  values */
C_values(5,0,t1,t3,((C_word*)t0)[4],t2);}
else{
/* srfi-13.scm: 221  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t1,lf[2],lf[5],((C_word*)t0)[3],((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* a1449 in string-parse-start+end in k1419 in k1416 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1450,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_truep((C_word)C_fixnump(t2))?(C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-13.scm: 217  values */
C_values(4,0,t1,t2,t3);}
else{
/* srfi-13.scm: 218  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[2],lf[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}}
else{
/* srfi-13.scm: 219  values */
C_values(4,0,t1,((C_word*)t0)[4],((C_word*)t0)[5]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[561] = {
{"toplevelsrfi-13.scm",(void*)C_srfi_13_toplevel},
{"f_1418srfi-13.scm",(void*)f_1418},
{"f_1421srfi-13.scm",(void*)f_1421},
{"f_7329srfi-13.scm",(void*)f_7329},
{"f_7438srfi-13.scm",(void*)f_7438},
{"f_7408srfi-13.scm",(void*)f_7408},
{"f_7391srfi-13.scm",(void*)f_7391},
{"f_7346srfi-13.scm",(void*)f_7346},
{"f_7352srfi-13.scm",(void*)f_7352},
{"f_7374srfi-13.scm",(void*)f_7374},
{"f_7256srfi-13.scm",(void*)f_7256},
{"f_7327srfi-13.scm",(void*)f_7327},
{"f_7269srfi-13.scm",(void*)f_7269},
{"f_7287srfi-13.scm",(void*)f_7287},
{"f_7312srfi-13.scm",(void*)f_7312},
{"f_7122srfi-13.scm",(void*)f_7122},
{"f_7169srfi-13.scm",(void*)f_7169},
{"f_7182srfi-13.scm",(void*)f_7182},
{"f_7235srfi-13.scm",(void*)f_7235},
{"f_7231srfi-13.scm",(void*)f_7231},
{"f_7128srfi-13.scm",(void*)f_7128},
{"f_7150srfi-13.scm",(void*)f_7150},
{"f_7140srfi-13.scm",(void*)f_7140},
{"f_6990srfi-13.scm",(void*)f_6990},
{"f_7037srfi-13.scm",(void*)f_7037},
{"f_7100srfi-13.scm",(void*)f_7100},
{"f_7103srfi-13.scm",(void*)f_7103},
{"f_7097srfi-13.scm",(void*)f_7097},
{"f_7093srfi-13.scm",(void*)f_7093},
{"f_6996srfi-13.scm",(void*)f_6996},
{"f_7018srfi-13.scm",(void*)f_7018},
{"f_7008srfi-13.scm",(void*)f_7008},
{"f_6908srfi-13.scm",(void*)f_6908},
{"f_6926srfi-13.scm",(void*)f_6926},
{"f_6932srfi-13.scm",(void*)f_6932},
{"f_6936srfi-13.scm",(void*)f_6936},
{"f_6945srfi-13.scm",(void*)f_6945},
{"f_6970srfi-13.scm",(void*)f_6970},
{"f_6959srfi-13.scm",(void*)f_6959},
{"f_6920srfi-13.scm",(void*)f_6920},
{"f_6857srfi-13.scm",(void*)f_6857},
{"f_6861srfi-13.scm",(void*)f_6861},
{"f_6872srfi-13.scm",(void*)f_6872},
{"f_6885srfi-13.scm",(void*)f_6885},
{"f_6888srfi-13.scm",(void*)f_6888},
{"f_6891srfi-13.scm",(void*)f_6891},
{"f_6894srfi-13.scm",(void*)f_6894},
{"f_6866srfi-13.scm",(void*)f_6866},
{"f_6814srfi-13.scm",(void*)f_6814},
{"f_6818srfi-13.scm",(void*)f_6818},
{"f_6821srfi-13.scm",(void*)f_6821},
{"f_6826srfi-13.scm",(void*)f_6826},
{"f_6848srfi-13.scm",(void*)f_6848},
{"f_6824srfi-13.scm",(void*)f_6824},
{"f_6691srfi-13.scm",(void*)f_6691},
{"f_6712srfi-13.scm",(void*)f_6712},
{"f_6762srfi-13.scm",(void*)f_6762},
{"f_6609srfi-13.scm",(void*)f_6609},
{"f_6633srfi-13.scm",(void*)f_6633},
{"f_6536srfi-13.scm",(void*)f_6536},
{"f_6543srfi-13.scm",(void*)f_6543},
{"f_6548srfi-13.scm",(void*)f_6548},
{"f_6564srfi-13.scm",(void*)f_6564},
{"f_6546srfi-13.scm",(void*)f_6546},
{"f_6577srfi-13.scm",(void*)f_6577},
{"f_6434srfi-13.scm",(void*)f_6434},
{"f_6440srfi-13.scm",(void*)f_6440},
{"f_6494srfi-13.scm",(void*)f_6494},
{"f_6499srfi-13.scm",(void*)f_6499},
{"f_6515srfi-13.scm",(void*)f_6515},
{"f_6497srfi-13.scm",(void*)f_6497},
{"f_6428srfi-13.scm",(void*)f_6428},
{"f_6382srfi-13.scm",(void*)f_6382},
{"f_6394srfi-13.scm",(void*)f_6394},
{"f_6404srfi-13.scm",(void*)f_6404},
{"f_6388srfi-13.scm",(void*)f_6388},
{"f_6327srfi-13.scm",(void*)f_6327},
{"f_6339srfi-13.scm",(void*)f_6339},
{"f_6349srfi-13.scm",(void*)f_6349},
{"f_6333srfi-13.scm",(void*)f_6333},
{"f_6272srfi-13.scm",(void*)f_6272},
{"f_6284srfi-13.scm",(void*)f_6284},
{"f_6291srfi-13.scm",(void*)f_6291},
{"f_6300srfi-13.scm",(void*)f_6300},
{"f_6278srfi-13.scm",(void*)f_6278},
{"f_6269srfi-13.scm",(void*)f_6269},
{"f_6148srfi-13.scm",(void*)f_6148},
{"f_6172srfi-13.scm",(void*)f_6172},
{"f_6181srfi-13.scm",(void*)f_6181},
{"f_6213srfi-13.scm",(void*)f_6213},
{"f_6220srfi-13.scm",(void*)f_6220},
{"f_6211srfi-13.scm",(void*)f_6211},
{"f_6166srfi-13.scm",(void*)f_6166},
{"f_6110srfi-13.scm",(void*)f_6110},
{"f_6116srfi-13.scm",(void*)f_6116},
{"f_6123srfi-13.scm",(void*)f_6123},
{"f_5975srfi-13.scm",(void*)f_5975},
{"f_5993srfi-13.scm",(void*)f_5993},
{"f_6000srfi-13.scm",(void*)f_6000},
{"f_6017srfi-13.scm",(void*)f_6017},
{"f_6032srfi-13.scm",(void*)f_6032},
{"f_6065srfi-13.scm",(void*)f_6065},
{"f_6059srfi-13.scm",(void*)f_6059},
{"f_6003srfi-13.scm",(void*)f_6003},
{"f_5987srfi-13.scm",(void*)f_5987},
{"f_5877srfi-13.scm",(void*)f_5877},
{"f_5884srfi-13.scm",(void*)f_5884},
{"f_5893srfi-13.scm",(void*)f_5893},
{"f_5915srfi-13.scm",(void*)f_5915},
{"f_5815srfi-13.scm",(void*)f_5815},
{"f_5827srfi-13.scm",(void*)f_5827},
{"f_5839srfi-13.scm",(void*)f_5839},
{"f_5851srfi-13.scm",(void*)f_5851},
{"f_5864srfi-13.scm",(void*)f_5864},
{"f_5833srfi-13.scm",(void*)f_5833},
{"f_5821srfi-13.scm",(void*)f_5821},
{"f_5753srfi-13.scm",(void*)f_5753},
{"f_5765srfi-13.scm",(void*)f_5765},
{"f_5777srfi-13.scm",(void*)f_5777},
{"f_5789srfi-13.scm",(void*)f_5789},
{"f_5802srfi-13.scm",(void*)f_5802},
{"f_5771srfi-13.scm",(void*)f_5771},
{"f_5759srfi-13.scm",(void*)f_5759},
{"f_5672srfi-13.scm",(void*)f_5672},
{"f_5722srfi-13.scm",(void*)f_5722},
{"f_5684srfi-13.scm",(void*)f_5684},
{"f_5643srfi-13.scm",(void*)f_5643},
{"f_5655srfi-13.scm",(void*)f_5655},
{"f_5659srfi-13.scm",(void*)f_5659},
{"f_5649srfi-13.scm",(void*)f_5649},
{"f_5602srfi-13.scm",(void*)f_5602},
{"f_5614srfi-13.scm",(void*)f_5614},
{"f_5624srfi-13.scm",(void*)f_5624},
{"f_5608srfi-13.scm",(void*)f_5608},
{"f_5467srfi-13.scm",(void*)f_5467},
{"f_5479srfi-13.scm",(void*)f_5479},
{"f_5525srfi-13.scm",(void*)f_5525},
{"f_5569srfi-13.scm",(void*)f_5569},
{"f_5590srfi-13.scm",(void*)f_5590},
{"f_5530srfi-13.scm",(void*)f_5530},
{"f_5551srfi-13.scm",(void*)f_5551},
{"f_5491srfi-13.scm",(void*)f_5491},
{"f_5473srfi-13.scm",(void*)f_5473},
{"f_5332srfi-13.scm",(void*)f_5332},
{"f_5344srfi-13.scm",(void*)f_5344},
{"f_5390srfi-13.scm",(void*)f_5390},
{"f_5438srfi-13.scm",(void*)f_5438},
{"f_5451srfi-13.scm",(void*)f_5451},
{"f_5399srfi-13.scm",(void*)f_5399},
{"f_5412srfi-13.scm",(void*)f_5412},
{"f_5360srfi-13.scm",(void*)f_5360},
{"f_5338srfi-13.scm",(void*)f_5338},
{"f_5209srfi-13.scm",(void*)f_5209},
{"f_5221srfi-13.scm",(void*)f_5221},
{"f_5263srfi-13.scm",(void*)f_5263},
{"f_5303srfi-13.scm",(void*)f_5303},
{"f_5316srfi-13.scm",(void*)f_5316},
{"f_5268srfi-13.scm",(void*)f_5268},
{"f_5281srfi-13.scm",(void*)f_5281},
{"f_5233srfi-13.scm",(void*)f_5233},
{"f_5215srfi-13.scm",(void*)f_5215},
{"f_5074srfi-13.scm",(void*)f_5074},
{"f_5086srfi-13.scm",(void*)f_5086},
{"f_5132srfi-13.scm",(void*)f_5132},
{"f_5180srfi-13.scm",(void*)f_5180},
{"f_5193srfi-13.scm",(void*)f_5193},
{"f_5141srfi-13.scm",(void*)f_5141},
{"f_5154srfi-13.scm",(void*)f_5154},
{"f_5102srfi-13.scm",(void*)f_5102},
{"f_5080srfi-13.scm",(void*)f_5080},
{"f_4951srfi-13.scm",(void*)f_4951},
{"f_4963srfi-13.scm",(void*)f_4963},
{"f_5005srfi-13.scm",(void*)f_5005},
{"f_5045srfi-13.scm",(void*)f_5045},
{"f_5058srfi-13.scm",(void*)f_5058},
{"f_5010srfi-13.scm",(void*)f_5010},
{"f_5023srfi-13.scm",(void*)f_5023},
{"f_4975srfi-13.scm",(void*)f_4975},
{"f_4957srfi-13.scm",(void*)f_4957},
{"f_4843srfi-13.scm",(void*)f_4843},
{"f_4855srfi-13.scm",(void*)f_4855},
{"f_4937srfi-13.scm",(void*)f_4937},
{"f_4898srfi-13.scm",(void*)f_4898},
{"f_4924srfi-13.scm",(void*)f_4924},
{"f_4931srfi-13.scm",(void*)f_4931},
{"f_4901srfi-13.scm",(void*)f_4901},
{"f_4904srfi-13.scm",(void*)f_4904},
{"f_4909srfi-13.scm",(void*)f_4909},
{"f_4916srfi-13.scm",(void*)f_4916},
{"f_4907srfi-13.scm",(void*)f_4907},
{"f_4868srfi-13.scm",(void*)f_4868},
{"f_4882srfi-13.scm",(void*)f_4882},
{"f_4889srfi-13.scm",(void*)f_4889},
{"f_4871srfi-13.scm",(void*)f_4871},
{"f_4849srfi-13.scm",(void*)f_4849},
{"f_4735srfi-13.scm",(void*)f_4735},
{"f_4747srfi-13.scm",(void*)f_4747},
{"f_4829srfi-13.scm",(void*)f_4829},
{"f_4790srfi-13.scm",(void*)f_4790},
{"f_4816srfi-13.scm",(void*)f_4816},
{"f_4823srfi-13.scm",(void*)f_4823},
{"f_4793srfi-13.scm",(void*)f_4793},
{"f_4796srfi-13.scm",(void*)f_4796},
{"f_4801srfi-13.scm",(void*)f_4801},
{"f_4808srfi-13.scm",(void*)f_4808},
{"f_4799srfi-13.scm",(void*)f_4799},
{"f_4760srfi-13.scm",(void*)f_4760},
{"f_4774srfi-13.scm",(void*)f_4774},
{"f_4781srfi-13.scm",(void*)f_4781},
{"f_4763srfi-13.scm",(void*)f_4763},
{"f_4741srfi-13.scm",(void*)f_4741},
{"f_4676srfi-13.scm",(void*)f_4676},
{"f_4694srfi-13.scm",(void*)f_4694},
{"f_4714srfi-13.scm",(void*)f_4714},
{"f_4717srfi-13.scm",(void*)f_4717},
{"f_4688srfi-13.scm",(void*)f_4688},
{"f_4621srfi-13.scm",(void*)f_4621},
{"f_4639srfi-13.scm",(void*)f_4639},
{"f_4659srfi-13.scm",(void*)f_4659},
{"f_4662srfi-13.scm",(void*)f_4662},
{"f_4633srfi-13.scm",(void*)f_4633},
{"f_4571srfi-13.scm",(void*)f_4571},
{"f_4589srfi-13.scm",(void*)f_4589},
{"f_4593srfi-13.scm",(void*)f_4593},
{"f_4607srfi-13.scm",(void*)f_4607},
{"f_4583srfi-13.scm",(void*)f_4583},
{"f_4525srfi-13.scm",(void*)f_4525},
{"f_4543srfi-13.scm",(void*)f_4543},
{"f_4547srfi-13.scm",(void*)f_4547},
{"f_4537srfi-13.scm",(void*)f_4537},
{"f_4483srfi-13.scm",(void*)f_4483},
{"f_4501srfi-13.scm",(void*)f_4501},
{"f_4505srfi-13.scm",(void*)f_4505},
{"f_4495srfi-13.scm",(void*)f_4495},
{"f_4470srfi-13.scm",(void*)f_4470},
{"f_4461srfi-13.scm",(void*)f_4461},
{"f_4448srfi-13.scm",(void*)f_4448},
{"f_4442srfi-13.scm",(void*)f_4442},
{"f_4417srfi-13.scm",(void*)f_4417},
{"f_4429srfi-13.scm",(void*)f_4429},
{"f_4433srfi-13.scm",(void*)f_4433},
{"f_4436srfi-13.scm",(void*)f_4436},
{"f_4423srfi-13.scm",(void*)f_4423},
{"f_4399srfi-13.scm",(void*)f_4399},
{"f_4411srfi-13.scm",(void*)f_4411},
{"f_4405srfi-13.scm",(void*)f_4405},
{"f_4340srfi-13.scm",(void*)f_4340},
{"f_4346srfi-13.scm",(void*)f_4346},
{"f_4393srfi-13.scm",(void*)f_4393},
{"f_4350srfi-13.scm",(void*)f_4350},
{"f_4380srfi-13.scm",(void*)f_4380},
{"f_4362srfi-13.scm",(void*)f_4362},
{"f_4368srfi-13.scm",(void*)f_4368},
{"f_4322srfi-13.scm",(void*)f_4322},
{"f_4334srfi-13.scm",(void*)f_4334},
{"f_4328srfi-13.scm",(void*)f_4328},
{"f_4304srfi-13.scm",(void*)f_4304},
{"f_4316srfi-13.scm",(void*)f_4316},
{"f_4310srfi-13.scm",(void*)f_4310},
{"f_4286srfi-13.scm",(void*)f_4286},
{"f_4298srfi-13.scm",(void*)f_4298},
{"f_4292srfi-13.scm",(void*)f_4292},
{"f_4268srfi-13.scm",(void*)f_4268},
{"f_4280srfi-13.scm",(void*)f_4280},
{"f_4274srfi-13.scm",(void*)f_4274},
{"f_4215srfi-13.scm",(void*)f_4215},
{"f_4225srfi-13.scm",(void*)f_4225},
{"f_4236srfi-13.scm",(void*)f_4236},
{"f_4242srfi-13.scm",(void*)f_4242},
{"f_4230srfi-13.scm",(void*)f_4230},
{"f_4172srfi-13.scm",(void*)f_4172},
{"f_4182srfi-13.scm",(void*)f_4182},
{"f_4193srfi-13.scm",(void*)f_4193},
{"f_4187srfi-13.scm",(void*)f_4187},
{"f_4100srfi-13.scm",(void*)f_4100},
{"f_4118srfi-13.scm",(void*)f_4118},
{"f_4151srfi-13.scm",(void*)f_4151},
{"f_4153srfi-13.scm",(void*)f_4153},
{"f_4102srfi-13.scm",(void*)f_4102},
{"f_4052srfi-13.scm",(void*)f_4052},
{"f_4064srfi-13.scm",(void*)f_4064},
{"f_4076srfi-13.scm",(void*)f_4076},
{"f_4083srfi-13.scm",(void*)f_4083},
{"f_4091srfi-13.scm",(void*)f_4091},
{"f_4070srfi-13.scm",(void*)f_4070},
{"f_4058srfi-13.scm",(void*)f_4058},
{"f_4004srfi-13.scm",(void*)f_4004},
{"f_4016srfi-13.scm",(void*)f_4016},
{"f_4028srfi-13.scm",(void*)f_4028},
{"f_4035srfi-13.scm",(void*)f_4035},
{"f_4043srfi-13.scm",(void*)f_4043},
{"f_4022srfi-13.scm",(void*)f_4022},
{"f_4010srfi-13.scm",(void*)f_4010},
{"f_3953srfi-13.scm",(void*)f_3953},
{"f_3965srfi-13.scm",(void*)f_3965},
{"f_3977srfi-13.scm",(void*)f_3977},
{"f_3984srfi-13.scm",(void*)f_3984},
{"f_3995srfi-13.scm",(void*)f_3995},
{"f_3992srfi-13.scm",(void*)f_3992},
{"f_3971srfi-13.scm",(void*)f_3971},
{"f_3959srfi-13.scm",(void*)f_3959},
{"f_3902srfi-13.scm",(void*)f_3902},
{"f_3914srfi-13.scm",(void*)f_3914},
{"f_3926srfi-13.scm",(void*)f_3926},
{"f_3933srfi-13.scm",(void*)f_3933},
{"f_3944srfi-13.scm",(void*)f_3944},
{"f_3941srfi-13.scm",(void*)f_3941},
{"f_3920srfi-13.scm",(void*)f_3920},
{"f_3908srfi-13.scm",(void*)f_3908},
{"f_3835srfi-13.scm",(void*)f_3835},
{"f_3847srfi-13.scm",(void*)f_3847},
{"f_3859srfi-13.scm",(void*)f_3859},
{"f_3882srfi-13.scm",(void*)f_3882},
{"f_3877srfi-13.scm",(void*)f_3877},
{"f_3853srfi-13.scm",(void*)f_3853},
{"f_3841srfi-13.scm",(void*)f_3841},
{"f_3773srfi-13.scm",(void*)f_3773},
{"f_3785srfi-13.scm",(void*)f_3785},
{"f_3797srfi-13.scm",(void*)f_3797},
{"f_3807srfi-13.scm",(void*)f_3807},
{"f_3818srfi-13.scm",(void*)f_3818},
{"f_3815srfi-13.scm",(void*)f_3815},
{"f_3791srfi-13.scm",(void*)f_3791},
{"f_3779srfi-13.scm",(void*)f_3779},
{"f_3725srfi-13.scm",(void*)f_3725},
{"f_3737srfi-13.scm",(void*)f_3737},
{"f_3749srfi-13.scm",(void*)f_3749},
{"f_3756srfi-13.scm",(void*)f_3756},
{"f_3764srfi-13.scm",(void*)f_3764},
{"f_3743srfi-13.scm",(void*)f_3743},
{"f_3731srfi-13.scm",(void*)f_3731},
{"f_3677srfi-13.scm",(void*)f_3677},
{"f_3689srfi-13.scm",(void*)f_3689},
{"f_3701srfi-13.scm",(void*)f_3701},
{"f_3708srfi-13.scm",(void*)f_3708},
{"f_3716srfi-13.scm",(void*)f_3716},
{"f_3695srfi-13.scm",(void*)f_3695},
{"f_3683srfi-13.scm",(void*)f_3683},
{"f_3626srfi-13.scm",(void*)f_3626},
{"f_3638srfi-13.scm",(void*)f_3638},
{"f_3650srfi-13.scm",(void*)f_3650},
{"f_3657srfi-13.scm",(void*)f_3657},
{"f_3668srfi-13.scm",(void*)f_3668},
{"f_3665srfi-13.scm",(void*)f_3665},
{"f_3644srfi-13.scm",(void*)f_3644},
{"f_3632srfi-13.scm",(void*)f_3632},
{"f_3575srfi-13.scm",(void*)f_3575},
{"f_3587srfi-13.scm",(void*)f_3587},
{"f_3599srfi-13.scm",(void*)f_3599},
{"f_3606srfi-13.scm",(void*)f_3606},
{"f_3617srfi-13.scm",(void*)f_3617},
{"f_3614srfi-13.scm",(void*)f_3614},
{"f_3593srfi-13.scm",(void*)f_3593},
{"f_3581srfi-13.scm",(void*)f_3581},
{"f_3508srfi-13.scm",(void*)f_3508},
{"f_3520srfi-13.scm",(void*)f_3520},
{"f_3532srfi-13.scm",(void*)f_3532},
{"f_3555srfi-13.scm",(void*)f_3555},
{"f_3550srfi-13.scm",(void*)f_3550},
{"f_3526srfi-13.scm",(void*)f_3526},
{"f_3514srfi-13.scm",(void*)f_3514},
{"f_3446srfi-13.scm",(void*)f_3446},
{"f_3458srfi-13.scm",(void*)f_3458},
{"f_3470srfi-13.scm",(void*)f_3470},
{"f_3480srfi-13.scm",(void*)f_3480},
{"f_3491srfi-13.scm",(void*)f_3491},
{"f_3488srfi-13.scm",(void*)f_3488},
{"f_3464srfi-13.scm",(void*)f_3464},
{"f_3452srfi-13.scm",(void*)f_3452},
{"f_3416srfi-13.scm",(void*)f_3416},
{"f_3428srfi-13.scm",(void*)f_3428},
{"f_3440srfi-13.scm",(void*)f_3440},
{"f_3434srfi-13.scm",(void*)f_3434},
{"f_3422srfi-13.scm",(void*)f_3422},
{"f_3386srfi-13.scm",(void*)f_3386},
{"f_3398srfi-13.scm",(void*)f_3398},
{"f_3410srfi-13.scm",(void*)f_3410},
{"f_3404srfi-13.scm",(void*)f_3404},
{"f_3392srfi-13.scm",(void*)f_3392},
{"f_3324srfi-13.scm",(void*)f_3324},
{"f_3334srfi-13.scm",(void*)f_3334},
{"f_3368srfi-13.scm",(void*)f_3368},
{"f_3359srfi-13.scm",(void*)f_3359},
{"f_3262srfi-13.scm",(void*)f_3262},
{"f_3272srfi-13.scm",(void*)f_3272},
{"f_3297srfi-13.scm",(void*)f_3297},
{"f_3140srfi-13.scm",(void*)f_3140},
{"f_3152srfi-13.scm",(void*)f_3152},
{"f_3164srfi-13.scm",(void*)f_3164},
{"f_3256srfi-13.scm",(void*)f_3256},
{"f_3158srfi-13.scm",(void*)f_3158},
{"f_3146srfi-13.scm",(void*)f_3146},
{"f_3110srfi-13.scm",(void*)f_3110},
{"f_3122srfi-13.scm",(void*)f_3122},
{"f_3134srfi-13.scm",(void*)f_3134},
{"f_3233srfi-13.scm",(void*)f_3233},
{"f_3128srfi-13.scm",(void*)f_3128},
{"f_3116srfi-13.scm",(void*)f_3116},
{"f_3080srfi-13.scm",(void*)f_3080},
{"f_3092srfi-13.scm",(void*)f_3092},
{"f_3104srfi-13.scm",(void*)f_3104},
{"f_3210srfi-13.scm",(void*)f_3210},
{"f_3098srfi-13.scm",(void*)f_3098},
{"f_3086srfi-13.scm",(void*)f_3086},
{"f_3050srfi-13.scm",(void*)f_3050},
{"f_3062srfi-13.scm",(void*)f_3062},
{"f_3074srfi-13.scm",(void*)f_3074},
{"f_3187srfi-13.scm",(void*)f_3187},
{"f_3068srfi-13.scm",(void*)f_3068},
{"f_3056srfi-13.scm",(void*)f_3056},
{"f_3020srfi-13.scm",(void*)f_3020},
{"f_3032srfi-13.scm",(void*)f_3032},
{"f_3044srfi-13.scm",(void*)f_3044},
{"f_3038srfi-13.scm",(void*)f_3038},
{"f_3026srfi-13.scm",(void*)f_3026},
{"f_2990srfi-13.scm",(void*)f_2990},
{"f_3002srfi-13.scm",(void*)f_3002},
{"f_3014srfi-13.scm",(void*)f_3014},
{"f_3008srfi-13.scm",(void*)f_3008},
{"f_2996srfi-13.scm",(void*)f_2996},
{"f_2960srfi-13.scm",(void*)f_2960},
{"f_2972srfi-13.scm",(void*)f_2972},
{"f_2984srfi-13.scm",(void*)f_2984},
{"f_2978srfi-13.scm",(void*)f_2978},
{"f_2966srfi-13.scm",(void*)f_2966},
{"f_2930srfi-13.scm",(void*)f_2930},
{"f_2942srfi-13.scm",(void*)f_2942},
{"f_2954srfi-13.scm",(void*)f_2954},
{"f_2948srfi-13.scm",(void*)f_2948},
{"f_2936srfi-13.scm",(void*)f_2936},
{"f_2845srfi-13.scm",(void*)f_2845},
{"f_2849srfi-13.scm",(void*)f_2849},
{"f_2858srfi-13.scm",(void*)f_2858},
{"f_2871srfi-13.scm",(void*)f_2871},
{"f_2906srfi-13.scm",(void*)f_2906},
{"f_2881srfi-13.scm",(void*)f_2881},
{"f_2772srfi-13.scm",(void*)f_2772},
{"f_2776srfi-13.scm",(void*)f_2776},
{"f_2785srfi-13.scm",(void*)f_2785},
{"f_2790srfi-13.scm",(void*)f_2790},
{"f_2821srfi-13.scm",(void*)f_2821},
{"f_2800srfi-13.scm",(void*)f_2800},
{"f_2687srfi-13.scm",(void*)f_2687},
{"f_2691srfi-13.scm",(void*)f_2691},
{"f_2700srfi-13.scm",(void*)f_2700},
{"f_2713srfi-13.scm",(void*)f_2713},
{"f_2723srfi-13.scm",(void*)f_2723},
{"f_2614srfi-13.scm",(void*)f_2614},
{"f_2618srfi-13.scm",(void*)f_2618},
{"f_2627srfi-13.scm",(void*)f_2627},
{"f_2632srfi-13.scm",(void*)f_2632},
{"f_2642srfi-13.scm",(void*)f_2642},
{"f_2578srfi-13.scm",(void*)f_2578},
{"f_2582srfi-13.scm",(void*)f_2582},
{"f_2591srfi-13.scm",(void*)f_2591},
{"f_2612srfi-13.scm",(void*)f_2612},
{"f_2585srfi-13.scm",(void*)f_2585},
{"f_2448srfi-13.scm",(void*)f_2448},
{"f_2460srfi-13.scm",(void*)f_2460},
{"f_2502srfi-13.scm",(void*)f_2502},
{"f_2548srfi-13.scm",(void*)f_2548},
{"f_2567srfi-13.scm",(void*)f_2567},
{"f_2507srfi-13.scm",(void*)f_2507},
{"f_2517srfi-13.scm",(void*)f_2517},
{"f_2472srfi-13.scm",(void*)f_2472},
{"f_2454srfi-13.scm",(void*)f_2454},
{"f_2318srfi-13.scm",(void*)f_2318},
{"f_2330srfi-13.scm",(void*)f_2330},
{"f_2372srfi-13.scm",(void*)f_2372},
{"f_2418srfi-13.scm",(void*)f_2418},
{"f_2440srfi-13.scm",(void*)f_2440},
{"f_2377srfi-13.scm",(void*)f_2377},
{"f_2390srfi-13.scm",(void*)f_2390},
{"f_2342srfi-13.scm",(void*)f_2342},
{"f_2324srfi-13.scm",(void*)f_2324},
{"f_2281srfi-13.scm",(void*)f_2281},
{"f_2293srfi-13.scm",(void*)f_2293},
{"f_2299srfi-13.scm",(void*)f_2299},
{"f_2309srfi-13.scm",(void*)f_2309},
{"f_2287srfi-13.scm",(void*)f_2287},
{"f_2240srfi-13.scm",(void*)f_2240},
{"f_2252srfi-13.scm",(void*)f_2252},
{"f_2258srfi-13.scm",(void*)f_2258},
{"f_2268srfi-13.scm",(void*)f_2268},
{"f_2246srfi-13.scm",(void*)f_2246},
{"f_2054srfi-13.scm",(void*)f_2054},
{"f_2077srfi-13.scm",(void*)f_2077},
{"f_2079srfi-13.scm",(void*)f_2079},
{"f_2085srfi-13.scm",(void*)f_2085},
{"f_2209srfi-13.scm",(void*)f_2209},
{"f_2095srfi-13.scm",(void*)f_2095},
{"f_2098srfi-13.scm",(void*)f_2098},
{"f_2119srfi-13.scm",(void*)f_2119},
{"f_2122srfi-13.scm",(void*)f_2122},
{"f_2142srfi-13.scm",(void*)f_2142},
{"f_2157srfi-13.scm",(void*)f_2157},
{"f_2160srfi-13.scm",(void*)f_2160},
{"f_2163srfi-13.scm",(void*)f_2163},
{"f_2172srfi-13.scm",(void*)f_2172},
{"f_2191srfi-13.scm",(void*)f_2191},
{"f_2166srfi-13.scm",(void*)f_2166},
{"f_2222srfi-13.scm",(void*)f_2222},
{"f_1875srfi-13.scm",(void*)f_1875},
{"f_1898srfi-13.scm",(void*)f_1898},
{"f_1900srfi-13.scm",(void*)f_1900},
{"f_1906srfi-13.scm",(void*)f_1906},
{"f_2023srfi-13.scm",(void*)f_2023},
{"f_1916srfi-13.scm",(void*)f_1916},
{"f_1919srfi-13.scm",(void*)f_1919},
{"f_1941srfi-13.scm",(void*)f_1941},
{"f_1944srfi-13.scm",(void*)f_1944},
{"f_1961srfi-13.scm",(void*)f_1961},
{"f_1973srfi-13.scm",(void*)f_1973},
{"f_1976srfi-13.scm",(void*)f_1976},
{"f_1982srfi-13.scm",(void*)f_1982},
{"f_1990srfi-13.scm",(void*)f_1990},
{"f_2012srfi-13.scm",(void*)f_2012},
{"f_1985srfi-13.scm",(void*)f_1985},
{"f_1988srfi-13.scm",(void*)f_1988},
{"f_2036srfi-13.scm",(void*)f_2036},
{"f_1829srfi-13.scm",(void*)f_1829},
{"f_1841srfi-13.scm",(void*)f_1841},
{"f_1851srfi-13.scm",(void*)f_1851},
{"f_1865srfi-13.scm",(void*)f_1865},
{"f_1835srfi-13.scm",(void*)f_1835},
{"f_1787srfi-13.scm",(void*)f_1787},
{"f_1799srfi-13.scm",(void*)f_1799},
{"f_1805srfi-13.scm",(void*)f_1805},
{"f_1819srfi-13.scm",(void*)f_1819},
{"f_1793srfi-13.scm",(void*)f_1793},
{"f_1750srfi-13.scm",(void*)f_1750},
{"f_1760srfi-13.scm",(void*)f_1760},
{"f_1781srfi-13.scm",(void*)f_1781},
{"f_1732srfi-13.scm",(void*)f_1732},
{"f_1744srfi-13.scm",(void*)f_1744},
{"f_1738srfi-13.scm",(void*)f_1738},
{"f_1681srfi-13.scm",(void*)f_1681},
{"f_1688srfi-13.scm",(void*)f_1688},
{"f_1701srfi-13.scm",(void*)f_1701},
{"f_1726srfi-13.scm",(void*)f_1726},
{"f_1691srfi-13.scm",(void*)f_1691},
{"f_1663srfi-13.scm",(void*)f_1663},
{"f_1675srfi-13.scm",(void*)f_1675},
{"f_1669srfi-13.scm",(void*)f_1669},
{"f_1645srfi-13.scm",(void*)f_1645},
{"f_1657srfi-13.scm",(void*)f_1657},
{"f_1651srfi-13.scm",(void*)f_1651},
{"f_1623srfi-13.scm",(void*)f_1623},
{"f_1630srfi-13.scm",(void*)f_1630},
{"f_1596srfi-13.scm",(void*)f_1596},
{"f_1606srfi-13.scm",(void*)f_1606},
{"f_1580srfi-13.scm",(void*)f_1580},
{"f_1594srfi-13.scm",(void*)f_1594},
{"f_1540srfi-13.scm",(void*)f_1540},
{"f_1513srfi-13.scm",(void*)f_1513},
{"f_1525srfi-13.scm",(void*)f_1525},
{"f_1519srfi-13.scm",(void*)f_1519},
{"f_1423srfi-13.scm",(void*)f_1423},
{"f_1486srfi-13.scm",(void*)f_1486},
{"f_1450srfi-13.scm",(void*)f_1450},
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
