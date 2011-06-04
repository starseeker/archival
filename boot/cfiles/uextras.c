/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: extras.scm -output-file uextras.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: extras
*/

#include "chicken.h"

#define C_hashptr(x)   C_fix(x & C_MOST_POSITIVE_FIXNUM)
#define C_mem_compare(to, from, n)   C_fix(C_memcmp(C_c_string(to), C_c_string(from), C_unfix(n)))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[255];


C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6169)
static void C_ccall f_6169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8405)
static void C_ccall f_8405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8468)
static void C_fcall f_8468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8487)
static void C_ccall f_8487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8426)
static void C_fcall f_8426(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8508)
static void C_ccall f_8508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8057)
static void C_ccall f_8057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8354)
static void C_ccall f_8354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8371)
static C_word C_fcall f_8371(C_word t0);
C_noret_decl(f_8357)
static void C_fcall f_8357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8324)
static void C_ccall f_8324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8273)
static void C_ccall f_8273(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8289)
static void C_fcall f_8289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8299)
static void C_ccall f_8299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8281)
static void C_ccall f_8281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8267)
static void C_ccall f_8267(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8221)
static void C_fcall f_8221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8205)
static void C_ccall f_8205(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8196)
static void C_ccall f_8196(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8186)
static void C_ccall f_8186(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8108)
static void C_ccall f_8108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8120)
static void C_fcall f_8120(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8136)
static void C_fcall f_8136(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8164)
static void C_ccall f_8164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8071)
static void C_fcall f_8071(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8090)
static void C_ccall f_8090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8081)
static void C_ccall f_8081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8006)
static void C_fcall f_8006(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8022)
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7932)
static void C_ccall f_7932(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7944)
static void C_fcall f_7944(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7960)
static void C_fcall f_7960(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7909)
static void C_ccall f_7909r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7913)
static void C_ccall f_7913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7916)
static void C_ccall f_7916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7839)
static void C_ccall f_7839(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7851)
static void C_fcall f_7851(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7867)
static void C_fcall f_7867(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7774)
static void C_ccall f_7774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7786)
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7809)
static void C_fcall f_7809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7551)
static void C_ccall f_7551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7639)
static void C_fcall f_7639(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7658)
static void C_fcall f_7658(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7584)
static void C_fcall f_7584(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7603)
static void C_fcall f_7603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7518)
static void C_ccall f_7518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7528)
static void C_fcall f_7528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7516)
static void C_ccall f_7516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7476)
static void C_ccall f_7476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7485)
static void C_ccall f_7485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7482)
static void C_ccall f_7482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7467)
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7473)
static void C_ccall f_7473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_7233)
static void C_ccall f_7233r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7242)
static void C_fcall f_7242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7258)
static void C_ccall f_7258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7440)
static void C_ccall f_7440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7368)
static void C_fcall f_7368(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7408)
static void C_ccall f_7408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7396)
static void C_ccall f_7396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7305)
static void C_fcall f_7305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7345)
static void C_ccall f_7345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7270)
static void C_ccall f_7270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7707)
static void C_fcall f_7707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7730)
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7717)
static void C_ccall f_7717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7227)
static void C_ccall f_7227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7209)
static void C_ccall f_7209r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7191)
static void C_ccall f_7191r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7167)
static void C_ccall f_7167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_fcall f_6974(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7105)
static void C_fcall f_7105(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7140)
static void C_ccall f_7140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7083)
static void C_ccall f_7083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7070)
static void C_ccall f_7070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7062)
static void C_ccall f_7062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7041)
static void C_ccall f_7041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6949)
static void C_fcall f_6949(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6959)
static void C_fcall f_6959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6940)
static void C_ccall f_6940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6934)
static void C_ccall f_6934(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6852)
static void C_ccall f_6852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6857)
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6899)
static void C_fcall f_6899(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6920)
static void C_ccall f_6920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6782)
static void C_fcall f_6782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6777)
static void C_fcall f_6777(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6772)
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6763)
static void C_fcall f_6763(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6755)
static void C_ccall f_6755(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6675)
static void C_fcall f_6675(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6689)
static void C_fcall f_6689(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6699)
static void C_ccall f_6699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6662)
static void C_ccall f_6662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6511)
static void C_ccall f_6511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6610)
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6514)
static void C_fcall f_6514(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6565)
static void C_ccall f_6565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6555)
static void C_fcall f_6555(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6524)
static void C_ccall f_6524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6533)
static void C_ccall f_6533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6379)
static void C_ccall f_6379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6484)
static void C_ccall f_6484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6464)
static void C_ccall f_6464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6382)
static void C_fcall f_6382(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6314)
static void C_fcall f_6314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6369)
static void C_ccall f_6369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6246)
static void C_fcall f_6246(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6274)
static void C_ccall f_6274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6198)
static void C_fcall f_6198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6162)
static void C_ccall f_6162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6145)
static void C_ccall f_6145r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5894)
static void C_fcall f_5894(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5926)
static void C_fcall f_5926(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static C_word C_fcall f_6110(C_word t0,C_word t1);
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6020)
static void C_ccall f_6020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_ccall f_6003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5907)
static C_word C_fcall f_5907(C_word t0);
C_noret_decl(f_5900)
static C_word C_fcall f_5900(C_word t0);
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5800)
static void C_fcall f_5800(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5835)
static void C_ccall f_5835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5681)
static void C_fcall f_5681(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5714)
static void C_fcall f_5714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5753)
static void C_fcall f_5753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5709)
static void C_ccall f_5709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5699)
static void C_fcall f_5699(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5485)
static void C_ccall f_5485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5522)
static void C_ccall f_5522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_ccall f_5525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5539)
static void C_fcall f_5539(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5488)
static void C_fcall f_5488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5499)
static C_word C_fcall f_5499(C_word t0,C_word t1);
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5398)
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5413)
static C_word C_fcall f_5413(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5319)
static void C_fcall f_5319(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_fcall f_5272(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5279)
static void C_fcall f_5279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5218)
static void C_fcall f_5218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5166)
static void C_fcall f_5166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5075)
static void C_ccall f_5075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5027)
static void C_fcall f_5027(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5039)
static void C_fcall f_5039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5012)
static void C_ccall f_5012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4865)
static void C_fcall f_4865(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_fcall f_4890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3612)
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4857)
static void C_ccall f_4857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4206)
static void C_fcall f_4206(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4761)
static void C_fcall f_4761(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4771)
static void C_fcall f_4771(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4731)
static void C_fcall f_4731(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4540)
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4543)
static void C_fcall f_4543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4584)
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4625)
static void C_fcall f_4625(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4463)
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4469)
static void C_fcall f_4469(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4454)
static void C_fcall f_4454(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_fcall f_4426(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_fcall f_4274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4242)
static void C_fcall f_4242(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_fcall f_4209(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3725)
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_fcall f_3964(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3971)
static void C_fcall f_3971(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_fcall f_3755(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_fcall f_3775(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_fcall f_3706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static C_word C_fcall f_3673(C_word t0);
C_noret_decl(f_3667)
static C_word C_fcall f_3667(C_word t0);
C_noret_decl(f_3615)
static void C_fcall f_3615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_fcall f_3647(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3494)
static void C_fcall f_3494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3489)
static void C_fcall f_3489(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3484)
static void C_fcall f_3484(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3413)
static void C_fcall f_3413(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_ccall f_3479(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3317)
static void C_ccall f_3317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3181)
static void C_fcall f_3181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_fcall f_3176(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3151)
static void C_fcall f_3151(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_fcall f_3102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3045)
static void C_fcall f_3045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_fcall f_3040(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2974)
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2927)
static void C_fcall f_2927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2892)
static void C_fcall f_2892(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2896)
static void C_fcall f_2896(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2810)
static void C_fcall f_2810(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_fcall f_2818(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2741)
static void C_fcall f_2741(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2754)
static void C_ccall f_2754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2592)
static void C_fcall f_2592(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_fcall f_2612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2698)
static void C_ccall f_2698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_fcall f_2676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2489)
static void C_ccall f_2489r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2498)
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2444)
static void C_fcall f_2444(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_fcall f_2439(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2370)
static void C_fcall f_2370(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2405)
static void C_fcall f_2405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_fcall f_2374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2327)
static void C_fcall f_2327(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_fcall f_2289(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2187)
static void C_fcall f_2187(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2141)
static void C_fcall f_2141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2068)
static void C_fcall f_2068(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2089)
static void C_fcall f_2089(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1995)
static void C_fcall f_1995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1962)
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1940)
static C_word C_fcall f_1940(C_word t0,C_word t1);
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1925)
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1897)
static void C_fcall f_1897(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1831)
static void C_fcall f_1831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1796)
static void C_fcall f_1796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1676)
static void C_fcall f_1676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1643)
static void C_fcall f_1643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1559)
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1554)
static void C_fcall f_1554(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1494)
static void C_fcall f_1494(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_fcall f_1507(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8468)
static void C_fcall trf_8468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8468(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8468(t0,t1,t2);}

C_noret_decl(trf_8426)
static void C_fcall trf_8426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8426(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8426(t0,t1,t2);}

C_noret_decl(trf_8357)
static void C_fcall trf_8357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8357(t0,t1);}

C_noret_decl(trf_8289)
static void C_fcall trf_8289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8289(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8289(t0,t1,t2);}

C_noret_decl(trf_8221)
static void C_fcall trf_8221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8221(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8221(t0,t1);}

C_noret_decl(trf_8120)
static void C_fcall trf_8120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8120(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8120(t0,t1,t2,t3);}

C_noret_decl(trf_8136)
static void C_fcall trf_8136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8136(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8136(t0,t1,t2,t3);}

C_noret_decl(trf_8071)
static void C_fcall trf_8071(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8071(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8071(t0,t1,t2);}

C_noret_decl(trf_8006)
static void C_fcall trf_8006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8006(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8006(t0,t1,t2,t3);}

C_noret_decl(trf_8022)
static void C_fcall trf_8022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8022(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8022(t0,t1,t2,t3);}

C_noret_decl(trf_7944)
static void C_fcall trf_7944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7944(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7944(t0,t1,t2,t3);}

C_noret_decl(trf_7960)
static void C_fcall trf_7960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7960(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7960(t0,t1,t2,t3);}

C_noret_decl(trf_7851)
static void C_fcall trf_7851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7851(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7851(t0,t1,t2,t3);}

C_noret_decl(trf_7867)
static void C_fcall trf_7867(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7867(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7867(t0,t1,t2,t3);}

C_noret_decl(trf_7786)
static void C_fcall trf_7786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7786(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7786(t0,t1,t2);}

C_noret_decl(trf_7809)
static void C_fcall trf_7809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7809(t0,t1,t2);}

C_noret_decl(trf_7639)
static void C_fcall trf_7639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7639(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7639(t0,t1,t2,t3);}

C_noret_decl(trf_7658)
static void C_fcall trf_7658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7658(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7658(t0,t1);}

C_noret_decl(trf_7584)
static void C_fcall trf_7584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7584(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7584(t0,t1,t2,t3);}

C_noret_decl(trf_7603)
static void C_fcall trf_7603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7603(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7603(t0,t1);}

C_noret_decl(trf_7528)
static void C_fcall trf_7528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7528(t0,t1);}

C_noret_decl(trf_7242)
static void C_fcall trf_7242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7242(t0,t1);}

C_noret_decl(trf_7368)
static void C_fcall trf_7368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7368(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7368(t0,t1,t2);}

C_noret_decl(trf_7305)
static void C_fcall trf_7305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7305(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7305(t0,t1,t2);}

C_noret_decl(trf_7707)
static void C_fcall trf_7707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7707(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7707(t0,t1,t2);}

C_noret_decl(trf_7730)
static void C_fcall trf_7730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7730(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7730(t0,t1,t2);}

C_noret_decl(trf_6974)
static void C_fcall trf_6974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6974(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6974(t0,t1,t2,t3);}

C_noret_decl(trf_7105)
static void C_fcall trf_7105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7105(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7105(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6949)
static void C_fcall trf_6949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6949(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6949(t0,t1,t2,t3);}

C_noret_decl(trf_6959)
static void C_fcall trf_6959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6959(t0,t1);}

C_noret_decl(trf_6857)
static void C_fcall trf_6857(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6857(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6857(t0,t1,t2);}

C_noret_decl(trf_6899)
static void C_fcall trf_6899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6899(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6899(t0,t1,t2);}

C_noret_decl(trf_6782)
static void C_fcall trf_6782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6782(t0,t1);}

C_noret_decl(trf_6777)
static void C_fcall trf_6777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6777(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6777(t0,t1,t2);}

C_noret_decl(trf_6772)
static void C_fcall trf_6772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6772(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6772(t0,t1,t2,t3);}

C_noret_decl(trf_6763)
static void C_fcall trf_6763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6763(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6763(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6675)
static void C_fcall trf_6675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6675(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6675(t0,t1);}

C_noret_decl(trf_6689)
static void C_fcall trf_6689(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6689(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6689(t0,t1,t2,t3);}

C_noret_decl(trf_6610)
static void C_fcall trf_6610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6610(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6610(t0,t1,t2,t3);}

C_noret_decl(trf_6514)
static void C_fcall trf_6514(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6514(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6514(t0,t1,t2);}

C_noret_decl(trf_6555)
static void C_fcall trf_6555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6555(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6555(t0,t1);}

C_noret_decl(trf_6382)
static void C_fcall trf_6382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6382(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6382(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6314)
static void C_fcall trf_6314(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6314(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6314(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6246)
static void C_fcall trf_6246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6246(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6246(t0,t1,t2,t3);}

C_noret_decl(trf_6198)
static void C_fcall trf_6198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6198(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6198(t0,t1,t2);}

C_noret_decl(trf_5894)
static void C_fcall trf_5894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5894(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5894(t0,t1,t2,t3);}

C_noret_decl(trf_5926)
static void C_fcall trf_5926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5926(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5926(t0,t1);}

C_noret_decl(trf_5800)
static void C_fcall trf_5800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5800(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5800(t0,t1,t2,t3);}

C_noret_decl(trf_5681)
static void C_fcall trf_5681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5681(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5681(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5714)
static void C_fcall trf_5714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5714(t0,t1,t2);}

C_noret_decl(trf_5753)
static void C_fcall trf_5753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5753(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5753(t0,t1);}

C_noret_decl(trf_5699)
static void C_fcall trf_5699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5699(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5699(t0,t1);}

C_noret_decl(trf_5539)
static void C_fcall trf_5539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5539(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5539(t0,t1,t2,t3);}

C_noret_decl(trf_5488)
static void C_fcall trf_5488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5488(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5488(t0,t1);}

C_noret_decl(trf_5398)
static void C_fcall trf_5398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5398(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5398(t0,t1,t2,t3);}

C_noret_decl(trf_5292)
static void C_fcall trf_5292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5292(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5292(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5319)
static void C_fcall trf_5319(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5319(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5319(t0,t1,t2);}

C_noret_decl(trf_5272)
static void C_fcall trf_5272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5272(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5272(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5279)
static void C_fcall trf_5279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5279(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5279(t0,t1);}

C_noret_decl(trf_5218)
static void C_fcall trf_5218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5218(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5218(t0,t1);}

C_noret_decl(trf_5166)
static void C_fcall trf_5166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5166(t0,t1);}

C_noret_decl(trf_5027)
static void C_fcall trf_5027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5027(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5027(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5039)
static void C_fcall trf_5039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5039(t0,t1,t2,t3);}

C_noret_decl(trf_4865)
static void C_fcall trf_4865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4865(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4865(t0,t1,t2,t3);}

C_noret_decl(trf_4890)
static void C_fcall trf_4890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4890(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4890(t0,t1,t2,t3);}

C_noret_decl(trf_3612)
static void C_fcall trf_3612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3612(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3612(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4206)
static void C_fcall trf_4206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4206(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4206(t0,t1,t2,t3);}

C_noret_decl(trf_4761)
static void C_fcall trf_4761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4761(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4761(t0,t1,t2);}

C_noret_decl(trf_4771)
static void C_fcall trf_4771(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4771(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4771(t0,t1);}

C_noret_decl(trf_4731)
static void C_fcall trf_4731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4731(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4731(t0,t1);}

C_noret_decl(trf_4540)
static void C_fcall trf_4540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4540(void *dummy){
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
f_4540(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_4543)
static void C_fcall trf_4543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4543(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4543(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4584)
static void C_fcall trf_4584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4584(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4584(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4625)
static void C_fcall trf_4625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4625(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4625(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4463)
static void C_fcall trf_4463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4463(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4463(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4469)
static void C_fcall trf_4469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4469(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4469(t0,t1,t2,t3);}

C_noret_decl(trf_4454)
static void C_fcall trf_4454(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4454(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4454(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4426)
static void C_fcall trf_4426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4426(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4426(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4274)
static void C_fcall trf_4274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4274(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4274(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4242)
static void C_fcall trf_4242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4242(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4242(t0,t1,t2,t3);}

C_noret_decl(trf_4209)
static void C_fcall trf_4209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4209(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4209(t0,t1,t2,t3);}

C_noret_decl(trf_3725)
static void C_fcall trf_3725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3725(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3725(t0,t1,t2,t3);}

C_noret_decl(trf_3964)
static void C_fcall trf_3964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3964(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3964(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3971)
static void C_fcall trf_3971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3971(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3971(t0,t1);}

C_noret_decl(trf_3728)
static void C_fcall trf_3728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3728(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3728(t0,t1,t2,t3);}

C_noret_decl(trf_3755)
static void C_fcall trf_3755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3755(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3755(t0,t1,t2,t3);}

C_noret_decl(trf_3775)
static void C_fcall trf_3775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3775(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3775(t0,t1,t2,t3);}

C_noret_decl(trf_3706)
static void C_fcall trf_3706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3706(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3706(t0,t1,t2,t3);}

C_noret_decl(trf_3615)
static void C_fcall trf_3615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3615(t0,t1);}

C_noret_decl(trf_3647)
static void C_fcall trf_3647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3647(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3647(t0,t1);}

C_noret_decl(trf_3494)
static void C_fcall trf_3494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3494(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3494(t0,t1);}

C_noret_decl(trf_3489)
static void C_fcall trf_3489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3489(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3489(t0,t1,t2);}

C_noret_decl(trf_3484)
static void C_fcall trf_3484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3484(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3484(t0,t1,t2,t3);}

C_noret_decl(trf_3413)
static void C_fcall trf_3413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3413(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3413(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3181)
static void C_fcall trf_3181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3181(t0,t1);}

C_noret_decl(trf_3176)
static void C_fcall trf_3176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3176(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3176(t0,t1,t2);}

C_noret_decl(trf_3151)
static void C_fcall trf_3151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3151(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3151(t0,t1,t2,t3);}

C_noret_decl(trf_3165)
static void C_fcall trf_3165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3165(t0,t1);}

C_noret_decl(trf_3102)
static void C_fcall trf_3102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3102(t0,t1);}

C_noret_decl(trf_3045)
static void C_fcall trf_3045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3045(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3045(t0,t1);}

C_noret_decl(trf_3040)
static void C_fcall trf_3040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3040(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3040(t0,t1,t2);}

C_noret_decl(trf_2974)
static void C_fcall trf_2974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2974(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2974(t0,t1,t2,t3);}

C_noret_decl(trf_3001)
static void C_fcall trf_3001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3001(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3001(t0,t1,t2);}

C_noret_decl(trf_2927)
static void C_fcall trf_2927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2927(t0,t1);}

C_noret_decl(trf_2922)
static void C_fcall trf_2922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2922(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2922(t0,t1,t2);}

C_noret_decl(trf_2892)
static void C_fcall trf_2892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2892(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2892(t0,t1,t2,t3);}

C_noret_decl(trf_2896)
static void C_fcall trf_2896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2896(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2896(t0,t1);}

C_noret_decl(trf_2810)
static void C_fcall trf_2810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2810(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2810(t0,t1);}

C_noret_decl(trf_2818)
static void C_fcall trf_2818(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2818(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2818(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2741)
static void C_fcall trf_2741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2741(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2741(t0,t1,t2,t3);}

C_noret_decl(trf_2592)
static void C_fcall trf_2592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2592(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2592(t0,t1);}

C_noret_decl(trf_2612)
static void C_fcall trf_2612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2612(t0,t1,t2);}

C_noret_decl(trf_2676)
static void C_fcall trf_2676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2676(t0,t1);}

C_noret_decl(trf_2498)
static void C_fcall trf_2498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2498(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2498(t0,t1,t2);}

C_noret_decl(trf_2444)
static void C_fcall trf_2444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2444(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2444(t0,t1);}

C_noret_decl(trf_2439)
static void C_fcall trf_2439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2439(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2439(t0,t1,t2);}

C_noret_decl(trf_2370)
static void C_fcall trf_2370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2370(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2370(t0,t1,t2,t3);}

C_noret_decl(trf_2405)
static void C_fcall trf_2405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2405(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2405(t0,t1,t2);}

C_noret_decl(trf_2374)
static void C_fcall trf_2374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2374(t0,t1);}

C_noret_decl(trf_2327)
static void C_fcall trf_2327(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2327(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2327(t0,t1,t2);}

C_noret_decl(trf_2289)
static void C_fcall trf_2289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2289(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2289(t0,t1);}

C_noret_decl(trf_2187)
static void C_fcall trf_2187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2187(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2187(t0,t1,t2,t3);}

C_noret_decl(trf_2141)
static void C_fcall trf_2141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2141(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2141(t0,t1,t2);}

C_noret_decl(trf_2068)
static void C_fcall trf_2068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2068(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2068(t0,t1,t2,t3);}

C_noret_decl(trf_2089)
static void C_fcall trf_2089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2089(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2089(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2024(t0,t1,t2,t3);}

C_noret_decl(trf_1995)
static void C_fcall trf_1995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1995(t0,t1,t2);}

C_noret_decl(trf_1962)
static void C_fcall trf_1962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1962(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1962(t0,t1,t2);}

C_noret_decl(trf_1897)
static void C_fcall trf_1897(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1897(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1897(t0,t1,t2);}

C_noret_decl(trf_1831)
static void C_fcall trf_1831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1831(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1831(t0,t1,t2);}

C_noret_decl(trf_1796)
static void C_fcall trf_1796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1796(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1796(t0,t1,t2);}

C_noret_decl(trf_1676)
static void C_fcall trf_1676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1676(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1676(t0,t1,t2);}

C_noret_decl(trf_1643)
static void C_fcall trf_1643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1643(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1643(t0,t1,t2);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1564(t0,t1);}

C_noret_decl(trf_1559)
static void C_fcall trf_1559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1559(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1559(t0,t1,t2);}

C_noret_decl(trf_1554)
static void C_fcall trf_1554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1554(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1554(t0,t1,t2,t3);}

C_noret_decl(trf_1494)
static void C_fcall trf_1494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1494(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1494(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1507)
static void C_fcall trf_1507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1507(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1507(t0,t1,t2,t3,t4);}

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
if(!C_demand_2(2073)){
C_save(t1);
C_rereclaim2(2073*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,255);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],4,"read");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],9,"read-file");
lf[6]=C_h_intern(&lf[6],5,"port\077");
lf[7]=C_h_intern(&lf[7],18,"\003sysstandard-input");
lf[8]=C_h_intern(&lf[8],8,"identity");
lf[9]=C_h_intern(&lf[9],7,"project");
lf[10]=C_h_intern(&lf[10],7,"conjoin");
lf[11]=C_h_intern(&lf[11],7,"disjoin");
lf[12]=C_h_intern(&lf[12],10,"constantly");
lf[13]=C_h_intern(&lf[13],4,"flip");
lf[14]=C_h_intern(&lf[14],10,"complement");
lf[15]=C_h_intern(&lf[15],7,"compose");
lf[16]=C_h_intern(&lf[16],6,"values");
lf[17]=C_h_intern(&lf[17],1,"o");
lf[18]=C_h_intern(&lf[18],7,"list-of");
lf[19]=C_h_intern(&lf[19],4,"noop");
lf[20]=C_h_intern(&lf[20],19,"\003sysundefined-value");
lf[21]=C_h_intern(&lf[21],4,"each");
lf[22]=C_h_intern(&lf[22],4,"any\077");
lf[23]=C_h_intern(&lf[23],5,"atom\077");
lf[24]=C_h_intern(&lf[24],5,"tail\077");
lf[25]=C_h_intern(&lf[25],11,"intersperse");
lf[26]=C_h_intern(&lf[26],7,"butlast");
lf[27]=C_h_intern(&lf[27],7,"flatten");
lf[28]=C_h_intern(&lf[28],4,"chop");
lf[29]=C_h_intern(&lf[29],4,"join");
lf[30]=C_h_intern(&lf[30],10,"\003sysappend");
lf[31]=C_h_intern(&lf[31],8,"compress");
lf[32]=C_h_intern(&lf[32],7,"shuffle");
lf[33]=C_h_intern(&lf[33],7,"\003sysmap");
lf[34]=C_h_intern(&lf[34],3,"cdr");
lf[35]=C_h_intern(&lf[35],5,"sort!");
lf[36]=C_h_intern(&lf[36],6,"random");
lf[37]=C_h_intern(&lf[37],13,"alist-update!");
lf[38]=C_h_intern(&lf[38],4,"eqv\077");
lf[39]=C_h_intern(&lf[39],3,"eq\077");
lf[40]=C_h_intern(&lf[40],4,"assq");
lf[41]=C_h_intern(&lf[41],4,"assv");
lf[42]=C_h_intern(&lf[42],6,"equal\077");
lf[43]=C_h_intern(&lf[43],5,"assoc");
lf[44]=C_h_intern(&lf[44],9,"alist-ref");
lf[45]=C_h_intern(&lf[45],6,"rassoc");
lf[46]=C_h_intern(&lf[46],9,"randomize");
lf[47]=C_h_intern(&lf[47],11,"make-string");
lf[48]=C_h_intern(&lf[48],9,"read-line");
lf[49]=C_h_intern(&lf[49],13,"\003syssubstring");
lf[50]=C_h_intern(&lf[50],15,"\003sysread-char-0");
lf[51]=C_h_intern(&lf[51],9,"peek-char");
lf[52]=C_h_intern(&lf[52],17,"\003sysstring-append");
lf[53]=C_h_intern(&lf[53],15,"\003sysmake-string");
lf[54]=C_h_intern(&lf[54],10,"read-lines");
lf[55]=C_h_intern(&lf[55],16,"\003sysread-string!");
lf[56]=C_h_intern(&lf[56],12,"read-string!");
lf[57]=C_h_intern(&lf[57],18,"open-output-string");
lf[58]=C_h_intern(&lf[58],17,"get-output-string");
lf[59]=C_h_intern(&lf[59],11,"read-string");
lf[60]=C_h_intern(&lf[60],14,"\003syswrite-char");
lf[61]=C_h_intern(&lf[61],10,"read-token");
lf[62]=C_h_intern(&lf[62],16,"\003syswrite-char-0");
lf[63]=C_h_intern(&lf[63],15,"\003syspeek-char-0");
lf[64]=C_h_intern(&lf[64],7,"display");
lf[65]=C_h_intern(&lf[65],12,"write-string");
lf[66]=C_h_intern(&lf[66],19,"\003sysstandard-output");
lf[67]=C_h_intern(&lf[67],7,"newline");
lf[68]=C_h_intern(&lf[68],10,"write-line");
lf[69]=C_h_intern(&lf[69],20,"with-input-from-port");
lf[70]=C_h_intern(&lf[70],16,"\003sysdynamic-wind");
lf[71]=C_h_intern(&lf[71],19,"with-output-to-port");
lf[72]=C_h_intern(&lf[72],25,"with-error-output-to-port");
lf[73]=C_h_intern(&lf[73],18,"\003sysstandard-error");
lf[74]=C_h_intern(&lf[74],17,"open-input-string");
lf[75]=C_h_intern(&lf[75],22,"call-with-input-string");
lf[76]=C_h_intern(&lf[76],23,"call-with-output-string");
lf[77]=C_h_intern(&lf[77],22,"with-input-from-string");
lf[78]=C_h_intern(&lf[78],21,"with-output-to-string");
lf[79]=C_h_intern(&lf[79],15,"make-input-port");
lf[80]=C_h_intern(&lf[80],13,"\003sysmake-port");
lf[81]=C_static_string(C_heaptop,8,"(custom)");
lf[82]=C_h_intern(&lf[82],6,"custom");
lf[83]=C_h_intern(&lf[83],6,"string");
lf[84]=C_h_intern(&lf[84],16,"make-output-port");
lf[85]=C_static_string(C_heaptop,8,"(custom)");
lf[87]=C_h_intern(&lf[87],5,"quote");
lf[88]=C_h_intern(&lf[88],10,"quasiquote");
lf[89]=C_h_intern(&lf[89],7,"unquote");
lf[90]=C_h_intern(&lf[90],16,"unquote-splicing");
lf[91]=C_static_string(C_heaptop,1,"\047");
lf[92]=C_static_string(C_heaptop,1,"`");
lf[93]=C_static_string(C_heaptop,1,",");
lf[94]=C_static_string(C_heaptop,2,",@");
lf[95]=C_static_string(C_heaptop,1," ");
lf[96]=C_static_string(C_heaptop,1,")");
lf[97]=C_static_string(C_heaptop,1,")");
lf[98]=C_static_string(C_heaptop,3," . ");
lf[99]=C_static_string(C_heaptop,1,"(");
lf[100]=C_static_string(C_heaptop,2,"()");
lf[101]=C_static_string(C_heaptop,6,"#<eof>");
lf[102]=C_static_string(C_heaptop,1,"#");
lf[103]=C_h_intern(&lf[103],12,"vector->list");
lf[104]=C_static_string(C_heaptop,2,"#t");
lf[105]=C_static_string(C_heaptop,2,"#f");
lf[106]=C_h_intern(&lf[106],18,"\003sysnumber->string");
lf[107]=C_h_intern(&lf[107],9,"\003sysprint");
lf[108]=C_h_intern(&lf[108],21,"\003sysprocedure->string");
lf[109]=C_static_string(C_heaptop,1,"\134");
lf[110]=C_static_string(C_heaptop,1,"\042");
lf[111]=C_static_string(C_heaptop,1,"\042");
lf[112]=C_static_string(C_heaptop,1,"x");
lf[113]=C_static_string(C_heaptop,1,"U");
lf[114]=C_static_string(C_heaptop,1,"u");
lf[115]=C_h_intern(&lf[115],9,"char-name");
lf[116]=C_static_string(C_heaptop,2,"#\134");
lf[117]=C_static_string(C_heaptop,6,"#<eof>");
lf[118]=C_static_string(C_heaptop,14,"#<unspecified>");
lf[119]=C_h_intern(&lf[119],19,"\003syspointer->string");
lf[120]=C_h_intern(&lf[120],19,"\003sysuser-print-hook");
lf[121]=C_h_intern(&lf[121],13,"string-append");
lf[122]=C_static_string(C_heaptop,7,"#<port ");
lf[123]=C_static_string(C_heaptop,1,">");
lf[124]=C_static_string(C_heaptop,2,"#>");
lf[125]=C_h_intern(&lf[125],23,"\003syslambda-info->string");
lf[126]=C_static_string(C_heaptop,14,"#<lambda info ");
lf[127]=C_h_intern(&lf[127],28,"\003sysarbitrary-unbound-symbol");
lf[128]=C_static_string(C_heaptop,16,"#<unbound value>");
lf[129]=C_static_string(C_heaptop,21,"#<unprintable object>");
lf[130]=C_h_intern(&lf[130],11,"\003sysnumber\077");
lf[131]=C_static_string(C_heaptop,8,"        ");
lf[132]=C_static_string(C_heaptop,8,"        ");
lf[133]=C_h_intern(&lf[133],28,"\006extrasreverse-string-append");
lf[134]=C_static_string(C_heaptop,1,"#");
lf[135]=C_h_intern(&lf[135],3,"max");
lf[136]=C_h_intern(&lf[136],28,"\003syssymbol->qualified-string");
lf[137]=C_static_string(C_heaptop,1,"(");
lf[138]=C_static_string(C_heaptop,1,"(");
lf[139]=C_static_string(C_heaptop,1,")");
lf[140]=C_static_string(C_heaptop,1,")");
lf[141]=C_static_string(C_heaptop,1,".");
lf[142]=C_static_string(C_heaptop,1," ");
lf[143]=C_static_string(C_heaptop,1,"(");
lf[144]=C_h_intern(&lf[144],6,"lambda");
lf[145]=C_h_intern(&lf[145],2,"if");
lf[146]=C_h_intern(&lf[146],4,"set!");
lf[147]=C_h_intern(&lf[147],4,"cond");
lf[148]=C_h_intern(&lf[148],4,"case");
lf[149]=C_h_intern(&lf[149],3,"and");
lf[150]=C_h_intern(&lf[150],2,"or");
lf[151]=C_h_intern(&lf[151],3,"let");
lf[152]=C_h_intern(&lf[152],5,"begin");
lf[153]=C_h_intern(&lf[153],2,"do");
lf[154]=C_h_intern(&lf[154],4,"let*");
lf[155]=C_h_intern(&lf[155],6,"letrec");
lf[156]=C_h_intern(&lf[156],6,"define");
lf[157]=C_h_intern(&lf[157],18,"pretty-print-width");
lf[158]=C_h_intern(&lf[158],12,"pretty-print");
lf[159]=C_h_intern(&lf[159],19,"current-output-port");
lf[160]=C_h_intern(&lf[160],2,"pp");
lf[161]=C_h_intern(&lf[161],8,"->string");
lf[162]=C_h_intern(&lf[162],14,"symbol->string");
lf[163]=C_h_intern(&lf[163],4,"conc");
lf[164]=C_h_intern(&lf[164],15,"substring-index");
lf[165]=C_h_intern(&lf[165],18,"substring-index-ci");
lf[166]=C_h_intern(&lf[166],15,"string-compare3");
lf[167]=C_h_intern(&lf[167],18,"string-compare3-ci");
lf[168]=C_h_intern(&lf[168],11,"substring=\077");
lf[169]=C_h_intern(&lf[169],14,"substring-ci=\077");
lf[170]=C_h_intern(&lf[170],12,"string-split");
lf[171]=C_static_string(C_heaptop,3,"\011\012 ");
lf[172]=C_h_intern(&lf[172],18,"string-intersperse");
lf[173]=C_static_string(C_heaptop,1," ");
lf[174]=C_static_string(C_heaptop,0,"");
lf[175]=C_h_intern(&lf[175],19,"\003sysallocate-vector");
lf[176]=C_h_intern(&lf[176],27,"\003sysnot-a-proper-list-error");
lf[177]=C_h_intern(&lf[177],12,"list->string");
lf[178]=C_h_intern(&lf[178],16,"string-translate");
lf[179]=C_h_intern(&lf[179],17,"string-translate*");
lf[180]=C_h_intern(&lf[180],21,"\003sysfragments->string");
lf[181]=C_h_intern(&lf[181],11,"string-chop");
lf[182]=C_h_intern(&lf[182],12,"string-chomp");
lf[183]=C_static_string(C_heaptop,1,"\012");
lf[184]=C_h_intern(&lf[184],5,"write");
lf[185]=C_h_intern(&lf[185],7,"fprintf");
lf[186]=C_h_intern(&lf[186],16,"\003sysflush-output");
lf[187]=C_h_intern(&lf[187],9,"\003syserror");
lf[188]=C_static_string(C_heaptop,31,"illegal format-string character");
lf[189]=C_h_intern(&lf[189],6,"printf");
lf[190]=C_h_intern(&lf[190],7,"sprintf");
lf[191]=C_h_intern(&lf[191],6,"format");
lf[192]=C_h_intern(&lf[192],7,"sorted\077");
lf[193]=C_h_intern(&lf[193],5,"merge");
lf[194]=C_h_intern(&lf[194],6,"merge!");
lf[195]=C_h_intern(&lf[195],4,"sort");
lf[196]=C_h_intern(&lf[196],12,"list->vector");
lf[197]=C_h_intern(&lf[197],6,"append");
lf[198]=C_h_intern(&lf[198],13,"binary-search");
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
lf[200]=C_h_list(23,C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(23);
lf[201]=C_h_intern(&lf[201],11,"hash-table\077");
lf[202]=C_h_intern(&lf[202],10,"hash-table");
lf[203]=C_h_intern(&lf[203],11,"make-vector");
lf[204]=C_h_intern(&lf[204],15,"make-hash-table");
lf[206]=C_h_intern(&lf[206],15,"hash-table-copy");
lf[207]=C_h_intern(&lf[207],31,"hash-table-equivalence-function");
lf[208]=C_h_intern(&lf[208],24,"hash-table-hash-function");
lf[209]=C_h_intern(&lf[209],11,"input-port\077");
lf[210]=C_h_intern(&lf[210],4,"hash");
lf[211]=C_h_intern(&lf[211],16,"hash-by-identity");
lf[212]=C_h_intern(&lf[212],11,"string-hash");
lf[213]=C_h_intern(&lf[213],14,"string-ci-hash");
lf[214]=C_h_intern(&lf[214],15,"hash-table-size");
lf[215]=C_h_intern(&lf[215],5,"floor");
lf[216]=C_h_intern(&lf[216],18,"hash-table-update!");
lf[217]=C_h_intern(&lf[217],15,"\003syssignal-hook");
lf[218]=C_h_intern(&lf[218],13,"\000access-error");
lf[219]=C_static_string(C_heaptop,31,"hash-table does not contain key");
lf[220]=C_h_intern(&lf[220],16,"\003syshash-new-len");
lf[221]=C_flonum(C_heaptop,0.5);
lf[222]=C_h_intern(&lf[222],26,"hash-table-update!/default");
lf[223]=C_h_intern(&lf[223],15,"hash-table-set!");
lf[224]=C_h_intern(&lf[224],14,"hash-table-ref");
lf[225]=C_h_intern(&lf[225],22,"hash-table-ref/default");
lf[226]=C_h_intern(&lf[226],18,"hash-table-exists\077");
lf[227]=C_h_intern(&lf[227],18,"hash-table-delete!");
lf[228]=C_h_intern(&lf[228],17,"hash-table-merge!");
lf[229]=C_h_intern(&lf[229],17,"hash-table->alist");
lf[230]=C_h_intern(&lf[230],17,"alist->hash-table");
lf[231]=C_h_intern(&lf[231],12,"\003sysfor-each");
lf[232]=C_h_intern(&lf[232],15,"hash-table-keys");
lf[233]=C_h_intern(&lf[233],17,"hash-table-values");
lf[234]=C_h_intern(&lf[234],15,"hash-table-walk");
lf[235]=C_h_intern(&lf[235],15,"hash-table-fold");
lf[236]=C_h_intern(&lf[236],10,"make-queue");
lf[237]=C_h_intern(&lf[237],5,"queue");
lf[238]=C_h_intern(&lf[238],6,"queue\077");
lf[239]=C_h_intern(&lf[239],12,"queue-empty\077");
lf[240]=C_h_intern(&lf[240],11,"queue-first");
lf[241]=C_h_intern(&lf[241],10,"queue-last");
lf[242]=C_h_intern(&lf[242],10,"queue-add!");
lf[243]=C_h_intern(&lf[243],13,"queue-remove!");
lf[244]=C_h_intern(&lf[244],11,"queue->list");
lf[245]=C_h_intern(&lf[245],11,"list->queue");
lf[246]=C_h_intern(&lf[246],16,"queue-push-back!");
lf[247]=C_h_intern(&lf[247],21,"queue-push-back-list!");
lf[248]=C_h_intern(&lf[248],17,"register-feature!");
lf[249]=C_h_intern(&lf[249],7,"srfi-69");
lf[250]=C_static_string(C_heaptop,31,"hash-table does not contain key");
lf[251]=C_h_intern(&lf[251],18,"getter-with-setter");
lf[252]=C_h_intern(&lf[252],7,"srfi-28");
lf[253]=C_h_intern(&lf[253],14,"make-parameter");
lf[254]=C_h_intern(&lf[254],6,"extras");
C_register_lf2(lf,255,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1490,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 93   register-feature! */
t4=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[254]);}

/* k1488 */
static void C_ccall f_1490(C_word c,C_word t0,C_word t1){
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
C_word ab[121],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1490,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=*((C_word*)lf[4]+1);
t5=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1492,a[2]=t2,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[8]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1624,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1627,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1635,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1668,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[12]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1705,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[13]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1728,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1736,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1748,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[17]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1784,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[18]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1823,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1863,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1869,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1925,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[23]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1928,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1931,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1956,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1989,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[27]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2018,tmp=(C_word)a,a+=2,tmp));
t24=*((C_word*)lf[3]+1);
t25=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2059,a[2]=t24,tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2132,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2181,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2244,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2282,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2368,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2489,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2533,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2542,tmp=(C_word)a,a+=2,tmp));
t34=*((C_word*)lf[47]+1);
t35=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=t34,tmp=(C_word)a,a+=3,tmp));
t36=*((C_word*)lf[48]+1);
t37=*((C_word*)lf[4]+1);
t38=*((C_word*)lf[3]+1);
t39=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2719,a[2]=t37,a[3]=t36,a[4]=t38,tmp=(C_word)a,a+=5,tmp));
t40=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2806,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2890,tmp=(C_word)a,a+=2,tmp));
t42=*((C_word*)lf[57]+1);
t43=*((C_word*)lf[58]+1);
t44=C_mutate((C_word*)lf[59]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2972,a[2]=t42,a[3]=t43,tmp=(C_word)a,a+=4,tmp));
t45=*((C_word*)lf[57]+1);
t46=*((C_word*)lf[58]+1);
t47=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3090,a[2]=t45,a[3]=t46,tmp=(C_word)a,a+=4,tmp));
t48=*((C_word*)lf[64]+1);
t49=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3149,a[2]=t48,tmp=(C_word)a,a+=3,tmp));
t50=*((C_word*)lf[64]+1);
t51=*((C_word*)lf[67]+1);
t52=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3226,a[2]=t50,a[3]=t51,tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3241,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3269,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3297,tmp=(C_word)a,a+=2,tmp));
t56=*((C_word*)lf[74]+1);
t57=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3325,a[2]=t56,tmp=(C_word)a,a+=3,tmp));
t58=*((C_word*)lf[57]+1);
t59=*((C_word*)lf[58]+1);
t60=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=t58,a[3]=t59,tmp=(C_word)a,a+=4,tmp));
t61=*((C_word*)lf[74]+1);
t62=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3346,a[2]=t61,tmp=(C_word)a,a+=3,tmp));
t63=*((C_word*)lf[57]+1);
t64=*((C_word*)lf[58]+1);
t65=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3377,a[2]=t63,a[3]=t64,tmp=(C_word)a,a+=4,tmp));
t66=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3411,tmp=(C_word)a,a+=2,tmp));
t67=*((C_word*)lf[83]+1);
t68=C_mutate((C_word*)lf[84]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3554,a[2]=t67,tmp=(C_word)a,a+=3,tmp));
t69=*((C_word*)lf[57]+1);
t70=*((C_word*)lf[58]+1);
t71=C_mutate(&lf[86],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3612,a[2]=t69,a[3]=t70,tmp=(C_word)a,a+=4,tmp));
t72=C_mutate((C_word*)lf[133]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4862,tmp=(C_word)a,a+=2,tmp));
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4941,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 926  make-parameter */
t74=*((C_word*)lf[253]+1);
((C_proc3)(void*)(*((C_word*)t74+1)))(3,t74,t73,C_fix(79));}

/* k4939 in k1488 */
static void C_ccall f_4941(C_word c,C_word t0,C_word t1){
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
C_word ab[58],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4941,2,t0,t1);}
t2=C_mutate((C_word*)lf[157]+1,t1);
t3=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4943,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[160]+1,*((C_word*)lf[158]+1));
t5=*((C_word*)lf[57]+1);
t6=*((C_word*)lf[64]+1);
t7=*((C_word*)lf[83]+1);
t8=*((C_word*)lf[58]+1);
t9=C_mutate((C_word*)lf[161]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4972,a[2]=t5,a[3]=t6,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t10=*((C_word*)lf[121]+1);
t11=C_mutate((C_word*)lf[163]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5017,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5027,tmp=(C_word)a,a+=2,tmp);
t13=C_mutate((C_word*)lf[164]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=t12,tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[165]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5084,a[2]=t12,tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[166]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5103,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[167]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5128,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[168]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5153,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[169]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5205,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5257,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[172]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5386,tmp=(C_word)a,a+=2,tmp));
t21=*((C_word*)lf[47]+1);
t22=*((C_word*)lf[177]+1);
t23=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5485,a[2]=t22,a[3]=t21,tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[179]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5675,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[181]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5791,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[182]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5849,tmp=(C_word)a,a+=2,tmp));
t27=*((C_word*)lf[184]+1);
t28=*((C_word*)lf[67]+1);
t29=*((C_word*)lf[64]+1);
t30=C_mutate((C_word*)lf[185]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5888,a[2]=t28,a[3]=t29,a[4]=t27,tmp=(C_word)a,a+=5,tmp));
t31=*((C_word*)lf[185]+1);
t32=*((C_word*)lf[159]+1);
t33=C_mutate((C_word*)lf[189]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6145,a[2]=t32,a[3]=t31,tmp=(C_word)a,a+=4,tmp));
t34=*((C_word*)lf[57]+1);
t35=*((C_word*)lf[58]+1);
t36=*((C_word*)lf[185]+1);
t37=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6155,a[2]=t34,a[3]=t36,a[4]=t35,tmp=(C_word)a,a+=5,tmp));
t38=C_mutate((C_word*)lf[191]+1,*((C_word*)lf[190]+1));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1290 register-feature! */
t40=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t40+1)))(3,t40,t39,lf[252]);}

/* k6167 in k4939 in k1488 */
static void C_ccall f_6169(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6169,2,t0,t1);}
t2=C_mutate((C_word*)lf[192]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6171,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[193]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6280,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[194]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6379,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6511,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[195]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6644,tmp=(C_word)a,a+=2,tmp));
t7=*((C_word*)lf[196]+1);
t8=C_mutate((C_word*)lf[198]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6671,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[199],lf[200]);
t10=C_mutate((C_word*)lf[201]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6755,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[203]+1);
t12=C_mutate((C_word*)lf[204]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6761,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[203]+1);
t14=C_mutate((C_word*)lf[206]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6842,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[207]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6934,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[208]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6940,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[205],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6946,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[210]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7169,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[211]+1,*((C_word*)lf[210]+1));
t20=C_mutate((C_word*)lf[212]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7191,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[213]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7209,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[214]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7227,tmp=(C_word)a,a+=2,tmp));
t23=*((C_word*)lf[39]+1);
t24=*((C_word*)lf[215]+1);
t25=C_mutate((C_word*)lf[216]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7233,a[2]=t24,a[3]=t23,tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[216]+1);
t27=C_mutate((C_word*)lf[222]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7467,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t28=*((C_word*)lf[216]+1);
t29=C_mutate((C_word*)lf[223]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7476,a[2]=t28,tmp=(C_word)a,a+=3,tmp));
t30=*((C_word*)lf[39]+1);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8395,a[2]=t30,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1660 getter-with-setter */
t33=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t33+1)))(4,t33,t31,t32,*((C_word*)lf[223]+1));}

/* a8394 in k6167 in k4939 in k1488 */
static void C_ccall f_8395(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_8395r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_8395r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8395r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(4));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8405,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_block_size(t5);
/* extras.scm: 1665 hashf */
t9=t6;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t3,t8);}

/* k8403 in a8394 in k6167 in k4939 in k1488 */
static void C_ccall f_8405(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8405,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[7]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[7],C_fix(0)):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8508,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t5=(C_word)C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(((C_word*)t0)[3],t1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8426,a[2]=t8,a[3]=((C_word*)t0)[6],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_8426(t10,((C_word*)t0)[2],t6);}
else{
t6=(C_word)C_slot(((C_word*)t0)[3],t1);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8468,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t8,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8468(t10,((C_word*)t0)[2],t6);}}

/* loop in k8403 in a8394 in k6167 in k4939 in k1488 */
static void C_fcall f_8468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8468,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
/* extras.scm: 1681 def */
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8487,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1683 test */
t7=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k8485 in loop in k8403 in a8394 in k6167 in k4939 in k1488 */
static void C_ccall f_8487(C_word c,C_word t0,C_word t1){
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
f_8468(t3,((C_word*)t0)[5],t2);}}

/* loop in k8403 in a8394 in k6167 in k4939 in k1488 */
static void C_fcall f_8426(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8426,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
/* extras.scm: 1674 def */
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
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

/* f_8508 in k8403 in a8394 in k6167 in k4939 in k1488 */
static void C_ccall f_8508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8508,2,t0,t1);}
/* ##sys#signal-hook */
t2=*((C_word*)lf[217]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[218],lf[224],lf[250],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7490(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7490,2,t0,t1);}
t2=C_mutate((C_word*)lf[224]+1,t1);
t3=*((C_word*)lf[224]+1);
t4=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7492,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=(C_word)C_a_i_vector(&a,1,C_fix(42));
t6=*((C_word*)lf[225]+1);
t7=C_mutate((C_word*)lf[226]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7504,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[220]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7518,tmp=(C_word)a,a+=2,tmp));
t9=*((C_word*)lf[39]+1);
t10=*((C_word*)lf[215]+1);
t11=C_mutate((C_word*)lf[227]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7551,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t12=*((C_word*)lf[223]+1);
t13=C_mutate((C_word*)lf[228]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7774,a[2]=t12,tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[229]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7839,tmp=(C_word)a,a+=2,tmp));
t15=*((C_word*)lf[204]+1);
t16=*((C_word*)lf[223]+1);
t17=C_mutate((C_word*)lf[230]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7909,a[2]=t15,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t18=C_mutate((C_word*)lf[232]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7932,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[233]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7994,tmp=(C_word)a,a+=2,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1828 register-feature! */
t21=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t21+1)))(3,t21,t20,lf[249]);}

/* k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8057(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8057,2,t0,t1);}
t2=C_mutate((C_word*)lf[234]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8059,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[235]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8108,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[236]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8174,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[238]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8180,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8186,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[240]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8196,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[241]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8205,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[242]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8214,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[243]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8243,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[244]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8267,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[245]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8273,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[246]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8324,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[247]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8350,tmp=(C_word)a,a+=2,tmp));
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_UNDEFINED);}

/* queue-push-back-list! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8350(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8350,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8354,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1967 append */
t6=*((C_word*)lf[197]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t3,t5);}

/* k8352 in queue-push-back-list! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8357,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t2;
f_8357(t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8371,tmp=(C_word)a,a+=2,tmp);
t5=t2;
f_8357(t5,f_8371(t1));}}

/* do1363 in k8352 in queue-push-back-list! in k8055 in k7488 in k6167 in k4939 in k1488 */
static C_word C_fcall f_8371(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
return(t1);}
else{
t4=(C_word)C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* k8355 in k8352 in queue-push-back-list! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8357(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),t1));}

/* queue-push-back! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8324(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8324,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_i_setslot(t2,C_fix(1),t5);
t7=(C_word)C_slot(t2,C_fix(2));
t8=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_truep(t8)?(C_word)C_i_setslot(t2,C_fix(2),t5):C_SCHEME_UNDEFINED));}

/* list->queue in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8273(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_8273,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8281,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t3;
f_8281(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8289,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8289(t8,t3,t2);}}

/* do1348 in list->queue in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8289(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8289,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8299,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* extras.scm: 1943 ##sys#not-a-proper-list-error */
t8=*((C_word*)lf[176]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,((C_word*)t0)[2],lf[245]);}
else{
t8=t5;
f_8299(2,t8,C_SCHEME_UNDEFINED);}}}

/* k8297 in do1348 in list->queue in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8289(t3,((C_word*)t0)[2],t2);}

/* k8279 in list->queue in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8281,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[237],((C_word*)t0)[2],t1));}

/* queue->list in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8267(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8267,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* queue-remove! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8243(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8243,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_i_setslot(t2,C_fix(1),t4);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
t7=(C_truep(t6)?(C_word)C_i_set_i_slot(t2,C_fix(2),C_SCHEME_END_OF_LIST):C_SCHEME_UNDEFINED);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_slot(t3,C_fix(0)));}

/* queue-add! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8214,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8221,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t6);
if(C_truep(t7)){
t8=t5;
f_8221(t8,(C_word)C_i_setslot(t2,C_fix(1),t4));}
else{
t8=(C_word)C_slot(t2,C_fix(2));
t9=t5;
f_8221(t9,(C_word)C_i_setslot(t8,C_fix(1),t4));}}

/* k8219 in queue-add! in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* queue-last in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8205(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8205,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t3,C_fix(0)));}

/* queue-first in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8196(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8196,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t3,C_fix(0)));}

/* queue-empty? in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8186(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8186,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(C_SCHEME_END_OF_LIST,t3));}

/* queue? in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8180,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[237]));}

/* make-queue in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8174,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[237],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* hash-table-fold in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_8108,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8120,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8120(t10,t1,C_fix(0),t4);}

/* loop in hash-table-fold in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8120(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8120,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8136,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8136(t8,t1,t4,t3);}}

/* fold2 in loop in hash-table-fold in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8136(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8136,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1855 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8120(t5,t1,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8164,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
t8=(C_word)C_slot(t4,C_fix(1));
/* extras.scm: 1858 p */
t9=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t6,t7,t8,t3);}}

/* k8162 in fold2 in loop in hash-table-fold in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1857 fold2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8136(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* hash-table-walk in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8059,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8071,a[2]=t4,a[3]=t3,a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_8071(t9,t1,C_fix(0));}

/* do1310 in hash-table-walk in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8071(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8071,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8081,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8090,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_slot(((C_word*)t0)[2],t2);
/* extras.scm: 1840 ##sys#for-each */
t6=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}}

/* a8089 in do1310 in hash-table-walk in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8090,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1841 p */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k8079 in do1310 in hash-table-walk in k8055 in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_8081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8071(t3,((C_word*)t0)[2],t2);}

/* hash-table-values in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7994(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7994,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8006,a[2]=t6,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8006(t8,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-values in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8006(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8006,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8022,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8022(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-values in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8022,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1823 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8006(t5,t1,t4,t3);}
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

/* hash-table-keys in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7932(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7932,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7944,a[2]=t6,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7944(t8,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table-keys in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7944(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7944,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7960,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7960(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table-keys in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7960(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7960,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1809 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7944(t5,t1,t4,t3);}
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

/* alist->hash-table in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7909(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_7909r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7909r(t0,t1,t2,t3);}}

static void C_ccall f_7909r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7913,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t3);}

/* k7911 in alist->hash-table in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7916,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7918,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[231]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a7917 in k7911 in alist->hash-table in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7918,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1797 hash-table-set! */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* k7914 in k7911 in alist->hash-table in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table->alist in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7839(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7839,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7851,a[2]=t6,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7851(t8,t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in hash-table->alist in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7851(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7851,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7867,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7867(t8,t1,t4,t3);}}

/* loop2 in loop in hash-table->alist in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7867(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7867,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1787 loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7851(t5,t1,t4,t3);}
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

/* hash-table-merge! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7774,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_block_size(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7786,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t7,a[5]=t2,a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7786(t9,t1,C_fix(0));}

/* do1252 in hash-table-merge! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7786,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7796,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7809,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7809(t8,t3,t4);}}

/* do1255 in do1252 in hash-table-merge! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7809,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7822,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 1773 hash-table-set! */
t7=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,((C_word*)t0)[2],t5,t6);}}

/* k7820 in do1255 in do1252 in hash-table-merge! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7809(t3,((C_word*)t0)[2],t2);}

/* k7794 in do1252 in hash-table-merge! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7786(t3,((C_word*)t0)[2],t2);}

/* hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7551,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(4));
t6=(C_word)C_block_size(t4);
t7=(C_word)C_slot(t2,C_fix(3));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7567,a[2]=t1,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1715 hashf */
t9=t5;
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,t3,t6);}

/* k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7567(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7567,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(2));
t3=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[6],t1);
t5=(C_word)C_eqp(((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7584,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_7584(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_7639(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}}

/* loop in k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7639(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7639,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7655,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1738 test */
t7=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k7653 in loop in k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7655,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7658,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=t2;
f_7658(t4,(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t3));}
else{
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=t2;
f_7658(t4,(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(1),t3));}}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1745 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7639(t3,((C_word*)t0)[7],((C_word*)t0)[5],t2);}}

/* k7656 in k7653 in loop in k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7658(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* loop in k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7584(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7584,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7603,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t8=(C_word)C_slot(t3,C_fix(1));
t9=t7;
f_7603(t9,(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t8));}
else{
t8=(C_word)C_slot(t3,C_fix(1));
t9=t7;
f_7603(t9,(C_word)C_i_setslot(t2,C_fix(1),t8));}}
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

/* k7601 in loop in k7565 in hash-table-delete! in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* ##sys#hash-new-len in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7518,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_fixnum_greater_or_equal_p(t4,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7528,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_7528(t7,t5);}
else{
t7=(C_word)C_slot(t2,C_fix(1));
t8=t6;
f_7528(t8,(C_word)C_eqp(t7,C_SCHEME_END_OF_LIST));}}

/* k7526 in ##sys#hash-new-len in k7488 in k6167 in k4939 in k1488 */
static void C_fcall f_7528(C_word t0,C_word t1){
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
t3=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* hash-table-exists? in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7504,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7516,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1698 ref */
t5=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)t0)[3]);}

/* k7514 in hash-table-exists? in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}

/* hash-table-ref/default in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7492(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7492,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7498,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1691 hash-table-ref */
t6=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t3,t5);}

/* a7497 in hash-table-ref/default in k7488 in k6167 in k4939 in k1488 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7498,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table-set! in k6167 in k4939 in k1488 */
static void C_ccall f_7476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7476,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7482,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7485,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1656 hash-table-update! */
t7=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t3,t5,t6);}

/* a7484 in hash-table-set! in k6167 in k4939 in k1488 */
static void C_ccall f_7485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7485,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a7481 in hash-table-set! in k6167 in k4939 in k1488 */
static void C_ccall f_7482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7482,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* hash-table-update!/default in k6167 in k4939 in k1488 */
static void C_ccall f_7467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_7467,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7473,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1651 hash-table-update! */
t7=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t3,t4,t6);}

/* a7472 in hash-table-update!/default in k6167 in k4939 in k1488 */
static void C_ccall f_7473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7473,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr5rv,(void*)f_7233r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_7233r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_7233r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(15);
t6=(C_word)C_vemptyp(t5);
t7=(C_truep(t6)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7452,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp):(C_word)C_slot(t5,C_fix(0)));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7242,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t9,a[8]=t2,tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_7242(t11,t1);}

/* restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_fcall f_7242(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7242,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[8],C_fix(4));
t4=(C_word)C_block_size(t2);
t5=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=t4,a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* extras.scm: 1607 hashf */
t7=t3;
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[5],t4);}

/* k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7258,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[13],C_fix(2));
t3=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7440,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[12],a[14]=t3,tmp=(C_word)a,a+=15,tmp);
t5=(C_word)C_a_i_times(&a,2,((C_word*)t0)[12],lf[221]);
/* extras.scm: 1609 floor */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7440(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7440,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[14],t2);
t4=(C_truep(t3)?(C_word)C_fixnum_lessp(((C_word*)t0)[13],C_fix(1073741823)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7270,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7283,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_fixnum_times(((C_word*)t0)[13],C_fix(2));
t8=(C_word)C_i_fixnum_min(C_fix(1073741823),t7);
/* extras.scm: 1612 ##sys#hash-new-len */
t9=*((C_word*)lf[220]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,lf[200],t8);}
else{
t5=(C_word)C_slot(((C_word*)t0)[9],((C_word*)t0)[7]);
t6=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7305,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],a[9]=t5,a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_7305(t10,((C_word*)t0)[10],t5);}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7368,a[2]=((C_word*)t0)[5],a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=t5,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp));
t10=((C_word*)t8)[1];
f_7368(t10,((C_word*)t0)[10],t5);}}}

/* loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_fcall f_7368(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7368,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7378,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7396,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1636 init */
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7405,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_slot(t4,C_fix(0));
/* extras.scm: 1642 test */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[11],t6);}}

/* k7403 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7405,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7408,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1643 proc */
t4=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1646 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7368(t3,((C_word*)t0)[5],t2);}}

/* k7406 in k7403 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k7394 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1636 proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7376 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7378,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_fcall f_7305(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7305,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7315,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7333,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1623 init */
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[10],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7345,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_slot(t4,C_fix(1));
/* extras.scm: 1630 proc */
t9=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1633 loop */
t13=t1;
t14=t7;
t1=t13;
t2=t14;
goto loop;}}}

/* k7343 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k7331 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1623 proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7313 in loop in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
t4=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t3);
t5=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* k7281 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1611 make-vector */
t2=*((C_word*)lf[203]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7270(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7273,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=t1;
t4=(C_word)C_block_size(((C_word*)t0)[3]);
t5=(C_word)C_block_size(t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7707,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=t4,tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_7707(t9,t2,C_fix(0));}

/* do1235 in k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_fcall f_7707(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7707,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7717,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7730(t8,t3,t4);}}

/* loop in do1235 in k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7730,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7746,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1757 hashf */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,((C_word*)t0)[2]);}}

/* k7744 in loop in do1235 in k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7746(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7746,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_slot(((C_word*)t0)[5],t1);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_i_setslot(((C_word*)t0)[5],t1,t5);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1759 loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_7730(t8,((C_word*)t0)[2],t7);}

/* k7715 in do1235 in k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7707(t3,((C_word*)t0)[2],t2);}

/* k7271 in k7268 in k7438 in k7256 in restart in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4]);
/* extras.scm: 1617 restart */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7242(t3,((C_word*)t0)[2]);}

/* f_7452 in hash-table-update! in k6167 in k4939 in k1488 */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7452,2,t0,t1);}
/* extras.scm: 1599 ##sys#signal-hook */
t2=*((C_word*)lf[217]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,lf[218],lf[216],lf[219],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* hash-table-size in k6167 in k4939 in k1488 */
static void C_ccall f_7227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7227,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(2)));}

/* string-ci-hash in k6167 in k4939 in k1488 */
static void C_ccall f_7209(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7209r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7209r(t0,t1,t2,t3);}}

static void C_ccall f_7209r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(536870912):(C_word)C_slot(t3,C_fix(0)));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_fixnum_modulo((C_word)C_hash_string_ci(t2),t5));}

/* string-hash in k6167 in k4939 in k1488 */
static void C_ccall f_7191(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7191r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7191r(t0,t1,t2,t3);}}

static void C_ccall f_7191r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(536870912):(C_word)C_slot(t3,C_fix(0)));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_fixnum_modulo((C_word)C_hash_string(t2),t5));}

/* hash in k6167 in k4939 in k1488 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7169r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7169r(t0,t1,t2,t3);}}

static void C_ccall f_7169r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(536870912):(C_word)C_slot(t3,C_fix(0)));
/* extras.scm: 1571 %hash */
t6=lf[205];
f_6946(4,t6,t1,t2,t5);}

/* %hash in k6167 in k4939 in k1488 */
static void C_ccall f_6946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6946,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6949,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6974,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7167,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1567 rechash */
t11=((C_word*)t7)[1];
f_6974(t11,t10,t2,C_fix(0));}

/* k7165 in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_and(C_fix((C_word)C_MOST_POSITIVE_FIXNUM),t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_modulo(t2,((C_word*)t0)[2]));}

/* rechash in %hash in k6167 in k4939 in k1488 */
static void C_fcall f_6974(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6974,NULL,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7041,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 1549 hash-with-test */
t7=((C_word*)((C_word*)t0)[3])[1];
f_6949(t7,t5,t6,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7070,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 1551 hash-with-test */
t6=((C_word*)((C_word*)t0)[3])[1];
f_6949(t6,t4,t5,t3);}
else{
if(C_truep((C_word)C_portp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7083,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 1553 input-port? */
t5=*((C_word*)lf[209]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
if(C_truep((C_word)C_byteblockp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_hash_string(t2));}
else{
t4=(C_word)C_block_size(t2);
t5=(C_truep((C_word)C_specialp(t2))?C_fix(1):C_fix(0));
t6=(C_truep((C_word)C_specialp(t2))?(C_word)C_peek_fixnum(t2,C_fix(0)):C_fix(0));
t7=(C_word)C_u_fixnum_plus(t4,t6);
t8=(C_word)C_fixnum_greaterp(t4,C_fix(4));
t9=(C_truep(t8)?C_fix(4):t4);
t10=(C_word)C_u_fixnum_difference(t9,t5);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7105,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_7105(t14,t1,t7,t5,t10);}}}}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(262));}}}}}}}

/* loop in rechash in %hash in k6167 in k4939 in k1488 */
static void C_fcall f_7105(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_7105,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_word)C_fixnum_times(t2,C_fix(16));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7140,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(((C_word*)t0)[4],t3);
t9=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1563 rechash */
t10=((C_word*)((C_word*)t0)[2])[1];
f_6974(t10,t7,t8,t9);}}

/* k7138 in loop in rechash in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_fix(t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[7],t2);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t3);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1563 loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7105(t7,((C_word*)t0)[2],t4,t5,t6);}

/* k7081 in rechash in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_fix(260):C_fix(261)));}

/* k7068 in rechash in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7070,2,t0,t1);}
t2=(C_word)C_a_i_arithmetic_shift(&a,2,t1,C_fix(16));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7062,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1552 hash-with-test */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6949(t5,t3,t4,((C_word*)t0)[2]);}

/* k7060 in k7068 in rechash in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t1));}

/* k7039 in rechash in %hash in k6167 in k4939 in k1488 */
static void C_ccall f_7041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t1));}

/* hash-with-test in %hash in k6167 in k4939 in k1488 */
static void C_fcall f_6949(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6949,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not((C_word)C_blockp(t2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6959,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_6959(t6,t4);}
else{
t6=(C_word)C_byteblockp(t2);
t7=t5;
f_6959(t7,(C_truep(t6)?t6:(C_word)C_i_symbolp(t2)));}}

/* k6957 in hash-with-test in %hash in k6167 in k4939 in k1488 */
static void C_fcall f_6959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1537 rechash */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6974(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(99));}}

/* hash-table-hash-function in k6167 in k4939 in k1488 */
static void C_ccall f_6940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6940,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(4)));}

/* hash-table-equivalence-function in k6167 in k4939 in k1488 */
static void C_ccall f_6934(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6934,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(3)));}

/* hash-table-copy in k6167 in k4939 in k1488 */
static void C_ccall f_6842(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6842,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_block_size(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6852,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1502 make-vector */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,C_SCHEME_END_OF_LIST);}

/* k6850 in hash-table-copy in k6167 in k4939 in k1488 */
static void C_ccall f_6852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6852,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6857(t5,((C_word*)t0)[2],C_fix(0));}

/* do1074 in k6850 in hash-table-copy in k6167 in k4939 in k1488 */
static void C_fcall f_6857(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6857,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(4));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,5,lf[202],((C_word*)t0)[4],t3,t4,t5));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6893,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6899,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6899(t8,t3,t4);}}

/* copy in do1074 in k6850 in hash-table-copy in k6167 in k4939 in k1488 */
static void C_fcall f_6899(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6899,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6920,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1514 copy */
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k6918 in copy in do1074 in k6850 in hash-table-copy in k6167 in k4939 in k1488 */
static void C_ccall f_6920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6920,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6891 in do1074 in k6850 in hash-table-copy in k6167 in k4939 in k1488 */
static void C_ccall f_6893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6857(t4,((C_word*)t0)[2],t3);}

/* make-hash-table in k6167 in k4939 in k1488 */
static void C_ccall f_6761(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_6761r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6761r(t0,t1,t2);}}

static void C_ccall f_6761r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6772,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6777,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6782,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-test10491062 */
t7=t6;
f_6782(t7,t1);}
else{
t7=(C_word)C_u_i_car(t2);
t8=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-hashf10501060 */
t9=t5;
f_6777(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-len10511057 */
t11=t4;
f_6772(t11,t1,t7,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
/* body10471053 */
t13=t3;
f_6763(t13,t1,t7,t9,t11);}}}}

/* def-test1049 in make-hash-table in k6167 in k4939 in k1488 */
static void C_fcall f_6782(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6782,NULL,2,t0,t1);}
/* def-hashf10501060 */
t2=((C_word*)t0)[2];
f_6777(t2,t1,*((C_word*)lf[42]+1));}

/* def-hashf1050 in make-hash-table in k6167 in k4939 in k1488 */
static void C_fcall f_6777(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6777,NULL,3,t0,t1,t2);}
/* def-len10511057 */
t3=((C_word*)t0)[2];
f_6772(t3,t1,t2,lf[205]);}

/* def-len1051 in make-hash-table in k6167 in k4939 in k1488 */
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6772,NULL,4,t0,t1,t2,t3);}
/* body10471053 */
t4=((C_word*)t0)[2];
f_6763(t4,t1,t2,t3,C_fix(307));}

/* body1047 in make-hash-table in k6167 in k4939 in k1488 */
static void C_fcall f_6763(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6763,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6771,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1494 make-vector */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,C_SCHEME_END_OF_LIST);}

/* k6769 in body1047 in make-hash-table in k6167 in k4939 in k1488 */
static void C_ccall f_6771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6771,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,5,lf[202],t1,C_fix(0),((C_word*)t0)[3],((C_word*)t0)[2]));}

/* hash-table? in k6167 in k4939 in k1488 */
static void C_ccall f_6755(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6755,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[202]));}

/* binary-search in k6167 in k4939 in k1488 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6671,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6675,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6749,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1450 list->vector */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_6675(t6,(C_word)C_i_check_vector_2(((C_word*)t4)[1],lf[198]));}}

/* k6747 in binary-search in k6167 in k4939 in k1488 */
static void C_ccall f_6749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_6675(t3,t2);}

/* k6673 in binary-search in k6167 in k4939 in k1488 */
static void C_fcall f_6675(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6675,NULL,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[4])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6689,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6689(t6,((C_word*)t0)[2],C_fix(0),t2);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in k6673 in binary-search in k6167 in k4939 in k1488 */
static void C_fcall f_6689(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6689,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_divide(t4,C_fix(2));
t6=(C_word)C_u_fixnum_plus(t2,t5);
t7=(C_word)C_slot(((C_word*)((C_word*)t0)[4])[1],t6);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6699,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1458 proc */
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t7);}

/* k6697 in loop in k6673 in binary-search in k6167 in k4939 in k1488 */
static void C_ccall f_6699(C_word c,C_word t0,C_word t1){
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
f_6689(t4,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[5]);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* extras.scm: 1461 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6689(t4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}}}

/* sort in k6167 in k4939 in k1488 */
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6644,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6658,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6662,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1440 vector->list */
t6=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6669,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1441 append */
t5=*((C_word*)lf[197]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}}

/* k6667 in sort in k6167 in k4939 in k1488 */
static void C_ccall f_6669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1441 sort! */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6660 in sort in k6167 in k4939 in k1488 */
static void C_ccall f_6662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1440 sort! */
t2=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6656 in sort in k6167 in k4939 in k1488 */
static void C_ccall f_6658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1440 list->vector */
t2=*((C_word*)lf[196]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6511(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6511,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6514,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
if(C_truep((C_word)C_i_vectorp(((C_word*)t4)[1]))){
t8=(C_word)C_fix((C_word)C_header_size(((C_word*)t4)[1]));
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6601,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=t9,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1423 vector->list */
t11=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t4)[1]);}
else{
t8=(C_word)C_i_length(((C_word*)t4)[1]);
/* extras.scm: 1429 step */
t9=((C_word*)t6)[1];
f_6514(t9,t1,t8);}}

/* k6599 in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6601,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6608,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1424 step */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6514(t4,t3,((C_word*)t0)[2]);}

/* k6606 in k6599 in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6608,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6610,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6610(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* do1018 in k6606 in k6599 in sort! in k6167 in k4939 in k1488 */
static void C_fcall f_6610(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6610,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_i_setslot(((C_word*)t0)[3],t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* step in sort! in k6167 in k4939 in k1488 */
static void C_fcall f_6514(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6514,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6524,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_quotient(4,0,t3,t2,C_fix(2));}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(2)))){
t3=(C_word)C_u_i_car(((C_word*)((C_word*)t0)[2])[1]);
t4=(C_word)C_u_i_cadr(((C_word*)((C_word*)t0)[2])[1]);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(C_word)C_u_i_cddr(((C_word*)((C_word*)t0)[2])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6555,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6565,a[2]=t3,a[3]=t8,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1408 less? */
t10=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t4,t3);}
else{
if(C_truep((C_word)C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_set_i_slot(t3,C_fix(1),C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}}}

/* k6563 in step in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(0),((C_word*)t0)[4]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=((C_word*)t0)[3];
f_6555(t4,(C_word)C_i_setslot(t3,C_fix(0),((C_word*)t0)[2]));}
else{
t2=((C_word*)t0)[3];
f_6555(t2,C_SCHEME_UNDEFINED);}}

/* k6553 in step in sort! in k6167 in k4939 in k1488 */
static void C_fcall f_6555(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_i_set_i_slot(t2,C_fix(1),C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[3]);}

/* k6522 in step in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1399 step */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6514(t3,t2,t1);}

/* k6525 in k6522 in step in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6527,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6533,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1401 step */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6514(t4,t3,t2);}

/* k6531 in k6525 in k6522 in step in sort! in k6167 in k4939 in k1488 */
static void C_ccall f_6533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1402 merge! */
t2=*((C_word*)lf[194]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* merge! in k6167 in k4939 in k1488 */
static void C_ccall f_6379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6379,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6382,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t2);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6461,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_u_i_car(t3);
t10=(C_word)C_u_i_car(t2);
/* extras.scm: 1376 less? */
t11=t4;
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}}}

/* k6459 in merge! in k6167 in k4939 in k1488 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6461,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6464,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_6464(2,t4,(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]));}
else{
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 1379 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6382(t5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6484,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_6484(2,t4,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]));}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1384 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6382(t5,t2,((C_word*)t0)[3],t4,((C_word*)t0)[4]);}}}

/* k6482 in k6459 in merge! in k6167 in k4939 in k1488 */
static void C_ccall f_6484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k6462 in k6459 in merge! in k6167 in k4939 in k1488 */
static void C_ccall f_6464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* loop in merge! in k6167 in k4939 in k1488 */
static void C_fcall f_6382(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6382,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6389,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_u_i_car(t4);
t7=(C_word)C_u_i_car(t3);
/* extras.scm: 1361 less? */
t8=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t6,t7);}

/* k6387 in loop in merge! in k6167 in k4939 in k1488 */
static void C_ccall f_6389(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[3]));}
else{
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1366 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6382(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t4);}}
else{
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(1),((C_word*)t0)[3]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
if(C_truep((C_word)C_i_nullp(t3))){
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[5]));}
else{
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1372 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6382(t5,((C_word*)t0)[4],((C_word*)t0)[3],t4,((C_word*)t0)[5]);}}}

/* merge in k6167 in k4939 in k1488 */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6280,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(C_word)C_u_i_car(t2);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6314,a[2]=t4,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_6314(t12,t1,t5,t6,t7,t8);}}}

/* loop in merge in k6167 in k4939 in k1488 */
static void C_fcall f_6314(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6314,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,a[5]=t3,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 1344 less? */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t4,t2);}

/* k6319 in loop in merge in k6167 in k4939 in k1488 */
static void C_ccall f_6321(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6321,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[7]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_car(((C_word*)t0)[7]);
t4=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1347 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6314(t5,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3,t4);}}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[7]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6369,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_car(((C_word*)t0)[5]);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1351 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6314(t5,t2,t3,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}}}

/* k6367 in k6319 in loop in merge in k6167 in k4939 in k1488 */
static void C_ccall f_6369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6369,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6339 in k6319 in loop in merge in k6167 in k4939 in k1488 */
static void C_ccall f_6341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6341,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* sorted? in k6167 in k4939 in k1488 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6171,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(C_word)C_fix((C_word)C_header_size(t2));
if(C_truep((C_word)C_i_less_or_equalp(t4,C_fix(1)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6198,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_6198(t8,t1,C_fix(1));}}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6246,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_6246(t9,t1,t4,t5);}}}

/* loop in sorted? in k6167 in k4939 in k1488 */
static void C_fcall f_6246(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6246,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6274,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t3);
/* extras.scm: 1327 less? */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}}

/* k6272 in loop in sorted? in k6167 in k4939 in k1488 */
static void C_ccall f_6274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_u_i_car(((C_word*)t0)[3]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 1328 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6246(t4,((C_word*)t0)[4],t2,t3);}}

/* do965 in sorted? in k6167 in k4939 in k1488 */
static void C_fcall f_6198(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6198,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nequalp(t2,((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6208,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_6208(2,t5,t3);}
else{
t5=(C_word)C_slot(((C_word*)t0)[3],t2);
t6=(C_word)C_a_i_minus(&a,2,t2,C_fix(1));
t7=(C_word)C_slot(((C_word*)t0)[3],t6);
/* extras.scm: 1321 less? */
t8=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,t5,t7);}}

/* k6206 in do965 in sorted? in k6167 in k4939 in k1488 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6208,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_nequalp(((C_word*)t0)[4],((C_word*)t0)[3]));}
else{
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[2])[1];
f_6198(t3,((C_word*)t0)[5],t2);}}

/* sprintf in k4939 in k1488 */
static void C_ccall f_6155(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6155r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6155r(t0,t1,t2,t3);}}

static void C_ccall f_6155r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6159,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1284 open-output-string */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6157 in sprintf in k4939 in k1488 */
static void C_ccall f_6159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6162,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_apply(6,0,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6160 in k6157 in sprintf in k4939 in k1488 */
static void C_ccall f_6162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1286 get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* printf in k4939 in k1488 */
static void C_ccall f_6145(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_6145r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6145r(t0,t1,t2,t3);}}

static void C_ccall f_6145r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6153,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 1276 current-output-port */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6151 in printf in k4939 in k1488 */
static void C_ccall f_6153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fprintf in k4939 in k1488 */
static void C_ccall f_5888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_5888r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5888r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(9);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5894(t8,t1,t3,t4);}

/* rec in fprintf in k4939 in k1488 */
static void C_fcall f_5894(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5894,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_block_size(t2);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5900,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5907,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t9,a[8]=t11,a[9]=t8,a[10]=t7,a[11]=t6,tmp=(C_word)a,a+=12,tmp));
t13=((C_word*)t11)[1];
f_5926(t13,t1);}

/* loop in rec in fprintf in k4939 in k1488 */
static void C_fcall f_5926(C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5926,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[10]))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=f_5900(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5939,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[11])[1],((C_word*)t0)[10]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_5900(((C_word*)t0)[9]);
t7=(C_word)C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1246 write */
t9=((C_word*)t0)[6];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t3,t8,((C_word*)t0)[5]);
case C_make_character(65):
t8=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1247 display */
t9=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t3,t8,((C_word*)t0)[5]);
case C_make_character(67):
t8=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1248 ##sys#write-char-0 */
t9=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t3,t8,((C_word*)t0)[5]);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6003,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1249 ##sys#number->string */
t10=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,C_fix(2));
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6020,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1250 ##sys#number->string */
t10=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,C_fix(8));
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6037,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1251 ##sys#number->string */
t10=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,C_fix(16));
case C_make_character(33):
/* extras.scm: 1252 ##sys#flush-output */
t8=*((C_word*)lf[186]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,((C_word*)t0)[5]);
case C_make_character(63):
t8=f_5907(((C_word*)t0)[7]);
t9=f_5907(((C_word*)t0)[7]);
/* extras.scm: 1257 rec */
t10=((C_word*)((C_word*)t0)[3])[1];
f_5894(t10,t3,t8,t9);
case C_make_character(126):
/* extras.scm: 1258 ##sys#write-char-0 */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,C_make_character(126),((C_word*)t0)[5]);
case C_make_character(37):
/* extras.scm: 1259 newline */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,((C_word*)t0)[5]);
default:
t8=(C_word)C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:(C_word)C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm: 1260 newline */
t10=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t3,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_u_i_char_whitespacep(t6))){
t10=f_5900(((C_word*)t0)[9]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t12=t3;
f_5939(2,t12,f_6110(t11,t10));}
else{
/* extras.scm: 1267 ##sys#error */
t10=*((C_word*)lf[187]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,lf[185],lf[188],t6);}}}}
else{
/* extras.scm: 1268 ##sys#write-char-0 */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t2,((C_word*)t0)[5]);}}}

/* skip in loop in rec in fprintf in k4939 in k1488 */
static C_word C_fcall f_6110(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
if(C_truep((C_word)C_u_i_char_whitespacep(t1))){
t2=f_5900(((C_word*)t0)[3]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

/* k6035 in loop in rec in fprintf in k4939 in k1488 */
static void C_ccall f_6037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1251 display */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6018 in loop in rec in fprintf in k4939 in k1488 */
static void C_ccall f_6020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1250 display */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6001 in loop in rec in fprintf in k4939 in k1488 */
static void C_ccall f_6003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1249 display */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5937 in loop in rec in fprintf in k4939 in k1488 */
static void C_ccall f_5939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1269 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5926(t2,((C_word*)t0)[2]);}

/* next in rec in fprintf in k4939 in k1488 */
static C_word C_fcall f_5907(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
t1=(C_word)C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t2=(C_word)C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* fetch in rec in fprintf in k4939 in k1488 */
static C_word C_fcall f_5900(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
t1=(C_word)C_subchar(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* string-chomp in k4939 in k1488 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5849r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5849r(t0,t1,t2,t3);}}

static void C_ccall f_5849r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?lf[183]:(C_word)C_slot(t3,C_fix(0)));
t6=(C_word)C_block_size(t2);
t7=(C_word)C_block_size(t5);
t8=(C_word)C_u_fixnum_difference(t6,t7);
t9=(C_word)C_fixnum_greater_or_equal_p(t6,t7);
t10=(C_truep(t9)?(C_word)C_substring_compare(t2,t5,t8,C_fix(0),t7):C_SCHEME_FALSE);
if(C_truep(t10)){
/* extras.scm: 1214 ##sys#substring */
t11=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t2,C_fix(0),t8);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t2);}}

/* string-chop in k4939 in k1488 */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5791,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5800,a[2]=t6,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5800(t8,t1,t4,C_fix(0));}

/* loop in string-chop in k4939 in k1488 */
static void C_fcall f_5800(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5800,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_u_fixnum_plus(t3,t2);
/* extras.scm: 1200 ##sys#substring */
t6=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5831,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_u_fixnum_plus(t3,((C_word*)t0)[4]);
/* extras.scm: 1201 ##sys#substring */
t6=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[3],t3,t5);}}}

/* k5829 in loop in string-chop in k4939 in k1488 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5835,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],((C_word*)t0)[4]);
/* extras.scm: 1201 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_5800(t5,t2,t3,t4);}

/* k5833 in k5829 in loop in string-chop in k4939 in k1488 */
static void C_ccall f_5835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5835,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5818 in loop in string-chop in k4939 in k1488 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5820,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* string-translate* in k4939 in k1488 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5675,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5681,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
/* extras.scm: 1189 collect */
t8=((C_word*)t6)[1];
f_5681(t8,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in string-translate* in k4939 in k1488 */
static void C_fcall f_5681(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5681,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5695,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,t3))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5709,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1171 ##sys#substring */
t10=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[4],t3,t2);}
else{
t9=t8;
f_5699(t9,((C_word*)t6)[1]);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5714,a[2]=t8,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_5714(t10,t1,((C_word*)t0)[2]);}}

/* loop in collect in string-translate* in k4939 in k1488 */
static void C_fcall f_5714(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5714,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[8],C_fix(1));
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[7],C_fix(1));
/* extras.scm: 1175 collect */
t5=((C_word*)((C_word*)t0)[6])[1];
f_5681(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_fix((C_word)C_header_size(t4));
t6=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_substring_compare(((C_word*)t0)[3],t4,((C_word*)t0)[8],C_fix(0),t5))){
t7=(C_word)C_u_fixnum_plus(((C_word*)t0)[8],t5);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5753,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[8],((C_word*)t0)[5]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5779,a[2]=t8,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1183 ##sys#substring */
t10=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[8]);}
else{
t9=t8;
f_5753(t9,C_SCHEME_UNDEFINED);}}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 1188 loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k5777 in loop in collect in string-translate* in k4939 in k1488 */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5779,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_5753(t4,t3);}

/* k5751 in loop in collect in string-translate* in k4939 in k1488 */
static void C_fcall f_5753(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5753,NULL,2,t0,t1);}
t2=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[7]));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[5])[1]);
/* extras.scm: 1184 collect */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5681(t5,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[2],t3,t4);}

/* k5707 in collect in string-translate* in k4939 in k1488 */
static void C_ccall f_5709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5709,2,t0,t1);}
t2=((C_word*)t0)[3];
f_5699(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]));}

/* k5697 in collect in string-translate* in k4939 in k1488 */
static void C_fcall f_5699(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1169 reverse */
t2=*((C_word*)lf[3]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5693 in collect in string-translate* in k4939 in k1488 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1167 ##sys#fragments->string */
t2=*((C_word*)lf[180]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* string-translate in k4939 in k1488 */
static void C_ccall f_5485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_5485r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5485r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(16);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5488,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5522,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_charp(t3))){
t7=t6;
f_5522(2,t7,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5653,a[2]=t3,tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5670,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 1125 list->string */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
/* extras.scm: 1128 instring */
f_5488(t6,t3);}}}

/* k5668 in string-translate in k4939 in k1488 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1125 instring */
f_5488(((C_word*)t0)[2],t1);}

/* f_5653 in string-translate in k4939 in k1488 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5653,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* k5520 in string-translate in k4939 in k1488 */
static void C_ccall f_5522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5525,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_charp(t3))){
t4=t2;
f_5525(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
/* extras.scm: 1133 list->string */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t4=t2;
f_5525(2,t4,t3);}}}
else{
t3=t2;
f_5525(2,t3,C_SCHEME_FALSE);}}

/* k5523 in k5520 in string-translate in k4939 in k1488 */
static void C_ccall f_5525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5525,2,t0,t1);}
t2=(C_word)C_i_stringp(t1);
t3=(C_truep(t2)?(C_word)C_block_size(t1):C_SCHEME_FALSE);
t4=(C_word)C_block_size(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5534,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 1140 make-string */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k5532 in k5523 in k5520 in string-translate in k4939 in k1488 */
static void C_ccall f_5534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5534,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_5539(t5,((C_word*)t0)[2],C_fix(0),C_fix(0));}

/* loop in k5532 in k5523 in k5520 in string-translate in k4939 in k1488 */
static void C_fcall f_5539(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5539,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]))){
if(C_truep((C_word)C_fixnum_lessp(t3,t2))){
/* extras.scm: 1144 ##sys#substring */
t4=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[6],C_fix(0),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[6]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[5],t2);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5558,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 1147 from */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k5556 in loop in k5532 in k5523 in k5520 in string-translate in k4939 in k1488 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
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
t3=((C_word*)t0)[8];
if(C_truep(t3)){
if(C_truep((C_word)C_charp(((C_word*)t0)[8]))){
t4=(C_word)C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[8]);
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1154 loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5539(t7,((C_word*)t0)[3],t5,t6);}
else{
t4=(C_word)C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[6],(C_word)C_subchar(((C_word*)t0)[8],t1));
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1159 loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5539(t7,((C_word*)t0)[3],t5,t6);}}
else{
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 1151 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5539(t5,((C_word*)t0)[3],t4,((C_word*)t0)[6]);}}
else{
t3=(C_word)C_setsubchar(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[2]);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],C_fix(1));
/* extras.scm: 1150 loop */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5539(t6,((C_word*)t0)[3],t4,t5);}}

/* instring in string-translate in k4939 in k1488 */
static void C_fcall f_5488(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5488,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5493,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_5493 in instring in string-translate in k4939 in k1488 */
static void C_ccall f_5493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5493,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5499,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_5499(t3,C_fix(0)));}

/* loop */
static C_word C_fcall f_5499(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* string-intersperse in k4939 in k1488 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5386r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5386r(t0,t1,t2,t3);}}

static void C_ccall f_5386r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?lf[173]:(C_word)C_slot(t3,C_fix(0)));
t6=(C_word)C_block_size(t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5398,a[2]=t8,a[3]=t6,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_5398(t10,t1,t2,C_fix(0));}

/* loop1 in string-intersperse in k4939 in k1488 */
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5398,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep((C_word)C_eqp(((C_word*)t0)[5],C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[174]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5408,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_fixnum_difference(t3,((C_word*)t0)[3]);
/* extras.scm: 1088 ##sys#allocate-vector */
t6=*((C_word*)lf[175]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,t5,C_SCHEME_TRUE,C_make_character(32),C_SCHEME_FALSE);}}
else{
t4=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_block_size(t5);
t8=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],t3);
t9=(C_word)C_u_fixnum_plus(t7,t8);
/* extras.scm: 1103 loop1 */
t13=t1;
t14=t6;
t15=t9;
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* extras.scm: 1105 ##sys#not-a-proper-list-error */
t5=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,((C_word*)t0)[5]);}}}

/* k5406 in loop1 in string-intersperse in k4939 in k1488 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5413,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_5413(t2,((C_word*)t0)[2],C_fix(0)));}

/* loop2 in k5406 in loop1 in string-intersperse in k4939 in k1488 */
static C_word C_fcall f_5413(C_word t0,C_word t1,C_word t2){
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
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_block_size(t3);
t6=(C_word)C_substring_copy(t3,((C_word*)t0)[4],C_fix(0),t5,t2);
t7=(C_word)C_u_fixnum_plus(t2,t5);
if(C_truep((C_word)C_eqp(t4,C_SCHEME_END_OF_LIST))){
return(((C_word*)t0)[4]);}
else{
t8=(C_word)C_substring_copy(((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],t7);
t9=(C_word)C_u_fixnum_plus(t7,((C_word*)t0)[2]);
t11=t4;
t12=t9;
t1=t11;
t2=t12;
goto loop;}}

/* string-split in k4939 in k1488 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5257r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5257r(t0,t1,t2,t3);}}

static void C_ccall f_5257r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(18);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?lf[171]:(C_word)C_slot(t3,C_fix(0)));
t6=(C_word)C_block_size(t3);
t7=(C_word)C_eqp(t6,C_fix(2));
t8=(C_truep(t7)?(C_word)C_slot(t3,C_fix(1)):C_SCHEME_FALSE);
t9=(C_word)C_block_size(t2);
t10=(C_word)C_block_size(t5);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5272,a[2]=t2,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5292,a[2]=t5,a[3]=t15,a[4]=t10,a[5]=t2,a[6]=t13,a[7]=t8,a[8]=t12,a[9]=t9,tmp=(C_word)a,a+=10,tmp));
t17=((C_word*)t15)[1];
f_5292(t17,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* loop in string-split in k4939 in k1488 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5292,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5302,a[2]=t1,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[7]);
if(C_truep(t7)){
/* extras.scm: 1064 add */
t8=((C_word*)t0)[6];
f_5272(t8,t5,t4,t2,t3);}
else{
t8=t5;
f_5302(2,t8,C_SCHEME_UNDEFINED);}}
else{
t5=(C_word)C_subchar(((C_word*)t0)[5],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5319,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=((C_word*)t0)[3],a[10]=t2,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp));
t9=((C_word*)t7)[1];
f_5319(t9,t1,C_fix(0));}}

/* scan in loop in string-split in k4939 in k1488 */
static void C_fcall f_5319(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5319,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[11]))){
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* extras.scm: 1069 loop */
t4=((C_word*)((C_word*)t0)[9])[1];
f_5292(t4,t1,t3,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_fixnum_greaterp(((C_word*)t0)[10],((C_word*)t0)[7]);
t6=(C_truep(t5)?t5:((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5358,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1073 add */
t8=((C_word*)t0)[3];
f_5272(t8,t7,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[8]);}
else{
/* extras.scm: 1074 loop */
t7=((C_word*)((C_word*)t0)[9])[1];
f_5292(t7,t1,t4,((C_word*)t0)[8],t4);}}
else{
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* extras.scm: 1075 scan */
t11=t1;
t12=t4;
t1=t11;
t2=t12;
goto loop;}}}

/* k5356 in scan in loop in string-split in k4939 in k1488 */
static void C_ccall f_5358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 1073 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5292(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,((C_word*)t0)[2]);}

/* k5300 in loop in string-split in k4939 in k1488 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:C_SCHEME_END_OF_LIST));}

/* add in string-split in k4939 in k1488 */
static void C_fcall f_5272(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5272,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5287,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 1057 ##sys#substring */
t6=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],t2,t3);}

/* k5285 in add in string-split in k4939 in k1488 */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5287,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5279,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t4=t3;
f_5279(t4,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=t3;
f_5279(t5,t4);}}

/* k5277 in k5285 in add in string-split in k4939 in k1488 */
static void C_fcall f_5279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* substring-ci=? in k4939 in k1488 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5205r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5205r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5205r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=(C_word)C_block_size(t4);
t6=(C_word)C_fixnum_greater_or_equal_p(t5,C_fix(1));
t7=(C_truep(t6)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t8=(C_word)C_fixnum_greater_or_equal_p(t5,C_fix(2));
t9=(C_truep(t8)?(C_word)C_slot(t4,C_fix(1)):C_fix(0));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5218,a[2]=t9,a[3]=t7,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t5,C_fix(2)))){
t11=t10;
f_5218(t11,(C_word)C_slot(t4,C_fix(2)));}
else{
t11=(C_word)C_block_size(t2);
t12=(C_word)C_u_fixnum_difference(t11,t7);
t13=(C_word)C_block_size(t3);
t14=(C_word)C_u_fixnum_difference(t13,t9);
t15=t10;
f_5218(t15,(C_word)C_i_fixnum_min(t12,t14));}}

/* k5216 in substring-ci=? in k4939 in k1488 */
static void C_fcall f_5218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* substring=? in k4939 in k1488 */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5153r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5153r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5153r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(7);
t5=(C_word)C_block_size(t4);
t6=(C_word)C_fixnum_greater_or_equal_p(t5,C_fix(1));
t7=(C_truep(t6)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t8=(C_word)C_fixnum_greater_or_equal_p(t5,C_fix(2));
t9=(C_truep(t8)?(C_word)C_slot(t4,C_fix(1)):C_fix(0));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5166,a[2]=t9,a[3]=t7,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t5,C_fix(2)))){
t11=t10;
f_5166(t11,(C_word)C_slot(t4,C_fix(2)));}
else{
t11=(C_word)C_block_size(t2);
t12=(C_word)C_u_fixnum_difference(t11,t7);
t13=(C_word)C_block_size(t3);
t14=(C_word)C_u_fixnum_difference(t13,t9);
t15=t10;
f_5166(t15,(C_word)C_i_fixnum_min(t12,t14));}}

/* k5164 in substring=? in k4939 in k1488 */
static void C_fcall f_5166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_substring_compare(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* string-compare3-ci in k4939 in k1488 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5128,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=(C_word)C_block_size(t3);
t6=(C_word)C_u_fixnum_difference(t4,t5);
t7=(C_word)C_fixnum_lessp(t6,C_fix(0));
t8=(C_truep(t7)?t4:t5);
t9=(C_word)C_string_compare_case_insensitive(t2,t3,t8);
t10=(C_word)C_eqp(t9,C_fix(0));
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?t6:t9));}

/* string-compare3 in k4939 in k1488 */
static void C_ccall f_5103(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5103,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=(C_word)C_block_size(t3);
t6=(C_word)C_u_fixnum_difference(t4,t5);
t7=(C_word)C_fixnum_lessp(t6,C_fix(0));
t8=(C_truep(t7)?t4:t5);
t9=(C_word)C_mem_compare(t2,t3,t8);
t10=(C_word)C_eqp(t9,C_fix(0));
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?t6:t9));}

/* substring-index-ci in k4939 in k1488 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5084r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5084r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5084r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5094,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 982  traverse */
f_5027(t1,t2,t3,t6,t7);}

/* a5093 in substring-index-ci in k4939 in k1488 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5094,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare_case_insensitive(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* substring-index in k4939 in k1488 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_5065r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_5065r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5065r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5075,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 976  traverse */
f_5027(t1,t2,t3,t6,t7);}

/* a5074 in substring-index in k4939 in k1488 */
static void C_ccall f_5075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5075,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_substring_compare(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2,t3));}

/* traverse in k4939 in k1488 */
static void C_fcall f_5027(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5027,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_word)C_block_size(t3);
t7=(C_word)C_block_size(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5039,a[2]=t7,a[3]=t5,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5039(t11,t1,t4,t7);}

/* loop in traverse in k4939 in k1488 */
static void C_fcall f_5039(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5039,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t3,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 970  test */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,((C_word*)t0)[2]);}}

/* k5050 in loop in traverse in k4939 in k1488 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 972  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5039(t4,((C_word*)t0)[5],t2,t3);}}

/* conc in k4939 in k1488 */
static void C_ccall f_5017(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_5017r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5017r(t0,t1,t2);}}

static void C_ccall f_5017r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5025,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[161]+1),t2);}

/* k5023 in conc in k4939 in k1488 */
static void C_ccall f_5025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ->string in k4939 in k1488 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4972,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* extras.scm: 945  symbol->string */
t3=*((C_word*)lf[162]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_charp(t2))){
/* extras.scm: 946  string */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* extras.scm: 947  ##sys#number->string */
t3=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5009,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 949  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}}}

/* k5007 in ->string in k4939 in k1488 */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5012,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 950  display */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k5010 in k5007 in ->string in k4939 in k1488 */
static void C_ccall f_5012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 951  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pretty-print in k4939 in k1488 */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4943r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4943r(t0,t1,t2,t3);}}

static void C_ccall f_4943r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4947,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t5=t4;
f_4947(2,t5,(C_word)C_slot(t3,C_fix(0)));}
else{
/* extras.scm: 929  current-output-port */
t5=*((C_word*)lf[159]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4945 in pretty-print in k4939 in k1488 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 930  pretty-print-width */
t4=*((C_word*)lf[157]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4952 in k4945 in pretty-print in k4939 in k1488 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 930  ##extras#generic-write */
t3=lf[86];
f_3612(t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1,t2);}

/* a4955 in k4952 in k4945 in pretty-print in k4939 in k1488 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4956,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4960,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 930  display */
t4=*((C_word*)lf[64]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* k4958 in a4955 in k4952 in k4945 in pretty-print in k4939 in k1488 */
static void C_ccall f_4960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k4948 in k4945 in pretty-print in k4939 in k1488 */
static void C_ccall f_4950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##extras#reverse-string-append in k1488 */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4862,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
/* extras.scm: 921  rev-string-append */
t6=((C_word*)t4)[1];
f_4865(t6,t1,t2,C_fix(0));}

/* rev-string-append in ##extras#reverse-string-append in k1488 */
static void C_fcall f_4865(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4865,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_fix((C_word)C_header_size(t4));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
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
t4=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}}

/* k4879 in rev-string-append in ##extras#reverse-string-append in k1488 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4881,2,t0,t1);}
t2=(C_word)C_fix((C_word)C_header_size(t1));
t3=(C_word)C_a_i_minus(&a,2,t2,((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,((C_word*)t0)[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4890,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4890(t8,((C_word*)t0)[2],C_fix(0),t4);}

/* loop in k4879 in rev-string-append in ##extras#reverse-string-append in k1488 */
static void C_fcall f_4890(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4890,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_lessp(t2,((C_word*)t0)[5]))){
t4=(C_word)C_subchar(((C_word*)t0)[4],t2);
t5=(C_word)C_setsubchar(((C_word*)t0)[3],t3,t4);
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

/* ##extras#generic-write in k1488 */
static void C_fcall f_3612(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3612,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3615,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3667,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3673,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3706,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3725,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t9,a[9]=t11,tmp=(C_word)a,a+=10,tmp));
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4206,a[2]=t6,a[3]=t8,a[4]=t7,a[5]=t11,a[6]=t4,a[7]=t3,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4853,a[2]=t2,a[3]=t13,a[4]=t1,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 901  make-string */
t15=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_fix(1),C_make_character(10));}
else{
/* extras.scm: 902  wr */
t14=((C_word*)t11)[1];
f_3725(t14,t1,t2,C_fix(0));}}

/* k4851 in ##extras#generic-write in k1488 */
static void C_ccall f_4853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4857,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 901  pp */
t3=((C_word*)t0)[3];
f_4206(t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4855 in k4851 in ##extras#generic-write in k1488 */
static void C_ccall f_4857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 901  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp in ##extras#generic-write in k1488 */
static void C_fcall f_4206(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[133],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4206,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[8],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4242,a[2]=((C_word*)t0)[8],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
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
t40=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t11,a[6]=t15,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t41=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4361,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t39,a[5]=t13,a[6]=t19,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp));
t42=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t43=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4454,a[2]=((C_word*)t0)[8],a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t44=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[8],a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t45=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t7,a[5]=t9,a[6]=t17,tmp=(C_word)a,a+=7,tmp));
t46=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4688,a[2]=t11,a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t47=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4694,a[2]=t11,a[3]=t21,a[4]=t19,tmp=(C_word)a,a+=5,tmp));
t48=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4700,a[2]=t11,a[3]=t19,tmp=(C_word)a,a+=4,tmp));
t49=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4706,a[2]=t21,a[3]=t13,tmp=(C_word)a,a+=4,tmp));
t50=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4712,a[2]=t21,a[3]=t11,a[4]=t19,tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4718,a[2]=t11,a[3]=t13,tmp=(C_word)a,a+=4,tmp));
t52=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4724,a[2]=t11,a[3]=t21,a[4]=t19,tmp=(C_word)a,a+=5,tmp));
t53=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4746,a[2]=t11,a[3]=t19,tmp=(C_word)a,a+=4,tmp));
t54=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4752,a[2]=t11,a[3]=t21,a[4]=t19,tmp=(C_word)a,a+=5,tmp));
t55=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4761,a[2]=t37,a[3]=t35,a[4]=t33,a[5]=t31,a[6]=t29,a[7]=t27,a[8]=t25,a[9]=t23,tmp=(C_word)a,a+=10,tmp));
/* extras.scm: 898  pr */
t56=((C_word*)t9)[1];
f_4274(t56,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* style in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4761(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4761,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,lf[144]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_4771(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[154]);
if(C_truep(t5)){
t6=t4;
f_4771(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[155]);
t7=t4;
f_4771(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[156])));}}}

/* k4769 in style in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4771(C_word t0,C_word t1){
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
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[145]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[9],lf[146]));
if(C_truep(t3)){
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[8])[1]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[147]);
if(C_truep(t4)){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[148]);
if(C_truep(t5)){
t6=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[149]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[9],lf[150]));
if(C_truep(t7)){
t8=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[5])[1]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[151]);
if(C_truep(t8)){
t9=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[152]);
if(C_truep(t9)){
t10=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[153]);
t11=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}}}}}}}}

/* pp-do in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4752,5,t0,t1,t2,t3,t4);}
/* extras.scm: 876  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4540(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* pp-begin in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4746,5,t0,t1,t2,t3,t4);}
/* extras.scm: 873  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4540(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-let in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4724,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_u_i_car(t5);
t8=t6;
f_4731(t8,(C_word)C_i_symbolp(t7));}
else{
t7=t6;
f_4731(t7,C_SCHEME_FALSE);}}

/* k4729 in pp-let in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4731(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 870  pp-general */
t2=((C_word*)((C_word*)t0)[8])[1];
f_4540(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-and in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4718,5,t0,t1,t2,t3,t4);}
/* extras.scm: 865  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4426(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-case in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4712(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4712,5,t0,t1,t2,t3,t4);}
/* extras.scm: 862  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4540(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-cond in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4706,5,t0,t1,t2,t3,t4);}
/* extras.scm: 859  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4426(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-if in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4700,5,t0,t1,t2,t3,t4);}
/* extras.scm: 856  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4540(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-lambda in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4694,5,t0,t1,t2,t3,t4);}
/* extras.scm: 853  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4540(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-expr-list in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4688,5,t0,t1,t2,t3,t4);}
/* extras.scm: 850  pp-list */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4454(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-general in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4540,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4625,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4584,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t9,a[5]=t4,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t10,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t12=(C_word)C_u_i_car(t2);
t13=(C_word)C_slot(t2,C_fix(1));
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t11,a[6]=t3,a[7]=t13,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4686,a[2]=t12,a[3]=t14,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 841  out */
t16=((C_word*)t0)[2];
f_3706(t16,t15,lf[143],t3);}

/* k4684 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 841  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4636 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[8])?(C_word)C_i_pairp(((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_u_i_car(((C_word*)t0)[7]);
t4=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4653,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4668,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 845  out */
t7=((C_word*)t0)[2];
f_3706(t7,t6,lf[142],t1);}
else{
t3=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(2));
t4=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 847  tail1 */
t5=((C_word*)t0)[5];
f_4543(t5,((C_word*)t0)[4],((C_word*)t0)[7],t3,t1,t4);}}

/* k4666 in k4636 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 845  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4651 in k4636 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4653,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(2));
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 846  tail1 */
t4=((C_word*)t0)[4];
f_4543(t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t1,t3);}

/* tail1 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_4543,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_u_i_car(t2);
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4566,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 825  indent */
t13=((C_word*)t0)[2];
f_4242(t13,t12,t5,t4);}
else{
/* extras.scm: 826  tail2 */
t7=((C_word*)t0)[4];
f_4584(t7,t1,t2,t3,t4,t5);}}

/* k4568 in tail1 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 825  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4274(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4564 in tail1 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 825  tail2 */
t2=((C_word*)t0)[6];
f_4584(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* tail2 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4584(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_4584,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_u_i_car(t2);
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4607,a[2]=t3,a[3]=t8,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4611,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 833  indent */
t13=((C_word*)t0)[2];
f_4242(t13,t12,t5,t4);}
else{
/* extras.scm: 834  tail3 */
t7=((C_word*)t0)[4];
f_4625(t7,t1,t2,t3,t4);}}

/* k4609 in tail2 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 833  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4274(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4605 in tail2 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 833  tail3 */
t2=((C_word*)t0)[5];
f_4625(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tail3 in pp-general in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4625(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4625,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm: 837  pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_4463(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-down in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4463,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t5,tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_4469(t10,t1,t2,t3);}

/* loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4469(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4469,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4492,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_u_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=t8,a[5]=t7,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 808  indent */
t10=((C_word*)t0)[4];
f_4242(t10,t9,((C_word*)t0)[3],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 810  out */
t4=((C_word*)t0)[2];
f_3706(t4,t1,lf[139],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4522,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4534,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4538,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 814  indent */
t8=((C_word*)t0)[4];
f_4242(t8,t7,((C_word*)t0)[3],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4536 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 814  out */
t2=((C_word*)t0)[3];
f_3706(t2,((C_word*)t0)[2],lf[141],t1);}

/* k4532 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 814  indent */
t2=((C_word*)t0)[4];
f_4242(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4524 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4526,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* extras.scm: 813  pr */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4274(t3,((C_word*)t0)[4],((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k4520 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 812  out */
t2=((C_word*)t0)[3];
f_3706(t2,((C_word*)t0)[2],lf[140],t1);}

/* k4498 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 808  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4274(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4490 in loop in pp-down in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 807  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4469(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp-list in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4454(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4454,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4458,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 798  out */
t7=((C_word*)t0)[2];
f_3706(t7,t6,lf[138],t3);}

/* k4456 in pp-list in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 799  pp-down */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4463(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-call in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4426(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4426,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4430,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_u_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4452,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 790  out */
t9=((C_word*)t0)[2];
f_3706(t9,t8,lf[137],t3);}

/* k4450 in pp-call in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 790  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4428 in pp-call in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4430,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 792  pp-down */
t4=((C_word*)((C_word*)t0)[5])[1];
f_4463(t4,((C_word*)t0)[4],t2,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* pp-expr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4361,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4368,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=t2,a[14]=((C_word*)t0)[11],tmp=(C_word)a,a+=15,tmp);
/* extras.scm: 770  read-macro? */
f_3615(t5,t2);}

/* k4366 in pp-expr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4368,2,t0,t1);}
if(C_truep(t1)){
t2=f_3667(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4379,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t4=f_3673(((C_word*)t0)[13]);
/* extras.scm: 772  out */
t5=((C_word*)t0)[7];
f_3706(t5,t3,t4,((C_word*)t0)[6]);}
else{
t2=(C_word)C_u_i_car(((C_word*)t0)[13]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4395,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 777  style */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4761(t4,t3,t2);}
else{
/* extras.scm: 784  pp-list */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4454(t3,((C_word*)t0)[11],((C_word*)t0)[13],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)((C_word*)t0)[9])[1]);}}}

/* k4393 in k4366 in pp-expr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4395,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm: 779  proc */
t2=t1;
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4421,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 780  ##sys#symbol->qualified-string */
t3=*((C_word*)lf[136]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k4419 in k4393 in k4366 in pp-expr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fix((C_word)C_header_size(t1));
if(C_truep((C_word)C_i_greaterp(t2,C_fix(5)))){
/* extras.scm: 782  pp-general */
t3=((C_word*)((C_word*)t0)[8])[1];
f_4540(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm: 783  pp-call */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4426(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k4377 in k4366 in pp-expr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 771  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4274(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* pr in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_4274,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_pairp(t2);
t7=(C_truep(t6)?t6:(C_word)C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t5,a[7]=t2,a[8]=t9,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t11=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[3],t3);
t12=(C_word)C_a_i_minus(&a,2,t11,t4);
t13=(C_word)C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm: 756  max */
t14=*((C_word*)lf[135]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm: 767  wr */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3725(t8,t1,t2,t3);}}

/* k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4287,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4325,a[2]=t3,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 757  ##extras#generic-write */
t6=lf[86];
f_3612(t6,t4,((C_word*)t0)[7],((C_word*)t0)[2],C_SCHEME_FALSE,t5);}

/* a4324 in k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4325,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=(C_word)C_fix((C_word)C_header_size(t2));
t6=(C_word)C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)));}

/* k4288 in k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4290,2,t0,t1);}
if(C_truep((C_word)C_i_greaterp(((C_word*)((C_word*)t0)[11])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 763  ##extras#reverse-string-append */
t3=*((C_word*)lf[133]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
/* extras.scm: 765  pp-pair */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[9],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 766  vector->list */
t3=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}}

/* k4317 in k4288 in k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 766  out */
t3=((C_word*)t0)[3];
f_3706(t3,t2,lf[134],((C_word*)t0)[2]);}

/* k4321 in k4317 in k4288 in k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 766  pp-list */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4454(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k4301 in k4288 in k4285 in pr in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 763  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* indent in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4242(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4242,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4265,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 750  make-string */
t6=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(1),C_make_character(10));}
else{
t4=(C_word)C_a_i_minus(&a,2,t2,t3);
/* extras.scm: 751  spaces */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4209(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4263 in indent in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 750  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4256 in indent in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 750  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4209(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spaces in pp in ##extras#generic-write in k1488 */
static void C_fcall f_4209(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4209,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(0)))){
if(C_truep((C_word)C_i_greaterp(t2,C_fix(7)))){
t4=(C_word)C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4233,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 743  out */
t6=((C_word*)t0)[2];
f_3706(t6,t5,lf[131],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4240,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 744  ##sys#substring */
t5=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[132],C_fix(0),t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4238 in spaces in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 744  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4231 in spaces in pp in ##extras#generic-write in k1488 */
static void C_ccall f_4233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 743  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4209(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr in ##extras#generic-write in k1488 */
static void C_fcall f_3725(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3725,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
/* extras.scm: 682  wr-expr */
t6=t5;
f_3728(t6,t1,t2,t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 683  wr-lst */
t6=t4;
f_3755(t6,t1,t2,t3);}
else{
if(C_truep((C_word)C_eofp(t2))){
/* extras.scm: 684  out */
t6=((C_word*)t0)[8];
f_3706(t6,t1,lf[101],t3);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 685  vector->list */
t7=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep((C_word)C_booleanp(t2))){
t6=(C_truep(t2)?lf[104]:lf[105]);
/* extras.scm: 686  out */
t7=((C_word*)t0)[8];
f_3706(t7,t1,t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 687  ##sys#number? */
t7=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}}}}}

/* k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3904(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3904,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 687  ##sys#number->string */
t3=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3920,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 689  open-output-string */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 692  ##sys#procedure->string */
t3=*((C_word*)lf[108]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
/* extras.scm: 694  out */
t2=((C_word*)t0)[8];
f_3706(t2,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3962,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 695  out */
t3=((C_word*)t0)[8];
f_3706(t3,t2,lf[111],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 709  make-string */
t3=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[5]);}
else{
t2=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 711  out */
t4=((C_word*)t0)[8];
f_3706(t4,t3,lf[116],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_eofp(((C_word*)t0)[5]))){
/* extras.scm: 722  out */
t2=((C_word*)t0)[8];
f_3706(t2,((C_word*)t0)[7],lf[117],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm: 723  out */
t2=((C_word*)t0)[8];
f_3706(t2,((C_word*)t0)[7],lf[118],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 724  ##sys#pointer->string */
t3=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4145,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 726  open-output-string */
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4161,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 729  port? */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}}}}}}}}}

/* k4159 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
/* extras.scm: 729  string-append */
t4=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[122],t3,lf[123]);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 731  out */
t3=((C_word*)t0)[5];
f_3706(t3,t2,lf[126],((C_word*)t0)[3]);}
else{
t2=(C_word)C_slot(lf[127],C_fix(0));
t3=(C_word)C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
/* extras.scm: 735  out */
t4=((C_word*)t0)[5];
f_3706(t4,((C_word*)t0)[4],lf[128],((C_word*)t0)[3]);}
else{
/* extras.scm: 736  out */
t4=((C_word*)t0)[5];
f_3706(t4,((C_word*)t0)[4],lf[129],((C_word*)t0)[3]);}}}}

/* k4176 in k4159 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4188,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 732  ##sys#lambda-info->string */
t4=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4186 in k4176 in k4159 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 732  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4179 in k4176 in k4159 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 733  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],lf[124],((C_word*)t0)[2]);}

/* k4166 in k4159 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 729  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4143 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4148,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 727  ##sys#user-print-hook */
t3=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k4146 in k4143 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4155,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 728  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4153 in k4146 in k4143 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 728  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4134 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 724  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 712  char-name */
t3=*((C_word*)lf[115]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4055,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(1));
/* extras.scm: 714  out */
t3=((C_word*)t0)[6];
f_3706(t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 716  out */
t3=((C_word*)t0)[6];
f_3706(t3,t2,lf[112],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(65535));
t4=(C_truep(t3)?lf[113]:lf[114]);
/* extras.scm: 719  out */
t5=((C_word*)t0)[6];
f_3706(t5,t2,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 721  make-string */
t3=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[2]);}}}}

/* k4109 in k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 721  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4088 in k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 720  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k4095 in k4088 in k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 720  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4072 in k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 717  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k4079 in k4072 in k4053 in k4050 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 717  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4044 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 709  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3962,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3964(t5,((C_word*)t0)[2],C_fix(0),C_fix(0),t1);}

/* loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_fcall f_3964(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3964,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3971,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[4]));
t7=t5;
f_3971(t7,(C_word)C_i_lessp(t3,t6));}
else{
t6=t5;
f_3971(t6,C_SCHEME_FALSE);}}

/* k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_fcall f_3971(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3971,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_subchar(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_eqp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:(C_word)C_eqp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3994,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3998,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4002,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 703  ##sys#substring */
t9=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}
else{
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
/* extras.scm: 705  loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3964(t6,((C_word*)t0)[5],((C_word*)t0)[2],t5,((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4019,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 707  ##sys#substring */
t4=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k4021 in k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 707  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4017 in k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 706  out */
t2=((C_word*)t0)[3];
f_3706(t2,((C_word*)t0)[2],lf[110],t1);}

/* k4000 in k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 703  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3996 in k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 702  out */
t2=((C_word*)t0)[3];
f_3706(t2,((C_word*)t0)[2],lf[109],t1);}

/* k3992 in k3969 in loop in k3960 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 700  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3964(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3941 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 692  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3918 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3923,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 690  ##sys#print */
t3=*((C_word*)lf[107]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k3921 in k3918 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3930,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 691  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3928 in k3921 in k3918 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 691  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3909 in k3902 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 687  out */
t2=((C_word*)t0)[4];
f_3706(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3879 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3885,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 685  out */
t3=((C_word*)t0)[3];
f_3706(t3,t2,lf[102],((C_word*)t0)[2]);}

/* k3883 in k3879 in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 685  wr-lst */
t2=((C_word*)t0)[4];
f_3755(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-expr in wr in ##extras#generic-write in k1488 */
static void C_fcall f_3728(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3728,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3735,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 667  read-macro? */
f_3615(t4,t2);}

/* k3733 in wr-expr in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3735,2,t0,t1);}
if(C_truep(t1)){
t2=f_3667(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3746,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=f_3673(((C_word*)t0)[8]);
/* extras.scm: 668  out */
t5=((C_word*)t0)[4];
f_3706(t5,t3,t4,((C_word*)t0)[3]);}
else{
/* extras.scm: 669  wr-lst */
t2=((C_word*)t0)[2];
f_3755(t2,((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* k3744 in k3733 in wr-expr in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 668  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-lst in wr in ##extras#generic-write in k1488 */
static void C_fcall f_3755(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3755,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3773,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=(C_word)C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3838,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 674  out */
t8=((C_word*)t0)[2];
f_3706(t8,t7,lf[99],t3);}
else{
t6=t5;
f_3773(2,t6,C_SCHEME_FALSE);}}
else{
/* extras.scm: 680  out */
t4=((C_word*)t0)[2];
f_3706(t4,t1,lf[100],t3);}}

/* k3836 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 674  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3773,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3775(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_fcall f_3775(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3775,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3799,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_u_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3807,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 677  out */
t9=((C_word*)t0)[2];
f_3706(t9,t8,lf[95],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 678  out */
t5=((C_word*)t0)[2];
f_3706(t5,t1,lf[96],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3823,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3827,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 679  out */
t7=((C_word*)t0)[2];
f_3706(t7,t6,lf[98],t3);}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}}

/* k3825 in loop in k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 679  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3821 in loop in k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 679  out */
t2=((C_word*)t0)[3];
f_3706(t2,((C_word*)t0)[2],lf[97],t1);}

/* k3805 in loop in k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 677  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3725(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3797 in loop in k3771 in wr-lst in wr in ##extras#generic-write in k1488 */
static void C_ccall f_3799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 677  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3775(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* out in ##extras#generic-write in k1488 */
static void C_fcall f_3706(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3706,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3716,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 662  output */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k3714 in out in ##extras#generic-write in k1488 */
static void C_ccall f_3716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3716,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fix((C_word)C_header_size(((C_word*)t0)[4]));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_plus(&a,2,((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* read-macro-prefix in ##extras#generic-write in k1488 */
static C_word C_fcall f_3673(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t2=(C_word)C_u_i_car(t1);
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_eqp(t2,lf[87]);
if(C_truep(t4)){
return(lf[91]);}
else{
t5=(C_word)C_eqp(t2,lf[88]);
if(C_truep(t5)){
return(lf[92]);}
else{
t6=(C_word)C_eqp(t2,lf[89]);
if(C_truep(t6)){
return(lf[93]);}
else{
t7=(C_word)C_eqp(t2,lf[90]);
return((C_truep(t7)?lf[94]:C_SCHEME_UNDEFINED));}}}}

/* read-macro-body in ##extras#generic-write in k1488 */
static C_word C_fcall f_3667(C_word t1){
C_word tmp;
C_word t2;
return((C_word)C_u_i_cadr(t1));}

/* read-macro? in ##extras#generic-write in k1488 */
static void C_fcall f_3615(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3615,NULL,2,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_eqp(t3,lf[87]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_3647(t7,t5);}
else{
t7=(C_word)C_eqp(t3,lf[88]);
if(C_truep(t7)){
t8=t6;
f_3647(t8,t7);}
else{
t8=(C_word)C_eqp(t3,lf[89]);
t9=t6;
f_3647(t9,(C_truep(t8)?t8:(C_word)C_eqp(t3,lf[90])));}}}

/* k3645 in read-macro? in ##extras#generic-write in k1488 */
static void C_fcall f_3647(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* make-output-port in k1488 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+29)){
C_save_and_reclaim((void*)tr4rv,(void*)f_3554r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_3554r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3554r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(29);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3597,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t11=(C_word)C_a_i_vector(&a,9,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,t8,t9,t10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t12=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3567,a[2]=t1,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 624  ##sys#make-port */
t14=*((C_word*)lf[80]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t13,C_SCHEME_FALSE,t11,lf[85],lf[82]);}

/* k3565 in make-output-port in k1488 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(9),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3596 in make-output-port in k1488 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3597,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* extras.scm: 619  flush */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a3587 in make-output-port in k1488 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3588,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3592,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 616  close */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3590 in a3587 in make-output-port in k1488 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a3581 in make-output-port in k1488 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3582,4,t0,t1,t2,t3);}
/* extras.scm: 614  write */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a3571 in make-output-port in k1488 */
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3572,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3580,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 612  string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3578 in a3571 in make-output-port in k1488 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 612  write */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* make-input-port in k1488 */
static void C_ccall f_3411(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr5r,(void*)f_3411r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3411r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3411r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(14);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3413,a[2]=t3,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3489,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3494,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-peek433460 */
t10=t9;
f_3494(t10,t1);}
else{
t10=(C_word)C_u_i_car(t5);
t11=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-read-string434458 */
t12=t8;
f_3489(t12,t1,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
if(C_truep((C_word)C_i_nullp(t13))){
/* def-read-line435455 */
t14=t7;
f_3484(t14,t1,t10,t12);}
else{
t14=(C_word)C_u_i_car(t13);
t15=(C_word)C_slot(t13,C_fix(1));
/* body431437 */
t16=t6;
f_3413(t16,t1,t10,t12,t14);}}}}

/* def-peek433 in make-input-port in k1488 */
static void C_fcall f_3494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3494,NULL,2,t0,t1);}
/* def-read-string434458 */
t2=((C_word*)t0)[2];
f_3489(t2,t1,C_SCHEME_FALSE);}

/* def-read-string434 in make-input-port in k1488 */
static void C_fcall f_3489(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3489,NULL,3,t0,t1,t2);}
/* def-read-line435455 */
t3=((C_word*)t0)[2];
f_3484(t3,t1,t2,C_SCHEME_FALSE);}

/* def-read-line435 in make-input-port in k1488 */
static void C_fcall f_3484(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3484,NULL,4,t0,t1,t2,t3);}
/* body431437 */
t4=((C_word*)t0)[2];
f_3413(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body431 in make-input-port in k1488 */
static void C_fcall f_3413(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3413,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3470,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3479,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_a_i_vector(&a,9,t5,t6,C_SCHEME_FALSE,C_SCHEME_FALSE,t7,C_SCHEME_FALSE,t8,t3,t4);
t10=(C_word)C_a_i_vector(&a,1,C_SCHEME_FALSE);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3423,a[2]=t1,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 599  ##sys#make-port */
t12=*((C_word*)lf[80]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t11,C_SCHEME_TRUE,t9,lf[81],lf[82]);}

/* k3421 in body431 in make-input-port in k1488 */
static void C_ccall f_3423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(9),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3478 in body431 in make-input-port in k1488 */
static void C_ccall f_3479(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3479,3,t0,t1,t2);}
/* extras.scm: 595  ready? */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3469 in body431 in make-input-port in k1488 */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3470,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3474,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 591  close */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3472 in a3469 in body431 in make-input-port in k1488 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(8),C_SCHEME_TRUE));}

/* a3448 in body431 in make-input-port in k1488 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3449,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* extras.scm: 582  peek */
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3465,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 585  read */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

/* k3463 in a3448 in body431 in make-input-port in k1488 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(10),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a3427 in body431 in make-input-port in k1488 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3428,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(10));
if(C_truep(((C_word*)t0)[3])){
/* extras.scm: 575  read */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
if(C_truep(t3)){
t4=(C_word)C_i_set_i_slot(t2,C_fix(10),C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* extras.scm: 579  read */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}}}

/* with-output-to-string in k1488 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3377,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3381,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 558  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3379 in with-output-to-string in k1488 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3386,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3403,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3402 in k3379 in with-output-to-string in k1488 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3403,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[66]+1));
t3=C_mutate((C_word*)lf[66]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* a3393 in k3379 in with-output-to-string in k1488 */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3398,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 559  thunk */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3396 in a3393 in k3379 in with-output-to-string in k1488 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 560  get-output-string */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[66]+1));}

/* a3385 in k3379 in with-output-to-string in k1488 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3386,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[66]+1));
t3=C_mutate((C_word*)lf[66]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* with-input-from-string in k1488 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3346,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3350,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 551  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3348 in with-input-from-string in k1488 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3355,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3369,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a3368 in k3348 in with-input-from-string in k1488 */
static void C_ccall f_3369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3369,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[7]+1));
t3=C_mutate((C_word*)lf[7]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* a3362 in k3348 in with-input-from-string in k1488 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3363,2,t0,t1);}
/* extras.scm: 552  thunk */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* a3354 in k3348 in with-input-from-string in k1488 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[7]+1));
t3=C_mutate((C_word*)lf[7]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* call-with-output-string in k1488 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3334,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3338,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 544  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3336 in call-with-output-string in k1488 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3341,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 545  proc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k3339 in k3336 in call-with-output-string in k1488 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 546  get-output-string */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-input-string in k1488 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3325,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 537  open-input-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3327 in call-with-input-string in k1488 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 538  proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* with-error-output-to-port in k1488 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3297,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3303,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3317,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 528  ##sys#dynamic-wind */
t11=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a3316 in with-error-output-to-port in k1488 */
static void C_ccall f_3317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3317,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[73]+1));
t3=C_mutate((C_word*)lf[73]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* a3310 in with-error-output-to-port in k1488 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
/* extras.scm: 529  thunk */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* a3302 in with-error-output-to-port in k1488 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[73]+1));
t3=C_mutate((C_word*)lf[73]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* with-output-to-port in k1488 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3269,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3275,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3289,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 523  ##sys#dynamic-wind */
t11=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a3288 in with-output-to-port in k1488 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3289,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[66]+1));
t3=C_mutate((C_word*)lf[66]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* a3282 in with-output-to-port in k1488 */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3283,2,t0,t1);}
/* extras.scm: 524  thunk */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* a3274 in with-output-to-port in k1488 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3275,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[66]+1));
t3=C_mutate((C_word*)lf[66]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* with-input-from-port in k1488 */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3241,4,t0,t1,t2,t3);}
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3247,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3255,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 518  ##sys#dynamic-wind */
t11=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a3260 in with-input-from-port in k1488 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[7]+1));
t3=C_mutate((C_word*)lf[7]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* a3254 in with-input-from-port in k1488 */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3255,2,t0,t1);}
/* extras.scm: 519  thunk */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* a3246 in with-input-from-port in k1488 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[7]+1));
t3=C_mutate((C_word*)lf[7]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[20]+1));}

/* write-line in k1488 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3226r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3226r(t0,t1,t2,t3);}}

static void C_ccall f_3226r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[66]+1):(C_word)C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3233,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 510  display */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t4);}

/* k3231 in write-line in k1488 */
static void C_ccall f_3233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 511  newline */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* write-string in k1488 */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3149r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3149r(t0,t1,t2,t3);}}

static void C_ccall f_3149r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* extras.scm: 492  def-n341 */
t7=t6;
f_3181(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* extras.scm: 492  def-port342 */
t9=t5;
f_3176(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* extras.scm: 492  body339 */
t11=t4;
f_3151(t11,t1,t7,t9);}}}

/* def-n341 in write-string in k1488 */
static void C_fcall f_3181(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3181,NULL,2,t0,t1);}
/* extras.scm: 492  def-port342 */
t2=((C_word*)t0)[2];
f_3176(t2,t1,C_SCHEME_FALSE);}

/* def-port342 in write-string in k1488 */
static void C_fcall f_3176(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3176,NULL,3,t0,t1,t2);}
/* extras.scm: 492  body339 */
t3=((C_word*)t0)[2];
f_3151(t3,t1,t2,*((C_word*)lf[66]+1));}

/* body339 in write-string in k1488 */
static void C_fcall f_3151(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3151,NULL,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?C_SCHEME_UNDEFINED:C_SCHEME_UNDEFINED);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3162,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3165,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t7=(C_word)C_block_size(((C_word*)t0)[2]);
t8=t6;
f_3165(t8,(C_word)C_fixnum_lessp(t2,t7));}
else{
t7=t6;
f_3165(t7,C_SCHEME_FALSE);}}

/* k3163 in body339 in write-string in k1488 */
static void C_fcall f_3165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 497  ##sys#substring */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_3162(2,t2,((C_word*)t0)[3]);}}

/* k3160 in body339 in write-string in k1488 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 495  display */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* read-token in k1488 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3090r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3090r(t0,t1,t2,t3);}}

static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?*((C_word*)lf[7]+1):(C_word)C_slot(t3,C_fix(0)));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3097,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 479  open-output-string */
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k3095 in read-token in k1488 */
static void C_ccall f_3097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3097,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3102(t5,((C_word*)t0)[2]);}

/* loop in k3095 in read-token in k1488 */
static void C_fcall f_3102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3102,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 481  ##sys#peek-char-0 */
t3=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k3104 in loop in k3095 in read-token in k1488 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3112,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_eofp(t1))){
t3=t2;
f_3112(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm: 482  pred */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* k3110 in k3104 in loop in k3095 in read-token in k1488 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 484  ##sys#read-char-0 */
t4=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
/* extras.scm: 486  get-output-string */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k3120 in k3110 in k3104 in loop in k3095 in read-token in k1488 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 484  ##sys#write-char-0 */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3113 in k3110 in k3104 in loop in k3095 in read-token in k1488 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 485  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3102(t2,((C_word*)t0)[2]);}

/* read-string in k1488 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_2972r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2972r(t0,t1,t2);}}

static void C_ccall f_2972r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3040,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3045,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-n299317 */
t6=t5;
f_3045(t6,t1);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t7))){
/* def-p300315 */
t8=t4;
f_3040(t8,t1,t6);}
else{
t8=(C_word)C_u_i_car(t7);
t9=(C_word)C_slot(t7,C_fix(1));
/* body297302 */
t10=t3;
f_2974(t10,t1,t6,t8);}}}

/* def-n299 in read-string in k1488 */
static void C_fcall f_3045(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3045,NULL,2,t0,t1);}
/* def-p300315 */
t2=((C_word*)t0)[2];
f_3040(t2,t1,C_SCHEME_FALSE);}

/* def-p300 in read-string in k1488 */
static void C_fcall f_3040(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3040,NULL,3,t0,t1,t2);}
/* body297302 */
t3=((C_word*)t0)[2];
f_2974(t3,t1,t2,*((C_word*)lf[7]+1));}

/* body297 in read-string in k1488 */
static void C_fcall f_2974(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2974,NULL,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2981,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 457  ##sys#make-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2996,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 463  open-output-string */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2994 in body297 in read-string in k1488 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3001(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k2994 in body297 in read-string in k1488 */
static void C_fcall f_3001(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3001,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
/* extras.scm: 465  get-output-string */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[4]);}
else{
t5=t3;
f_3005(2,t5,C_SCHEME_FALSE);}}

/* k3003 in loop in k2994 in body297 in read-string in k1488 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3005,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 466  ##sys#read-char-0 */
t3=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3009 in k3003 in loop in k2994 in body297 in read-string in k1488 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3011,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* extras.scm: 468  get-output-string */
t2=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 470  ##sys#write-char */
t3=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}}

/* k3021 in k3009 in k3003 in loop in k2994 in body297 in read-string in k1488 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
/* extras.scm: 471  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3001(t3,((C_word*)t0)[2],t2);}

/* k2979 in body297 in read-string in k1488 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2984,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 458  ##sys#read-string! */
t3=*((C_word*)lf[55]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[2],C_fix(0));}

/* k2982 in k2979 in body297 in read-string in k1488 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
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
t3=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* read-string! in k1488 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2890r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2890r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2890r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(12);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2892,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2927,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port277286 */
t9=t8;
f_2927(t9,t1);}
else{
t9=(C_word)C_u_i_car(t4);
t10=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start278284 */
t11=t7;
f_2922(t11,t1,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
/* body275280 */
t13=t6;
f_2892(t13,t1,t9,t11);}}}

/* def-port277 in read-string! in k1488 */
static void C_fcall f_2927(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2927,NULL,2,t0,t1);}
/* def-start278284 */
t2=((C_word*)t0)[2];
f_2922(t2,t1,*((C_word*)lf[7]+1));}

/* def-start278 in read-string! in k1488 */
static void C_fcall f_2922(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2922,NULL,3,t0,t1,t2);}
/* body275280 */
t3=((C_word*)t0)[2];
f_2892(t3,t1,t2,C_fix(0));}

/* body275 in read-string! in k1488 */
static void C_fcall f_2892(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2892,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2896,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(C_word)C_u_fixnum_plus(t3,((C_word*)((C_word*)t0)[3])[1]);
t6=(C_word)C_block_size(((C_word*)t0)[2]);
if(C_truep((C_word)C_fixnum_greaterp(t5,t6))){
t7=(C_word)C_block_size(((C_word*)t0)[2]);
t8=(C_word)C_u_fixnum_difference(t7,t3);
t9=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t10=t4;
f_2896(t10,t9);}
else{
t7=t4;
f_2896(t7,C_SCHEME_UNDEFINED);}}
else{
t5=t4;
f_2896(t5,C_SCHEME_UNDEFINED);}}

/* k2894 in body275 in read-string! in k1488 */
static void C_fcall f_2896(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 449  ##sys#read-string! */
t2=*((C_word*)lf[55]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#read-string! in k1488 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2806,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2810,a[2]=t2,a[3]=t6,a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_slot(t4,C_fix(6)))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=t7,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 424  ##sys#read-char-0 */
t9=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t4);}
else{
t8=t7;
f_2810(t8,C_SCHEME_UNDEFINED);}}

/* k2882 in ##sys#read-string! in k1488 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_2810(t5,t4);}

/* k2808 in ##sys#read-string! in k1488 */
static void C_fcall f_2810(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2810,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t3=(C_word)C_slot(t2,C_fix(7));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2818(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}

/* loop in k2808 in ##sys#read-string! in k1488 */
static void C_fcall f_2818(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2818,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
/* extras.scm: 429  rdstring */
t6=((C_word*)t0)[4];
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,((C_word*)t0)[3],t3,((C_word*)t0)[2],t2);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 430  ##sys#read-char-0 */
t7=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}}

/* k2865 in loop in k2808 in ##sys#read-string! in k1488 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[4];
f_2822(2,t2,C_fix(0));}
else{
t2=(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[4];
f_2822(2,t3,C_fix(1));}}

/* k2820 in loop in k2808 in ##sys#read-string! in k1488 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
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
t5=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],t1);
t6=(C_truep(((C_word*)t0)[4])?(C_word)C_u_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],t1);
/* extras.scm: 438  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2818(t8,((C_word*)t0)[6],t5,t6,t7);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u_fixnum_plus(t1,((C_word*)t0)[5]));}}}

/* read-lines in k1488 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2719r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2719r(t0,t1,t2);}}

static void C_ccall f_2719r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(5);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_slot(t2,C_fix(0)):*((C_word*)lf[7]+1));
t5=(C_word)C_i_pairp(t2);
t6=(C_truep(t5)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=(C_word)C_i_pairp(t6);
t8=(C_truep(t7)?(C_word)C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2731,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(t4))){
/* extras.scm: 417  call-with-input-file */
t10=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,t4,t9);}
else{
/* extras.scm: 420  doread */
t10=t9;
f_2731(3,t10,t1,t4);}}

/* doread in read-lines in k1488 */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2731,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:C_fix(1000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2741,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2741(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* loop in doread in read-lines in k1488 */
static void C_fcall f_2741(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2741,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm: 411  reverse */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 412  read-line */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k2752 in loop in doread in read-lines in k1488 */
static void C_ccall f_2754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2754,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* extras.scm: 414  reverse */
t2=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 415  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2741(t4,((C_word*)t0)[5],t2,t3);}}

/* read-line in k1488 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2582r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2582r(t0,t1,t2);}}

static void C_ccall f_2582r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_u_i_car(t2):*((C_word*)lf[7]+1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_i_pairp(t6);
t8=t5;
f_2592(t8,(C_truep(t7)?(C_word)C_u_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_2592(t6,C_SCHEME_FALSE);}}

/* k2590 in read-line in k1488 */
static void C_fcall f_2592(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2592,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(8));
if(C_truep(t2)){
/* extras.scm: 372  rl */
t3=t2;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[4],t1);}
else{
t3=(C_truep(t1)?t1:C_fix(256));
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 375  ##sys#make-string */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t5)[1]);}}

/* k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2612(t7,((C_word*)t0)[2],C_fix(0));}

/* loop in k2605 in k2590 in read-line in k1488 */
static void C_fcall f_2612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2612,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[7])?(C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm: 378  ##sys#substring */
t4=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)((C_word*)t0)[6])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 379  ##sys#read-char-0 */
t5=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=(C_word)C_eqp(((C_word*)t0)[8],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* extras.scm: 383  ##sys#substring */
t3=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);}}
else{
switch(t1){
case C_make_character(10):
/* extras.scm: 385  ##sys#substring */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);
case C_make_character(13):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 387  peek-char */
t3=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);
default:
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[8],((C_word*)((C_word*)t0)[3])[1]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2690,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2698,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 394  make-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;
f_2676(t3,C_SCHEME_UNDEFINED);}}}}

/* k2696 in k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 394  ##sys#string-append */
t2=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2688 in k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_2676(t5,t4);}

/* k2674 in k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_fcall f_2676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 397  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2612(t4,((C_word*)t0)[2],t3);}

/* k2656 in k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2658,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_make_character(10));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 389  ##sys#read-char-0 */
t4=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* extras.scm: 391  ##sys#substring */
t3=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[3]);}}

/* k2665 in k2656 in k2623 in loop in k2605 in k2590 in read-line in k1488 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 390  ##sys#substring */
t2=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[2]);}

/* randomize in k1488 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2542r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2542r(t0,t1,t2);}}

static void C_ccall f_2542r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
t3=(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))?(C_word)C_fudge(C_fix(2)):(C_word)C_slot(t2,C_fix(0)));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_randomize(t3));}

/* random in k1488 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2533,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_fix(0):(C_word)C_random_fixnum(t2)));}

/* rassoc in k1488 */
static void C_ccall f_2489(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2489r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2489r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2489r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):*((C_word*)lf[38]+1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2498,a[2]=t2,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2498(t10,t1,t3);}

/* loop in rassoc in k1488 */
static void C_fcall f_2498(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2498,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
/* extras.scm: 334  tst */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2512 in loop in rassoc in k1488 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
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
f_2498(t3,((C_word*)t0)[5],t2);}}

/* alist-ref in k1488 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2368r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2368r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2368r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2439,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-cmp178194 */
t8=t7;
f_2444(t8,t1);}
else{
t8=(C_word)C_u_i_car(t4);
t9=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-default179192 */
t10=t6;
f_2439(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
/* body176181 */
t12=t5;
f_2370(t12,t1,t8,t10);}}}

/* def-cmp178 in alist-ref in k1488 */
static void C_fcall f_2444(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2444,NULL,2,t0,t1);}
/* def-default179192 */
t2=((C_word*)t0)[2];
f_2439(t2,t1,*((C_word*)lf[38]+1));}

/* def-default179 in alist-ref in k1488 */
static void C_fcall f_2439(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2439,NULL,3,t0,t1,t2);}
/* body176181 */
t3=((C_word*)t0)[2];
f_2370(t3,t1,t2,C_SCHEME_FALSE);}

/* body176 in alist-ref in k1488 */
static void C_fcall f_2370(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2370,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(*((C_word*)lf[39]+1),t2);
if(C_truep(t5)){
t6=t4;
f_2374(t6,*((C_word*)lf[40]+1));}
else{
t6=(C_word)C_eqp(*((C_word*)lf[38]+1),t2);
if(C_truep(t6)){
t7=t4;
f_2374(t7,*((C_word*)lf[41]+1));}
else{
t7=(C_word)C_eqp(*((C_word*)lf[42]+1),t2);
t8=t4;
f_2374(t8,(C_truep(t7)?*((C_word*)lf[43]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2399,a[2]=t2,tmp=(C_word)a,a+=3,tmp)));}}}

/* f_2399 in body176 in alist-ref in k1488 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2399,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2405,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2405(t7,t1,t3);}

/* loop */
static void C_fcall f_2405(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2405,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* extras.scm: 319  cmp */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2421(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2419 in loop */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
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
f_2405(t3,((C_word*)t0)[5],t2);}}

/* k2372 in body176 in alist-ref in k1488 */
static void C_fcall f_2374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2374,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 322  aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2375 in k2372 in body176 in alist-ref in k1488 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_slot(t1,C_fix(1)):((C_word*)t0)[2]));}

/* alist-update! in k1488 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr5rv,(void*)f_2282r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_2282r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2282r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t6=(C_word)C_notvemptyp(t5);
t7=(C_truep(t6)?(C_word)C_slot(t5,C_fix(0)):*((C_word*)lf[38]+1));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2289,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_eqp(*((C_word*)lf[39]+1),t7);
if(C_truep(t9)){
t10=t8;
f_2289(t10,*((C_word*)lf[40]+1));}
else{
t10=(C_word)C_eqp(*((C_word*)lf[38]+1),t7);
if(C_truep(t10)){
t11=t8;
f_2289(t11,*((C_word*)lf[41]+1));}
else{
t11=(C_word)C_eqp(*((C_word*)lf[42]+1),t7);
t12=t8;
f_2289(t12,(C_truep(t11)?*((C_word*)lf[43]+1):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2321,a[2]=t7,tmp=(C_word)a,a+=3,tmp)));}}}

/* f_2321 in alist-update! in k1488 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2321,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2327,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2327(t7,t1,t3);}

/* loop */
static void C_fcall f_2327(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2327,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* extras.scm: 300  cmp */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t5=t4;
f_2343(2,t5,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2341 in loop */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
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
f_2327(t3,((C_word*)t0)[5],t2);}}

/* k2287 in alist-update! in k1488 */
static void C_fcall f_2289(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2289,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 303  aq */
t3=t1;
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2290 in k2287 in alist-update! in k1488 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2292,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_setslot(t1,C_fix(1),((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[3]));}}

/* shuffle in k1488 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2244,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2252,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2272,tmp=(C_word)a,a+=2,tmp);
/* map */
t6=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a2271 in shuffle in k1488 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2272,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2280,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 284  random */
t4=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix(10000));}

/* k2278 in a2271 in shuffle in k1488 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2254 in shuffle in k1488 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2258,tmp=(C_word)a,a+=2,tmp);
/* extras.scm: 284  sort! */
t3=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2257 in k2254 in shuffle in k1488 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2258,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_u_i_car(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_lessp(t4,t5));}

/* k2250 in shuffle in k1488 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[34]+1),t1);}

/* compress in k1488 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2181,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2187,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2187(t7,t1,t2,t3);}

/* loop in compress in k1488 */
static void C_fcall f_2187(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2187,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_slot(t2,C_fix(0)))){
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2223,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
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
goto loop;}}}

/* k2221 in loop in compress in k1488 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* join in k1488 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2132r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2132r(t0,t1,t2,t3);}}

static void C_ccall f_2132r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2141,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2141(t9,t1,t2);}

/* loop in join in k1488 */
static void C_fcall f_2141(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2141,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 265  loop */
t7=t5;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}}

/* k2171 in loop in join in k1488 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 265  ##sys#append */
t2=*((C_word*)lf[30]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop in k1488 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2059,4,t0,t1,t2,t3);}
t4=(C_word)C_i_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2068,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2068(t8,t1,t2,t4);}

/* loop in chop in k1488 */
static void C_fcall f_2068(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2068,NULL,4,t0,t1,t2,t3);}
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
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2089,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2089(t7,t1,C_SCHEME_END_OF_LIST,t2,((C_word*)t0)[4]);}}}

/* do130 in loop in chop in k1488 */
static void C_fcall f_2089(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_2089,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2103,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 251  reverse */
t7=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_slot(t3,C_fix(1));
t9=(C_word)C_u_fixnum_difference(t4,C_fix(1));
t12=t1;
t13=t7;
t14=t8;
t15=t9;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}

/* k2101 in do130 in loop in chop in k1488 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2107,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* extras.scm: 251  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2068(t4,t2,((C_word*)t0)[2],t3);}

/* k2105 in k2101 in do130 in loop in chop in k1488 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* flatten in k1488 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2018r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2018r(t0,t1,t2);}}

static void C_ccall f_2018r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2024(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in flatten in k1488 */
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2024,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_listp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2050,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 232  loop */
t9=t6;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2057,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 233  loop */
t9=t6;
t10=t5;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* k2055 in loop in flatten in k1488 */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2057,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2048 in loop in flatten in k1488 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 232  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2024(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* butlast in k1488 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1989,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1995,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1995(t6,t1,t2);}

/* loop in butlast in k1488 */
static void C_fcall f_1995(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1995,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2016,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 222  loop */
t8=t6;
t9=t3;
t1=t8;
t2=t9;
goto loop;}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k2014 in loop in butlast in k1488 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2016,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* intersperse in k1488 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1956,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1962(t7,t1,t2);}

/* loop in intersperse in k1488 */
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1962,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1987,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 215  loop */
t7=t5;
t8=t3;
t1=t7;
t2=t8;
goto loop;}}}

/* k1985 in loop in intersperse in k1488 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1987,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* tail? in k1488 */
static void C_ccall f_1931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1931,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_1940(t5,t3));}}

/* loop in tail? in k1488 */
static C_word C_fcall f_1940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
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

/* atom? in k1488 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1928,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* any? in k1488 */
static void C_ccall f_1925(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1925,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* each in k1488 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1869r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1869r(t0,t1,t2);}}

static void C_ccall f_1869r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1877,tmp=(C_word)a,a+=2,tmp));}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?(C_word)C_slot(t2,C_fix(0)):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=t2,tmp=(C_word)a,a+=3,tmp)));}}

/* f_1891 in each in k1488 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1891r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1891r(t0,t1,t2);}}

static void C_ccall f_1891r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1897,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1897(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1897(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1897,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t4))){
C_apply(4,0,t1,t3,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1916,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,t3,((C_word*)t0)[3]);}}

/* k1914 in loop */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 190  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1897(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_1877 in each in k1488 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[20]+1));}

/* noop in k1488 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1863,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[20]+1));}

/* list-of in k1488 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1823,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1825,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1825 in list-of in k1488 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1825,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1831(t6,t1,t2);}

/* loop */
static void C_fcall f_1831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1831,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1850,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* extras.scm: 173  pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}}

/* k1848 in loop */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 173  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1831(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* o in k1488 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1784r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1784r(t0,t1,t2);}}

static void C_ccall f_1784r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[8]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1796,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1796(t6,t1,t2);}}

/* loop in o in k1488 */
static void C_fcall f_1796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1796,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_i_nullp(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t3:(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1810,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp)));}

/* f_1810 in loop in o in k1488 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1810,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1818,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1821,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 166  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1796(t5,t4,((C_word*)t0)[2]);}

/* k1819 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1816 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 166  h */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* compose in k1488 */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1748r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1748r(t0,t1,t2);}}

static void C_ccall f_1748r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1751,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[16]+1));}
else{
C_apply(4,0,t1,((C_word*)t4)[1],t2);}}

/* rec in compose in k1488 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1751r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1751r(t0,t1,t2,t3);}}

static void C_ccall f_1751r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(C_word)C_i_nullp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t2:(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp)));}

/* f_1759 in rec in compose in k1488 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1759r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1759r(t0,t1,t2);}}

static void C_ccall f_1759r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 151  call-with-values */
C_u_call_with_values(4,0,t1,t3,((C_word*)t0)[2]);}

/* a1764 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k1771 in a1764 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* complement in k1488 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1736,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1738 in complement in k1488 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1738r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1738r(t0,t1,t2);}}

static void C_ccall f_1738r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_apply(4,0,t3,((C_word*)t0)[2],t2);}

/* k1744 */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* flip in k1488 */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1728,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1730 in flip in k1488 */
static void C_ccall f_1730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1730,4,t0,t1,t2,t3);}
/* extras.scm: 140  proc */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* constantly in k1488 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_1705r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1705r(t0,t1,t2);}}

static void C_ccall f_1705r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_u_i_car(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=t5,tmp=(C_word)a,a+=3,tmp));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1718,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}}

/* f_1718 in constantly in k1488 */
static void C_ccall f_1718(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1718,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* f_1716 in constantly in k1488 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1716,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* disjoin in k1488 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1668r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1668r(t0,t1,t2);}}

static void C_ccall f_1668r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(3);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1670,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1670 in disjoin in k1488 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1670,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1676(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1676,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=t4;
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[2]);}}

/* k1684 in loop */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
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
f_1676(t3,((C_word*)t0)[4],t2);}}

/* conjoin in k1488 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1635r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1635r(t0,t1,t2);}}

static void C_ccall f_1635r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a=C_alloc(3);
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1637 in conjoin in k1488 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1637,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1643,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1643(t6,t1,((C_word*)t0)[2]);}

/* loop */
static void C_fcall f_1643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1643,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1656,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}

/* k1654 in loop */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* extras.scm: 125  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1643(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* project in k1488 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1627,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_1629 in project in k1488 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1629r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1629r(t0,t1,t2);}}

static void C_ccall f_1629r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,((C_word*)t0)[2]));}

/* identity in k1488 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1624,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* read-file in k1488 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr2r,(void*)f_1492r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1492r(t0,t1,t2);}}

static void C_ccall f_1492r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(14);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1494,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1554,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1559,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1564,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-port1034 */
t7=t6;
f_1564(t7,t1);}
else{
t7=(C_word)C_u_i_car(t2);
t8=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-reader1132 */
t9=t5;
f_1559(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-max1229 */
t11=t4;
f_1554(t11,t1,t7,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
/* body814 */
t13=t3;
f_1494(t13,t1,t7,t9,t11);}}}}

/* def-port10 in read-file in k1488 */
static void C_fcall f_1564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,2,t0,t1);}
/* def-reader1132 */
t2=((C_word*)t0)[2];
f_1559(t2,t1,*((C_word*)lf[7]+1));}

/* def-reader11 in read-file in k1488 */
static void C_fcall f_1559(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1559,NULL,3,t0,t1,t2);}
/* def-max1229 */
t3=((C_word*)t0)[3];
f_1554(t3,t1,t2,((C_word*)t0)[2]);}

/* def-max12 in read-file in k1488 */
static void C_fcall f_1554(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1554,NULL,4,t0,t1,t2,t3);}
/* body814 */
t4=((C_word*)t0)[2];
f_1494(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body8 in read-file in k1488 */
static void C_fcall f_1494(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1494,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1497,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1547,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 108  port? */
t7=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k1545 in body8 in read-file in k1488 */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 109  slurp */
t2=((C_word*)t0)[5];
f_1497(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* extras.scm: 110  call-with-input-file */
t2=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* slurp in body8 in read-file in k1488 */
static void C_ccall f_1497(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1497,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1505,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 104  reader */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1503 in slurp in body8 in read-file in k1488 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1505,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1507(t5,((C_word*)t0)[2],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* do20 in k1503 in slurp in body8 in read-file in k1488 */
static void C_fcall f_1507(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1507,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[6])?(C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm: 107  reverse */
t7=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1527,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 104  reader */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}}

/* k1525 in do20 in k1503 in slurp in body8 in read-file in k1488 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_1507(t4,((C_word*)t0)[2],t1,t2,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[550] = {
{"toplevelextras.scm",(void*)C_extras_toplevel},
{"f_1490extras.scm",(void*)f_1490},
{"f_4941extras.scm",(void*)f_4941},
{"f_6169extras.scm",(void*)f_6169},
{"f_8395extras.scm",(void*)f_8395},
{"f_8405extras.scm",(void*)f_8405},
{"f_8468extras.scm",(void*)f_8468},
{"f_8487extras.scm",(void*)f_8487},
{"f_8426extras.scm",(void*)f_8426},
{"f_8508extras.scm",(void*)f_8508},
{"f_7490extras.scm",(void*)f_7490},
{"f_8057extras.scm",(void*)f_8057},
{"f_8350extras.scm",(void*)f_8350},
{"f_8354extras.scm",(void*)f_8354},
{"f_8371extras.scm",(void*)f_8371},
{"f_8357extras.scm",(void*)f_8357},
{"f_8324extras.scm",(void*)f_8324},
{"f_8273extras.scm",(void*)f_8273},
{"f_8289extras.scm",(void*)f_8289},
{"f_8299extras.scm",(void*)f_8299},
{"f_8281extras.scm",(void*)f_8281},
{"f_8267extras.scm",(void*)f_8267},
{"f_8243extras.scm",(void*)f_8243},
{"f_8214extras.scm",(void*)f_8214},
{"f_8221extras.scm",(void*)f_8221},
{"f_8205extras.scm",(void*)f_8205},
{"f_8196extras.scm",(void*)f_8196},
{"f_8186extras.scm",(void*)f_8186},
{"f_8180extras.scm",(void*)f_8180},
{"f_8174extras.scm",(void*)f_8174},
{"f_8108extras.scm",(void*)f_8108},
{"f_8120extras.scm",(void*)f_8120},
{"f_8136extras.scm",(void*)f_8136},
{"f_8164extras.scm",(void*)f_8164},
{"f_8059extras.scm",(void*)f_8059},
{"f_8071extras.scm",(void*)f_8071},
{"f_8090extras.scm",(void*)f_8090},
{"f_8081extras.scm",(void*)f_8081},
{"f_7994extras.scm",(void*)f_7994},
{"f_8006extras.scm",(void*)f_8006},
{"f_8022extras.scm",(void*)f_8022},
{"f_7932extras.scm",(void*)f_7932},
{"f_7944extras.scm",(void*)f_7944},
{"f_7960extras.scm",(void*)f_7960},
{"f_7909extras.scm",(void*)f_7909},
{"f_7913extras.scm",(void*)f_7913},
{"f_7918extras.scm",(void*)f_7918},
{"f_7916extras.scm",(void*)f_7916},
{"f_7839extras.scm",(void*)f_7839},
{"f_7851extras.scm",(void*)f_7851},
{"f_7867extras.scm",(void*)f_7867},
{"f_7774extras.scm",(void*)f_7774},
{"f_7786extras.scm",(void*)f_7786},
{"f_7809extras.scm",(void*)f_7809},
{"f_7822extras.scm",(void*)f_7822},
{"f_7796extras.scm",(void*)f_7796},
{"f_7551extras.scm",(void*)f_7551},
{"f_7567extras.scm",(void*)f_7567},
{"f_7639extras.scm",(void*)f_7639},
{"f_7655extras.scm",(void*)f_7655},
{"f_7658extras.scm",(void*)f_7658},
{"f_7584extras.scm",(void*)f_7584},
{"f_7603extras.scm",(void*)f_7603},
{"f_7518extras.scm",(void*)f_7518},
{"f_7528extras.scm",(void*)f_7528},
{"f_7504extras.scm",(void*)f_7504},
{"f_7516extras.scm",(void*)f_7516},
{"f_7492extras.scm",(void*)f_7492},
{"f_7498extras.scm",(void*)f_7498},
{"f_7476extras.scm",(void*)f_7476},
{"f_7485extras.scm",(void*)f_7485},
{"f_7482extras.scm",(void*)f_7482},
{"f_7467extras.scm",(void*)f_7467},
{"f_7473extras.scm",(void*)f_7473},
{"f_7233extras.scm",(void*)f_7233},
{"f_7242extras.scm",(void*)f_7242},
{"f_7258extras.scm",(void*)f_7258},
{"f_7440extras.scm",(void*)f_7440},
{"f_7368extras.scm",(void*)f_7368},
{"f_7405extras.scm",(void*)f_7405},
{"f_7408extras.scm",(void*)f_7408},
{"f_7396extras.scm",(void*)f_7396},
{"f_7378extras.scm",(void*)f_7378},
{"f_7305extras.scm",(void*)f_7305},
{"f_7345extras.scm",(void*)f_7345},
{"f_7333extras.scm",(void*)f_7333},
{"f_7315extras.scm",(void*)f_7315},
{"f_7283extras.scm",(void*)f_7283},
{"f_7270extras.scm",(void*)f_7270},
{"f_7707extras.scm",(void*)f_7707},
{"f_7730extras.scm",(void*)f_7730},
{"f_7746extras.scm",(void*)f_7746},
{"f_7717extras.scm",(void*)f_7717},
{"f_7273extras.scm",(void*)f_7273},
{"f_7452extras.scm",(void*)f_7452},
{"f_7227extras.scm",(void*)f_7227},
{"f_7209extras.scm",(void*)f_7209},
{"f_7191extras.scm",(void*)f_7191},
{"f_7169extras.scm",(void*)f_7169},
{"f_6946extras.scm",(void*)f_6946},
{"f_7167extras.scm",(void*)f_7167},
{"f_6974extras.scm",(void*)f_6974},
{"f_7105extras.scm",(void*)f_7105},
{"f_7140extras.scm",(void*)f_7140},
{"f_7083extras.scm",(void*)f_7083},
{"f_7070extras.scm",(void*)f_7070},
{"f_7062extras.scm",(void*)f_7062},
{"f_7041extras.scm",(void*)f_7041},
{"f_6949extras.scm",(void*)f_6949},
{"f_6959extras.scm",(void*)f_6959},
{"f_6940extras.scm",(void*)f_6940},
{"f_6934extras.scm",(void*)f_6934},
{"f_6842extras.scm",(void*)f_6842},
{"f_6852extras.scm",(void*)f_6852},
{"f_6857extras.scm",(void*)f_6857},
{"f_6899extras.scm",(void*)f_6899},
{"f_6920extras.scm",(void*)f_6920},
{"f_6893extras.scm",(void*)f_6893},
{"f_6761extras.scm",(void*)f_6761},
{"f_6782extras.scm",(void*)f_6782},
{"f_6777extras.scm",(void*)f_6777},
{"f_6772extras.scm",(void*)f_6772},
{"f_6763extras.scm",(void*)f_6763},
{"f_6771extras.scm",(void*)f_6771},
{"f_6755extras.scm",(void*)f_6755},
{"f_6671extras.scm",(void*)f_6671},
{"f_6749extras.scm",(void*)f_6749},
{"f_6675extras.scm",(void*)f_6675},
{"f_6689extras.scm",(void*)f_6689},
{"f_6699extras.scm",(void*)f_6699},
{"f_6644extras.scm",(void*)f_6644},
{"f_6669extras.scm",(void*)f_6669},
{"f_6662extras.scm",(void*)f_6662},
{"f_6658extras.scm",(void*)f_6658},
{"f_6511extras.scm",(void*)f_6511},
{"f_6601extras.scm",(void*)f_6601},
{"f_6608extras.scm",(void*)f_6608},
{"f_6610extras.scm",(void*)f_6610},
{"f_6514extras.scm",(void*)f_6514},
{"f_6565extras.scm",(void*)f_6565},
{"f_6555extras.scm",(void*)f_6555},
{"f_6524extras.scm",(void*)f_6524},
{"f_6527extras.scm",(void*)f_6527},
{"f_6533extras.scm",(void*)f_6533},
{"f_6379extras.scm",(void*)f_6379},
{"f_6461extras.scm",(void*)f_6461},
{"f_6484extras.scm",(void*)f_6484},
{"f_6464extras.scm",(void*)f_6464},
{"f_6382extras.scm",(void*)f_6382},
{"f_6389extras.scm",(void*)f_6389},
{"f_6280extras.scm",(void*)f_6280},
{"f_6314extras.scm",(void*)f_6314},
{"f_6321extras.scm",(void*)f_6321},
{"f_6369extras.scm",(void*)f_6369},
{"f_6341extras.scm",(void*)f_6341},
{"f_6171extras.scm",(void*)f_6171},
{"f_6246extras.scm",(void*)f_6246},
{"f_6274extras.scm",(void*)f_6274},
{"f_6198extras.scm",(void*)f_6198},
{"f_6208extras.scm",(void*)f_6208},
{"f_6155extras.scm",(void*)f_6155},
{"f_6159extras.scm",(void*)f_6159},
{"f_6162extras.scm",(void*)f_6162},
{"f_6145extras.scm",(void*)f_6145},
{"f_6153extras.scm",(void*)f_6153},
{"f_5888extras.scm",(void*)f_5888},
{"f_5894extras.scm",(void*)f_5894},
{"f_5926extras.scm",(void*)f_5926},
{"f_6110extras.scm",(void*)f_6110},
{"f_6037extras.scm",(void*)f_6037},
{"f_6020extras.scm",(void*)f_6020},
{"f_6003extras.scm",(void*)f_6003},
{"f_5939extras.scm",(void*)f_5939},
{"f_5907extras.scm",(void*)f_5907},
{"f_5900extras.scm",(void*)f_5900},
{"f_5849extras.scm",(void*)f_5849},
{"f_5791extras.scm",(void*)f_5791},
{"f_5800extras.scm",(void*)f_5800},
{"f_5831extras.scm",(void*)f_5831},
{"f_5835extras.scm",(void*)f_5835},
{"f_5820extras.scm",(void*)f_5820},
{"f_5675extras.scm",(void*)f_5675},
{"f_5681extras.scm",(void*)f_5681},
{"f_5714extras.scm",(void*)f_5714},
{"f_5779extras.scm",(void*)f_5779},
{"f_5753extras.scm",(void*)f_5753},
{"f_5709extras.scm",(void*)f_5709},
{"f_5699extras.scm",(void*)f_5699},
{"f_5695extras.scm",(void*)f_5695},
{"f_5485extras.scm",(void*)f_5485},
{"f_5670extras.scm",(void*)f_5670},
{"f_5653extras.scm",(void*)f_5653},
{"f_5522extras.scm",(void*)f_5522},
{"f_5525extras.scm",(void*)f_5525},
{"f_5534extras.scm",(void*)f_5534},
{"f_5539extras.scm",(void*)f_5539},
{"f_5558extras.scm",(void*)f_5558},
{"f_5488extras.scm",(void*)f_5488},
{"f_5493extras.scm",(void*)f_5493},
{"f_5499extras.scm",(void*)f_5499},
{"f_5386extras.scm",(void*)f_5386},
{"f_5398extras.scm",(void*)f_5398},
{"f_5408extras.scm",(void*)f_5408},
{"f_5413extras.scm",(void*)f_5413},
{"f_5257extras.scm",(void*)f_5257},
{"f_5292extras.scm",(void*)f_5292},
{"f_5319extras.scm",(void*)f_5319},
{"f_5358extras.scm",(void*)f_5358},
{"f_5302extras.scm",(void*)f_5302},
{"f_5272extras.scm",(void*)f_5272},
{"f_5287extras.scm",(void*)f_5287},
{"f_5279extras.scm",(void*)f_5279},
{"f_5205extras.scm",(void*)f_5205},
{"f_5218extras.scm",(void*)f_5218},
{"f_5153extras.scm",(void*)f_5153},
{"f_5166extras.scm",(void*)f_5166},
{"f_5128extras.scm",(void*)f_5128},
{"f_5103extras.scm",(void*)f_5103},
{"f_5084extras.scm",(void*)f_5084},
{"f_5094extras.scm",(void*)f_5094},
{"f_5065extras.scm",(void*)f_5065},
{"f_5075extras.scm",(void*)f_5075},
{"f_5027extras.scm",(void*)f_5027},
{"f_5039extras.scm",(void*)f_5039},
{"f_5052extras.scm",(void*)f_5052},
{"f_5017extras.scm",(void*)f_5017},
{"f_5025extras.scm",(void*)f_5025},
{"f_4972extras.scm",(void*)f_4972},
{"f_5009extras.scm",(void*)f_5009},
{"f_5012extras.scm",(void*)f_5012},
{"f_4943extras.scm",(void*)f_4943},
{"f_4947extras.scm",(void*)f_4947},
{"f_4954extras.scm",(void*)f_4954},
{"f_4956extras.scm",(void*)f_4956},
{"f_4960extras.scm",(void*)f_4960},
{"f_4950extras.scm",(void*)f_4950},
{"f_4862extras.scm",(void*)f_4862},
{"f_4865extras.scm",(void*)f_4865},
{"f_4881extras.scm",(void*)f_4881},
{"f_4890extras.scm",(void*)f_4890},
{"f_3612extras.scm",(void*)f_3612},
{"f_4853extras.scm",(void*)f_4853},
{"f_4857extras.scm",(void*)f_4857},
{"f_4206extras.scm",(void*)f_4206},
{"f_4761extras.scm",(void*)f_4761},
{"f_4771extras.scm",(void*)f_4771},
{"f_4752extras.scm",(void*)f_4752},
{"f_4746extras.scm",(void*)f_4746},
{"f_4724extras.scm",(void*)f_4724},
{"f_4731extras.scm",(void*)f_4731},
{"f_4718extras.scm",(void*)f_4718},
{"f_4712extras.scm",(void*)f_4712},
{"f_4706extras.scm",(void*)f_4706},
{"f_4700extras.scm",(void*)f_4700},
{"f_4694extras.scm",(void*)f_4694},
{"f_4688extras.scm",(void*)f_4688},
{"f_4540extras.scm",(void*)f_4540},
{"f_4686extras.scm",(void*)f_4686},
{"f_4638extras.scm",(void*)f_4638},
{"f_4668extras.scm",(void*)f_4668},
{"f_4653extras.scm",(void*)f_4653},
{"f_4543extras.scm",(void*)f_4543},
{"f_4570extras.scm",(void*)f_4570},
{"f_4566extras.scm",(void*)f_4566},
{"f_4584extras.scm",(void*)f_4584},
{"f_4611extras.scm",(void*)f_4611},
{"f_4607extras.scm",(void*)f_4607},
{"f_4625extras.scm",(void*)f_4625},
{"f_4463extras.scm",(void*)f_4463},
{"f_4469extras.scm",(void*)f_4469},
{"f_4538extras.scm",(void*)f_4538},
{"f_4534extras.scm",(void*)f_4534},
{"f_4526extras.scm",(void*)f_4526},
{"f_4522extras.scm",(void*)f_4522},
{"f_4500extras.scm",(void*)f_4500},
{"f_4492extras.scm",(void*)f_4492},
{"f_4454extras.scm",(void*)f_4454},
{"f_4458extras.scm",(void*)f_4458},
{"f_4426extras.scm",(void*)f_4426},
{"f_4452extras.scm",(void*)f_4452},
{"f_4430extras.scm",(void*)f_4430},
{"f_4361extras.scm",(void*)f_4361},
{"f_4368extras.scm",(void*)f_4368},
{"f_4395extras.scm",(void*)f_4395},
{"f_4421extras.scm",(void*)f_4421},
{"f_4379extras.scm",(void*)f_4379},
{"f_4274extras.scm",(void*)f_4274},
{"f_4287extras.scm",(void*)f_4287},
{"f_4325extras.scm",(void*)f_4325},
{"f_4290extras.scm",(void*)f_4290},
{"f_4319extras.scm",(void*)f_4319},
{"f_4323extras.scm",(void*)f_4323},
{"f_4303extras.scm",(void*)f_4303},
{"f_4242extras.scm",(void*)f_4242},
{"f_4265extras.scm",(void*)f_4265},
{"f_4258extras.scm",(void*)f_4258},
{"f_4209extras.scm",(void*)f_4209},
{"f_4240extras.scm",(void*)f_4240},
{"f_4233extras.scm",(void*)f_4233},
{"f_3725extras.scm",(void*)f_3725},
{"f_3904extras.scm",(void*)f_3904},
{"f_4161extras.scm",(void*)f_4161},
{"f_4178extras.scm",(void*)f_4178},
{"f_4188extras.scm",(void*)f_4188},
{"f_4181extras.scm",(void*)f_4181},
{"f_4168extras.scm",(void*)f_4168},
{"f_4145extras.scm",(void*)f_4145},
{"f_4148extras.scm",(void*)f_4148},
{"f_4155extras.scm",(void*)f_4155},
{"f_4136extras.scm",(void*)f_4136},
{"f_4052extras.scm",(void*)f_4052},
{"f_4055extras.scm",(void*)f_4055},
{"f_4111extras.scm",(void*)f_4111},
{"f_4090extras.scm",(void*)f_4090},
{"f_4097extras.scm",(void*)f_4097},
{"f_4074extras.scm",(void*)f_4074},
{"f_4081extras.scm",(void*)f_4081},
{"f_4046extras.scm",(void*)f_4046},
{"f_3962extras.scm",(void*)f_3962},
{"f_3964extras.scm",(void*)f_3964},
{"f_3971extras.scm",(void*)f_3971},
{"f_4023extras.scm",(void*)f_4023},
{"f_4019extras.scm",(void*)f_4019},
{"f_4002extras.scm",(void*)f_4002},
{"f_3998extras.scm",(void*)f_3998},
{"f_3994extras.scm",(void*)f_3994},
{"f_3943extras.scm",(void*)f_3943},
{"f_3920extras.scm",(void*)f_3920},
{"f_3923extras.scm",(void*)f_3923},
{"f_3930extras.scm",(void*)f_3930},
{"f_3911extras.scm",(void*)f_3911},
{"f_3881extras.scm",(void*)f_3881},
{"f_3885extras.scm",(void*)f_3885},
{"f_3728extras.scm",(void*)f_3728},
{"f_3735extras.scm",(void*)f_3735},
{"f_3746extras.scm",(void*)f_3746},
{"f_3755extras.scm",(void*)f_3755},
{"f_3838extras.scm",(void*)f_3838},
{"f_3773extras.scm",(void*)f_3773},
{"f_3775extras.scm",(void*)f_3775},
{"f_3827extras.scm",(void*)f_3827},
{"f_3823extras.scm",(void*)f_3823},
{"f_3807extras.scm",(void*)f_3807},
{"f_3799extras.scm",(void*)f_3799},
{"f_3706extras.scm",(void*)f_3706},
{"f_3716extras.scm",(void*)f_3716},
{"f_3673extras.scm",(void*)f_3673},
{"f_3667extras.scm",(void*)f_3667},
{"f_3615extras.scm",(void*)f_3615},
{"f_3647extras.scm",(void*)f_3647},
{"f_3554extras.scm",(void*)f_3554},
{"f_3567extras.scm",(void*)f_3567},
{"f_3597extras.scm",(void*)f_3597},
{"f_3588extras.scm",(void*)f_3588},
{"f_3592extras.scm",(void*)f_3592},
{"f_3582extras.scm",(void*)f_3582},
{"f_3572extras.scm",(void*)f_3572},
{"f_3580extras.scm",(void*)f_3580},
{"f_3411extras.scm",(void*)f_3411},
{"f_3494extras.scm",(void*)f_3494},
{"f_3489extras.scm",(void*)f_3489},
{"f_3484extras.scm",(void*)f_3484},
{"f_3413extras.scm",(void*)f_3413},
{"f_3423extras.scm",(void*)f_3423},
{"f_3479extras.scm",(void*)f_3479},
{"f_3470extras.scm",(void*)f_3470},
{"f_3474extras.scm",(void*)f_3474},
{"f_3449extras.scm",(void*)f_3449},
{"f_3465extras.scm",(void*)f_3465},
{"f_3428extras.scm",(void*)f_3428},
{"f_3377extras.scm",(void*)f_3377},
{"f_3381extras.scm",(void*)f_3381},
{"f_3403extras.scm",(void*)f_3403},
{"f_3394extras.scm",(void*)f_3394},
{"f_3398extras.scm",(void*)f_3398},
{"f_3386extras.scm",(void*)f_3386},
{"f_3346extras.scm",(void*)f_3346},
{"f_3350extras.scm",(void*)f_3350},
{"f_3369extras.scm",(void*)f_3369},
{"f_3363extras.scm",(void*)f_3363},
{"f_3355extras.scm",(void*)f_3355},
{"f_3334extras.scm",(void*)f_3334},
{"f_3338extras.scm",(void*)f_3338},
{"f_3341extras.scm",(void*)f_3341},
{"f_3325extras.scm",(void*)f_3325},
{"f_3329extras.scm",(void*)f_3329},
{"f_3297extras.scm",(void*)f_3297},
{"f_3317extras.scm",(void*)f_3317},
{"f_3311extras.scm",(void*)f_3311},
{"f_3303extras.scm",(void*)f_3303},
{"f_3269extras.scm",(void*)f_3269},
{"f_3289extras.scm",(void*)f_3289},
{"f_3283extras.scm",(void*)f_3283},
{"f_3275extras.scm",(void*)f_3275},
{"f_3241extras.scm",(void*)f_3241},
{"f_3261extras.scm",(void*)f_3261},
{"f_3255extras.scm",(void*)f_3255},
{"f_3247extras.scm",(void*)f_3247},
{"f_3226extras.scm",(void*)f_3226},
{"f_3233extras.scm",(void*)f_3233},
{"f_3149extras.scm",(void*)f_3149},
{"f_3181extras.scm",(void*)f_3181},
{"f_3176extras.scm",(void*)f_3176},
{"f_3151extras.scm",(void*)f_3151},
{"f_3165extras.scm",(void*)f_3165},
{"f_3162extras.scm",(void*)f_3162},
{"f_3090extras.scm",(void*)f_3090},
{"f_3097extras.scm",(void*)f_3097},
{"f_3102extras.scm",(void*)f_3102},
{"f_3106extras.scm",(void*)f_3106},
{"f_3112extras.scm",(void*)f_3112},
{"f_3122extras.scm",(void*)f_3122},
{"f_3115extras.scm",(void*)f_3115},
{"f_2972extras.scm",(void*)f_2972},
{"f_3045extras.scm",(void*)f_3045},
{"f_3040extras.scm",(void*)f_3040},
{"f_2974extras.scm",(void*)f_2974},
{"f_2996extras.scm",(void*)f_2996},
{"f_3001extras.scm",(void*)f_3001},
{"f_3005extras.scm",(void*)f_3005},
{"f_3011extras.scm",(void*)f_3011},
{"f_3023extras.scm",(void*)f_3023},
{"f_2981extras.scm",(void*)f_2981},
{"f_2984extras.scm",(void*)f_2984},
{"f_2890extras.scm",(void*)f_2890},
{"f_2927extras.scm",(void*)f_2927},
{"f_2922extras.scm",(void*)f_2922},
{"f_2892extras.scm",(void*)f_2892},
{"f_2896extras.scm",(void*)f_2896},
{"f_2806extras.scm",(void*)f_2806},
{"f_2884extras.scm",(void*)f_2884},
{"f_2810extras.scm",(void*)f_2810},
{"f_2818extras.scm",(void*)f_2818},
{"f_2867extras.scm",(void*)f_2867},
{"f_2822extras.scm",(void*)f_2822},
{"f_2719extras.scm",(void*)f_2719},
{"f_2731extras.scm",(void*)f_2731},
{"f_2741extras.scm",(void*)f_2741},
{"f_2754extras.scm",(void*)f_2754},
{"f_2582extras.scm",(void*)f_2582},
{"f_2592extras.scm",(void*)f_2592},
{"f_2607extras.scm",(void*)f_2607},
{"f_2612extras.scm",(void*)f_2612},
{"f_2625extras.scm",(void*)f_2625},
{"f_2698extras.scm",(void*)f_2698},
{"f_2690extras.scm",(void*)f_2690},
{"f_2676extras.scm",(void*)f_2676},
{"f_2658extras.scm",(void*)f_2658},
{"f_2667extras.scm",(void*)f_2667},
{"f_2542extras.scm",(void*)f_2542},
{"f_2533extras.scm",(void*)f_2533},
{"f_2489extras.scm",(void*)f_2489},
{"f_2498extras.scm",(void*)f_2498},
{"f_2514extras.scm",(void*)f_2514},
{"f_2368extras.scm",(void*)f_2368},
{"f_2444extras.scm",(void*)f_2444},
{"f_2439extras.scm",(void*)f_2439},
{"f_2370extras.scm",(void*)f_2370},
{"f_2399extras.scm",(void*)f_2399},
{"f_2405extras.scm",(void*)f_2405},
{"f_2421extras.scm",(void*)f_2421},
{"f_2374extras.scm",(void*)f_2374},
{"f_2377extras.scm",(void*)f_2377},
{"f_2282extras.scm",(void*)f_2282},
{"f_2321extras.scm",(void*)f_2321},
{"f_2327extras.scm",(void*)f_2327},
{"f_2343extras.scm",(void*)f_2343},
{"f_2289extras.scm",(void*)f_2289},
{"f_2292extras.scm",(void*)f_2292},
{"f_2244extras.scm",(void*)f_2244},
{"f_2272extras.scm",(void*)f_2272},
{"f_2280extras.scm",(void*)f_2280},
{"f_2256extras.scm",(void*)f_2256},
{"f_2258extras.scm",(void*)f_2258},
{"f_2252extras.scm",(void*)f_2252},
{"f_2181extras.scm",(void*)f_2181},
{"f_2187extras.scm",(void*)f_2187},
{"f_2223extras.scm",(void*)f_2223},
{"f_2132extras.scm",(void*)f_2132},
{"f_2141extras.scm",(void*)f_2141},
{"f_2173extras.scm",(void*)f_2173},
{"f_2059extras.scm",(void*)f_2059},
{"f_2068extras.scm",(void*)f_2068},
{"f_2089extras.scm",(void*)f_2089},
{"f_2103extras.scm",(void*)f_2103},
{"f_2107extras.scm",(void*)f_2107},
{"f_2018extras.scm",(void*)f_2018},
{"f_2024extras.scm",(void*)f_2024},
{"f_2057extras.scm",(void*)f_2057},
{"f_2050extras.scm",(void*)f_2050},
{"f_1989extras.scm",(void*)f_1989},
{"f_1995extras.scm",(void*)f_1995},
{"f_2016extras.scm",(void*)f_2016},
{"f_1956extras.scm",(void*)f_1956},
{"f_1962extras.scm",(void*)f_1962},
{"f_1987extras.scm",(void*)f_1987},
{"f_1931extras.scm",(void*)f_1931},
{"f_1940extras.scm",(void*)f_1940},
{"f_1928extras.scm",(void*)f_1928},
{"f_1925extras.scm",(void*)f_1925},
{"f_1869extras.scm",(void*)f_1869},
{"f_1891extras.scm",(void*)f_1891},
{"f_1897extras.scm",(void*)f_1897},
{"f_1916extras.scm",(void*)f_1916},
{"f_1877extras.scm",(void*)f_1877},
{"f_1863extras.scm",(void*)f_1863},
{"f_1823extras.scm",(void*)f_1823},
{"f_1825extras.scm",(void*)f_1825},
{"f_1831extras.scm",(void*)f_1831},
{"f_1850extras.scm",(void*)f_1850},
{"f_1784extras.scm",(void*)f_1784},
{"f_1796extras.scm",(void*)f_1796},
{"f_1810extras.scm",(void*)f_1810},
{"f_1821extras.scm",(void*)f_1821},
{"f_1818extras.scm",(void*)f_1818},
{"f_1748extras.scm",(void*)f_1748},
{"f_1751extras.scm",(void*)f_1751},
{"f_1759extras.scm",(void*)f_1759},
{"f_1765extras.scm",(void*)f_1765},
{"f_1773extras.scm",(void*)f_1773},
{"f_1736extras.scm",(void*)f_1736},
{"f_1738extras.scm",(void*)f_1738},
{"f_1746extras.scm",(void*)f_1746},
{"f_1728extras.scm",(void*)f_1728},
{"f_1730extras.scm",(void*)f_1730},
{"f_1705extras.scm",(void*)f_1705},
{"f_1718extras.scm",(void*)f_1718},
{"f_1716extras.scm",(void*)f_1716},
{"f_1668extras.scm",(void*)f_1668},
{"f_1670extras.scm",(void*)f_1670},
{"f_1676extras.scm",(void*)f_1676},
{"f_1686extras.scm",(void*)f_1686},
{"f_1635extras.scm",(void*)f_1635},
{"f_1637extras.scm",(void*)f_1637},
{"f_1643extras.scm",(void*)f_1643},
{"f_1656extras.scm",(void*)f_1656},
{"f_1627extras.scm",(void*)f_1627},
{"f_1629extras.scm",(void*)f_1629},
{"f_1624extras.scm",(void*)f_1624},
{"f_1492extras.scm",(void*)f_1492},
{"f_1564extras.scm",(void*)f_1564},
{"f_1559extras.scm",(void*)f_1559},
{"f_1554extras.scm",(void*)f_1554},
{"f_1494extras.scm",(void*)f_1494},
{"f_1547extras.scm",(void*)f_1547},
{"f_1497extras.scm",(void*)f_1497},
{"f_1505extras.scm",(void*)f_1505},
{"f_1507extras.scm",(void*)f_1507},
{"f_1527extras.scm",(void*)f_1527},
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
