/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: eval.scm -output-file eval.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: eval
*/

#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_externexport  void  CHICKEN_get_error_message(char *t0,int t1);

C_externexport  int  CHICKEN_load(char * t0);

C_externexport  int  CHICKEN_read(char * t0,C_word *t1);

C_externexport  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_externexport  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_externexport  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_externexport  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_externexport  int  CHICKEN_eval(C_word t0,C_word *t1);

C_externexport  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[887];


/* from ##sys#clear-trace-buffer in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall stub1331(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1331(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_clear_trace_buffer();
return C_r;}

C_noret_decl(C_eval_toplevel)
C_externexport void C_ccall C_eval_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_11198)
static void C_fcall f_11198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11222)
static void C_ccall f_11222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11206)
static void C_ccall f_11206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11204)
static void C_ccall f_11204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6133)
static void C_ccall f_6133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11188)
static void C_ccall f_11188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11184)
static void C_ccall f_11184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11180)
static void C_ccall f_11180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11176)
static void C_ccall f_11176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11166)
static void C_fcall f_11166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6735)
static void C_fcall f_6735(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11151)
static void C_ccall f_11151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11147)
static void C_ccall f_11147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11143)
static void C_ccall f_11143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11133)
static void C_fcall f_11133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6739)
static void C_fcall f_6739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11117)
static void C_ccall f_11117(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11109)
static void C_ccall f_11109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11111)
static void C_ccall f_11111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11093)
static void C_ccall f_11093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11099)
static void C_ccall f_11099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11096)
static void C_ccall f_11096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11039)
static void C_ccall f_11039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11053)
static void C_fcall f_11053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11089)
static void C_ccall f_11089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11085)
static void C_ccall f_11085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11073)
static void C_ccall f_11073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11077)
static void C_ccall f_11077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11047)
static void C_ccall f_11047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7818)
static void C_ccall f_7818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10918)
static void C_ccall f_10918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10955)
static void C_fcall f_10955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10964)
static void C_ccall f_10964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10983)
static void C_ccall f_10983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10987)
static void C_ccall f_10987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10973)
static void C_ccall f_10973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10970)
static void C_ccall f_10970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10921)
static void C_fcall f_10921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7821)
static void C_ccall f_7821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7879)
static void C_ccall f_7879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10916)
static void C_ccall f_10916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8214)
static void C_ccall f_8214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10912)
static void C_ccall f_10912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8221)
static void C_ccall f_8221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8225)
static void C_ccall f_8225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10815)
static void C_ccall f_10815(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10821)
static void C_fcall f_10821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10837)
static void C_ccall f_10837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10840)
static void C_ccall f_10840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10875)
static void C_ccall f_10875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10878)
static void C_ccall f_10878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10862)
static void C_ccall f_10862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10865)
static void C_ccall f_10865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10872)
static void C_ccall f_10872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8915)
static void C_ccall f_8915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10787)
static void C_ccall f_10787(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10744)
static void C_ccall f_10744(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10766)
static void C_ccall f_10766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8921)
static void C_ccall f_8921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10547)
static void C_ccall f_10547(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10553)
static void C_fcall f_10553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10569)
static void C_ccall f_10569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10645)
static void C_fcall f_10645(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10702)
static void C_ccall f_10702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10648)
static void C_ccall f_10648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10675)
static void C_ccall f_10675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10608)
static void C_ccall f_10608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10627)
static void C_ccall f_10627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10599)
static void C_ccall f_10599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8924)
static void C_ccall f_8924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10454)
static void C_ccall f_10454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10467)
static void C_fcall f_10467(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10483)
static void C_ccall f_10483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10521)
static void C_ccall f_10521(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10519)
static void C_ccall f_10519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10511)
static void C_ccall f_10511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10465)
static void C_ccall f_10465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8927)
static void C_ccall f_8927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10391)
static void C_ccall f_10391(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10401)
static void C_ccall f_10401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10404)
static void C_ccall f_10404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10409)
static void C_fcall f_10409(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10434)
static void C_ccall f_10434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8930)
static void C_ccall f_8930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10321)
static void C_ccall f_10321(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10331)
static void C_ccall f_10331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10334)
static void C_ccall f_10334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10381)
static void C_ccall f_10381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10367)
static void C_ccall f_10367(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10349)
static void C_ccall f_10349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10202)
static void C_ccall f_10202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_10202)
static void C_ccall f_10202r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_10206)
static void C_ccall f_10206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10209)
static void C_ccall f_10209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10212)
static void C_ccall f_10212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10303)
static void C_ccall f_10303(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10242)
static void C_fcall f_10242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10256)
static void C_ccall f_10256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10254)
static void C_ccall f_10254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10120)
static void C_fcall f_10120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10124)
static void C_ccall f_10124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10187)
static void C_ccall f_10187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9923)
static void C_fcall f_9923(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10115)
static void C_ccall f_10115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10098)
static void C_ccall f_10098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10083)
static void C_ccall f_10083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10075)
static void C_ccall f_10075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10064)
static void C_ccall f_10064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10030)
static void C_ccall f_10030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9984)
static void C_ccall f_9984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9937)
static void C_ccall f_9937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9913)
static void C_fcall f_9913(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9921)
static void C_ccall f_9921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9900)
static void C_ccall f_9900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8942)
static void C_ccall f_8942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8946)
static void C_ccall f_8946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8953)
static void C_ccall f_8953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9330)
static void C_ccall f_9330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9755)
static void C_ccall f_9755(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9755)
static void C_ccall f_9755r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9873)
static void C_ccall f_9873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9863)
static void C_ccall f_9863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9758)
static void C_fcall f_9758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9762)
static void C_fcall f_9762(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9773)
static void C_fcall f_9773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9416)
static void C_ccall f_9416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9740)
static void C_ccall f_9740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9749)
static void C_ccall f_9749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9747)
static void C_ccall f_9747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9419)
static void C_ccall f_9419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9724)
static void C_ccall f_9724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9425)
static void C_ccall f_9425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9715)
static void C_ccall f_9715(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9705)
static void C_ccall f_9705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9690)
static void C_ccall f_9690(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9694)
static void C_ccall f_9694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9699)
static void C_ccall f_9699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9703)
static void C_ccall f_9703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9668)
static void C_ccall f_9668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9677)
static void C_ccall f_9677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9681)
static void C_ccall f_9681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9688)
static void C_ccall f_9688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9642)
static void C_ccall f_9642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9648)
static void C_ccall f_9648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9666)
static void C_ccall f_9666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9626)
static void C_ccall f_9626(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9632)
static void C_ccall f_9632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9640)
static void C_ccall f_9640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9589)
static void C_ccall f_9589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9593)
static void C_ccall f_9593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9598)
static void C_ccall f_9598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9624)
static void C_ccall f_9624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9620)
static void C_ccall f_9620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9605)
static void C_ccall f_9605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9612)
static void C_ccall f_9612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9563)
static void C_ccall f_9563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9569)
static void C_ccall f_9569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9573)
static void C_ccall f_9573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9587)
static void C_ccall f_9587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9576)
static void C_ccall f_9576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9583)
static void C_ccall f_9583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9550)
static C_word C_fcall f_9550(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9524)
static void C_ccall f_9524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9528)
static void C_ccall f_9528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9533)
static void C_ccall f_9533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9537)
static void C_ccall f_9537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9548)
static void C_ccall f_9548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9544)
static void C_ccall f_9544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9508)
static void C_ccall f_9508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9514)
static void C_ccall f_9514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9496)
static void C_ccall f_9496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9502)
static void C_ccall f_9502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9506)
static void C_ccall f_9506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9487)
static void C_fcall f_9487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9491)
static void C_ccall f_9491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9428)
static void C_fcall f_9428(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9438)
static void C_ccall f_9438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9463)
static void C_ccall f_9463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9481)
static void C_ccall f_9481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9444)
static void C_ccall f_9444(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9450)
static void C_ccall f_9450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9454)
static void C_ccall f_9454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9457)
static void C_ccall f_9457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9461)
static void C_ccall f_9461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9436)
static void C_ccall f_9436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9341)
static void C_ccall f_9341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9351)
static void C_ccall f_9351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9354)
static void C_ccall f_9354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9368)
static void C_fcall f_9368(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9386)
static void C_ccall f_9386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9355)
static void C_fcall f_9355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9332)
static void C_ccall f_9332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9033)
static void C_ccall f_9033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9036)
static void C_ccall f_9036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9315)
static void C_ccall f_9315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9319)
static void C_ccall f_9319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9323)
static void C_ccall f_9323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9118)
static void C_ccall f_9118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9124)
static void C_fcall f_9124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9296)
static void C_ccall f_9296(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9302)
static void C_ccall f_9302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9131)
static void C_ccall f_9131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9134)
static void C_ccall f_9134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9291)
static void C_ccall f_9291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9146)
static void C_ccall f_9146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9164)
static void C_ccall f_9164(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9164)
static void C_ccall f_9164r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9182)
static void C_fcall f_9182(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9278)
static void C_ccall f_9278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9274)
static void C_ccall f_9274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9245)
static void C_ccall f_9245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9207)
static void C_ccall f_9207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9210)
static void C_ccall f_9210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9222)
static void C_ccall f_9222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9213)
static void C_ccall f_9213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9186)
static void C_ccall f_9186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9168)
static void C_ccall f_9168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9171)
static void C_ccall f_9171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9155)
static void C_ccall f_9155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9061)
static void C_ccall f_9061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9113)
static void C_ccall f_9113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9076)
static void C_ccall f_9076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9088)
static void C_fcall f_9088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9097)
static void C_ccall f_9097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9091)
static void C_ccall f_9091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9079)
static void C_ccall f_9079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9082)
static void C_ccall f_9082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9044)
static C_word C_fcall f_9044(C_word t0);
C_noret_decl(f_9038)
static C_word C_fcall f_9038(C_word t0);
C_noret_decl(f_9004)
static void C_fcall f_9004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9014)
static void C_fcall f_9014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9019)
static void C_ccall f_9019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8992)
static void C_fcall f_8992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8977)
static void C_fcall f_8977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8986)
static void C_ccall f_8986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8981)
static void C_ccall f_8981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8971)
static void C_ccall f_8971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8955)
static void C_ccall f_8955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8969)
static void C_ccall f_8969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8966)
static void C_ccall f_8966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8959)
static void C_ccall f_8959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_8660)
static void C_fcall f_8660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8665)
static void C_fcall f_8665(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8864)
static void C_ccall f_8864(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8810)
static void C_ccall f_8810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8681)
static void C_fcall f_8681(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8686)
static void C_fcall f_8686(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8705)
static void C_ccall f_8705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8631)
static void C_ccall f_8631(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8637)
static C_word C_fcall f_8637(C_word t0);
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8573)
static void C_ccall f_8573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8581)
static void C_fcall f_8581(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8526)
static void C_fcall f_8526(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8533)
static void C_ccall f_8533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8538)
static void C_fcall f_8538(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8556)
static void C_ccall f_8556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8560)
static void C_ccall f_8560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8549)
static void C_ccall f_8549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8487)
static void C_ccall f_8487(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8509)
static void C_ccall f_8509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8479)
static void C_ccall f_8479(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8479)
static void C_ccall f_8479r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8425)
static void C_ccall f_8425(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8429)
static void C_ccall f_8429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8435)
static void C_ccall f_8435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8438)
static void C_ccall f_8438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8441)
static void C_ccall f_8441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8444)
static void C_ccall f_8444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8447)
static void C_ccall f_8447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8450)
static void C_ccall f_8450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8453)
static void C_ccall f_8453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8404)
static void C_fcall f_8404(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8408)
static void C_ccall f_8408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8411)
static void C_ccall f_8411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_fcall f_8380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8386)
static void C_fcall f_8386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8396)
static void C_ccall f_8396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8250)
static void C_ccall f_8250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8250)
static void C_ccall f_8250r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8308)
static void C_ccall f_8308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8318)
static void C_ccall f_8318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8320)
static void C_fcall f_8320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8330)
static void C_ccall f_8330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8291)
static void C_fcall f_8291(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8256)
static void C_fcall f_8256(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8278)
static void C_ccall f_8278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8269)
static void C_ccall f_8269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8231)
static void C_fcall f_8231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8198)
static void C_fcall f_8198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8200)
static void C_ccall f_8200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8204)
static void C_ccall f_8204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8167)
static void C_ccall f_8167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8174)
static void C_ccall f_8174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8149)
static void C_ccall f_8149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7994)
static void C_ccall f_7994r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8015)
static void C_fcall f_8015(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8039)
static void C_fcall f_8039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8058)
static void C_ccall f_8058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8033)
static void C_ccall f_8033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_7886)
static void C_ccall f_7886r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7901)
static void C_fcall f_7901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7928)
static void C_fcall f_7928(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7922)
static void C_ccall f_7922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7823)
static void C_ccall f_7823(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7835)
static void C_fcall f_7835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7855)
static void C_fcall f_7855(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7779)
static void C_ccall f_7779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7380)
static void C_ccall f_7380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7655)
static void C_fcall f_7655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7692)
static void C_fcall f_7692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7725)
static void C_ccall f_7725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7710)
static void C_ccall f_7710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7404)
static void C_fcall f_7404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7414)
static void C_ccall f_7414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7548)
static void C_ccall f_7548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7629)
static void C_ccall f_7629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7560)
static void C_ccall f_7560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7575)
static void C_fcall f_7575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7595)
static void C_ccall f_7595(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7579)
static void C_fcall f_7579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7571)
static void C_ccall f_7571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7508)
static void C_fcall f_7508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7516)
static void C_fcall f_7516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7504)
static void C_ccall f_7504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7463)
static void C_fcall f_7463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7450)
static void C_ccall f_7450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7446)
static void C_ccall f_7446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7429)
static void C_fcall f_7429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7383)
static void C_fcall f_7383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7398)
static void C_ccall f_7398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_ccall f_7392(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7337)
static void C_fcall f_7337(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7354)
static void C_fcall f_7354(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7324)
static void C_ccall f_7324(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7297)
static void C_ccall f_7297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7300)
static void C_ccall f_7300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7318)
static void C_ccall f_7318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7303)
static void C_ccall f_7303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7286)
static void C_ccall f_7286(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7266)
static void C_ccall f_7266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7259)
static void C_ccall f_7259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7171)
static void C_ccall f_7171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7241)
static void C_ccall f_7241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7175)
static void C_fcall f_7175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7178)
static void C_ccall f_7178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7212)
static void C_ccall f_7212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7094)
static void C_ccall f_7094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7168)
static void C_ccall f_7168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7161)
static void C_ccall f_7161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_fcall f_7130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7143)
static void C_ccall f_7143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7097)
static void C_fcall f_7097(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7101)
static void C_ccall f_7101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7117)
static void C_ccall f_7117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7110)
static void C_ccall f_7110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7036)
static void C_fcall f_7036(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7053)
static void C_ccall f_7053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7061)
static void C_ccall f_7061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6958)
static void C_fcall f_6958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_ccall f_6984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6946)
static void C_fcall f_6946(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6887)
static void C_ccall f_6887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6896)
static void C_fcall f_6896(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6934)
static void C_ccall f_6934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6858)
static void C_ccall f_6858r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6865)
static void C_ccall f_6865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6752)
static void C_ccall f_6752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6852)
static void C_ccall f_6852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6765)
static void C_fcall f_6765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6768)
static void C_ccall f_6768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6817)
static void C_ccall f_6817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6820)
static void C_ccall f_6820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6776)
static void C_fcall f_6776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6810)
static void C_ccall f_6810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6789)
static void C_ccall f_6789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6792)
static void C_fcall f_6792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6691)
static void C_ccall f_6691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6679)
static void C_ccall f_6679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6571)
static void C_ccall f_6571(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6571)
static void C_ccall f_6571r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6585)
static void C_ccall f_6585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6577)
static void C_ccall f_6577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6523)
static void C_fcall f_6523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6518)
static void C_fcall f_6518(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6183)
static void C_fcall f_6183(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6187)
static void C_fcall f_6187(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6469)
static void C_fcall f_6469(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6487)
static void C_ccall f_6487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6442)
static void C_ccall f_6442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6433)
static void C_ccall f_6433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6207)
static void C_ccall f_6207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6377)
static void C_ccall f_6377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6247)
static void C_ccall f_6247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6251)
static void C_ccall f_6251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6254)
static void C_ccall f_6254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6257)
static void C_ccall f_6257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6262)
static void C_fcall f_6262(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6272)
static void C_ccall f_6272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6291)
static void C_ccall f_6291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6313)
static void C_ccall f_6313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_ccall f_6306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6275)
static void C_ccall f_6275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6282)
static void C_ccall f_6282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6244)
static void C_ccall f_6244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6135)
static void C_fcall f_6135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6145)
static C_word C_fcall f_6145(C_word t0,C_word t1);
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6072)
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5984)
static void C_fcall f_5984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5974)
static void C_fcall f_5974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5965)
static void C_ccall f_5965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5695)
static void C_fcall f_5695(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5810)
static void C_ccall f_5810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5768)
static void C_ccall f_5768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static C_word C_fcall f_5669(C_word t0,C_word t1);
C_noret_decl(f_3945)
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_fcall f_4101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5502)
static void C_fcall f_5502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5349)
static void C_fcall f_5349(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5319)
static void C_ccall f_5319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5288)
static void C_ccall f_5288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5294)
static void C_ccall f_5294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5301)
static void C_fcall f_5301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5234)
static void C_ccall f_5234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5206)
static void C_ccall f_5206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5168)
static void C_ccall f_5168(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5174)
static void C_ccall f_5174r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5636)
static void C_fcall f_5636(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5141)
static void C_ccall f_5141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4815)
static void C_fcall f_4815(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4775)
static void C_ccall f_4775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4472)
static void C_ccall f_4472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4491)
static void C_ccall f_4491(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4527)
static void C_ccall f_4527(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_ccall f_4400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3963)
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_fcall f_4004(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3957)
static void C_ccall f_3957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_fcall f_3939(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3933)
static C_word C_fcall f_3933(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3927)
static C_word C_fcall f_3927(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3874)
static void C_fcall f_3874(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_fcall f_3893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_fcall f_3902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3720)
static void C_fcall f_3720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3726)
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3844)
static C_word C_fcall f_3844(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3625)
static void C_fcall f_3625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3573)
static void C_fcall f_3573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_fcall f_3524(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static C_word C_fcall f_3480(C_word t0,C_word t1);
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3392)
static void C_ccall f_3392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_fcall f_3395(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_fcall f_3304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3253)
static void C_fcall f_3253(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_fcall f_3248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2817)
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3000)
static void C_fcall f_3000(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3006)
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_fcall f_3057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_fcall f_2820(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2935)
static void C_ccall f_2935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2832)
static void C_fcall f_2832(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2851)
static void C_fcall f_2851(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2318)
static void C_fcall f_2318(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2758)
static void C_fcall f_2758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_fcall f_2677(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_fcall f_2634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_fcall f_2594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_fcall f_2562(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_fcall f_2504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_fcall f_2336(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_fcall f_2348(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_fcall f_2339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_fcall f_2299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2259)
static void C_fcall f_2259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2278)
static void C_fcall f_2278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2210)
static void C_fcall f_2210(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2191)
static void C_ccall f_2191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2128)
static void C_fcall f_2128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_fcall f_1967(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_fcall f_1995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_fcall f_1821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1943)
static void C_ccall f_1943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1961)
static void C_ccall f_1961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_fcall f_1853(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_fcall f_1870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_fcall f_1850(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1771)
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);
x=C_fix((C_word)t1);
C_save(x);C_callback_wrapper((void *)f_9705,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))));
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9690,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9668,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=((C_word)t0);
C_save(x);
x=((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=C_fix((C_word)t3);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9642,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=((C_word)t0);
C_save(x);
x=((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9626,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_fix((C_word)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9589,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=((C_word)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_fix((C_word)t2);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9563,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9524,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=((C_word)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9508,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x, *a=C_alloc(0);
C_callback_adjust_stack_limits(a);
return C_truep(C_callback_wrapper((void *)f_9496,0));}

C_noret_decl(trf_11198)
static void C_fcall trf_11198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11198(t0,t1);}

C_noret_decl(trf_11166)
static void C_fcall trf_11166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11166(t0,t1);}

C_noret_decl(trf_6735)
static void C_fcall trf_6735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6735(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6735(t0,t1);}

C_noret_decl(trf_11133)
static void C_fcall trf_11133(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11133(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11133(t0,t1);}

C_noret_decl(trf_6739)
static void C_fcall trf_6739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6739(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6739(t0,t1);}

C_noret_decl(trf_11053)
static void C_fcall trf_11053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11053(t0,t1,t2);}

C_noret_decl(trf_10955)
static void C_fcall trf_10955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10955(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10955(t0,t1);}

C_noret_decl(trf_10921)
static void C_fcall trf_10921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10921(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10921(t0,t1);}

C_noret_decl(trf_10821)
static void C_fcall trf_10821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10821(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10821(t0,t1,t2);}

C_noret_decl(trf_10553)
static void C_fcall trf_10553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10553(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10553(t0,t1,t2);}

C_noret_decl(trf_10645)
static void C_fcall trf_10645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10645(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10645(t0,t1);}

C_noret_decl(trf_10467)
static void C_fcall trf_10467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10467(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10467(t0,t1,t2);}

C_noret_decl(trf_10409)
static void C_fcall trf_10409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10409(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10409(t0,t1,t2);}

C_noret_decl(trf_10242)
static void C_fcall trf_10242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10242(t0,t1);}

C_noret_decl(trf_10120)
static void C_fcall trf_10120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10120(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10120(t0,t1,t2);}

C_noret_decl(trf_9923)
static void C_fcall trf_9923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9923(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9923(t0,t1,t2,t3);}

C_noret_decl(trf_9913)
static void C_fcall trf_9913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9913(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9913(t0,t1,t2,t3);}

C_noret_decl(trf_9758)
static void C_fcall trf_9758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9758(t0,t1,t2);}

C_noret_decl(trf_9762)
static void C_fcall trf_9762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9762(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9762(t0,t1);}

C_noret_decl(trf_9773)
static void C_fcall trf_9773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9773(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9773(t0,t1);}

C_noret_decl(trf_9487)
static void C_fcall trf_9487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9487(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9487(t0,t1,t2);}

C_noret_decl(trf_9428)
static void C_fcall trf_9428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9428(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9428(t0,t1);}

C_noret_decl(trf_9368)
static void C_fcall trf_9368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9368(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9368(t0,t1);}

C_noret_decl(trf_9355)
static void C_fcall trf_9355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9355(t0,t1);}

C_noret_decl(trf_9124)
static void C_fcall trf_9124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9124(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9124(t0,t1);}

C_noret_decl(trf_9182)
static void C_fcall trf_9182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9182(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9182(t0,t1,t2,t3);}

C_noret_decl(trf_9088)
static void C_fcall trf_9088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9088(t0,t1);}

C_noret_decl(trf_9004)
static void C_fcall trf_9004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9004(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9004(t0,t1,t2);}

C_noret_decl(trf_9014)
static void C_fcall trf_9014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9014(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9014(t0,t1);}

C_noret_decl(trf_8992)
static void C_fcall trf_8992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8992(t0,t1,t2);}

C_noret_decl(trf_8977)
static void C_fcall trf_8977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8977(t0,t1,t2);}

C_noret_decl(trf_8660)
static void C_fcall trf_8660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8660(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8660(t0,t1);}

C_noret_decl(trf_8665)
static void C_fcall trf_8665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8665(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8665(t0,t1,t2,t3);}

C_noret_decl(trf_8681)
static void C_fcall trf_8681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8681(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8681(t0,t1);}

C_noret_decl(trf_8686)
static void C_fcall trf_8686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8686(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8686(t0,t1,t2,t3);}

C_noret_decl(trf_8581)
static void C_fcall trf_8581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8581(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8581(t0,t1,t2);}

C_noret_decl(trf_8526)
static void C_fcall trf_8526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8526(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8526(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8538)
static void C_fcall trf_8538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8538(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8538(t0,t1,t2);}

C_noret_decl(trf_8404)
static void C_fcall trf_8404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8404(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8404(t0,t1,t2,t3);}

C_noret_decl(trf_8380)
static void C_fcall trf_8380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8380(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8380(t0,t1,t2);}

C_noret_decl(trf_8386)
static void C_fcall trf_8386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8386(t0,t1,t2);}

C_noret_decl(trf_8320)
static void C_fcall trf_8320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8320(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8320(t0,t1,t2);}

C_noret_decl(trf_8291)
static void C_fcall trf_8291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8291(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8291(t0,t1,t2);}

C_noret_decl(trf_8256)
static void C_fcall trf_8256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8256(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8256(t0,t1,t2,t3);}

C_noret_decl(trf_8231)
static void C_fcall trf_8231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8231(t0,t1);}

C_noret_decl(trf_8198)
static void C_fcall trf_8198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8198(t0,t1);}

C_noret_decl(trf_8015)
static void C_fcall trf_8015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8015(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8015(t0,t1,t2,t3);}

C_noret_decl(trf_8039)
static void C_fcall trf_8039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8039(t0,t1,t2,t3);}

C_noret_decl(trf_7901)
static void C_fcall trf_7901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7901(t0,t1,t2);}

C_noret_decl(trf_7928)
static void C_fcall trf_7928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7928(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7928(t0,t1,t2);}

C_noret_decl(trf_7835)
static void C_fcall trf_7835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7835(t0,t1,t2);}

C_noret_decl(trf_7855)
static void C_fcall trf_7855(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7855(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7855(t0,t1);}

C_noret_decl(trf_7655)
static void C_fcall trf_7655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7655(t0,t1);}

C_noret_decl(trf_7692)
static void C_fcall trf_7692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7692(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7692(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7404)
static void C_fcall trf_7404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7404(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7404(t0,t1,t2);}

C_noret_decl(trf_7575)
static void C_fcall trf_7575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7575(t0,t1);}

C_noret_decl(trf_7579)
static void C_fcall trf_7579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7579(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7579(t0,t1);}

C_noret_decl(trf_7508)
static void C_fcall trf_7508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7508(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7508(t0,t1);}

C_noret_decl(trf_7516)
static void C_fcall trf_7516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7516(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7516(t0,t1);}

C_noret_decl(trf_7463)
static void C_fcall trf_7463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7463(t0,t1);}

C_noret_decl(trf_7429)
static void C_fcall trf_7429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7429(t0,t1);}

C_noret_decl(trf_7383)
static void C_fcall trf_7383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7383(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7383(t0,t1,t2);}

C_noret_decl(trf_7337)
static void C_fcall trf_7337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7337(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7337(t0,t1,t2);}

C_noret_decl(trf_7354)
static void C_fcall trf_7354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7354(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7354(t0,t1);}

C_noret_decl(trf_7175)
static void C_fcall trf_7175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7175(t0,t1);}

C_noret_decl(trf_7130)
static void C_fcall trf_7130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7130(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7130(t0,t1,t2);}

C_noret_decl(trf_7097)
static void C_fcall trf_7097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7097(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7097(t0,t1,t2);}

C_noret_decl(trf_7036)
static void C_fcall trf_7036(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7036(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7036(t0,t1,t2);}

C_noret_decl(trf_6958)
static void C_fcall trf_6958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6958(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6958(t0,t1,t2);}

C_noret_decl(trf_6946)
static void C_fcall trf_6946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6946(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6946(t0,t1);}

C_noret_decl(trf_6896)
static void C_fcall trf_6896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6896(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6896(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6765)
static void C_fcall trf_6765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6765(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6765(t0,t1);}

C_noret_decl(trf_6776)
static void C_fcall trf_6776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6776(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6776(t0,t1,t2);}

C_noret_decl(trf_6792)
static void C_fcall trf_6792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6792(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6792(t0,t1);}

C_noret_decl(trf_6523)
static void C_fcall trf_6523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6523(t0,t1);}

C_noret_decl(trf_6518)
static void C_fcall trf_6518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6518(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6518(t0,t1,t2);}

C_noret_decl(trf_6183)
static void C_fcall trf_6183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6183(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6183(t0,t1,t2,t3);}

C_noret_decl(trf_6187)
static void C_fcall trf_6187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6187(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6187(t0,t1);}

C_noret_decl(trf_6469)
static void C_fcall trf_6469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6469(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6469(t0,t1);}

C_noret_decl(trf_6262)
static void C_fcall trf_6262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6262(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6262(t0,t1,t2);}

C_noret_decl(trf_6135)
static void C_fcall trf_6135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6135(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6135(t0,t1);}

C_noret_decl(trf_6072)
static void C_fcall trf_6072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6072(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6072(t0,t1,t2);}

C_noret_decl(trf_5984)
static void C_fcall trf_5984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5984(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5984(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5974)
static void C_fcall trf_5974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5974(t0,t1);}

C_noret_decl(trf_5695)
static void C_fcall trf_5695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5695(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5695(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3945)
static void C_fcall trf_3945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3945(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3945(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4101)
static void C_fcall trf_4101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4101(t0,t1);}

C_noret_decl(trf_5502)
static void C_fcall trf_5502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5502(t0,t1);}

C_noret_decl(trf_5349)
static void C_fcall trf_5349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5349(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5349(t0,t1,t2);}

C_noret_decl(trf_5301)
static void C_fcall trf_5301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5301(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5301(t0,t1);}

C_noret_decl(trf_5636)
static void C_fcall trf_5636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5636(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5636(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4815)
static void C_fcall trf_4815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4815(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4815(t0,t1,t2,t3);}

C_noret_decl(trf_4004)
static void C_fcall trf_4004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4004(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4004(t0,t1);}

C_noret_decl(trf_3999)
static void C_fcall trf_3999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3999(t0,t1);}

C_noret_decl(trf_3939)
static void C_fcall trf_3939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3939(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3939(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3874)
static void C_fcall trf_3874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3874(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3874(t0,t1,t2,t3);}

C_noret_decl(trf_3893)
static void C_fcall trf_3893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3893(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3893(t0,t1);}

C_noret_decl(trf_3902)
static void C_fcall trf_3902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3902(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3902(t0,t1);}

C_noret_decl(trf_3762)
static void C_fcall trf_3762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3762(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3762(t0,t1,t2,t3);}

C_noret_decl(trf_3720)
static void C_fcall trf_3720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3720(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3720(t0,t1,t2);}

C_noret_decl(trf_3726)
static void C_fcall trf_3726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3726(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3726(t0,t1,t2,t3);}

C_noret_decl(trf_3625)
static void C_fcall trf_3625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3625(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3625(t0,t1,t2);}

C_noret_decl(trf_3573)
static void C_fcall trf_3573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3573(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3573(t0,t1,t2);}

C_noret_decl(trf_3524)
static void C_fcall trf_3524(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3524(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3524(t0,t1,t2);}

C_noret_decl(trf_3395)
static void C_fcall trf_3395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3395(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3395(t0,t1,t2,t3);}

C_noret_decl(trf_3304)
static void C_fcall trf_3304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3304(t0,t1,t2,t3);}

C_noret_decl(trf_3253)
static void C_fcall trf_3253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3253(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3253(t0,t1);}

C_noret_decl(trf_3248)
static void C_fcall trf_3248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3248(t0,t1,t2);}

C_noret_decl(trf_2817)
static void C_fcall trf_2817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2817(t0,t1,t2);}

C_noret_decl(trf_3000)
static void C_fcall trf_3000(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3000(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3000(t0,t1,t2);}

C_noret_decl(trf_3006)
static void C_fcall trf_3006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3006(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3006(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3057)
static void C_fcall trf_3057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3057(t0,t1,t2);}

C_noret_decl(trf_2820)
static void C_fcall trf_2820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2820(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2820(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2832)
static void C_fcall trf_2832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2832(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2832(t0,t1,t2,t3);}

C_noret_decl(trf_2851)
static void C_fcall trf_2851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2851(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2851(t0,t1);}

C_noret_decl(trf_2318)
static void C_fcall trf_2318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2318(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2318(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2758)
static void C_fcall trf_2758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2758(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2758(t0,t1);}

C_noret_decl(trf_2677)
static void C_fcall trf_2677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2677(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2677(t0,t1);}

C_noret_decl(trf_2631)
static void C_fcall trf_2631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2631(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2631(t0,t1);}

C_noret_decl(trf_2634)
static void C_fcall trf_2634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2634(t0,t1);}

C_noret_decl(trf_2594)
static void C_fcall trf_2594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2594(t0,t1);}

C_noret_decl(trf_2562)
static void C_fcall trf_2562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2562(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2562(t0,t1);}

C_noret_decl(trf_2504)
static void C_fcall trf_2504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2504(t0,t1);}

C_noret_decl(trf_2336)
static void C_fcall trf_2336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2336(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2336(t0,t1);}

C_noret_decl(trf_2348)
static void C_fcall trf_2348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2348(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2348(t0,t1);}

C_noret_decl(trf_2339)
static void C_fcall trf_2339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2339(t0,t1);}

C_noret_decl(trf_2299)
static void C_fcall trf_2299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2299(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2299(t0,t1,t2);}

C_noret_decl(trf_2259)
static void C_fcall trf_2259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2259(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2259(t0,t1,t2);}

C_noret_decl(trf_2278)
static void C_fcall trf_2278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2278(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2278(t0,t1);}

C_noret_decl(trf_2210)
static void C_fcall trf_2210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2210(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2210(t0,t1,t2);}

C_noret_decl(trf_2128)
static void C_fcall trf_2128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2128(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2128(t0,t1);}

C_noret_decl(trf_1967)
static void C_fcall trf_1967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1967(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1967(t0,t1,t2,t3);}

C_noret_decl(trf_1995)
static void C_fcall trf_1995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1995(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1995(t0,t1,t2);}

C_noret_decl(trf_1821)
static void C_fcall trf_1821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1821(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1821(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1853)
static void C_fcall trf_1853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1853(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1853(t0,t1);}

C_noret_decl(trf_1870)
static void C_fcall trf_1870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1870(t0,t1,t2);}

C_noret_decl(trf_1889)
static void C_fcall trf_1889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1889(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1889(t0,t1);}

C_noret_decl(trf_1850)
static void C_fcall trf_1850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1850(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1850(t0,t1);}

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
C_eval_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_eval_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("eval_toplevel"));
C_check_nursery_minimum(9);
if(!C_demand(9)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(7601)){
C_save(t1);
C_rereclaim2(7601*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(9);
C_initialize_lf(lf,887);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[3]=C_h_intern(&lf[3],32,"\003syspathname-directory-separator");
lf[5]=C_h_intern(&lf[5],24,"\003syscore-library-modules");
tmp=C_intern(C_heaptop,6,"extras");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"lolevel");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"utils");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"tcp");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"regex");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"posix");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"match");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-1");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-4");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-14");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-18");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-13");
C_save(tmp);
lf[6]=C_h_list(12,C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(12);
lf[7]=C_h_intern(&lf[7],28,"\003sysexplicit-library-modules");
tmp=C_static_string(C_heaptop,10,"libchicken");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[9]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,12,"cygchicken-0");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[11]=C_h_pair(C_restore,tmp);
lf[13]=C_static_string(C_heaptop,6,".dylib");
lf[15]=C_static_string(C_heaptop,4,".dll");
lf[17]=C_static_string(C_heaptop,3,".sl");
lf[19]=C_static_string(C_heaptop,3,".so");
lf[21]=C_static_string(C_heaptop,4,".scm");
lf[23]=C_static_string(C_heaptop,10,"setup-info");
lf[25]=C_static_string(C_heaptop,18,"CHICKEN_REPOSITORY");
tmp=C_intern(C_heaptop,18,"chicken-ffi-macros");
C_save(tmp);
tmp=C_intern(C_heaptop,19,"chicken-more-macros");
C_save(tmp);
lf[27]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,7,"chicken");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-23");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-30");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-39");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-6");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-10");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-2");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-31");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-69");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-28");
C_save(tmp);
lf[29]=C_h_list(10,C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(10);
tmp=C_intern(C_heaptop,7,"srfi-11");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-8");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-6");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-16");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-15");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-26");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-55");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"srfi-9");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"srfi-17");
C_save(tmp);
lf[31]=C_h_list(9,C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(9);
lf[32]=C_h_intern(&lf[32],6,"getenv");
lf[33]=C_h_intern(&lf[33],12,"chicken-home");
lf[34]=C_h_intern(&lf[34],17,"\003syspeek-c-string");
lf[35]=C_static_string(C_heaptop,5,"share");
lf[36]=C_static_string(C_heaptop,6,"/share");
lf[37]=C_h_intern(&lf[37],17,"\003sysstring-append");
lf[38]=C_static_string(C_heaptop,14,"CHICKEN_PREFIX");
lf[39]=C_static_string(C_heaptop,12,"CHICKEN_HOME");
lf[40]=C_static_lambda_info(C_heaptop,14,"(chicken-home)");
lf[41]=C_h_intern(&lf[41],21,"\003sysmacro-environment");
lf[42]=C_h_intern(&lf[42],20,"\003sysregister-macro-2");
lf[43]=C_static_lambda_info(C_heaptop,14,"(a1754 form20)");
lf[44]=C_h_intern(&lf[44],19,"\003syshash-table-set!");
lf[45]=C_static_lambda_info(C_heaptop,41,"(##sys#register-macro-2 name18 handler19)");
lf[46]=C_h_intern(&lf[46],18,"\003sysregister-macro");
lf[47]=C_static_lambda_info(C_heaptop,14,"(a1770 form23)");
lf[48]=C_static_lambda_info(C_heaptop,39,"(##sys#register-macro name21 handler22)");
lf[49]=C_h_intern(&lf[49],14,"\003syscopy-macro");
lf[50]=C_h_intern(&lf[50],18,"\003syshash-table-ref");
lf[51]=C_static_lambda_info(C_heaptop,30,"(##sys#copy-macro old24 new25)");
lf[52]=C_h_intern(&lf[52],6,"macro\077");
lf[53]=C_static_lambda_info(C_heaptop,14,"(macro\077 sym26)");
lf[54]=C_h_intern(&lf[54],15,"undefine-macro!");
lf[55]=C_static_lambda_info(C_heaptop,24,"(undefine-macro! name29)");
lf[56]=C_h_intern(&lf[56],13,"string-append");
lf[57]=C_h_intern(&lf[57],17,"\003sysmacroexpand-0");
lf[58]=C_h_intern(&lf[58],9,"\003sysabort");
lf[59]=C_h_intern(&lf[59],9,"condition");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"message");
lf[60]=C_h_pair(C_restore,tmp);
lf[61]=C_static_string(C_heaptop,21,"during expansion of (");
lf[62]=C_static_string(C_heaptop,8," ...) - ");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"message");
lf[63]=C_h_pair(C_restore,tmp);
lf[64]=C_static_lambda_info(C_heaptop,11,"(copy ps44)");
lf[65]=C_h_intern(&lf[65],3,"exn");
lf[66]=C_static_lambda_info(C_heaptop,7,"(a1841)");
lf[67]=C_static_lambda_info(C_heaptop,12,"(a1835 ex42)");
lf[68]=C_static_lambda_info(C_heaptop,7,"(a1948)");
lf[69]=C_static_lambda_info(C_heaptop,7,"(a1960)");
lf[70]=C_static_lambda_info(C_heaptop,15,"(a1954 . g4048)");
lf[71]=C_static_lambda_info(C_heaptop,7,"(a1942)");
lf[72]=C_h_intern(&lf[72],22,"with-exception-handler");
lf[73]=C_static_lambda_info(C_heaptop,13,"(a1829 g3941)");
lf[74]=C_h_intern(&lf[74],30,"call-with-current-continuation");
lf[75]=C_static_lambda_info(C_heaptop,37,"(call-handler name36 handler37 exp38)");
lf[76]=C_h_intern(&lf[76],21,"\003syssyntax-error-hook");
lf[77]=C_static_string(C_heaptop,28,"invalid syntax in macro form");
lf[78]=C_static_lambda_info(C_heaptop,10,"(scan x58)");
lf[79]=C_static_lambda_info(C_heaptop,21,"(expand exp49 head50)");
lf[80]=C_h_intern(&lf[80],3,"let");
lf[81]=C_h_intern(&lf[81],16,"\004coreloop-lambda");
lf[82]=C_h_intern(&lf[82],6,"letrec");
lf[83]=C_h_intern(&lf[83],8,"\004coreapp");
lf[84]=C_h_intern(&lf[84],7,"\003sysmap");
lf[85]=C_h_intern(&lf[85],4,"cadr");
lf[86]=C_static_lambda_info(C_heaptop,11,"(a2114 b64)");
lf[87]=C_h_intern(&lf[87],16,"\003syscheck-syntax");
tmp=C_intern(C_heaptop,1,"_");
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
lf[88]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(2);
C_save(tmp);
lf[89]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[90]=C_h_intern(&lf[90],10,"\003syssetter");
lf[91]=C_h_intern(&lf[91],6,"append");
lf[92]=C_h_intern(&lf[92],4,"set!");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[93]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[94]=C_h_intern(&lf[94],9,"\004coreset!");
lf[95]=C_static_lambda_info(C_heaptop,32,"(##sys#macroexpand-0 exp32 me33)");
lf[96]=C_h_intern(&lf[96],38,"\003syscompiler-toplevel-macroexpand-hook");
lf[97]=C_static_lambda_info(C_heaptop,48,"(##sys#compiler-toplevel-macroexpand-hook exp71)");
lf[98]=C_h_intern(&lf[98],41,"\003sysinterpreter-toplevel-macroexpand-hook");
lf[99]=C_static_lambda_info(C_heaptop,51,"(##sys#interpreter-toplevel-macroexpand-hook exp72)");
lf[100]=C_h_intern(&lf[100],23,"\003sysmacroexpand-1-local");
lf[101]=C_static_lambda_info(C_heaptop,38,"(##sys#macroexpand-1-local exp73 me74)");
lf[102]=C_h_intern(&lf[102],25,"\003sysenable-runtime-macros");
lf[103]=C_h_intern(&lf[103],11,"macroexpand");
lf[104]=C_static_lambda_info(C_heaptop,7,"(a2215)");
lf[105]=C_static_lambda_info(C_heaptop,22,"(a2221 exp28082 m8183)");
lf[106]=C_static_lambda_info(C_heaptop,12,"(loop exp79)");
lf[107]=C_static_lambda_info(C_heaptop,26,"(macroexpand exp75 . me76)");
lf[108]=C_h_intern(&lf[108],13,"macroexpand-1");
lf[109]=C_static_lambda_info(C_heaptop,28,"(macroexpand-1 exp87 . me88)");
lf[110]=C_h_intern(&lf[110],25,"\003sysextended-lambda-list\077");
lf[111]=C_h_intern(&lf[111],6,"#!rest");
lf[112]=C_h_intern(&lf[112],10,"#!optional");
lf[113]=C_h_intern(&lf[113],5,"#!key");
lf[114]=C_static_lambda_info(C_heaptop,14,"(loop llist91)");
lf[115]=C_static_lambda_info(C_heaptop,37,"(##sys#extended-lambda-list\077 llist89)");
lf[116]=C_h_intern(&lf[116],7,"reverse");
lf[117]=C_h_intern(&lf[117],6,"gensym");
lf[118]=C_h_intern(&lf[118],31,"\003sysexpand-extended-lambda-list");
lf[119]=C_static_lambda_info(C_heaptop,12,"(err msg106)");
lf[120]=C_h_intern(&lf[120],9,":optional");
lf[121]=C_h_intern(&lf[121],5,"cadar");
lf[122]=C_h_intern(&lf[122],4,"caar");
lf[123]=C_h_intern(&lf[123],13,"let-optionals");
lf[124]=C_h_intern(&lf[124],14,"let-optionals*");
lf[125]=C_h_intern(&lf[125],10,"\003sysappend");
lf[126]=C_h_intern(&lf[126],4,"let*");
lf[127]=C_h_intern(&lf[127],5,"quote");
lf[128]=C_h_intern(&lf[128],15,"\003sysget-keyword");
lf[129]=C_h_intern(&lf[129],6,"lambda");
lf[130]=C_h_intern(&lf[130],15,"string->keyword");
lf[131]=C_static_lambda_info(C_heaptop,12,"(a2476 k117)");
lf[132]=C_static_string(C_heaptop,43,"rest argument list specified more than once");
lf[133]=C_static_string(C_heaptop,45,"`#!optional\047 argument marker in wrong context");
lf[134]=C_static_string(C_heaptop,35,"invalid syntax of `#!rest\047 argument");
lf[135]=C_static_string(C_heaptop,41,"`#!rest\047 argument marker in wrong context");
lf[136]=C_static_string(C_heaptop,40,"`#!key\047 argument marker in wrong context");
lf[137]=C_static_string(C_heaptop,48,"invalid lambda list syntax after `#!rest\047 marker");
lf[138]=C_static_string(C_heaptop,32,"invalid required argument syntax");
lf[139]=C_static_string(C_heaptop,48,"invalid lambda list syntax after `#!rest\047 marker");
lf[140]=C_static_string(C_heaptop,26,"invalid lambda list syntax");
lf[141]=C_static_string(C_heaptop,26,"invalid lambda list syntax");
lf[142]=C_static_lambda_info(C_heaptop,44,"(loop mode111 req112 opt113 key114 llist115)");
lf[143]=C_static_lambda_info(C_heaptop,61,"(##sys#expand-extended-lambda-list llist0101 body102 errh103)");
lf[144]=C_h_intern(&lf[144],3,"map");
lf[145]=C_h_intern(&lf[145],21,"\003syscanonicalize-body");
lf[146]=C_h_intern(&lf[146],5,"begin");
lf[147]=C_h_intern(&lf[147],6,"define");
lf[148]=C_h_intern(&lf[148],13,"define-values");
lf[149]=C_static_lambda_info(C_heaptop,23,"(loop body2162 exps163)");
lf[150]=C_h_intern(&lf[150],20,"\003syscall-with-values");
lf[151]=C_static_lambda_info(C_heaptop,17,"(a2955 v173 t174)");
lf[152]=C_static_lambda_info(C_heaptop,18,"(a2930 vs170 x171)");
lf[153]=C_static_lambda_info(C_heaptop,17,"(a2969 v168 x169)");
lf[154]=C_h_intern(&lf[154],14,"\004coreundefined");
lf[155]=C_static_lambda_info(C_heaptop,12,"(a2979 v167)");
lf[156]=C_static_lambda_info(C_heaptop,48,"(fini vars156 vals157 mvars158 mvals159 body160)");
lf[157]=C_h_intern(&lf[157],25,"\003sysexpand-curried-define");
tmp=C_intern(C_heaptop,6,"define");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[158]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,6,"define");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[159]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[160]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,6,"define");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[161]=C_h_pair(C_restore,tmp);
lf[162]=C_static_lambda_info(C_heaptop,12,"(loop2 x186)");
tmp=C_intern(C_heaptop,6,"define");
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
lf[163]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,13,"define-values");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[164]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[165]=C_h_pair(C_restore,tmp);
lf[166]=C_static_lambda_info(C_heaptop,48,"(loop body177 vars178 vals179 mvars180 mvals181)");
lf[167]=C_static_lambda_info(C_heaptop,16,"(expand body175)");
lf[168]=C_static_lambda_info(C_heaptop,15,"(body146 me152)");
lf[169]=C_static_lambda_info(C_heaptop,28,"(def-container149 %me144200)");
lf[170]=C_static_lambda_info(C_heaptop,11,"(def-me148)");
lf[171]=C_h_intern(&lf[171],9,"\003syserror");
lf[172]=C_static_lambda_info(C_heaptop,53,"(##sys#canonicalize-body body141 lookup142 . g140143)");
lf[173]=C_h_intern(&lf[173],20,"\003sysmatch-expression");
lf[174]=C_static_lambda_info(C_heaptop,17,"(mwalk x212 p213)");
lf[175]=C_static_lambda_info(C_heaptop,46,"(##sys#match-expression exp207 pat208 vars209)");
lf[176]=C_static_lambda_info(C_heaptop,22,"(loop head227 body228)");
lf[177]=C_static_lambda_info(C_heaptop,45,"(##sys#expand-curried-define head223 body224)");
lf[178]=C_h_intern(&lf[178],15,"\003syshash-symbol");
lf[179]=C_static_lambda_info(C_heaptop,29,"(##sys#hash-symbol s234 n235)");
lf[180]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[181]=C_static_lambda_info(C_heaptop,35,"(##sys#hash-table-ref ht239 key240)");
lf[182]=C_static_lambda_info(C_heaptop,16,"(loop bucket252)");
lf[183]=C_static_lambda_info(C_heaptop,43,"(##sys#hash-table-set! ht246 key247 val248)");
lf[184]=C_h_intern(&lf[184],23,"\003syshash-table-for-each");
lf[185]=C_static_lambda_info(C_heaptop,17,"(a3591 bucket261)");
lf[186]=C_h_intern(&lf[186],12,"\003sysfor-each");
lf[187]=C_static_lambda_info(C_heaptop,12,"(do258 i260)");
lf[188]=C_static_lambda_info(C_heaptop,38,"(##sys#hash-table-for-each p255 ht256)");
lf[189]=C_h_intern(&lf[189],28,"\003sysarbitrary-unbound-symbol");
lf[190]=C_h_intern(&lf[190],23,"\003syshash-table-location");
lf[191]=C_static_lambda_info(C_heaptop,16,"(loop bucket271)");
lf[192]=C_static_lambda_info(C_heaptop,48,"(##sys#hash-table-location ht265 key266 addp267)");
lf[193]=C_h_intern(&lf[193],20,"\003syseval-environment");
lf[194]=C_h_intern(&lf[194],26,"\003sysenvironment-is-mutable");
lf[195]=C_h_intern(&lf[195],18,"\003syseval-decorator");
lf[196]=C_static_lambda_info(C_heaptop,12,"(a3678 x280)");
lf[197]=C_h_intern(&lf[197],20,"\003sysmake-lambda-info");
lf[198]=C_h_intern(&lf[198],17,"get-output-string");
lf[199]=C_h_intern(&lf[199],5,"write");
lf[200]=C_h_intern(&lf[200],18,"open-output-string");
lf[201]=C_static_lambda_info(C_heaptop,17,"(a3691 p281 i282)");
lf[202]=C_h_intern(&lf[202],19,"\003sysdecorate-lambda");
lf[203]=C_static_lambda_info(C_heaptop,46,"(##sys#eval-decorator p276 ll277 h278 cntr279)");
lf[204]=C_h_intern(&lf[204],19,"\003sysunbound-in-eval");
lf[205]=C_h_intern(&lf[205],20,"\003syseval-debug-level");
lf[206]=C_h_intern(&lf[206],6,"cadadr");
lf[207]=C_h_intern(&lf[207],20,"with-input-from-file");
lf[208]=C_h_intern(&lf[208],7,"display");
lf[209]=C_h_intern(&lf[209],22,"\003syscompile-to-closure");
lf[210]=C_static_lambda_info(C_heaptop,11,"(loop i339)");
lf[211]=C_static_lambda_info(C_heaptop,20,"(loop envs314 ei315)");
lf[212]=C_static_lambda_info(C_heaptop,20,"(lookup var311 e312)");
lf[213]=C_static_lambda_info(C_heaptop,7,"(a3767)");
lf[214]=C_static_lambda_info(C_heaptop,17,"(a3773 i322 j323)");
lf[215]=C_static_lambda_info(C_heaptop,22,"(defined\077 var320 e321)");
lf[216]=C_static_lambda_info(C_heaptop,33,"(macroexpand-1-checked x341 e342)");
lf[217]=C_h_intern(&lf[217],18,"\003syscurrent-thread");
lf[218]=C_static_lambda_info(C_heaptop,33,"(emit-trace-info info347 cntr348)");
lf[219]=C_static_lambda_info(C_heaptop,40,"(emit-syntax-trace-info info350 cntr351)");
lf[220]=C_static_lambda_info(C_heaptop,34,"(decorate p352 ll353 h354 cntr355)");
lf[221]=C_static_lambda_info(C_heaptop,7,"(a3956)");
lf[222]=C_static_lambda_info(C_heaptop,13,"(f_4026 v369)");
lf[223]=C_static_lambda_info(C_heaptop,13,"(f_4035 v370)");
lf[224]=C_static_string(C_heaptop,16,"unbound variable");
lf[225]=C_static_lambda_info(C_heaptop,15,"(f_3980 . v364)");
lf[226]=C_static_string(C_heaptop,33,"reference to undefined identifier");
lf[227]=C_static_lambda_info(C_heaptop,15,"(f_4000 . v367)");
lf[228]=C_h_intern(&lf[228],32,"\003syssymbol-has-toplevel-binding\077");
lf[229]=C_static_lambda_info(C_heaptop,17,"(a3962 i361 j362)");
lf[230]=C_static_lambda_info(C_heaptop,15,"(f_4052 . v373)");
lf[231]=C_static_lambda_info(C_heaptop,15,"(f_4060 . v374)");
lf[232]=C_static_lambda_info(C_heaptop,15,"(f_4068 . v375)");
lf[233]=C_static_lambda_info(C_heaptop,15,"(f_4076 . v376)");
lf[234]=C_static_lambda_info(C_heaptop,15,"(f_4078 . v377)");
lf[235]=C_static_lambda_info(C_heaptop,15,"(f_4089 . v378)");
lf[236]=C_static_lambda_info(C_heaptop,15,"(f_4091 . v379)");
lf[237]=C_static_lambda_info(C_heaptop,15,"(f_4102 . v384)");
lf[238]=C_static_lambda_info(C_heaptop,15,"(f_4161 . v392)");
lf[239]=C_static_lambda_info(C_heaptop,15,"(f_4169 . v393)");
lf[240]=C_static_lambda_info(C_heaptop,15,"(f_4177 . v394)");
lf[241]=C_static_lambda_info(C_heaptop,15,"(f_4185 . v395)");
lf[242]=C_static_lambda_info(C_heaptop,15,"(f_4193 . v396)");
lf[243]=C_static_lambda_info(C_heaptop,15,"(f_4201 . v397)");
lf[244]=C_static_lambda_info(C_heaptop,15,"(f_4209 . v398)");
lf[245]=C_static_lambda_info(C_heaptop,15,"(f_4211 . v399)");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[246]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[247]=C_h_intern(&lf[247],15,"\004coreglobal-ref");
lf[248]=C_static_lambda_info(C_heaptop,15,"(f_4228 . v403)");
lf[249]=C_static_lambda_info(C_heaptop,15,"(f_4233 . v404)");
lf[250]=C_h_intern(&lf[250],10,"\004corecheck");
lf[251]=C_h_intern(&lf[251],14,"\004coreimmutable");
lf[252]=C_static_lambda_info(C_heaptop,13,"(f_4267 v405)");
lf[253]=C_h_intern(&lf[253],2,"if");
lf[254]=C_static_lambda_info(C_heaptop,13,"(f_4287 v409)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[255]=C_h_pair(C_restore,tmp);
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
lf[256]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[257]=C_h_pair(C_restore,tmp);
lf[258]=C_static_lambda_info(C_heaptop,13,"(f_4375 v417)");
lf[259]=C_static_lambda_info(C_heaptop,13,"(f_4400 v422)");
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[260]=C_h_pair(C_restore,tmp);
lf[261]=C_static_lambda_info(C_heaptop,7,"(a4449)");
lf[262]=C_static_lambda_info(C_heaptop,13,"(f_4514 v437)");
lf[263]=C_static_lambda_info(C_heaptop,13,"(f_4527 v438)");
lf[264]=C_static_lambda_info(C_heaptop,13,"(f_4482 v433)");
lf[265]=C_static_string(C_heaptop,32,"assignment to immutable variable");
lf[266]=C_static_lambda_info(C_heaptop,15,"(f_4491 . v434)");
lf[267]=C_static_string(C_heaptop,34,"assignment of undefined identifier");
lf[268]=C_static_lambda_info(C_heaptop,13,"(f_4499 v436)");
lf[269]=C_static_lambda_info(C_heaptop,17,"(a4455 i429 j430)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[270]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[271]=C_static_lambda_info(C_heaptop,13,"(f_4573 v451)");
lf[272]=C_static_lambda_info(C_heaptop,13,"(f_4610 v454)");
lf[273]=C_static_lambda_info(C_heaptop,13,"(f_4665 v459)");
lf[274]=C_static_lambda_info(C_heaptop,13,"(f_4735 v465)");
lf[275]=C_static_lambda_info(C_heaptop,21,"(do470 i472 vlist473)");
lf[276]=C_h_intern(&lf[276],15,"\003sysmake-vector");
lf[277]=C_static_lambda_info(C_heaptop,13,"(f_4799 v468)");
lf[278]=C_static_lambda_info(C_heaptop,12,"(a4844 x467)");
lf[279]=C_static_lambda_info(C_heaptop,15,"(a4866 g446447)");
lf[280]=C_static_lambda_info(C_heaptop,12,"(a4872 x443)");
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
lf[281]=C_h_pair(C_restore,tmp);
lf[282]=C_h_intern(&lf[282],1,"\077");
lf[283]=C_static_lambda_info(C_heaptop,14,"(a4925 . r502)");
lf[284]=C_static_lambda_info(C_heaptop,13,"(f_4920 v501)");
lf[285]=C_static_lambda_info(C_heaptop,7,"(a4944)");
lf[286]=C_static_lambda_info(C_heaptop,13,"(f_4939 v503)");
lf[287]=C_static_lambda_info(C_heaptop,20,"(a4968 a1505 . r506)");
lf[288]=C_static_lambda_info(C_heaptop,13,"(f_4963 v504)");
lf[289]=C_static_lambda_info(C_heaptop,13,"(a4987 a1508)");
lf[290]=C_static_lambda_info(C_heaptop,13,"(f_4982 v507)");
lf[291]=C_static_lambda_info(C_heaptop,26,"(a5015 a1510 a2511 . r512)");
lf[292]=C_static_lambda_info(C_heaptop,13,"(f_5010 v509)");
lf[293]=C_static_lambda_info(C_heaptop,19,"(a5034 a1514 a2515)");
lf[294]=C_static_lambda_info(C_heaptop,13,"(f_5029 v513)");
lf[295]=C_static_lambda_info(C_heaptop,32,"(a5062 a1517 a2518 a3519 . r520)");
lf[296]=C_static_lambda_info(C_heaptop,13,"(f_5057 v516)");
lf[297]=C_static_lambda_info(C_heaptop,25,"(a5081 a1522 a2523 a3524)");
lf[298]=C_static_lambda_info(C_heaptop,13,"(f_5076 v521)");
lf[299]=C_static_lambda_info(C_heaptop,38,"(a5109 a1526 a2527 a3528 a4529 . r530)");
lf[300]=C_static_lambda_info(C_heaptop,13,"(f_5104 v525)");
lf[301]=C_h_intern(&lf[301],10,"\003sysvector");
lf[302]=C_static_lambda_info(C_heaptop,31,"(a5128 a1532 a2533 a3534 a4535)");
lf[303]=C_static_lambda_info(C_heaptop,13,"(f_5123 v531)");
lf[304]=C_static_lambda_info(C_heaptop,28,"(do588 n590 args591 last592)");
lf[305]=C_static_lambda_info(C_heaptop,15,"(a5150 . as537)");
lf[306]=C_static_lambda_info(C_heaptop,13,"(f_5145 v536)");
lf[307]=C_static_string(C_heaptop,18,"bad argument count");
lf[308]=C_static_lambda_info(C_heaptop,15,"(a5173 . as539)");
lf[309]=C_static_lambda_info(C_heaptop,13,"(f_5168 v538)");
lf[310]=C_static_lambda_info(C_heaptop,15,"(a5211 g493494)");
lf[311]=C_static_lambda_info(C_heaptop,31,"(a4902 vars488 argc489 rest490)");
lf[312]=C_h_intern(&lf[312],25,"\003sysdecompose-lambda-list");
lf[313]=C_static_lambda_info(C_heaptop,7,"(a5227)");
lf[314]=C_static_lambda_info(C_heaptop,30,"(a5233 llist483485 body484486)");
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
lf[315]=C_h_pair(C_restore,tmp);
lf[316]=C_h_intern(&lf[316],17,"\004corenamed-lambda");
lf[317]=C_h_intern(&lf[317],23,"\004corerequire-for-syntax");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[318]=C_h_pair(C_restore,tmp);
lf[319]=C_h_intern(&lf[319],11,"\003sysrequire");
lf[320]=C_static_lambda_info(C_heaptop,12,"(a5312 x546)");
lf[321]=C_h_intern(&lf[321],31,"\003syslookup-runtime-requirements");
lf[322]=C_static_lambda_info(C_heaptop,12,"(a5318 x544)");
lf[323]=C_h_intern(&lf[323],22,"\004corerequire-extension");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[324]=C_h_pair(C_restore,tmp);
lf[325]=C_h_intern(&lf[325],22,"\003sysdo-the-right-thing");
lf[326]=C_static_lambda_info(C_heaptop,7,"(a5360)");
lf[327]=C_static_lambda_info(C_heaptop,25,"(a5370 exp550552 _551553)");
lf[328]=C_static_lambda_info(C_heaptop,13,"(loop ids549)");
lf[329]=C_h_intern(&lf[329],24,"\004coreelaborationtimeonly");
lf[330]=C_h_intern(&lf[330],23,"\004coreelaborationtimetoo");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[331]=C_h_pair(C_restore,tmp);
lf[332]=C_h_intern(&lf[332],19,"\004corecompiletimetoo");
lf[333]=C_h_intern(&lf[333],20,"\004corecompiletimeonly");
lf[334]=C_h_intern(&lf[334],13,"\004corecallunit");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[335]=C_h_pair(C_restore,tmp);
lf[336]=C_h_intern(&lf[336],12,"\004coredeclare");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[337]=C_h_pair(C_restore,tmp);
lf[338]=C_h_intern(&lf[338],10,"\000compiling");
lf[339]=C_h_intern(&lf[339],12,"\003sysfeatures");
lf[340]=C_h_intern(&lf[340],28,"\010compilerprocess-declaration");
lf[341]=C_static_lambda_info(C_heaptop,12,"(a5449 d562)");
lf[342]=C_h_intern(&lf[342],8,"\003syswarn");
lf[343]=C_static_string(C_heaptop,44,"declarations are ignored in interpreted code");
lf[344]=C_h_intern(&lf[344],18,"\004coredefine-inline");
lf[345]=C_h_intern(&lf[345],20,"\004coredefine-constant");
lf[346]=C_h_intern(&lf[346],14,"\004coreprimitive");
lf[347]=C_static_string(C_heaptop,38,"can not evaluate compiler-special-form");
lf[348]=C_h_intern(&lf[348],8,"location");
lf[349]=C_static_string(C_heaptop,38,"can not evaluate compiler-special-form");
lf[350]=C_h_intern(&lf[350],11,"\004coreinline");
lf[351]=C_h_intern(&lf[351],20,"\004coreinline_allocate");
lf[352]=C_h_intern(&lf[352],19,"\004coreforeign-lambda");
lf[353]=C_h_intern(&lf[353],28,"\004coredefine-foreign-variable");
lf[354]=C_h_intern(&lf[354],29,"\004coredefine-external-variable");
lf[355]=C_h_intern(&lf[355],17,"\004corelet-location");
lf[356]=C_h_intern(&lf[356],22,"\004coreforeign-primitive");
lf[357]=C_h_intern(&lf[357],20,"\004coreforeign-lambda*");
lf[358]=C_h_intern(&lf[358],24,"\004coredefine-foreign-type");
lf[359]=C_static_string(C_heaptop,25,"illegal non-atomic object");
lf[360]=C_h_intern(&lf[360],11,"\003sysnumber\077");
lf[361]=C_static_lambda_info(C_heaptop,38,"(compile x356 e357 h358 tf359 cntr360)");
lf[362]=C_static_lambda_info(C_heaptop,11,"(loop n598)");
lf[363]=C_static_string(C_heaptop,20,"malformed expression");
lf[364]=C_static_lambda_info(C_heaptop,13,"(f_5721 v610)");
lf[365]=C_static_lambda_info(C_heaptop,13,"(f_5741 v613)");
lf[366]=C_static_lambda_info(C_heaptop,13,"(f_5772 v617)");
lf[367]=C_static_lambda_info(C_heaptop,13,"(f_5810 v622)");
lf[368]=C_static_lambda_info(C_heaptop,13,"(f_5855 v628)");
lf[369]=C_static_lambda_info(C_heaptop,12,"(a5905 a633)");
lf[370]=C_static_lambda_info(C_heaptop,13,"(f_5889 v632)");
lf[371]=C_static_lambda_info(C_heaptop,12,"(a5911 a631)");
lf[372]=C_static_lambda_info(C_heaptop,38,"(compile-call x600 e601 tf602 cntr603)");
lf[373]=C_static_lambda_info(C_heaptop,56,"(##sys#compile-to-closure exp295 env296 me297 . cntr298)");
lf[374]=C_h_intern(&lf[374],16,"\003syseval-handler");
lf[375]=C_h_intern(&lf[375],12,"eval-handler");
lf[376]=C_h_intern(&lf[376],4,"eval");
lf[377]=C_static_lambda_info(C_heaptop,20,"(eval x673 . env674)");
lf[378]=C_h_intern(&lf[378],24,"\003syssyntax-error-culprit");
lf[379]=C_static_string(C_heaptop,26,"illegal lambda-list syntax");
lf[380]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[381]=C_static_lambda_info(C_heaptop,31,"(loop llist681 vars682 argc683)");
lf[382]=C_static_lambda_info(C_heaptop,44,"(##sys#decompose-lambda-list llist0676 k677)");
lf[383]=C_h_intern(&lf[383],12,"load-verbose");
lf[384]=C_h_intern(&lf[384],14,"\003sysabort-load");
lf[385]=C_static_lambda_info(C_heaptop,8,"(f_6055)");
lf[386]=C_h_intern(&lf[386],21,"\003syscurrent-load-file");
lf[387]=C_h_intern(&lf[387],21,"\003syscurrent-load-path");
lf[388]=C_static_string(C_heaptop,0,"");
lf[389]=C_h_intern(&lf[389],22,"set-dynamic-load-mode!");
lf[390]=C_h_intern(&lf[390],21,"\003sysset-dlopen-flags!");
lf[391]=C_h_intern(&lf[391],6,"global");
lf[392]=C_h_intern(&lf[392],5,"local");
lf[393]=C_h_intern(&lf[393],4,"lazy");
lf[394]=C_h_intern(&lf[394],3,"now");
lf[395]=C_h_intern(&lf[395],15,"\003syssignal-hook");
lf[396]=C_static_string(C_heaptop,25,"invalid dynamic-load mode");
lf[397]=C_static_lambda_info(C_heaptop,14,"(loop mode691)");
lf[398]=C_static_lambda_info(C_heaptop,32,"(set-dynamic-load-mode! mode686)");
lf[399]=C_h_intern(&lf[399],4,"read");
lf[400]=C_h_intern(&lf[400],7,"newline");
lf[401]=C_h_intern(&lf[401],15,"open-input-file");
lf[402]=C_h_intern(&lf[402],16,"close-input-port");
lf[403]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[404]=C_static_lambda_info(C_heaptop,17,"(has-sep\077 str709)");
lf[405]=C_h_intern(&lf[405],8,"\003sysload");
lf[406]=C_static_lambda_info(C_heaptop,8,"(f_6212)");
lf[407]=C_h_intern(&lf[407],31,"\003sysread-error-with-line-number");
lf[408]=C_h_intern(&lf[408],19,"\003sysundefined-value");
lf[409]=C_static_lambda_info(C_heaptop,7,"(a6220)");
lf[410]=C_static_lambda_info(C_heaptop,7,"(a6243)");
lf[411]=C_static_lambda_info(C_heaptop,7,"(a6295)");
lf[412]=C_h_intern(&lf[412],17,"\003sysdisplay-times");
lf[413]=C_h_intern(&lf[413],14,"\003sysstop-timer");
lf[414]=C_static_lambda_info(C_heaptop,17,"(a6301 . t777778)");
lf[415]=C_h_intern(&lf[415],15,"\003sysstart-timer");
lf[416]=C_static_lambda_info(C_heaptop,7,"(a6283)");
lf[417]=C_static_lambda_info(C_heaptop,12,"(a6326 r782)");
lf[418]=C_static_lambda_info(C_heaptop,20,"(a6317 . results781)");
lf[419]=C_static_lambda_info(C_heaptop,12,"(do774 x776)");
lf[420]=C_h_intern(&lf[420],4,"load");
lf[421]=C_static_string(C_heaptop,30,"unable to load compiled module");
lf[422]=C_h_intern(&lf[422],9,"peek-char");
lf[423]=C_static_lambda_info(C_heaptop,7,"(a6246)");
lf[424]=C_static_lambda_info(C_heaptop,7,"(a6352)");
lf[425]=C_h_intern(&lf[425],16,"\003sysdynamic-wind");
lf[426]=C_static_lambda_info(C_heaptop,7,"(a6234)");
lf[427]=C_static_lambda_info(C_heaptop,7,"(a6361)");
lf[428]=C_h_intern(&lf[428],13,"\003syssubstring");
lf[429]=C_static_string(C_heaptop,0,"");
lf[430]=C_static_lambda_info(C_heaptop,15,"(a6206 abrt745)");
lf[431]=C_h_intern(&lf[431],9,"\003sysdload");
lf[432]=C_h_intern(&lf[432],17,"\003sysmake-c-string");
lf[433]=C_static_string(C_heaptop,1,".");
lf[434]=C_h_intern(&lf[434],11,"\000file-error");
lf[435]=C_static_string(C_heaptop,17,"can not open file");
lf[436]=C_static_string(C_heaptop,5," ...\012");
lf[437]=C_static_string(C_heaptop,10,"; loading ");
lf[438]=C_h_intern(&lf[438],13,"\003sysfile-info");
lf[439]=C_h_intern(&lf[439],26,"\003sysload-dynamic-extension");
lf[440]=C_h_intern(&lf[440],11,"\000type-error");
lf[441]=C_static_string(C_heaptop,40,"bad argument type - not a port or string");
lf[442]=C_h_intern(&lf[442],5,"port\077");
lf[443]=C_h_intern(&lf[443],20,"\003sysexpand-home-path");
lf[444]=C_static_lambda_info(C_heaptop,29,"(body721 timer727 printer728)");
lf[445]=C_static_lambda_info(C_heaptop,29,"(def-printer724 %timer719800)");
lf[446]=C_static_lambda_info(C_heaptop,14,"(def-timer723)");
lf[447]=C_static_lambda_info(C_heaptop,50,"(##sys#load input715 evaluator716 pf717 . g714718)");
lf[448]=C_h_intern(&lf[448],21,"\003syscurrent-namespace");
lf[449]=C_static_lambda_info(C_heaptop,7,"(a6576)");
lf[450]=C_static_lambda_info(C_heaptop,7,"(a6584)");
lf[451]=C_static_lambda_info(C_heaptop,7,"(a6613)");
lf[452]=C_static_lambda_info(C_heaptop,33,"(load filename806 . evaluator807)");
lf[453]=C_h_intern(&lf[453],13,"load-relative");
lf[454]=C_static_lambda_info(C_heaptop,7,"(a6627)");
lf[455]=C_static_lambda_info(C_heaptop,7,"(a6635)");
lf[456]=C_static_lambda_info(C_heaptop,7,"(a6678)");
lf[457]=C_static_lambda_info(C_heaptop,42,"(load-relative filename818 . evaluator819)");
lf[458]=C_h_intern(&lf[458],12,"load-noisily");
lf[459]=C_static_lambda_info(C_heaptop,7,"(a6701)");
lf[460]=C_static_lambda_info(C_heaptop,7,"(a6709)");
lf[461]=C_static_lambda_info(C_heaptop,7,"(a6715)");
lf[462]=C_static_lambda_info(C_heaptop,7,"(a6723)");
lf[463]=C_h_intern(&lf[463],8,"\000printer");
lf[464]=C_static_lambda_info(C_heaptop,7,"(a6726)");
lf[465]=C_h_intern(&lf[465],5,"\000time");
lf[466]=C_static_lambda_info(C_heaptop,7,"(a6729)");
lf[467]=C_h_intern(&lf[467],10,"\000evaluator");
lf[468]=C_static_lambda_info(C_heaptop,36,"(load-noisily filename831 . g830832)");
lf[469]=C_h_intern(&lf[469],26,"\003sysload-library-extension");
lf[470]=C_h_intern(&lf[470],6,"cygwin");
lf[471]=C_h_intern(&lf[471],34,"\003sysdefault-dynamic-load-libraries");
lf[472]=C_h_intern(&lf[472],22,"dynamic-load-libraries");
lf[473]=C_h_intern(&lf[473],16,"\003sysload-library");
lf[474]=C_static_lambda_info(C_heaptop,14,"(loop libs869)");
lf[475]=C_static_string(C_heaptop,5," ...\012");
lf[476]=C_static_string(C_heaptop,18,"; loading library ");
lf[477]=C_static_string(C_heaptop,2,"C_");
lf[478]=C_static_string(C_heaptop,9,"_toplevel");
lf[479]=C_h_intern(&lf[479],24,"\003sysstring->c-identifier");
lf[480]=C_h_intern(&lf[480],16,"\003sys->feature-id");
lf[481]=C_static_lambda_info(C_heaptop,36,"(##sys#load-library uname859 lib860)");
lf[482]=C_h_intern(&lf[482],12,"load-library");
lf[483]=C_static_string(C_heaptop,22,"unable to load library");
lf[484]=C_static_lambda_info(C_heaptop,32,"(load-library uname873 . lib874)");
lf[486]=C_static_lambda_info(C_heaptop,25,"(loop items883 i884 j885)");
lf[487]=C_static_lambda_info(C_heaptop,40,"(##sys#split-at-separator str879 sep880)");
lf[488]=C_h_intern(&lf[488],31,"\003syscanonicalize-extension-path");
lf[489]=C_static_string(C_heaptop,22,"invalid extension path");
lf[490]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[491]=C_static_lambda_info(C_heaptop,12,"(check p898)");
lf[492]=C_h_intern(&lf[492],18,"\003syssymbol->string");
lf[493]=C_static_string(C_heaptop,0,"");
lf[494]=C_static_string(C_heaptop,0,"");
lf[495]=C_static_lambda_info(C_heaptop,12,"(loop id894)");
lf[496]=C_static_lambda_info(C_heaptop,48,"(##sys#canonicalize-extension-path id889 loc890)");
lf[497]=C_h_intern(&lf[497],19,"\003sysrepository-path");
lf[498]=C_h_intern(&lf[498],15,"repository-path");
lf[499]=C_h_intern(&lf[499],12,"file-exists\077");
lf[500]=C_h_intern(&lf[500],18,"\003sysfind-extension");
lf[501]=C_static_lambda_info(C_heaptop,15,"(check path911)");
lf[502]=C_static_lambda_info(C_heaptop,15,"(loop paths916)");
lf[503]=C_h_intern(&lf[503],21,"\003sysinclude-pathnames");
tmp=C_static_string(C_heaptop,1,".");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[504]=C_h_pair(C_restore,tmp);
lf[505]=C_static_lambda_info(C_heaptop,35,"(##sys#find-extension p908 inc\077909)");
lf[506]=C_h_intern(&lf[506],21,"\003sysloaded-extensions");
lf[507]=C_h_intern(&lf[507],14,"string->symbol");
lf[508]=C_h_intern(&lf[508],18,"\003sysload-extension");
lf[509]=C_static_string(C_heaptop,22,"can not load extension");
lf[510]=C_static_lambda_info(C_heaptop,45,"(##sys#load-extension id923 loc924 . err\077925)");
lf[511]=C_h_intern(&lf[511],11,"\003sysprovide");
lf[512]=C_h_intern(&lf[512],7,"provide");
lf[513]=C_static_lambda_info(C_heaptop,13,"(a7251 id936)");
lf[514]=C_static_lambda_info(C_heaptop,24,"(##sys#provide . ids935)");
lf[515]=C_h_intern(&lf[515],13,"\003sysprovided\077");
lf[516]=C_h_intern(&lf[516],9,"provided\077");
lf[517]=C_static_lambda_info(C_heaptop,23,"(##sys#provided\077 id939)");
lf[518]=C_h_intern(&lf[518],7,"require");
lf[519]=C_static_lambda_info(C_heaptop,15,"(a7285 g941942)");
lf[520]=C_static_lambda_info(C_heaptop,24,"(##sys#require . ids940)");
lf[521]=C_h_intern(&lf[521],25,"\003sysextension-information");
lf[522]=C_static_lambda_info(C_heaptop,16,"(f_7310 g953954)");
lf[523]=C_static_string(C_heaptop,1,".");
lf[524]=C_static_lambda_info(C_heaptop,42,"(##sys#extension-information id947 loc948)");
lf[525]=C_h_intern(&lf[525],21,"extension-information");
lf[526]=C_static_lambda_info(C_heaptop,30,"(extension-information ext955)");
lf[527]=C_h_intern(&lf[527],14,"extension-info");
lf[528]=C_h_intern(&lf[528],18,"require-at-runtime");
lf[529]=C_static_lambda_info(C_heaptop,14,"(loop1 ids960)");
lf[530]=C_static_lambda_info(C_heaptop,42,"(##sys#lookup-runtime-requirements ids958)");
lf[531]=C_h_intern(&lf[531],12,"vector->list");
lf[532]=C_h_intern(&lf[532],11,"lset-adjoin");
lf[533]=C_h_intern(&lf[533],3,"eq\077");
lf[534]=C_static_lambda_info(C_heaptop,15,"(a7391 g972973)");
lf[535]=C_static_lambda_info(C_heaptop,7,"(a7397)");
lf[536]=C_h_intern(&lf[536],18,"hash-table-update!");
lf[537]=C_h_intern(&lf[537],26,"\010compilerfile-requirements");
lf[538]=C_h_intern(&lf[538],19,"syntax-requirements");
lf[539]=C_static_lambda_info(C_heaptop,15,"(add-req id971)");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[540]=C_h_pair(C_restore,tmp);
lf[541]=C_h_intern(&lf[541],18,"chicken-ffi-macros");
lf[542]=C_h_intern(&lf[542],19,"chicken-more-macros");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[543]=C_h_pair(C_restore,tmp);
lf[544]=C_h_intern(&lf[544],28,"\003sysresolve-include-filename");
lf[545]=C_h_intern(&lf[545],4,"uses");
lf[546]=C_h_intern(&lf[546],6,"syntax");
lf[547]=C_h_intern(&lf[547],17,"require-extension");
lf[548]=C_static_lambda_info(C_heaptop,13,"(a7594 id985)");
lf[549]=C_h_intern(&lf[549],12,"\003sysfeature\077");
lf[550]=C_static_lambda_info(C_heaptop,12,"(doit id974)");
lf[551]=C_h_intern(&lf[551],24,"\003sysextension-specifiers");
lf[552]=C_static_lambda_info(C_heaptop,7,"(a7714)");
lf[553]=C_static_lambda_info(C_heaptop,26,"(a7724 exp994996 fi995997)");
lf[554]=C_static_lambda_info(C_heaptop,28,"(loop specs991 exps992 f993)");
lf[555]=C_static_string(C_heaptop,29,"undefined extension specifier");
lf[556]=C_static_string(C_heaptop,27,"invalid extension specifier");
lf[557]=C_static_lambda_info(C_heaptop,41,"(##sys#do-the-right-thing id967 comp\077968)");
lf[558]=C_h_intern(&lf[558],24,"set-extension-specifier!");
lf[559]=C_static_lambda_info(C_heaptop,16,"(a7796 spec1009)");
lf[560]=C_static_lambda_info(C_heaptop,16,"(a7810 spec1010)");
lf[561]=C_static_lambda_info(C_heaptop,44,"(set-extension-specifier! name1005 proc1006)");
lf[562]=C_h_intern(&lf[562],11,"string-copy");
lf[563]=C_static_lambda_info(C_heaptop,14,"(do1038 i1040)");
lf[564]=C_static_lambda_info(C_heaptop,36,"(##sys#string->c-identifier str1035)");
lf[567]=C_h_intern(&lf[567],11,"environment");
lf[569]=C_h_intern(&lf[569],18,"\003syscopy-env-table");
lf[570]=C_static_lambda_info(C_heaptop,12,"(copy b1057)");
lf[571]=C_static_lambda_info(C_heaptop,14,"(do1053 i1055)");
lf[572]=C_static_lambda_info(C_heaptop,54,"(##sys#copy-env-table e1046 mff1047 mf1048 . args1049)");
lf[573]=C_h_intern(&lf[573],23,"\003sysenvironment-symbols");
lf[574]=C_static_lambda_info(C_heaptop,26,"(loop bucket1075 syms1076)");
lf[575]=C_static_lambda_info(C_heaptop,23,"(do1070 i1072 syms1073)");
lf[576]=C_static_lambda_info(C_heaptop,15,"(a8087 sym1083)");
lf[577]=C_h_intern(&lf[577],18,"\003syswalk-namespace");
lf[578]=C_static_lambda_info(C_heaptop,46,"(##sys#environment-symbols env1065 . args1066)");
lf[579]=C_h_intern(&lf[579],23,"interaction-environment");
lf[580]=C_static_lambda_info(C_heaptop,25,"(interaction-environment)");
lf[581]=C_h_intern(&lf[581],25,"scheme-report-environment");
lf[582]=C_static_string(C_heaptop,22,"no support for version");
lf[583]=C_static_lambda_info(C_heaptop,47,"(scheme-report-environment n1088 . mutable1089)");
lf[584]=C_h_intern(&lf[584],11,"make-vector");
lf[585]=C_h_intern(&lf[585],16,"null-environment");
lf[586]=C_static_string(C_heaptop,22,"no support for version");
lf[587]=C_static_lambda_info(C_heaptop,38,"(null-environment n1095 . mutable1096)");
lf[588]=C_static_lambda_info(C_heaptop,14,"(f_8200 b1103)");
lf[589]=C_static_lambda_info(C_heaptop,14,"(initb ht1102)");
lf[590]=C_static_lambda_info(C_heaptop,19,"(exists\077 fname1111)");
lf[591]=C_static_lambda_info(C_heaptop,25,"(test2 fname1123 lst1124)");
lf[592]=C_static_lambda_info(C_heaptop,16,"(test fname1126)");
lf[593]=C_static_lambda_info(C_heaptop,16,"(loop paths1129)");
lf[594]=C_static_lambda_info(C_heaptop,72,"(##sys#resolve-include-filename fname1114 prefer-source1115 . g11131116)");
lf[595]=C_static_lambda_info(C_heaptop,14,"(do1139 i1141)");
lf[596]=C_static_lambda_info(C_heaptop,14,"(spaces n1138)");
lf[597]=C_static_string(C_heaptop,1,"0");
lf[598]=C_static_lambda_info(C_heaptop,24,"(display-rj x1145 w1146)");
lf[599]=C_static_string(C_heaptop,11," major GCs\012");
lf[600]=C_static_string(C_heaptop,11," minor GCs\012");
lf[601]=C_static_string(C_heaptop,11," mutations\012");
lf[602]=C_static_string(C_heaptop,23," seconds in (major) GC\012");
lf[603]=C_static_string(C_heaptop,17," seconds elapsed\012");
lf[604]=C_static_lambda_info(C_heaptop,30,"(##sys#display-times info1150)");
lf[605]=C_h_intern(&lf[605],24,"\003sysline-number-database");
lf[606]=C_h_intern(&lf[606],13,"\000syntax-error");
lf[607]=C_static_lambda_info(C_heaptop,36,"(##sys#syntax-error-hook . args1160)");
lf[608]=C_h_intern(&lf[608],12,"syntax-error");
lf[609]=C_h_intern(&lf[609],15,"get-line-number");
lf[610]=C_static_lambda_info(C_heaptop,26,"(get-line-number sexp1161)");
lf[611]=C_h_intern(&lf[611],8,"keyword\077");
lf[612]=C_h_intern(&lf[612],14,"symbol->string");
lf[613]=C_static_string(C_heaptop,1,"(");
lf[614]=C_static_string(C_heaptop,10,") in line ");
lf[615]=C_static_string(C_heaptop,3," - ");
lf[616]=C_static_string(C_heaptop,1,"(");
lf[617]=C_static_string(C_heaptop,2,") ");
lf[618]=C_static_lambda_info(C_heaptop,13,"(err msg1182)");
lf[619]=C_static_lambda_info(C_heaptop,29,"(test x1179 pred1180 msg1181)");
lf[620]=C_static_lambda_info(C_heaptop,12,"(loop x1189)");
lf[621]=C_static_lambda_info(C_heaptop,20,"(lambda-list\077 x1185)");
lf[622]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[623]=C_static_lambda_info(C_heaptop,20,"(proper-list\077 x1196)");
lf[624]=C_static_string(C_heaptop,20,"not enough arguments");
lf[625]=C_static_string(C_heaptop,18,"too many arguments");
lf[626]=C_static_string(C_heaptop,17,"not a proper list");
lf[627]=C_static_lambda_info(C_heaptop,20,"(do1209 x1211 n1212)");
lf[628]=C_h_intern(&lf[628],1,"_");
lf[629]=C_h_intern(&lf[629],4,"pair");
lf[630]=C_h_intern(&lf[630],5,"pair\077");
lf[631]=C_static_string(C_heaptop,13,"pair expected");
lf[632]=C_h_intern(&lf[632],8,"variable");
lf[633]=C_static_lambda_info(C_heaptop,13,"(a8809 x1219)");
lf[634]=C_static_string(C_heaptop,19,"identifier expected");
lf[635]=C_h_intern(&lf[635],6,"symbol");
lf[636]=C_h_intern(&lf[636],7,"symbol\077");
lf[637]=C_static_string(C_heaptop,15,"symbol expected");
lf[638]=C_h_intern(&lf[638],4,"list");
lf[639]=C_static_string(C_heaptop,20,"proper list expected");
lf[640]=C_h_intern(&lf[640],6,"number");
lf[641]=C_h_intern(&lf[641],7,"number\077");
lf[642]=C_static_string(C_heaptop,15,"number expected");
lf[643]=C_h_intern(&lf[643],6,"string");
lf[644]=C_h_intern(&lf[644],7,"string\077");
lf[645]=C_static_string(C_heaptop,15,"string expected");
lf[646]=C_h_intern(&lf[646],11,"lambda-list");
lf[647]=C_static_string(C_heaptop,20,"lambda-list expected");
lf[648]=C_static_lambda_info(C_heaptop,13,"(a8863 y1220)");
lf[649]=C_static_string(C_heaptop,15,"missing keyword");
lf[650]=C_static_string(C_heaptop,15,"incomplete form");
lf[651]=C_static_string(C_heaptop,17,"unexpected object");
lf[652]=C_static_lambda_info(C_heaptop,18,"(walk x1203 p1204)");
lf[653]=C_static_lambda_info(C_heaptop,57,"(##sys#check-syntax id1171 exp1172 pat1173 . culprit1174)");
lf[654]=C_h_intern(&lf[654],18,"\003sysrepl-eval-hook");
lf[655]=C_h_intern(&lf[655],27,"\003sysrepl-print-length-limit");
lf[656]=C_h_intern(&lf[656],18,"\003sysrepl-read-hook");
lf[657]=C_h_intern(&lf[657],11,"repl-prompt");
lf[658]=C_h_intern(&lf[658],20,"\003sysread-prompt-hook");
lf[659]=C_h_intern(&lf[659],16,"\003sysflush-output");
lf[660]=C_h_intern(&lf[660],19,"\003sysstandard-output");
lf[661]=C_h_intern(&lf[661],9,"\003sysprint");
lf[662]=C_static_lambda_info(C_heaptop,24,"(##sys#read-prompt-hook)");
lf[663]=C_h_intern(&lf[663],22,"\003sysclear-trace-buffer");
lf[664]=C_static_lambda_info(C_heaptop,26,"(##sys#clear-trace-buffer)");
lf[665]=C_h_intern(&lf[665],16,"print-call-chain");
lf[666]=C_h_intern(&lf[666],12,"flush-output");
lf[667]=C_h_intern(&lf[667],5,"reset");
lf[668]=C_h_intern(&lf[668],4,"repl");
lf[669]=C_h_intern(&lf[669],16,"\003syswrite-char-0");
lf[670]=C_static_lambda_info(C_heaptop,7,"(a8985)");
lf[671]=C_h_intern(&lf[671],27,"\003syswith-print-length-limit");
lf[672]=C_static_lambda_info(C_heaptop,26,"(write-one x1343 port1344)");
lf[673]=C_h_intern(&lf[673],18,"\003sysstandard-error");
lf[674]=C_static_lambda_info(C_heaptop,17,"(a8997 g13471348)");
lf[675]=C_static_lambda_info(C_heaptop,18,"(write-err xs1346)");
lf[676]=C_static_lambda_info(C_heaptop,17,"(a9018 g13521353)");
lf[677]=C_static_lambda_info(C_heaptop,22,"(write-results xs1349)");
lf[678]=C_h_intern(&lf[678],18,"\003sysstandard-input");
lf[679]=C_static_string(C_heaptop,2,": ");
lf[680]=C_static_string(C_heaptop,2,": ");
lf[681]=C_static_string(C_heaptop,5,"Error");
lf[682]=C_static_lambda_info(C_heaptop,26,"(a9065 msg1367 . args1368)");
lf[683]=C_h_intern(&lf[683],17,"\003syserror-handler");
lf[684]=C_static_lambda_info(C_heaptop,7,"(a9052)");
lf[685]=C_static_lambda_info(C_heaptop,7,"(a9154)");
lf[686]=C_h_intern(&lf[686],20,"\003syswarnings-enabled");
lf[687]=C_static_string(C_heaptop,5," (in ");
lf[688]=C_static_string(C_heaptop,2,"  ");
lf[689]=C_static_lambda_info(C_heaptop,13,"(a9202 v1395)");
lf[690]=C_static_string(C_heaptop,70,"Warning: the following toplevel variables are referenced but unbound:\012");
lf[691]=C_static_lambda_info(C_heaptop,21,"(loop vars1393 u1394)");
lf[692]=C_static_lambda_info(C_heaptop,20,"(a9163 . result1391)");
lf[693]=C_h_intern(&lf[693],15,"\003sysread-char-0");
lf[694]=C_h_intern(&lf[694],15,"\003syspeek-char-0");
lf[695]=C_h_intern(&lf[695],28,"\003sysdefault-namespace-prefix");
lf[696]=C_h_intern(&lf[696],21,"\003sysenable-qualifiers");
lf[697]=C_static_lambda_info(C_heaptop,7,"(a9301)");
lf[698]=C_h_intern(&lf[698],17,"\003sysreset-handler");
lf[699]=C_static_lambda_info(C_heaptop,13,"(a9295 c1380)");
lf[700]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[701]=C_static_lambda_info(C_heaptop,7,"(a9117)");
lf[702]=C_static_lambda_info(C_heaptop,7,"(a9314)");
lf[703]=C_static_lambda_info(C_heaptop,6,"(repl)");
lf[704]=C_h_intern(&lf[704],28,"\003syssharp-comma-reader-ctors");
lf[705]=C_h_intern(&lf[705],18,"define-reader-ctor");
lf[706]=C_static_lambda_info(C_heaptop,38,"(define-reader-ctor spec1423 proc1424)");
lf[707]=C_h_intern(&lf[707],18,"\003sysuser-read-hook");
lf[708]=C_h_intern(&lf[708],9,"read-char");
lf[709]=C_h_intern(&lf[709],14,"\003sysread-error");
lf[710]=C_static_string(C_heaptop,33,"invalid sharp-comma external form");
lf[711]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[712]=C_static_string(C_heaptop,33,"undefined sharp-comma constructor");
lf[713]=C_static_lambda_info(C_heaptop,40,"(##sys#user-read-hook char1429 port1430)");
lf[716]=C_h_intern(&lf[716],19,"print-error-message");
lf[717]=C_static_lambda_info(C_heaptop,7,"(a9449)");
lf[718]=C_static_lambda_info(C_heaptop,14,"(a9443 ex1457)");
lf[719]=C_static_lambda_info(C_heaptop,7,"(a9468)");
lf[720]=C_static_lambda_info(C_heaptop,7,"(a9480)");
lf[721]=C_static_lambda_info(C_heaptop,19,"(a9474 . g14551461)");
lf[722]=C_static_lambda_info(C_heaptop,7,"(a9462)");
lf[723]=C_static_lambda_info(C_heaptop,17,"(a9437 g14541456)");
lf[724]=C_static_lambda_info(C_heaptop,20,"(run-safe thunk1453)");
lf[726]=C_h_intern(&lf[726],6,"\003sysgc");
lf[727]=C_static_lambda_info(C_heaptop,31,"(store-result x1463 result1464)");
lf[729]=C_h_intern(&lf[729],13,"thread-yield!");
lf[730]=C_static_lambda_info(C_heaptop,7,"(a9501)");
lf[731]=C_static_lambda_info(C_heaptop,15,"(CHICKEN_yield)");
lf[733]=C_static_lambda_info(C_heaptop,7,"(a9513)");
lf[734]=C_static_lambda_info(C_heaptop,33,"(CHICKEN_eval exp1468 result1469)");
lf[736]=C_h_intern(&lf[736],17,"open-input-string");
lf[737]=C_static_lambda_info(C_heaptop,7,"(a9532)");
lf[738]=C_static_lambda_info(C_heaptop,40,"(CHICKEN_eval_string str1472 result1473)");
lf[740]=C_static_string(C_heaptop,40,"Error: not enough room for result string");
lf[741]=C_static_lambda_info(C_heaptop,34,"(store-string bufsize1478 buf1479)");
lf[743]=C_static_lambda_info(C_heaptop,7,"(a9568)");
lf[744]=C_static_lambda_info(C_heaptop,52,"(CHICKEN_eval_to_string exp1482 buf1483 bufsize1484)");
lf[746]=C_static_lambda_info(C_heaptop,7,"(a9597)");
lf[747]=C_static_lambda_info(C_heaptop,59,"(CHICKEN_eval_string_to_string str1490 buf1491 bufsize1492)");
lf[749]=C_static_lambda_info(C_heaptop,7,"(a9631)");
lf[750]=C_static_lambda_info(C_heaptop,44,"(CHICKEN_apply func1498 args1499 result1500)");
lf[752]=C_static_lambda_info(C_heaptop,7,"(a9647)");
lf[753]=C_static_lambda_info(C_heaptop,63,"(CHICKEN_apply_to_string func1504 args1505 buf1506 bufsize1507)");
lf[755]=C_static_lambda_info(C_heaptop,7,"(a9676)");
lf[756]=C_static_lambda_info(C_heaptop,33,"(CHICKEN_read str1514 result1515)");
lf[758]=C_static_lambda_info(C_heaptop,7,"(a9698)");
lf[759]=C_static_lambda_info(C_heaptop,22,"(CHICKEN_load str1519)");
lf[761]=C_static_string(C_heaptop,8,"No error");
lf[762]=C_static_lambda_info(C_heaptop,47,"(CHICKEN_get_error_message buf1522 bufsize1523)");
lf[763]=C_h_intern(&lf[763],15,"\003sysmake-string");
lf[764]=C_static_lambda_info(C_heaptop,32,"(##sys#make-lambda-info str1528)");
lf[765]=C_h_intern(&lf[765],6,"module");
lf[766]=C_static_string(C_heaptop,25,"modules are not supported");
lf[767]=C_static_lambda_info(C_heaptop,16,"(a9723 form1452)");
lf[768]=C_h_intern(&lf[768],13,"define-syntax");
lf[769]=C_static_string(C_heaptop,34,"highlevel macros are not supported");
lf[770]=C_static_lambda_info(C_heaptop,16,"(a9729 form1451)");
lf[771]=C_static_lambda_info(C_heaptop,13,"(a9748 x1449)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[772]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[773]=C_static_lambda_info(C_heaptop,17,"(a9735 . ids1448)");
lf[774]=C_static_lambda_info(C_heaptop,25,"(expand name1441 val1442)");
lf[775]=C_h_intern(&lf[775],12,"define-macro");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[776]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[777]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[778]=C_h_pair(C_restore,tmp);
lf[779]=C_static_lambda_info(C_heaptop,27,"(a9754 head1438 . body1439)");
lf[780]=C_static_string(C_heaptop,4,"#;> ");
lf[781]=C_static_lambda_info(C_heaptop,7,"(a9896)");
lf[782]=C_h_intern(&lf[782],14,"make-parameter");
tmp=C_intern(C_heaptop,7,"\000srfi-8");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"\000srfi-6");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"\000srfi-2");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"\000srfi-0");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\000srfi-10");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"\000srfi-9");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\000srfi-55");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\000srfi-61");
C_save(tmp);
lf[783]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[784]=C_h_intern(&lf[784],16,"\003sysmake-promise");
lf[785]=C_static_lambda_info(C_heaptop,13,"(a9899 x1328)");
lf[786]=C_h_intern(&lf[786],5,"delay");
lf[787]=C_static_lambda_info(C_heaptop,18,"(walk x1302 n1303)");
lf[788]=C_h_intern(&lf[788],16,"\003syslist->vector");
lf[789]=C_h_intern(&lf[789],7,"unquote");
lf[790]=C_h_intern(&lf[790],8,"\003syslist");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"unquote");
C_save(tmp);
lf[791]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"unquote");
C_save(tmp);
lf[792]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[793]=C_h_intern(&lf[793],10,"quasiquote");
lf[794]=C_h_intern(&lf[794],8,"\003syscons");
lf[795]=C_h_intern(&lf[795],16,"unquote-splicing");
lf[796]=C_static_lambda_info(C_heaptop,19,"(walk1 x1304 n1305)");
lf[797]=C_h_intern(&lf[797],1,"a");
lf[798]=C_h_intern(&lf[798],1,"b");
tmp=C_intern(C_heaptop,10,"\003sysappend");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
lf[799]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[800]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003syscons");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\003syslist");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"b");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[801]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"b");
C_save(tmp);
lf[802]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,8,"\003syscons");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
lf[803]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[804]=C_h_pair(C_restore,tmp);
lf[805]=C_static_lambda_info(C_heaptop,16,"(simplify x1314)");
lf[806]=C_static_lambda_info(C_heaptop,16,"(a9909 form1298)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[807]=C_h_pair(C_restore,tmp);
lf[808]=C_static_lambda_info(C_heaptop,14,"(a10255 b1294)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[809]=C_h_pair(C_restore,tmp);
lf[810]=C_static_lambda_info(C_heaptop,14,"(a10302 b1292)");
lf[811]=C_static_string(C_heaptop,2,"do");
lf[812]=C_h_intern(&lf[812],2,"do");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[813]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_vector(1,C_pick(0));
C_drop(1);
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[814]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[815]=C_static_lambda_info(C_heaptop,41,"(a10201 bindings1288 test1289 . body1290)");
lf[816]=C_static_lambda_info(C_heaptop,14,"(a10366 b1284)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[817]=C_h_pair(C_restore,tmp);
lf[818]=C_static_lambda_info(C_heaptop,14,"(a10380 b1283)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[819]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[820]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[821]=C_static_lambda_info(C_heaptop,17,"(a10320 form1280)");
lf[822]=C_static_lambda_info(C_heaptop,15,"(expand bs1276)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[823]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[824]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[825]=C_static_lambda_info(C_heaptop,17,"(a10390 form1272)");
lf[826]=C_h_intern(&lf[826],4,"else");
lf[827]=C_h_intern(&lf[827],2,"or");
lf[828]=C_h_intern(&lf[828],4,"eqv\077");
lf[829]=C_static_lambda_info(C_heaptop,14,"(a10520 x1269)");
lf[830]=C_h_intern(&lf[830],4,"case");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[831]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[832]=C_h_pair(C_restore,tmp);
lf[833]=C_static_lambda_info(C_heaptop,20,"(expand clauses1266)");
lf[834]=C_static_lambda_info(C_heaptop,17,"(a10443 form1261)");
lf[835]=C_h_intern(&lf[835],2,"=>");
lf[836]=C_h_intern(&lf[836],9,"\003sysapply");
lf[837]=C_h_intern(&lf[837],4,"cond");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[838]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[839]=C_h_pair(C_restore,tmp);
lf[840]=C_static_lambda_info(C_heaptop,20,"(expand clauses1253)");
lf[841]=C_static_lambda_info(C_heaptop,17,"(a10546 body1251)");
lf[842]=C_static_lambda_info(C_heaptop,17,"(a10743 body1246)");
lf[843]=C_h_intern(&lf[843],3,"and");
lf[844]=C_static_lambda_info(C_heaptop,17,"(a10786 body1242)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[845]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[846]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[847]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[848]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[849]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[850]=C_h_vector(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[851]=C_static_lambda_info(C_heaptop,15,"(loop form1232)");
lf[852]=C_static_lambda_info(C_heaptop,17,"(a10814 form1230)");
tmp=C_intern(C_heaptop,12,"dynamic-wind");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"values");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"call-with-values");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"eval");
C_save(tmp);
tmp=C_intern(C_heaptop,25,"scheme-report-environment");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"null-environment");
C_save(tmp);
tmp=C_intern(C_heaptop,23,"interaction-environment");
C_save(tmp);
lf[853]=C_h_list(7,C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(7);
tmp=C_intern(C_heaptop,3,"not");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"boolean\077");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"eq\077");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"eqv\077");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"equal\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"pair\077");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cons");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caadar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdadar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdddar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddddr");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"set-car!");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"set-cdr!");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"null\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"list\077");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"list");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"length");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"list-tail");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"list-ref");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"append");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"reverse");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"memq");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"memv");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"member");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"assq");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"assv");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"assoc");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"symbol\077");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"symbol->string");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"string->symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"number\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"integer\077");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"exact\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"real\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"complex\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"inexact\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"rational\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"zero\077");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"odd\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"even\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"positive\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"negative\077");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"max");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"min");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"+");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"-");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"*");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"/");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"=");
C_save(tmp);
tmp=C_intern(C_heaptop,1,">");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"<");
C_save(tmp);
tmp=C_intern(C_heaptop,2,">=");
C_save(tmp);
tmp=C_intern(C_heaptop,2,"<=");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"quotient");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"remainder");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"modulo");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"gcd");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"lcm");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"abs");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"floor");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"ceiling");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"truncate");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"round");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"exact->inexact");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"inexact->exact");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"exp");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"log");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"expt");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"sqrt");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"sin");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cos");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"tan");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"asin");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"acos");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"atan");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"number->string");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"string->number");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"char\077");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"char=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"char>\077");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"char<\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"char>=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"char<=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"char-ci=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"char-ci<\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"char-ci>\077");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"char-ci>=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"char-ci<=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"char-alphabetic\077");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"char-whitespace\077");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"char-numeric\077");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"char-upper-case\077");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"char-lower-case\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"char-upcase");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"char-downcase");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"char->integer");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"integer->char");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"string\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"string=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"string>\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"string<\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"string>=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"string<=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"string-ci=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"string-ci<\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"string-ci>\077");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"string-ci>=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"string-ci<=\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"make-string");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"string-length");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"string-ref");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"string-set!");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"string-append");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"string-copy");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"string->list");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"list->string");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"substring");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"string-fill!");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"vector\077");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"make-vector");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"vector-ref");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"vector-set!");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"vector");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"vector->list");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"list->vector");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"vector-fill!");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"procedure\077");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"map");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"for-each");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"apply");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"force");
C_save(tmp);
tmp=C_intern(C_heaptop,30,"call-with-current-continuation");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"input-port\077");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"output-port\077");
C_save(tmp);
tmp=C_intern(C_heaptop,18,"current-input-port");
C_save(tmp);
tmp=C_intern(C_heaptop,19,"current-output-port");
C_save(tmp);
tmp=C_intern(C_heaptop,20,"call-with-input-file");
C_save(tmp);
tmp=C_intern(C_heaptop,21,"call-with-output-file");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"open-input-file");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"open-output-file");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"close-input-port");
C_save(tmp);
tmp=C_intern(C_heaptop,17,"close-output-port");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"load");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"read");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"eof-object\077");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"read-char");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"peek-char");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"write");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"display");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"write-char");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"newline");
C_save(tmp);
tmp=C_intern(C_heaptop,20,"with-input-from-file");
C_save(tmp);
tmp=C_intern(C_heaptop,19,"with-output-to-file");
C_save(tmp);
tmp=C_intern(C_heaptop,20,"\003syscall-with-values");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"\003sysvalues");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"\003sysdynamic-wind");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"\003syslist->vector");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\003syslist");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"\003sysappend");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\003syscons");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"\003sysmake-promise");
C_save(tmp);
lf[854]=C_h_list(189,C_pick(188),C_pick(187),C_pick(186),C_pick(185),C_pick(184),C_pick(183),C_pick(182),C_pick(181),C_pick(180),C_pick(179),C_pick(178),C_pick(177),C_pick(176),C_pick(175),C_pick(174),C_pick(173),C_pick(172),C_pick(171),C_pick(170),C_pick(169),C_pick(168),C_pick(167),C_pick(166),C_pick(165),C_pick(164),C_pick(163),C_pick(162),C_pick(161),C_pick(160),C_pick(159),C_pick(158),C_pick(157),C_pick(156),C_pick(155),C_pick(154),C_pick(153),C_pick(152),C_pick(151),C_pick(150),C_pick(149),C_pick(148),C_pick(147),C_pick(146),C_pick(145),C_pick(144),C_pick(143),C_pick(142),C_pick(141),C_pick(140),C_pick(139),C_pick(138),C_pick(137),C_pick(136),C_pick(135),C_pick(134),C_pick(133),C_pick(132),C_pick(131),C_pick(130),C_pick(129),C_pick(128),C_pick(127),C_pick(126),C_pick(125),C_pick(124),C_pick(123),C_pick(122),C_pick(121),C_pick(120),C_pick(119),C_pick(118),C_pick(117),C_pick(116),C_pick(115),C_pick(114),C_pick(113),C_pick(112),C_pick(111),C_pick(110),C_pick(109),C_pick(108),C_pick(107),C_pick(106),C_pick(105),C_pick(104),C_pick(103),C_pick(102),C_pick(101),C_pick(100),C_pick(99),C_pick(98),C_pick(97),C_pick(96),C_pick(95),C_pick(94),C_pick(93),C_pick(92),C_pick(91),C_pick(90),C_pick(89),C_pick(88),C_pick(87),C_pick(86),C_pick(85),C_pick(84),C_pick(83),C_pick(82),C_pick(81),C_pick(80),C_pick(79),C_pick(78),C_pick(77),C_pick(76),C_pick(75),C_pick(74),C_pick(73),C_pick(72),C_pick(71),C_pick(70),C_pick(69),C_pick(68),C_pick(67),C_pick(66),C_pick(65),C_pick(64),C_pick(63),C_pick(62),C_pick(61),C_pick(60),C_pick(59),C_pick(58),C_pick(57),C_pick(56),C_pick(55),C_pick(54),C_pick(53),C_pick(52),C_pick(51),C_pick(50),C_pick(49),C_pick(48),C_pick(47),C_pick(46),C_pick(45),C_pick(44),C_pick(43),C_pick(42),C_pick(41),C_pick(40),C_pick(39),C_pick(38),C_pick(37),C_pick(36),C_pick(35),C_pick(34),C_pick(33),C_pick(32),C_pick(31),C_pick(30),C_pick(29),C_pick(28),C_pick(27),C_pick(26),C_pick(25),C_pick(24),C_pick(23),C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(189);
lf[855]=C_h_intern(&lf[855],18,"\003sysnumber->string");
lf[856]=C_h_intern(&lf[856],5,"error");
lf[857]=C_static_string(C_heaptop,25,"invalid extension version");
lf[858]=C_static_lambda_info(C_heaptop,16,"(->string x1027)");
lf[859]=C_h_intern(&lf[859],7,"version");
lf[860]=C_static_string(C_heaptop,51,"installed extension does not match required version");
lf[861]=C_h_intern(&lf[861],9,"string>=\077");
lf[862]=C_static_string(C_heaptop,29,"invalid version specification");
lf[863]=C_static_lambda_info(C_heaptop,23,"(a10917 spec1020 _1021)");
lf[864]=C_h_intern(&lf[864],12,"list->vector");
lf[865]=C_h_intern(&lf[865],18,"\003sysstring->symbol");
lf[866]=C_static_string(C_heaptop,5,"srfi-");
lf[867]=C_static_lambda_info(C_heaptop,14,"(loop ids1016)");
lf[868]=C_static_lambda_info(C_heaptop,25,"(a11038 spec1013 old1014)");
lf[869]=C_h_intern(&lf[869],4,"srfi");
lf[870]=C_static_string(C_heaptop,12,"CHICKEN_HOME");
lf[871]=C_static_lambda_info(C_heaptop,13,"(a11110 x853)");
lf[872]=C_static_lambda_info(C_heaptop,16,"(a11116 g851852)");
lf[873]=C_h_intern(&lf[873],14,"build-platform");
lf[874]=C_h_intern(&lf[874],6,"macosx");
lf[875]=C_h_intern(&lf[875],4,"hpux");
lf[876]=C_h_intern(&lf[876],4,"hppa");
lf[877]=C_h_intern(&lf[877],12,"machine-type");
lf[878]=C_h_intern(&lf[878],16,"software-version");
lf[879]=C_h_intern(&lf[879],7,"windows");
lf[880]=C_h_intern(&lf[880],13,"software-type");
lf[881]=C_static_string(C_heaptop,10,"C_toplevel");
lf[882]=C_static_lambda_info(C_heaptop,8,"(a11205)");
lf[883]=C_static_lambda_info(C_heaptop,8,"(a11215)");
lf[884]=C_static_lambda_info(C_heaptop,8,"(a11221)");
lf[885]=C_static_lambda_info(C_heaptop,22,"(a11193 x649 . env650)");
lf[886]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,887,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate(&lf[2],*((C_word*)lf[3]+1));
t4=(C_word)C_a_i_string(&a,1,*((C_word*)lf[3]+1));
t5=C_mutate(&lf[4],t4);
t6=C_mutate((C_word*)lf[5]+1,lf[6]);
t7=C_set_block_item(lf[7],0,C_SCHEME_END_OF_LIST);
t8=C_mutate(&lf[8],lf[9]);
t9=C_mutate(&lf[10],lf[11]);
t10=C_mutate(&lf[12],lf[13]);
t11=C_mutate(&lf[14],lf[15]);
t12=C_mutate(&lf[16],lf[17]);
t13=C_mutate(&lf[18],lf[19]);
t14=C_mutate(&lf[20],lf[21]);
t15=C_mutate(&lf[22],lf[23]);
t16=C_mutate(&lf[24],lf[25]);
t17=C_mutate(&lf[26],lf[27]);
t18=C_mutate(&lf[28],lf[29]);
t19=C_mutate(&lf[30],lf[31]);
t20=*((C_word*)lf[32]+1);
t21=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1702,a[2]=t20,a[3]=lf[40],tmp=(C_word)a,a+=4,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1747,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 160  make-vector */
t23=*((C_word*)lf[584]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k1745 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1){
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
C_word ab[89],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1747,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1,t1);
t3=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=lf[45],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1765,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=lf[51],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1791,a[2]=lf[53],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1809,a[2]=lf[55],tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[56]+1);
t9=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1818,a[2]=t8,a[3]=lf[95],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2188,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2191,a[2]=lf[99],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2194,a[2]=lf[101],tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(lf[102],0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2201,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[108]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=lf[109],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[110]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2253,a[2]=lf[115],tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[116]+1);
t18=*((C_word*)lf[117]+1);
t19=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=t18,a[3]=t17,a[4]=lf[143],tmp=(C_word)a,a+=5,tmp));
t20=*((C_word*)lf[116]+1);
t21=*((C_word*)lf[144]+1);
t22=C_mutate((C_word*)lf[145]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2815,a[2]=t21,a[3]=t20,a[4]=lf[172],tmp=(C_word)a,a+=5,tmp));
t23=C_mutate((C_word*)lf[173]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3301,a[2]=lf[175],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[157]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3392,a[2]=lf[177],tmp=(C_word)a,a+=3,tmp));
t25=C_SCHEME_FALSE;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_FALSE;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3452,a[2]=t28,a[3]=t26,a[4]=lf[179],tmp=(C_word)a,a+=5,tmp));
t30=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3467,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3512,a[2]=lf[183],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[184]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3567,a[2]=lf[188],tmp=(C_word)a,a+=3,tmp));
t33=(C_word)C_slot(lf[189],C_fix(0));
t34=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3613,a[2]=t33,a[3]=lf[192],tmp=(C_word)a,a+=4,tmp));
t35=C_set_block_item(lf[193],0,C_SCHEME_FALSE);
t36=C_set_block_item(lf[194],0,C_SCHEME_FALSE);
t37=C_mutate((C_word*)lf[195]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=lf[203],tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(lf[204],0,C_SCHEME_FALSE);
t39=C_set_block_item(lf[205],0,C_fix(1));
t40=*((C_word*)lf[52]+1);
t41=*((C_word*)lf[199]+1);
t42=*((C_word*)lf[206]+1);
t43=*((C_word*)lf[116]+1);
t44=*((C_word*)lf[200]+1);
t45=*((C_word*)lf[198]+1);
t46=*((C_word*)lf[207]+1);
t47=(C_word)C_slot(lf[189],C_fix(0));
t48=*((C_word*)lf[208]+1);
t49=C_mutate((C_word*)lf[209]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3717,a[2]=t42,a[3]=t47,a[4]=lf[373],tmp=(C_word)a,a+=5,tmp));
t50=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11194,a[2]=lf[885],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1037 make-parameter */
t52=*((C_word*)lf[782]+1);
((C_proc3)(void*)(*((C_word*)t52+1)))(3,t52,t50,t51);}

/* a11193 in k1745 */
static void C_ccall f_11194(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3rv,(void*)f_11194r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_11194r(t0,t1,t2,t3);}}

static void C_ccall f_11194r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=*((C_word*)lf[194]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11198,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t9=(C_word)C_i_vector_ref(t3,C_fix(0));
if(C_truep(t9)){
t10=(C_word)C_i_check_structure(t9,lf[567]);
t11=(C_word)C_slot(t9,C_fix(1));
t12=C_set_block_item(t7,0,t11);
t13=(C_word)C_slot(t9,C_fix(2));
t14=C_set_block_item(t5,0,t13);
t15=t8;
f_11198(t15,t14);}
else{
t10=t8;
f_11198(t10,C_SCHEME_UNDEFINED);}}
else{
t9=t8;
f_11198(t9,C_SCHEME_UNDEFINED);}}

/* k11196 in a11193 in k1745 */
static void C_fcall f_11198(C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11198,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11204,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11206,a[2]=t5,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=lf[882],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11216,a[2]=((C_word*)t0)[2],a[3]=lf[883],tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11222,a[2]=t9,a[3]=t7,a[4]=t5,a[5]=t3,a[6]=lf[884],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1047 ##sys#dynamic-wind */
t14=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t10,t11,t12,t13);}

/* a11221 in k11196 in a11193 in k1745 */
static void C_ccall f_11222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11222,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[194]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[193]+1));
t4=C_mutate((C_word*)lf[194]+1,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[193]+1,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[408]+1));}

/* a11215 in k11196 in a11193 in k1745 */
static void C_ccall f_11216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11216,2,t0,t1);}
/* eval.scm: 1049 ##sys#compile-to-closure */
t2=*((C_word*)lf[209]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* a11205 in k11196 in a11193 in k1745 */
static void C_ccall f_11206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11206,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[194]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[193]+1));
t4=C_mutate((C_word*)lf[194]+1,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[193]+1,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[408]+1));}

/* k11202 in k11196 in a11193 in k1745 */
static void C_ccall f_11204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5952 in k1745 */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5954,2,t0,t1);}
t2=C_mutate((C_word*)lf[374]+1,t1);
t3=C_mutate((C_word*)lf[375]+1,*((C_word*)lf[374]+1));
t4=C_mutate((C_word*)lf[376]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5957,a[2]=lf[377],tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[116]+1);
t6=C_mutate((C_word*)lf[312]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5971,a[2]=t5,a[3]=lf[382],tmp=(C_word)a,a+=4,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fudge(C_fix(13));
/* eval.scm: 1081 make-parameter */
t9=*((C_word*)lf[782]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k6051 in k5952 in k1745 */
static void C_ccall f_6053(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6053,2,t0,t1);}
t2=C_mutate((C_word*)lf[383]+1,t1);
t3=C_mutate((C_word*)lf[384]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6055,a[2]=lf[385],tmp=(C_word)a,a+=3,tmp));
t4=C_set_block_item(lf[386],0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[387]+1,lf[388]);
t6=C_mutate((C_word*)lf[389]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6060,a[2]=lf[398],tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[399]+1);
t8=*((C_word*)lf[199]+1);
t9=*((C_word*)lf[208]+1);
t10=*((C_word*)lf[400]+1);
t11=*((C_word*)lf[376]+1);
t12=*((C_word*)lf[401]+1);
t13=*((C_word*)lf[402]+1);
t14=*((C_word*)lf[56]+1);
t15=*((C_word*)lf[383]+1);
t16=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6133,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t9,a[5]=t14,a[6]=t12,a[7]=t13,a[8]=t8,a[9]=t10,a[10]=t7,a[11]=t11,tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1113 ##sys#make-c-string */
t17=*((C_word*)lf[432]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,lf[881]);}

/* k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6133(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6135,a[2]=lf[404],tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[405]+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=lf[447],tmp=(C_word)a,a+=14,tmp));
t4=C_mutate((C_word*)lf[420]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6571,a[2]=lf[452],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[453]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6622,a[2]=lf[457],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[458]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6687,a[2]=lf[468],tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11188,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1206 software-type */
t9=*((C_word*)lf[880]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}

/* k11186 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11188,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[879]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6735(t3,lf[15]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11184,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1207 software-version */
t4=*((C_word*)lf[878]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11182 in k11186 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11184,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[874]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6735(t3,lf[13]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11166,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11180,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1208 software-version */
t5=*((C_word*)lf[878]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11178 in k11182 in k11186 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11180,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[875]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1209 machine-type */
t4=*((C_word*)lf[877]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_11166(t3,C_SCHEME_FALSE);}}

/* k11174 in k11178 in k11182 in k11186 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_11166(t2,(C_word)C_eqp(t1,lf[876]));}

/* k11164 in k11182 in k11186 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_11166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6735(t2,(C_truep(t1)?lf[17]:lf[18]));}

/* k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6735(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6735,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[469]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11151,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1213 software-version */
t5=*((C_word*)lf[878]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k11149 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11151,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[874]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6739(t3,lf[18]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11133,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11147,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1214 software-version */
t5=*((C_word*)lf[878]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11145 in k11149 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11147,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[875]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1215 machine-type */
t4=*((C_word*)lf[877]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_11133(t3,C_SCHEME_FALSE);}}

/* k11141 in k11145 in k11149 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_11133(t2,(C_word)C_eqp(t1,lf[876]));}

/* k11131 in k11149 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_11133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6739(t2,(C_truep(t1)?lf[18]:*((C_word*)lf[469]+1)));}

/* k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6739,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[439]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1219 build-platform */
t4=*((C_word*)lf[873]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6743,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[470]);
t3=(C_truep(t2)?lf[11]:lf[9]);
t4=C_mutate((C_word*)lf[471]+1,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11109,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11117,a[2]=lf[872],tmp=(C_word)a,a+=3,tmp);
/* map */
t8=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,*((C_word*)lf[471]+1));}

/* a11116 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11117(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11117,3,t0,t1,t2);}
/* ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[469]+1));}

/* k11107 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11111,a[2]=lf[871],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1224 make-parameter */
t3=*((C_word*)lf[782]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a11110 in k11107 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11111,3,t0,t1,t2);}
t3=(C_word)C_i_check_list(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6750(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6750,2,t0,t1);}
t2=C_mutate((C_word*)lf[472]+1,t1);
t3=*((C_word*)lf[383]+1);
t4=*((C_word*)lf[56]+1);
t5=*((C_word*)lf[472]+1);
t6=*((C_word*)lf[208]+1);
t7=C_mutate((C_word*)lf[473]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6752,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t6,a[6]=lf[481],tmp=(C_word)a,a+=7,tmp));
t8=C_mutate((C_word*)lf[482]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6858,a[2]=lf[484],tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[116]+1);
t10=C_mutate(&lf[485],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6887,a[2]=t9,a[3]=lf[487],tmp=(C_word)a,a+=4,tmp));
t11=*((C_word*)lf[56]+1);
t12=C_mutate((C_word*)lf[488]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6943,a[2]=t11,a[3]=lf[496],tmp=(C_word)a,a+=4,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11093,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1311 getenv */
t15=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,lf[25]);}

/* k11091 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11093,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_11096(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11099,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1312 getenv */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[870]);}}

/* k11097 in k11091 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11099,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_11096(2,t2,t1);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_EGG_HOME),C_fix(0));}}

/* k11094 in k11091 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1310 make-parameter */
t2=*((C_word*)lf[782]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=C_mutate((C_word*)lf[497]+1,t1);
t3=C_mutate((C_word*)lf[498]+1,*((C_word*)lf[497]+1));
t4=*((C_word*)lf[499]+1);
t5=*((C_word*)lf[56]+1);
t6=C_mutate((C_word*)lf[500]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7094,a[2]=t5,a[3]=t4,a[4]=lf[505],tmp=(C_word)a,a+=5,tmp));
t7=C_set_block_item(lf[506],0,C_SCHEME_END_OF_LIST);
t8=*((C_word*)lf[507]+1);
t9=C_mutate((C_word*)lf[508]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7171,a[2]=t8,a[3]=lf[510],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[511]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7246,a[2]=lf[514],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[512]+1,*((C_word*)lf[511]+1));
t12=C_mutate((C_word*)lf[515]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7266,a[2]=lf[517],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[516]+1,*((C_word*)lf[515]+1));
t14=C_mutate((C_word*)lf[319]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7280,a[2]=lf[520],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[518]+1,*((C_word*)lf[319]+1));
t16=*((C_word*)lf[207]+1);
t17=*((C_word*)lf[499]+1);
t18=*((C_word*)lf[56]+1);
t19=*((C_word*)lf[399]+1);
t20=C_mutate((C_word*)lf[521]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7293,a[2]=t18,a[3]=t17,a[4]=t19,a[5]=t16,a[6]=lf[524],tmp=(C_word)a,a+=7,tmp));
t21=C_mutate((C_word*)lf[525]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7324,a[2]=lf[526],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[527]+1,*((C_word*)lf[525]+1));
t23=*((C_word*)lf[207]+1);
t24=*((C_word*)lf[399]+1);
t25=C_mutate((C_word*)lf[321]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7331,a[2]=lf[530],tmp=(C_word)a,a+=3,tmp));
t26=*((C_word*)lf[531]+1);
t27=C_mutate((C_word*)lf[325]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7380,a[2]=t26,a[3]=lf[557],tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(lf[551],0,C_SCHEME_END_OF_LIST);
t29=C_mutate((C_word*)lf[558]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7779,a[2]=lf[561],tmp=(C_word)a,a+=3,tmp));
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t31=*((C_word*)lf[864]+1);
t32=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11039,a[2]=t31,a[3]=lf[868],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1501 set-extension-specifier! */
t33=*((C_word*)lf[558]+1);
((C_proc4)C_retrieve_proc(t33))(4,t33,t30,lf[869],t32);}

/* a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11039(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11039,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11047,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11053,a[2]=t7,a[3]=lf[867],tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11053(t9,t4,t5);}

/* loop in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_11053(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11053,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_check_exact_2(t3,lf[547]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11073,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11085,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11089,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1511 number->string */
C_number_to_string(3,0,t7,t3);}}

/* k11087 in loop in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1511 ##sys#string-append */
t2=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[866],t1);}

/* k11083 in loop in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1511 ##sys#string->symbol */
t2=*((C_word*)lf[865]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k11071 in loop in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11077,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* eval.scm: 1512 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_11053(t4,t2,t3);}

/* k11075 in k11071 in loop in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11077,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k11045 in a11038 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_11047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1505 list->vector */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10918,a[2]=lf[863],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1517 set-extension-specifier! */
t4=*((C_word*)lf[558]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[859],t3);}

/* a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10918,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10921,a[2]=lf[858],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10955,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[859]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cdddr(t2);
t11=t5;
f_10955(t11,(C_word)C_i_nullp(t10));}
else{
t10=t5;
f_10955(t10,C_SCHEME_FALSE);}}
else{
t9=t5;
f_10955(t9,C_SCHEME_FALSE);}}
else{
t8=t5;
f_10955(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_10955(t6,C_SCHEME_FALSE);}}

/* k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10955(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10955,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10964,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1527 extension-information */
t5=*((C_word*)lf[525]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* syntax-error */
t2=*((C_word*)lf[608]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[547],lf[862],((C_word*)t0)[4]);}}

/* k10962 in k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10964(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10964,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_assq(lf[859],t1):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10970,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10973,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10983,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
/* eval.scm: 1529 ->string */
f_10921(t5,t6);}
else{
t5=t4;
f_10973(2,t5,C_SCHEME_FALSE);}}

/* k10981 in k10962 in k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10987,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1529 ->string */
f_10921(t2,((C_word*)t0)[2]);}

/* k10985 in k10981 in k10962 in k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1529 string>=? */
t2=*((C_word*)lf[861]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10971 in k10962 in k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_10970(2,t2,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 1530 error */
t2=*((C_word*)lf[856]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[860],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k10968 in k10962 in k10953 in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ->string in a10917 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10921(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10921,NULL,2,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* eval.scm: 1523 ##sys#number->string */
t3=*((C_word*)lf[855]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
/* eval.scm: 1524 error */
t3=*((C_word*)lf[856]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[857],t2);}}}}

/* k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7821,2,t0,t1);}
t2=*((C_word*)lf[562]+1);
t3=C_mutate((C_word*)lf[479]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7823,a[2]=t2,a[3]=lf[564],tmp=(C_word)a,a+=4,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1551 make-vector */
t5=*((C_word*)lf[584]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7879(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7879,2,t0,t1);}
t2=C_mutate(&lf[565],t1);
t3=lf[566]=C_SCHEME_FALSE;;
t4=(C_word)C_a_i_record(&a,3,lf[567],C_SCHEME_FALSE,C_SCHEME_TRUE);
t5=C_mutate(&lf[568],t4);
t6=C_mutate((C_word*)lf[569]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7886,a[2]=lf[572],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[573]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7994,a[2]=lf[578],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[579]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8113,a[2]=lf[580],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[581]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8116,a[2]=lf[583],tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[584]+1);
t11=C_mutate((C_word*)lf[585]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8160,a[2]=t10,a[3]=lf[587],tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8198,a[2]=lf[589],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8214,a[2]=t12,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10916,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1632 initb */
f_8198(t14,lf[565]);}

/* k10914 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[854]);}

/* k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1653 ##sys#copy-env-table */
t3=*((C_word*)lf[569]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[565],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8218,2,t0,t1);}
t2=C_mutate(&lf[566],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8221,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10912,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1655 initb */
f_8198(t4,lf[566]);}

/* k10910 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[853]);}

/* k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1662 chicken-home */
t3=*((C_word*)lf[33]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8225(C_word c,C_word t0,C_word t1){
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
C_word ab[44],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8225,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_a_i_list(&a,1,t1):C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[503]+1,t2);
t4=*((C_word*)lf[56]+1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8231,a[2]=lf[590],tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[544]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8250,a[2]=t4,a[3]=t5,a[4]=lf[594],tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[208]+1);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8380,a[2]=t7,a[3]=lf[596],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8404,a[2]=t8,a[3]=t7,a[4]=lf[598],tmp=(C_word)a,a+=5,tmp);
t10=C_mutate((C_word*)lf[412]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8425,a[2]=t9,a[3]=t7,a[4]=lf[604],tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(lf[605],0,C_SCHEME_FALSE);
t12=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8479,a[2]=lf[607],tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(lf[378],0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[608]+1,*((C_word*)lf[76]+1));
t15=C_mutate((C_word*)lf[609]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8487,a[2]=lf[610],tmp=(C_word)a,a+=3,tmp));
t16=*((C_word*)lf[56]+1);
t17=*((C_word*)lf[611]+1);
t18=*((C_word*)lf[609]+1);
t19=*((C_word*)lf[612]+1);
t20=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8523,a[2]=t17,a[3]=t18,a[4]=t19,a[5]=t16,a[6]=lf[653],tmp=(C_word)a,a+=7,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10815,a[2]=lf[852],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1823 ##sys#register-macro-2 */
t23=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t21,lf[147],t22);}

/* a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10815(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10815,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10821,a[2]=t4,a[3]=lf[851],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10821(t6,t1,t2);}

/* loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10821(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_10821,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10862,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1834 ##sys#check-syntax */
t7=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[147],t3,lf[846]);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10875,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1838 ##sys#check-syntax */
t7=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[147],t3,lf[848]);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10837,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1830 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[147],t3,lf[635]);}}

/* k10835 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1831 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[147],((C_word*)t0)[4],lf[850]);}

/* k10838 in k10835 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10840,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_i_car(((C_word*)t0)[4]):lf[849]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[94],((C_word*)t0)[2],t3));}

/* k10873 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1839 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[147],((C_word*)t0)[3],lf[847]);}

/* k10876 in k10873 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10878,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,lf[129],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[94],t2,t5));}

/* k10860 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1835 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[147],((C_word*)t0)[2],lf[845]);}

/* k10863 in k10860 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10872,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1836 ##sys#expand-curried-define */
t3=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10870 in k10863 in k10860 in loop in a10814 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1836 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10821(t2,((C_word*)t0)[2],t1);}

/* k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10787,a[2]=lf[844],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1842 ##sys#register-macro-2 */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[843],t3);}

/* a10786 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10787(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10787,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}
else{
t7=(C_word)C_a_i_cons(&a,2,lf[843],t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,4,lf[253],t5,t7,C_SCHEME_FALSE));}}}

/* k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[117]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10744,a[2]=t3,a[3]=lf[842],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1853 ##sys#register-macro-2 */
t5=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[827],t4);}

/* a10743 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10744(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10744,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10766,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1863 gensym */
t8=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t8))(2,t8,t7);}}}

/* k10764 in a10743 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10766,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[827],((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,4,lf[253],t1,t1,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[80],t3,t5));}

/* k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[117]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10547,a[2]=t3,a[3]=lf[841],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1867 ##sys#register-macro-2 */
t5=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[837],t4);}

/* a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10547(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10547,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10553,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[840],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_10553(t6,t1,t2);}

/* expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10553,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10569,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1876 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[837],t3,lf[838]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[839]);}}

/* k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10569(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10569,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[826],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[146],t4));}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[6]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10599,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1878 expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_10553(t8,t7,((C_word*)t0)[3]);}
else{
t6=(C_word)C_i_cadr(((C_word*)t0)[6]);
t7=(C_word)C_eqp(lf[835],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1880 gensym */
t9=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[6]))){
t9=(C_word)C_i_length(((C_word*)t0)[6]);
t10=(C_word)C_eqp(t9,C_fix(4));
if(C_truep(t10)){
t11=(C_word)C_i_caddr(((C_word*)t0)[6]);
t12=t8;
f_10645(t12,(C_word)C_eqp(lf[835],t11));}
else{
t11=t8;
f_10645(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_10645(t9,C_SCHEME_FALSE);}}}}}

/* k10643 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10645(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10645,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1886 gensym */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,lf[146],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10702,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1895 expand */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10553(t6,t5,((C_word*)t0)[3]);}}

/* k10700 in k10643 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10702,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[253],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10646 in k10643 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10648,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,3,lf[836],t4,t1);
t6=(C_word)C_i_cadddr(((C_word*)t0)[5]);
t7=(C_word)C_a_i_list(&a,3,lf[836],t6,t1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10675,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1892 expand */
t9=((C_word*)((C_word*)t0)[3])[1];
f_10553(t9,t8,((C_word*)t0)[2]);}

/* k10673 in k10646 in k10643 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10675,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[253],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,3,lf[129],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[150],((C_word*)t0)[2],t3));}

/* k10606 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10608(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10608,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_i_caddr(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10627,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1884 expand */
t8=((C_word*)((C_word*)t0)[3])[1];
f_10553(t8,t7,((C_word*)t0)[2]);}

/* k10625 in k10606 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10627,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[253],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[80],((C_word*)t0)[2],t2));}

/* k10597 in k10567 in expand in a10546 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10599,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[827],((C_word*)t0)[2],t1));}

/* k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[117]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10444,a[2]=t3,a[3]=lf[834],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1897 ##sys#register-macro-2 */
t5=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[830],t4);}

/* a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10444(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10444,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10454,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1903 gensym */
t6=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10454,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10465,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10467,a[2]=t1,a[3]=t6,a[4]=lf[833],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10467(t8,t4,((C_word*)t0)[2]);}

/* expand in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10467(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10467,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10483,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1910 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[830],t3,lf[831]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[832]);}}

/* k10481 in expand in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10483,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[826],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[146],t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10519,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10521,a[2]=((C_word*)t0)[2],a[3]=lf[829],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[6]);
/* eval.scm: 1913 ##sys#map */
t7=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}

/* a10520 in k10481 in expand in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10521(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10521,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[127],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[828],((C_word*)t0)[2],t3));}

/* k10517 in k10481 in expand in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10519,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[827],t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,lf[146],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10511,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1915 expand */
t6=((C_word*)((C_word*)t0)[3])[1];
f_10467(t6,t5,((C_word*)t0)[2]);}

/* k10509 in k10517 in k10481 in expand in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10511,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[253],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10463 in k10452 in a10443 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10465,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[80],((C_word*)t0)[2],t1));}

/* k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10391,a[2]=lf[825],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1917 ##sys#register-macro-2 */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[126],t3);}

/* a10390 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10391(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10391,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10401,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1922 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[126],t3,lf[824]);}

/* k10399 in a10390 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1923 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[126],((C_word*)t0)[4],lf[823]);}

/* k10402 in k10399 in a10390 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10404,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10409,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=lf[822],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10409(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* expand in k10402 in k10399 in a10390 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10409(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_10409,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[80],t4));}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10434,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(t2);
/* eval.scm: 1927 expand */
t10=t6;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}

/* k10432 in expand in k10402 in k10399 in a10390 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10434,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[80],((C_word*)t0)[2],t1));}

/* k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10321,a[2]=lf[821],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1929 ##sys#register-macro-2 */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[82],t3);}

/* a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10321(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10321,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10331,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1934 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[82],t3,lf[820]);}

/* k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1935 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[82],((C_word*)t0)[3],lf[819]);}

/* k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10381,a[2]=lf[818],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1936 ##sys#map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a10380 in k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10381,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t3,lf[817]));}

/* k10343 in k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10349,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10353,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10367,a[2]=lf[816],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1937 ##sys#map */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a10366 in k10343 in k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10367(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10367,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[94],t3,t4));}

/* k10351 in k10343 in k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10353,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[80],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k10347 in k10343 in k10332 in k10329 in a10320 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10349,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[80],t2));}

/* k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[117]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10202,a[2]=t3,a[3]=lf[815],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1940 ##sys#register-macro */
t5=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[812],t4);}

/* a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_10202r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_10202r(t0,t1,t2,t3,t4);}}

static void C_ccall f_10202r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10206,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1944 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[812],t2,lf[814]);}

/* k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1945 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[812],((C_word*)t0)[6],lf[813]);}

/* k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10212,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1946 gensym */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[811]);}

/* k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10219,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10303,a[2]=lf[810],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1947 ##sys#map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a10302 in k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10303(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10303,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,2,t3,t5));}

/* k10217 in k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10219(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10219,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=(C_truep(t4)?lf[807]:(C_word)C_a_i_cons(&a,2,lf[146],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10242,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t6;
f_10242(t8,lf[809]);}
else{
t8=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t9=t6;
f_10242(t9,(C_word)C_a_i_cons(&a,2,lf[80],t8));}}

/* k10240 in k10217 in k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10242,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10256,a[2]=lf[808],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1958 ##sys#map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a10255 in k10240 in k10217 in k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10256(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10256,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_car(t2));}
else{
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_car(t7));}}

/* k10252 in k10240 in k10217 in k10210 in k10207 in k10204 in a10201 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10254,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[83],t2);
t4=(C_word)C_a_i_list(&a,3,lf[146],((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_list(&a,4,lf[253],((C_word*)t0)[5],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[80],((C_word*)t0)[7],((C_word*)t0)[2],t5));}

/* k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[531]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9910,a[2]=t3,a[3]=lf[806],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1964 ##sys#register-macro */
t5=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[793],t4);}

/* a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9910(C_word c,C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9910,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9913,a[2]=t6,a[3]=t8,a[4]=lf[787],tmp=(C_word)a,a+=5,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9923,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[796],tmp=(C_word)a,a+=5,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10120,a[2]=t8,a[3]=lf[805],tmp=(C_word)a,a+=4,tmp));
/* eval.scm: 2025 walk */
t12=((C_word*)t4)[1];
f_9913(t12,t1,t2,C_fix(0));}

/* simplify in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_10120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10120,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10124,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2012 ##sys#match-expression */
t4=*((C_word*)lf[173]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[803],lf[804]);}

/* k10122 in simplify in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10124,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[797],t1);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_list(&a,2,lf[790],t3);
/* eval.scm: 2013 simplify */
t5=((C_word*)((C_word*)t0)[4])[1];
f_10120(t5,((C_word*)t0)[3],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2014 ##sys#match-expression */
t3=*((C_word*)lf[173]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[801],lf[802]);}}

/* k10143 in k10122 in simplify in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10145(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10145,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[798],t1);
t3=(C_word)C_i_length(t2);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(32)))){
t4=(C_word)C_i_assq(lf[797],t1);
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,lf[790],t7);
/* eval.scm: 2018 simplify */
t9=((C_word*)((C_word*)t0)[4])[1];
f_10120(t9,((C_word*)t0)[3],t8);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2021 ##sys#match-expression */
t3=*((C_word*)lf[173]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[799],lf[800]);}}

/* k10185 in k10143 in k10122 in simplify in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[797],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9923(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[72],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9923,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9937,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9941,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1974 vector->list */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
if(C_truep((C_word)C_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t4,lf[789]);
if(C_truep(t6)){
t7=(C_truep((C_word)C_blockp(t5))?(C_word)C_pairp(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_slot(t5,C_fix(0));
t9=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9984,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=(C_word)C_fixnum_difference(t3,C_fix(1));
/* eval.scm: 1986 walk */
t12=((C_word*)((C_word*)t0)[3])[1];
f_9913(t12,t10,t8,t11);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[792]);}}
else{
t7=(C_word)C_eqp(t4,lf[793]);
if(C_truep(t7)){
t8=(C_truep((C_word)C_blockp(t5))?(C_word)C_pairp(t5):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(C_word)C_a_i_list(&a,2,lf[127],lf[793]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10011,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_slot(t5,C_fix(0));
t12=(C_word)C_fixnum_plus(t3,C_fix(1));
/* eval.scm: 1991 walk */
t13=((C_word*)((C_word*)t0)[3])[1];
f_9913(t13,t10,t11,t12);}
else{
t9=(C_word)C_a_i_list(&a,2,lf[127],lf[793]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10030,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1992 walk */
t11=((C_word*)((C_word*)t0)[3])[1];
f_9913(t11,t10,t5,t3);}}
else{
t8=(C_truep((C_word)C_blockp(t4))?(C_word)C_pairp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(C_word)C_slot(t4,C_fix(0));
t10=(C_word)C_slot(t4,C_fix(1));
t11=(C_word)C_eqp(t9,lf[795]);
t12=(C_truep(t11)?(C_truep((C_word)C_blockp(t10))?(C_word)C_pairp(t10):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=(C_word)C_slot(t10,C_fix(0));
t14=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10064,a[2]=t13,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2003 walk */
t16=((C_word*)((C_word*)t0)[3])[1];
f_9913(t16,t15,t5,t3);}
else{
t15=(C_word)C_a_i_list(&a,2,lf[127],lf[795]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10083,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
t17=(C_word)C_fixnum_difference(t3,C_fix(1));
/* eval.scm: 2005 walk */
t18=((C_word*)((C_word*)t0)[3])[1];
f_9913(t18,t16,t13,t17);}}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10094,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2007 walk */
t14=((C_word*)((C_word*)t0)[3])[1];
f_9913(t14,t13,t4,t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10111,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2008 walk */
t10=((C_word*)((C_word*)t0)[3])[1];
f_9913(t10,t9,t4,t3);}}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[127],t2));}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[127],t2));}}

/* k10109 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10115,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2008 walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9913(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10113 in k10109 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10115,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[794],((C_word*)t0)[2],t1));}

/* k10092 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10098,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2007 walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9913(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10096 in k10092 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10098,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[794],((C_word*)t0)[2],t1));}

/* k10081 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10083,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[790],((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10075,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2006 walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9913(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10073 in k10081 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10075,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[794],((C_word*)t0)[2],t1));}

/* k10062 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10064,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[125],((C_word*)t0)[2],t1));}

/* k10028 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10030,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[794],((C_word*)t0)[2],t1));}

/* k10009 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_10011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10011,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[790],((C_word*)t0)[2],t1));}

/* k9982 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9984,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[790],lf[791],t1));}

/* k9939 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1974 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9913(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9935 in walk1 in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9937,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[788],t1));}

/* walk in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9913(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9913,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9921,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1969 walk1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_9923(t5,t4,t2,t3);}

/* k9919 in walk in a9909 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1969 simplify */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10120(t2,((C_word*)t0)[2],t1);}

/* k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9900,a[2]=lf[785],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2027 ##sys#register-macro */
t4=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[786],t3);}

/* a9899 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9900,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[784],t3));}

/* k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2035 append */
t3=*((C_word*)lf[91]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[783],*((C_word*)lf[339]+1));}

/* k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8946(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8946,2,t0,t1);}
t2=C_mutate((C_word*)lf[339]+1,t1);
t3=C_set_block_item(lf[654],0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[655],0,C_SCHEME_FALSE);
t5=C_set_block_item(lf[656],0,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9897,a[2]=lf[781],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2045 make-parameter */
t8=*((C_word*)lf[782]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* a9896 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9897,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[780]);}

/* k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8953(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8953,2,t0,t1);}
t2=C_mutate((C_word*)lf[657]+1,t1);
t3=*((C_word*)lf[657]+1);
t4=C_mutate((C_word*)lf[658]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8955,a[2]=t3,a[3]=lf[662],tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[663]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8971,a[2]=lf[664],tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[376]+1);
t7=*((C_word*)lf[399]+1);
t8=*((C_word*)lf[74]+1);
t9=*((C_word*)lf[665]+1);
t10=*((C_word*)lf[666]+1);
t11=*((C_word*)lf[383]+1);
t12=*((C_word*)lf[667]+1);
t13=C_mutate((C_word*)lf[668]+1,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8974,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t11,a[6]=t9,a[7]=t10,a[8]=lf[703],tmp=(C_word)a,a+=9,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2167 make-vector */
t15=*((C_word*)lf[584]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9330(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9330,2,t0,t1);}
t2=C_mutate((C_word*)lf[704]+1,t1);
t3=C_mutate((C_word*)lf[705]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9332,a[2]=lf[706],tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[707]+1);
t5=*((C_word*)lf[708]+1);
t6=*((C_word*)lf[399]+1);
t7=C_mutate((C_word*)lf[707]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9341,a[2]=t4,a[3]=t5,a[4]=t6,a[5]=lf[713],tmp=(C_word)a,a+=6,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9755,a[2]=lf[779],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2196 ##sys#register-macro */
t10=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,lf[775],t9);}

/* a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9755(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_9755r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9755r(t0,t1,t2,t3);}}

static void C_ccall f_9755r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9758,a[2]=lf[774],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9863,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2207 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[775],t3,lf[776]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9873,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2210 ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[775],t2,lf[778]);}}

/* k9871 in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2211 ##sys#check-syntax */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[775],((C_word*)t0)[4],lf[777]);}

/* k9874 in k9871 in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9876,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(C_word)C_a_i_cons(&a,2,lf[129],t4);
/* eval.scm: 2212 expand */
f_9758(((C_word*)t0)[2],t2,t5);}

/* k9861 in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
/* eval.scm: 2208 expand */
f_9758(((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* expand in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9758(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9758,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9762,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(lf[129],t5);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_cadr(t3);
t9=t4;
f_9762(t9,(C_word)C_i_symbolp(t8));}
else{
t8=t4;
f_9762(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_9762(t7,C_SCHEME_FALSE);}}
else{
t5=t4;
f_9762(t5,C_SCHEME_FALSE);}}

/* k9760 in expand in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9762(C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9762,NULL,2,t0,t1);}
t2=(C_truep(*((C_word*)lf[102]+1))?lf[330]:lf[329]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9773,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[3]);
t5=(C_word)C_i_cadr(((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_i_cddr(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[129],t8);
t10=t3;
f_9773(t10,(C_word)C_a_i_list(&a,3,lf[42],t4,t9));}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t4=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[3]);
t6=t3;
f_9773(t6,(C_word)C_a_i_list(&a,3,lf[49],t4,t5));}
else{
t4=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[3]);
t5=t3;
f_9773(t5,(C_word)C_a_i_list(&a,3,lf[46],t4,((C_word*)t0)[2]));}}}

/* k9771 in k9760 in expand in a9754 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9773,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9736,a[2]=lf[773],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2214 ##sys#register-macro */
t4=*((C_word*)lf[46]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[547],t3);}

/* a9735 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9736(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_9736r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9736r(t0,t1,t2);}}

static void C_ccall f_9736r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9740,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2217 ##sys#check-syntax */
t4=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[547],t2,lf[772]);}

/* k9738 in a9735 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9747,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9749,a[2]=lf[771],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a9748 in k9738 in a9735 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9749,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[127],t2));}

/* k9745 in k9738 in a9735 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9747,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[323],t1));}

/* k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9422,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9730,a[2]=lf[770],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2223 ##sys#register-macro-2 */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[768],t3);}

/* a9729 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9730,3,t0,t1,t2);}
/* eval.scm: 2226 ##sys#syntax-error-hook */
t3=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[768],lf[769]);}

/* k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9724,a[2]=lf[767],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2228 ##sys#register-macro-2 */
t4=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[765],t3);}

/* a9723 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9724,3,t0,t1,t2);}
/* eval.scm: 2231 ##sys#syntax-error-hook */
t3=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[765],lf[766]);}

/* k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9425(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9425,2,t0,t1);}
t2=lf[714]=C_SCHEME_FALSE;;
t3=C_mutate(&lf[715],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9428,a[2]=lf[724],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[725],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9487,a[2]=lf[727],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[728],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9496,a[2]=lf[731],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[732],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9508,a[2]=lf[734],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[735],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9524,a[2]=lf[738],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[739],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9550,a[2]=lf[741],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[742],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9563,a[2]=lf[744],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[745],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9589,a[2]=lf[747],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[748],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9626,a[2]=lf[750],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[751],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9642,a[2]=lf[753],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[754],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9668,a[2]=lf[756],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[757],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9690,a[2]=lf[759],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[760],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9705,a[2]=lf[762],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[197]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9715,a[2]=lf[764],tmp=(C_word)a,a+=3,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* ##sys#make-lambda-info in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9715(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9715,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9722,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2338 ##sys#make-string */
t5=*((C_word*)lf[763]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k9720 in ##sys#make-lambda-info in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(C_word)C_string_to_lambdainfo(t1);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* CHICKEN_get_error_message in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9705,4,t0,t1,t2,t3);}
t4=lf[714];
t5=(C_truep(t4)?t4:lf[761]);
/* eval.scm: 2331 store-string */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_9550(t5,t3,t2));}

/* CHICKEN_load in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9690(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9690,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9694,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k9692 in CHICKEN_load in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9699,a[2]=t1,a[3]=lf[758],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2328 run-safe */
f_9428(((C_word*)t0)[2],t2);}

/* a9698 in k9692 in CHICKEN_load in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9703,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2328 load */
t3=*((C_word*)lf[420]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k9701 in a9698 in k9692 in CHICKEN_load in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* CHICKEN_read in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9668,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9672,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9670 in CHICKEN_read in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9672,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9677,a[2]=t1,a[3]=t2,a[4]=lf[755],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2322 run-safe */
f_9428(((C_word*)t0)[2],t3);}

/* a9676 in k9670 in CHICKEN_read in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9681,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2324 open-input-string */
t3=*((C_word*)lf[736]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9679 in a9676 in k9670 in CHICKEN_read in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2325 read */
t3=*((C_word*)lf[399]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k9686 in k9679 in a9676 in k9670 in CHICKEN_read in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2325 store-result */
f_9487(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9642(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9642,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9648,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=lf[752],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2315 run-safe */
f_9428(t1,t6);}

/* a9647 in CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2317 open-output-string */
t3=*((C_word*)lf[200]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9650 in a9647 in CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9655,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9666,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9664 in k9650 in a9647 in CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2318 write */
t2=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9653 in k9650 in a9647 in CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9662,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2319 get-output-string */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9660 in k9653 in k9650 in a9647 in CHICKEN_apply_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2319 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9550(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_apply in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9626(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9626,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9632,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=lf[749],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2310 run-safe */
f_9428(t1,t5);}

/* a9631 in CHICKEN_apply in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9640,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9638 in a9631 in CHICKEN_apply in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2310 store-result */
f_9487(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9589(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9589,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9593,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(0));}

/* k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9593,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9598,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=lf[746],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2301 run-safe */
f_9428(((C_word*)t0)[2],t4);}

/* a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2303 open-output-string */
t3=*((C_word*)lf[200]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9605,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9616,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9620,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9624,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2304 open-input-string */
t6=*((C_word*)lf[736]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k9622 in k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 read */
t2=*((C_word*)lf[399]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9618 in k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 eval */
t2=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9614 in k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 write */
t2=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9603 in k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2305 get-output-string */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9610 in k9603 in k9600 in a9597 in k9591 in CHICKEN_eval_string_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2305 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9550(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9563(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9563,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9569,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[743],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2292 run-safe */
f_9428(t1,t5);}

/* a9568 in CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2294 open-output-string */
t3=*((C_word*)lf[200]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9571 in a9568 in CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9576,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9587,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2295 eval */
t4=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9585 in k9571 in a9568 in CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2295 write */
t2=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9574 in k9571 in a9568 in CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9576,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2296 get-output-string */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9581 in k9574 in k9571 in a9568 in CHICKEN_eval_to_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2296 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9550(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* store-string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall f_9550(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t4=(C_word)C_block_size(t1);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t2))){
t5=C_mutate(&lf[714],lf[740]);
return(C_SCHEME_FALSE);}
else{
return((C_word)C_copy_result_string(t1,t3,t4));}}

/* CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9524,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9528,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9526 in CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9528,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9533,a[2]=t1,a[3]=t2,a[4]=lf[737],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2273 run-safe */
f_9428(((C_word*)t0)[2],t3);}

/* a9532 in k9526 in CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9537,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2275 open-input-string */
t3=*((C_word*)lf[736]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9535 in a9532 in k9526 in CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9548,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2276 read */
t4=*((C_word*)lf[399]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k9546 in k9535 in a9532 in k9526 in CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2276 eval */
t2=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9542 in k9535 in a9532 in k9526 in CHICKEN_eval_string in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2276 store-result */
f_9487(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9508,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9514,a[2]=t2,a[3]=t3,a[4]=lf[733],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2268 run-safe */
f_9428(t1,t4);}

/* a9513 in CHICKEN_eval in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9522,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2270 eval */
t3=*((C_word*)lf[376]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9520 in a9513 in CHICKEN_eval in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2270 store-result */
f_9487(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_yield in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9502,a[2]=lf[730],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2265 run-safe */
f_9428(t1,t2);}

/* a9501 in CHICKEN_yield in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9506,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2265 thread-yield! */
t3=*((C_word*)lf[729]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k9504 in a9501 in CHICKEN_yield in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* store-result in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9487(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9487,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9491,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2259 ##sys#gc */
t5=*((C_word*)lf[726]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_FALSE);}

/* k9489 in store-result in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_store_result(((C_word*)t0)[3],((C_word*)t0)[4]):C_SCHEME_UNDEFINED);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9428(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9428,NULL,2,t1,t2);}
t3=lf[714]=C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9436,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9438,a[2]=t2,a[3]=lf[723],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2247 call-with-current-continuation */
t6=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9438,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9444,a[2]=t2,a[3]=lf[718],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9463,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[722],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2247 with-exception-handler */
t5=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a9462 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9469,a[2]=((C_word*)t0)[3],a[3]=lf[719],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9475,a[2]=((C_word*)t0)[2],a[3]=lf[721],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2247 ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a9474 in a9462 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9475(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_9475r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9475r(t0,t1,t2);}}

static void C_ccall f_9475r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9481,a[2]=t2,a[3]=lf[720],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2247 g1454 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a9480 in a9474 in a9462 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9481,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a9468 in a9462 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9469,2,t0,t1);}
/* eval.scm: 2252 thunk */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a9443 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9444(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9444,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9450,a[2]=t2,a[3]=lf[717],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2247 g1454 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a9449 in a9443 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9454,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2248 open-output-string */
t3=*((C_word*)lf[200]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9452 in a9449 in a9443 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9457,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2249 print-error-message */
t3=*((C_word*)lf[716]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k9455 in k9452 in a9449 in a9443 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9461,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2250 get-output-string */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9459 in k9455 in k9452 in a9449 in a9443 in a9437 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[714],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k9434 in run-safe in k9423 in k9420 in k9417 in k9414 in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9341,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_make_character(44));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9351,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2179 read-char */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
/* eval.scm: 2191 old */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k9349 in ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9354,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2180 read */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}

/* k9352 in k9349 in ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9355,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[711],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_nullp(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9368,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_9368(t5,t3);}
else{
t5=(C_word)C_i_listp(t1);
t6=t4;
f_9368(t6,(C_word)C_i_not(t5));}}

/* k9366 in k9352 in k9349 in ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9368(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9368,NULL,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 2183 err */
t2=((C_word*)t0)[5];
f_9355(t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9386,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2187 ##sys#hash-table-ref */
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[704]+1),t2);}
else{
/* eval.scm: 2186 err */
t3=((C_word*)t0)[5];
f_9355(t3,((C_word*)t0)[4]);}}}

/* k9384 in k9366 in k9352 in k9349 in ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_apply(4,0,((C_word*)t0)[4],t1,t2);}
else{
/* eval.scm: 2190 ##sys#read-error */
t2=*((C_word*)lf[709]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[712],((C_word*)t0)[2]);}}

/* err in k9352 in k9349 in ##sys#user-read-hook in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9355(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9355,NULL,2,t0,t1);}
/* eval.scm: 2181 ##sys#read-error */
t2=*((C_word*)lf[709]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],lf[710],((C_word*)t0)[2]);}

/* define-reader-ctor in k9328 in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9332,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_symbol_2(t2,lf[705]);
/* eval.scm: 2171 ##sys#hash-table-set! */
t5=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[704]+1),t2,t3);}

/* repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8974(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8977,a[2]=lf[672],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8992,a[2]=t2,a[3]=lf[675],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9004,a[2]=t2,a[3]=lf[677],tmp=(C_word)a,a+=4,tmp);
t5=*((C_word*)lf[678]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[660]+1);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[673]+1);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9033,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t10,a[12]=t8,a[13]=t6,tmp=(C_word)a,a+=14,tmp);
/* eval.scm: 2079 ##sys#error-handler */
t12=*((C_word*)lf[683]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9036,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* eval.scm: 2080 ##sys#reset-handler */
t3=*((C_word*)lf[698]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9036(C_word c,C_word t0,C_word t1){
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
C_word ab[38],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9036,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[204]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9038,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9044,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9053,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=t6,a[7]=t3,a[8]=lf[684],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9118,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t5,a[8]=lf[701],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9315,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,a[7]=lf[702],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 2094 ##sys#dynamic-wind */
t10=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[2],t7,t8,t9);}

/* a9314 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9319,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2159 load-verbose */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k9317 in a9314 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9319,2,t0,t1);}
t2=C_mutate((C_word*)lf[204]+1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2161 ##sys#error-handler */
t4=*((C_word*)lf[683]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9321 in k9317 in a9314 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2162 ##sys#reset-handler */
t2=*((C_word*)lf[698]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9118,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=lf[700],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_9124(t5,t1);}

/* loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9124,NULL,2,t0,t1);}
t2=f_9038(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9131,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9296,a[2]=((C_word*)t0)[3],a[3]=lf[699],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2117 call-with-current-continuation */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* a9295 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9296(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9296,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9302,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[697],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2119 ##sys#reset-handler */
t4=*((C_word*)lf[698]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a9301 in a9295 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9302,2,t0,t1);}
t2=C_set_block_item(lf[407],0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[695],0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[696],0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[448],0,C_SCHEME_FALSE);
t6=f_9044(((C_word*)t0)[3]);
/* eval.scm: 2126 c */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t1,C_SCHEME_FALSE);}

/* k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2127 ##sys#read-prompt-hook */
t3=*((C_word*)lf[658]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9137,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=*((C_word*)lf[656]+1);
t4=(C_truep(t3)?t3:((C_word*)t0)[2]);
t5=t4;
((C_proc2)C_retrieve_proc(t5))(2,t5,t2);}

/* k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9137,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9146,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9291,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2130 ##sys#peek-char-0 */
t4=*((C_word*)lf[694]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[678]+1));}}

/* k9289 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(10),t1);
if(C_truep(t2)){
/* eval.scm: 2131 ##sys#read-char-0 */
t3=*((C_word*)lf[693]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[678]+1));}
else{
t3=((C_word*)t0)[2];
f_9146(2,t3,C_SCHEME_UNDEFINED);}}

/* k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2132 ##sys#clear-trace-buffer */
t3=*((C_word*)lf[663]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9149,2,t0,t1);}
t2=C_set_block_item(lf[204],0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9155,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=lf[685],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9164,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[692],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2134 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9164(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_9164r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9164r(t0,t1,t2);}}

static void C_ccall f_9164r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9168,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(*((C_word*)lf[686]+1))?(C_word)C_i_pairp(*((C_word*)lf[204]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9182,a[2]=t6,a[3]=lf[691],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_9182(t8,t3,*((C_word*)lf[204]+1),C_SCHEME_END_OF_LIST);}
else{
t5=t3;
f_9168(2,t5,C_SCHEME_UNDEFINED);}}

/* loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9182(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9182,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9186,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9198,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2139 ##sys#print */
t6=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[690],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}
else{
t5=t4;
f_9186(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9278,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2152 caar */
t6=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* k9276 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9278,2,t0,t1);}
t2=(C_word)C_i_memq(t1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9245,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9245(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9274,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2153 caar */
t5=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}}

/* k9272 in k9276 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2153 ##sys#symbol-has-toplevel-binding? */
t2=*((C_word*)lf[228]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k9243 in k9276 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9245,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* eval.scm: 2154 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9182(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* eval.scm: 2155 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9182(t5,((C_word*)t0)[3],t2,t4);}}

/* k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9203,a[2]=lf[689],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9203,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9207,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2144 ##sys#print */
t4=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[688],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}

/* k9205 in a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* eval.scm: 2145 ##sys#print */
t4=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[673]+1));}

/* k9208 in k9205 in a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9213,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_cdr(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9222,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2147 ##sys#print */
t4=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[687],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}
else{
t3=t2;
f_9213(2,t3,C_SCHEME_UNDEFINED);}}

/* k9220 in k9208 in k9205 in a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9225,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* eval.scm: 2148 ##sys#print */
t4=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[673]+1));}

/* k9223 in k9220 in k9208 in k9205 in a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2149 ##sys#write-char-0 */
t2=*((C_word*)lf[669]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(41),*((C_word*)lf[673]+1));}

/* k9211 in k9208 in k9205 in a9202 in k9196 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2150 ##sys#write-char-0 */
t2=*((C_word*)lf[669]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[673]+1));}

/* k9184 in loop in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(9));}

/* k9166 in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9171,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2156 write-results */
t3=((C_word*)t0)[3];
f_9004(t3,t2,((C_word*)t0)[2]);}

/* k9169 in k9166 in a9163 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2157 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9124(t2,((C_word*)t0)[2]);}

/* a9154 in k9147 in k9144 in k9135 in k9132 in k9129 in loop in a9117 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9155,2,t0,t1);}
t2=*((C_word*)lf[654]+1);
t3=(C_truep(t2)?t2:((C_word*)t0)[3]);
t4=t3;
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,((C_word*)t0)[2]);}

/* a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9058,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 2096 load-verbose */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9058,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2097 load-verbose */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}

/* k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=lf[682],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2098 ##sys#error-handler */
t3=*((C_word*)lf[683]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9066(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_9066r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9066r(t0,t1,t2,t3);}}

static void C_ccall f_9066r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=f_9044(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9073,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 2101 ##sys#print */
t6=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[681],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}

/* k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9113,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2103 ##sys#print */
t4=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[680],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}
else{
t3=t2;
f_9076(2,t3,C_SCHEME_UNDEFINED);}}

/* k9111 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2104 ##sys#print */
t2=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}

/* k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9088,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
t5=t3;
f_9088(t5,(C_word)C_i_nullp(t4));}
else{
t4=t3;
f_9088(t4,C_SCHEME_FALSE);}}

/* k9086 in k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9088,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2107 ##sys#print */
t3=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[679],C_SCHEME_FALSE,*((C_word*)lf[673]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2110 ##sys#write-char-0 */
t3=*((C_word*)lf[669]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),*((C_word*)lf[673]+1));}}

/* k9095 in k9086 in k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2111 write-err */
t2=((C_word*)t0)[4];
f_8992(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9089 in k9086 in k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2108 write-err */
t2=((C_word*)t0)[4];
f_8992(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9077 in k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9082,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2112 print-call-chain */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,*((C_word*)lf[673]+1));}

/* k9080 in k9077 in k9074 in k9071 in a9065 in k9059 in k9056 in a9052 in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2113 flush-output */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],*((C_word*)lf[673]+1));}

/* resetports in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall f_9044(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_mutate((C_word*)lf[678]+1,((C_word*)((C_word*)t0)[4])[1]);
t2=C_mutate((C_word*)lf[660]+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[673]+1,((C_word*)((C_word*)t0)[2])[1]);
return(t3);}

/* saveports in k9034 in k9031 in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall f_9038(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[678]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[660]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[673]+1));
return(t3);}

/* write-results in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9004,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9014,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_9014(t5,t3);}
else{
t5=(C_word)C_i_car(t2);
t6=t4;
f_9014(t6,(C_word)C_eqp(C_SCHEME_UNDEFINED,t5));}}

/* k9012 in write-results in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_9014(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9014,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9019,a[2]=((C_word*)t0)[3],a[3]=lf[676],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t3=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* a9018 in k9012 in write-results in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_9019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9019,3,t0,t1,t2);}
/* write-one1340 */
f_8977(t1,t2,*((C_word*)lf[660]+1));}

/* write-err in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8992,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8998,a[2]=((C_word*)t0)[2],a[3]=lf[674],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a8997 in write-err in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8998,3,t0,t1,t2);}
/* write-one1340 */
f_8977(t1,t2,*((C_word*)lf[673]+1));}

/* write-one in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8977(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8977,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8981,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8986,a[2]=t3,a[3]=t2,a[4]=lf[670],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2066 ##sys#with-print-length-limit */
t6=*((C_word*)lf[671]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,*((C_word*)lf[655]+1),t5);}

/* a8985 in write-one in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8986,2,t0,t1);}
/* ##sys#print */
t2=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k8979 in write-one in repl in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2067 ##sys#write-char-0 */
t2=*((C_word*)lf[669]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##sys#clear-trace-buffer in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8971,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub1331(C_SCHEME_UNDEFINED));}

/* ##sys#read-prompt-hook in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8955,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8959,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8966,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8969,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2050 repl-prompt */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k8967 in ##sys#read-prompt-hook in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k8964 in ##sys#read-prompt-hook in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2050 ##sys#print */
t2=*((C_word*)lf[661]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,*((C_word*)lf[660]+1));}

/* k8957 in ##sys#read-prompt-hook in k8951 in k8944 in k8940 in k8937 in k8934 in k8931 in k8928 in k8925 in k8922 in k8919 in k8916 in k8913 in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2051 ##sys#flush-output */
t2=*((C_word*)lf[659]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[660]+1));}

/* ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+28)){
C_save_and_reclaim((void*)tr5rv,(void*)f_8523r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_8523r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_8523r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(28);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8538,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=lf[618],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8526,a[2]=t6,a[3]=lf[619],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8569,a[2]=((C_word*)t0)[2],a[3]=lf[621],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8631,a[2]=lf[623],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8660,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t8,a[6]=t9,a[7]=t7,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_notvemptyp(t5))){
t11=(C_word)C_i_vector_ref(t5,C_fix(0));
t12=C_mutate((C_word*)lf[378]+1,t11);
t13=t10;
f_8660(t13,t12);}
else{
t11=t10;
f_8660(t11,C_SCHEME_UNDEFINED);}}

/* k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8660(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8660,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8665,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=((C_word*)t0)[8],a[7]=lf[652],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_8665(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8665(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(21);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8665,NULL,4,t0,t1,t2,t3);}
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_vectorp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_block_size(t3);
t7=(C_word)C_fixnum_greaterp(t6,C_fix(1));
t8=(C_truep(t7)?(C_word)C_slot(t3,C_fix(1)):C_fix(0));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8681,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t10=(C_word)C_eqp(t6,C_fix(1));
if(C_truep(t10)){
t11=t9;
f_8681(t11,C_fix(1));}
else{
t11=(C_word)C_fixnum_greaterp(t6,C_fix(2));
t12=t9;
f_8681(t12,(C_truep(t11)?(C_word)C_slot(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep((C_word)C_blockp(t3))){
if(C_truep((C_word)C_symbolp(t3))){
t5=t3;
t6=(C_word)C_eqp(t5,lf[628]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_TRUE);}
else{
t7=(C_word)C_eqp(t5,lf[629]);
if(C_truep(t7)){
/* eval.scm: 1806 test */
t8=((C_word*)t0)[4];
f_8526(t8,t1,t2,*((C_word*)lf[630]+1),lf[631]);}
else{
t8=(C_word)C_eqp(t5,lf[632]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8810,a[2]=lf[633],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1807 test */
t10=((C_word*)t0)[4];
f_8526(t10,t1,t2,t9,lf[634]);}
else{
t9=(C_word)C_eqp(t5,lf[635]);
if(C_truep(t9)){
/* eval.scm: 1808 test */
t10=((C_word*)t0)[4];
f_8526(t10,t1,t2,*((C_word*)lf[636]+1),lf[637]);}
else{
t10=(C_word)C_eqp(t5,lf[638]);
if(C_truep(t10)){
/* eval.scm: 1809 test */
t11=((C_word*)t0)[4];
f_8526(t11,t1,t2,((C_word*)t0)[3],lf[639]);}
else{
t11=(C_word)C_eqp(t5,lf[640]);
if(C_truep(t11)){
/* eval.scm: 1810 test */
t12=((C_word*)t0)[4];
f_8526(t12,t1,t2,*((C_word*)lf[641]+1),lf[642]);}
else{
t12=(C_word)C_eqp(t5,lf[643]);
if(C_truep(t12)){
/* eval.scm: 1811 test */
t13=((C_word*)t0)[4];
f_8526(t13,t1,t2,*((C_word*)lf[644]+1),lf[645]);}
else{
t13=(C_word)C_eqp(t5,lf[646]);
if(C_truep(t13)){
/* eval.scm: 1812 test */
t14=((C_word*)t0)[4];
f_8526(t14,t1,t2,((C_word*)t0)[2],lf[647]);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8864,a[2]=t3,a[3]=lf[648],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1813 test */
t15=((C_word*)t0)[4];
f_8526(t15,t1,t2,t14,lf[649]);}}}}}}}}}
else{
t5=(C_word)C_i_not((C_word)C_blockp(t2));
t6=(C_truep(t5)?t5:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t6)){
/* eval.scm: 1815 err */
t7=((C_word*)t0)[6];
f_8538(t7,t1,lf[650]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8883,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* eval.scm: 1817 walk */
t30=t7;
t31=t8;
t32=t9;
t1=t30;
t2=t31;
t3=t32;
goto loop;}}}
else{
t5=(C_word)C_eqp(t3,t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 1802 err */
t6=((C_word*)t0)[6];
f_8538(t6,t1,lf[651]);}}}}

/* k8881 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1818 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8665(t4,((C_word*)t0)[2],t2,t3);}

/* a8863 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8864(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8864,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* a8809 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8810,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_symbolp(t2));}

/* k8679 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8681(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8681,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8686,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=lf[627],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_8686(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* do1209 in k8679 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8686(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8686,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[7]))){
/* eval.scm: 1795 err */
t5=((C_word*)t0)[6];
f_8538(t5,t1,lf[624]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8705,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
/* eval.scm: 1797 err */
t6=((C_word*)t0)[6];
f_8538(t6,t5,lf[625]);}
else{
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* eval.scm: 1799 err */
t8=((C_word*)t0)[6];
f_8538(t8,t5,lf[626]);}
else{
t8=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1800 walk */
t9=((C_word*)((C_word*)t0)[3])[1];
f_8665(t9,t5,t8,((C_word*)t0)[2]);}}}}

/* k8703 in do1209 in k8679 in walk in k8658 in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_8686(t4,((C_word*)t0)[2],t2,t3);}

/* proper-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8631(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8631,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8637,a[2]=lf[622],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_8637(t2));}

/* loop in proper-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall f_8637(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(t2);}
else{
t3=(C_truep((C_word)C_blockp(t1))?(C_word)C_pairp(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(C_word)C_slot(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* lambda-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8569(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8569,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8573,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1762 ##sys#extended-lambda-list? */
t4=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8571 in lambda-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8573,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8581,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[620],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8581(t5,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* loop in k8571 in lambda-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8581(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8581,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8604,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1766 keyword? */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}
else{
if(C_truep((C_word)C_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_not((C_word)C_blockp(t4));
t6=(C_truep(t5)?t5:(C_word)C_i_not((C_word)C_symbolp(t4)));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 1771 loop */
t10=t1;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* k8602 in loop in k8571 in lambda-list? in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* test in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8526(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8526,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8533,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1750 pred */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k8531 in test in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 1750 err */
t2=((C_word*)t0)[3];
f_8538(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8538(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8538,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[378]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 1754 get-line-number */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k8540 in err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8549,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8556,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1757 symbol->string */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1758 symbol->string */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}}

/* k8565 in k8540 in err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1758 string-append */
t2=((C_word*)t0)[4];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[616],t1,lf[617],((C_word*)t0)[2]);}

/* k8554 in k8540 in err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8560,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1757 number->string */
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}

/* k8558 in k8554 in k8540 in err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1757 string-append */
t2=((C_word*)t0)[5];
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[4],lf[613],((C_word*)t0)[3],lf[614],t1,lf[615],((C_word*)t0)[2]);}

/* k8547 in k8540 in err in ##sys#check-syntax in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1755 ##sys#syntax-error-hook */
t2=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* get-line-number in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8487(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8487,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[605]+1))){
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8509,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1736 ##sys#hash-table-ref */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[605]+1),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k8507 in get-line-number in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8509(C_word c,C_word t0,C_word t1){
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

/* ##sys#syntax-error-hook in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8479(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_8479r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8479r(t0,t1,t2);}}

static void C_ccall f_8479r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[395]+1),lf[606],t2);}

/* ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8425(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8425,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8429,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1711 display-rj */
t5=((C_word*)t0)[2];
f_8404(t5,t3,t4,C_fix(8));}

/* k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1712 display */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[603]);}

/* k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1713 display-rj */
t4=((C_word*)t0)[2];
f_8404(t4,t2,t3,C_fix(8));}

/* k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1714 display */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[602]);}

/* k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
/* eval.scm: 1715 display-rj */
t4=((C_word*)t0)[2];
f_8404(t4,t2,t3,C_fix(8));}

/* k8439 in k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1716 display */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[601]);}

/* k8442 in k8439 in k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
/* eval.scm: 1717 display-rj */
t4=((C_word*)t0)[2];
f_8404(t4,t2,t3,C_fix(8));}

/* k8445 in k8442 in k8439 in k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1718 display */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[600]);}

/* k8448 in k8445 in k8442 in k8439 in k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8453,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
/* eval.scm: 1719 display-rj */
t4=((C_word*)t0)[2];
f_8404(t4,t2,t3,C_fix(8));}

/* k8451 in k8448 in k8445 in k8442 in k8439 in k8436 in k8433 in k8430 in k8427 in ##sys#display-times in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1720 display */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[599]);}

/* display-rj in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8404(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8404,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8408,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_zerop(t2))){
t5=t4;
f_8408(2,t5,lf[597]);}
else{
/* eval.scm: 1706 number->string */
C_number_to_string(3,0,t4,t2);}}

/* k8406 in display-rj in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8408,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8411,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_fixnum_difference(((C_word*)t0)[3],t2);
/* eval.scm: 1708 spaces */
t5=((C_word*)t0)[2];
f_8380(t5,t3,t4);}

/* k8409 in k8406 in display-rj in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1709 display */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* spaces in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8380(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8380,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8386,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[595],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8386(t6,t1,t2);}

/* do1139 in spaces in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8386,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8396,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1703 display */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_make_character(32));}}

/* k8394 in do1139 in spaces in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8386(t3,((C_word*)t0)[2],t2);}

/* ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8250(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_8250r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_8250r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8250r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8254,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_8254(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_8254(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8254(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8254,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8256,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=lf[591],tmp=(C_word)a,a+=5,tmp));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8291,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=lf[592],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8308,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1684 test */
t7=t5;
f_8291(t7,t6,((C_word*)t0)[3]);}

/* k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8308,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8318,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8359,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1686 ##sys#repository-path */
t4=*((C_word*)lf[497]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_8318(2,t3,*((C_word*)lf[503]+1));}}}

/* k8357 in k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8359,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 1686 ##sys#append */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],*((C_word*)lf[503]+1),t2);}

/* k8316 in k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8318,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=lf[593],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8320(t5,((C_word*)t0)[2],t1);}

/* loop in k8316 in k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8320(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8320,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8330,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8344,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1689 string-append */
t7=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,t6,lf[4],((C_word*)t0)[5]);}}

/* k8342 in loop in k8316 in k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1689 test */
t2=((C_word*)t0)[3];
f_8291(t2,((C_word*)t0)[2],t1);}

/* k8328 in loop in k8316 in k8306 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1692 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8320(t3,((C_word*)t0)[4],t2);}}

/* test in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8291(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8291,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[3])?(C_word)C_a_i_list(&a,2,lf[20],*((C_word*)lf[439]+1)):(C_word)C_a_i_list(&a,2,*((C_word*)lf[439]+1),lf[20]));
/* eval.scm: 1679 test2 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8256(t4,t1,t2,t3);}

/* test2 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8256(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8256,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8269,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1673 exists? */
f_8231(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8272,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(t3);
/* eval.scm: 1674 ##sys#string-append */
t6=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t2,t5);}}

/* k8270 in test2 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1675 exists? */
f_8231(t2,t1);}

/* k8276 in k8270 in test2 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* eval.scm: 1677 test2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8256(t3,((C_word*)t0)[6],((C_word*)t0)[2],t2);}}

/* k8267 in test2 in k8252 in ##sys#resolve-include-filename in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* exists? in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8231(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8231,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8235,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1668 ##sys#file-info */
t4=*((C_word*)lf[438]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8233 in exists? in k8223 in k8219 in k8216 in k8212 in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=(C_word)C_eqp(C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_not(t3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* initb in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8198(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8198,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8200,a[2]=t2,a[3]=lf[588],tmp=(C_word)a,a+=4,tmp));}

/* f_8200 in initb in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8200,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8204,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1629 ##sys#hash-table-location */
t4=*((C_word*)lf[190]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k8202 */
static void C_ccall f_8204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(t1,C_fix(1),t2));}

/* null-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8160(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_8160r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_8160r(t0,t1,t2,t3);}}

static void C_ccall f_8160r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[585]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8167,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_fixnum_lessp(t2,C_fix(4));
t7=(C_truep(t6)?t6:(C_word)C_fixnum_greaterp(t2,C_fix(5)));
if(C_truep(t7)){
/* eval.scm: 1620 ##sys#error */
t8=*((C_word*)lf[171]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,lf[585],lf[586],t2);}
else{
t8=t5;
f_8167(2,t8,C_SCHEME_UNDEFINED);}}

/* k8165 in null-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1623 make-vector */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k8172 in k8165 in null-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8174,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[3]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,3,lf[567],t1,t3));}

/* scheme-report-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8116(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_8116r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_8116r(t0,t1,t2,t3);}}

static void C_ccall f_8116r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t4=(C_word)C_i_check_exact_2(t2,lf[581]);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t7=t2;
switch(t7){
case C_fix(4):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8136,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1611 ##sys#copy-env-table */
t9=*((C_word*)lf[569]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[565],C_SCHEME_TRUE,t6);
case C_fix(5):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8149,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1612 ##sys#copy-env-table */
t9=*((C_word*)lf[569]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,lf[566],C_SCHEME_TRUE,t6);
default:
/* eval.scm: 1613 ##sys#error */
t8=*((C_word*)lf[171]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,lf[581],lf[582],t2);}}

/* k8147 in scheme-report-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8149,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[567],t1,((C_word*)t0)[2]));}

/* k8134 in scheme-report-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8136,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[567],t1,((C_word*)t0)[2]));}

/* interaction-environment in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8113,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[568]);}

/* ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7994(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7994r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7994r(t0,t1,t2,t3);}}

static void C_ccall f_7994r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(20);
t4=(C_word)C_i_check_structure(t2,lf[567]);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep(t7)){
t8=(C_word)C_i_vector_length(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8015,a[2]=t6,a[3]=t7,a[4]=t10,a[5]=t8,a[6]=lf[575],tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8015(t12,t1,C_fix(0),C_SCHEME_END_OF_LIST);}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8086,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8088,a[2]=t9,a[3]=t6,a[4]=lf[576],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1598 ##sys#walk-namespace */
t12=*((C_word*)lf[577]+1);
((C_proc3)C_retrieve_proc(t12))(3,t12,t10,t11);}}

/* a8087 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8088(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8088,3,t0,t1,t2);}
t3=(C_word)C_i_not(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8098,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_8098(2,t5,t3);}
else{
/* eval.scm: 1600 pred */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k8096 in a8087 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8098,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k8084 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* do1070 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8015(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_8015,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8033,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_vector_ref(((C_word*)t0)[3],t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8039,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=lf[574],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_8039(t10,t5,t6,t3);}}

/* loop in do1070 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_8039(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8039,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_vector_ref(t4,C_fix(0));
t6=(C_word)C_i_not(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8058,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_8058(2,t8,t6);}
else{
/* eval.scm: 1592 pred */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t5);}}}

/* k8056 in loop in do1070 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8058,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* eval.scm: 1593 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8039(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* eval.scm: 1594 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8039(t3,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* k8031 in do1070 in ##sys#environment-symbols in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_8033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_8015(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7886(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5rv,(void*)f_7886r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_7886r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_7886r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t6=(C_word)C_notvemptyp(t5);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t5,C_fix(0)):C_SCHEME_FALSE);
t8=(C_word)C_block_size(t2);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7896,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t2,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 1559 ##sys#make-vector */
t10=*((C_word*)lf[276]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t8,C_SCHEME_END_OF_LIST);}

/* k7894 in ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7896,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=lf[571],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_7901(t5,((C_word*)t0)[2],C_fix(0));}

/* do1053 in k7894 in ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7901,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7922,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7928,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[570],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_7928(t8,t3,t4);}}

/* copy in do1053 in k7894 in ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7928(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7928,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_i_not(((C_word*)t0)[5]);
t6=(C_truep(t5)?t5:(C_word)C_i_memq(t4,((C_word*)t0)[5]));
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(1));
t8=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[3]:(C_word)C_slot(t3,C_fix(2)));
t9=(C_word)C_a_i_vector(&a,3,t4,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7961,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 1574 copy */
t14=t10;
t15=t11;
t1=t14;
t2=t15;
goto loop;}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 1575 copy */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k7959 in copy in do1053 in k7894 in ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7961,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7920 in do1053 in k7894 in ##sys#copy-env-table in k7877 in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7901(t4,((C_word*)t0)[2],t3);}

/* ##sys#string->c-identifier in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7823(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7823,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7827,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1540 string-copy */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k7825 in ##sys#string->c-identifier in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7827,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7835,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=lf[563],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_7835(t6,((C_word*)t0)[2],C_fix(0));}

/* do1038 in k7825 in ##sys#string->c-identifier in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7835,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7855,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_u_i_char_alphabeticp(t3))){
t5=t4;
f_7855(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_u_i_char_numericp(t3);
t6=(C_word)C_i_not(t5);
t7=t4;
f_7855(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,C_fix(0))));}}}

/* k7853 in do1038 in k7825 in ##sys#string->c-identifier in k7819 in k7816 in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7855(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(t1)?(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],C_make_character(95)):C_SCHEME_UNDEFINED);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7835(t4,((C_word*)t0)[2],t3);}

/* set-extension-specifier! in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7779(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7779,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_symbol_2(t2,lf[558]);
t5=(C_word)C_i_assq(t2,*((C_word*)lf[551]+1));
if(C_truep(t5)){
t6=(C_word)C_slot(t5,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7797,a[2]=t6,a[3]=t3,a[4]=lf[559],tmp=(C_word)a,a+=5,tmp);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_setslot(t5,C_fix(1),t7));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7811,a[2]=t3,a[3]=lf[560],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_a_i_cons(&a,2,t2,t6);
t8=(C_word)C_a_i_cons(&a,2,t7,*((C_word*)lf[551]+1));
t9=C_mutate((C_word*)lf[551]+1,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* a7810 in set-extension-specifier! in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7811,3,t0,t1,t2);}
/* eval.scm: 1495 proc */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* a7796 in set-extension-specifier! in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7797(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7797,3,t0,t1,t2);}
/* eval.scm: 1493 proc */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7380,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7383,a[2]=t3,a[3]=lf[539],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7404,a[2]=t4,a[3]=t3,a[4]=lf[550],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7655,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t7=(C_word)C_i_car(t2);
t8=t6;
f_7655(t8,(C_word)C_i_symbolp(t7));}
else{
t7=t6;
f_7655(t7,C_SCHEME_FALSE);}}

/* k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7655,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t3=(C_word)C_i_assq(t2,*((C_word*)lf[551]+1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
t6=t5;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,((C_word*)t0)[6]);}
else{
/* eval.scm: 1481 ##sys#error */
t4=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],lf[555],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[6]))){
/* eval.scm: 1483 doit */
t2=((C_word*)t0)[2];
f_7404(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* eval.scm: 1484 ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],lf[556],((C_word*)t0)[6]);}}}

/* k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7664,2,t0,t1);}
if(C_truep((C_word)C_i_stringp(t1))){
t2=(C_word)C_a_i_list(&a,2,lf[420],t1);
/* eval.scm: 1469 values */
C_values(4,0,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7690,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1471 vector->list */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}
else{
/* eval.scm: 1480 ##sys#do-the-right-thing */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3]);}}}

/* k7688 in k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7690,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7692,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[554],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7692(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k7688 in k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7692,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7710,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1475 reverse */
t6=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7715,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[552],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7725,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t2,a[6]=lf[553],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1476 ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* a7724 in loop in k7688 in k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7725,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t6=(C_truep(t3)?t3:((C_word*)t0)[3]);
/* eval.scm: 1477 loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_7692(t7,t1,t4,t5,t6);}

/* a7714 in loop in k7688 in k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7715,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
/* eval.scm: 1476 ##sys#do-the-right-thing */
t3=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k7708 in loop in k7688 in k7662 in k7653 in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7710,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[146],t1);
/* eval.scm: 1475 values */
C_values(4,0,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7404,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_memq(t2,lf[29]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7414(2,t5,t3);}
else{
if(C_truep(((C_word*)t0)[3])){
t5=t4;
f_7414(2,t5,(C_word)C_i_memq(t2,lf[31]));}
else{
/* eval.scm: 1422 ##sys#feature? */
t5=*((C_word*)lf[549]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}}

/* k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7414(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7414,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 1423 values */
C_values(4,0,((C_word*)t0)[5],lf[540],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
if(C_truep((C_truep((C_word)C_eqp(t2,lf[541]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t2,lf[542]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7426,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1425 ##sys#->feature-id */
t4=*((C_word*)lf[480]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],*((C_word*)lf[5]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7463,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_a_i_list(&a,2,lf[545],((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,2,lf[127],t4);
t6=t3;
f_7463(t6,(C_word)C_a_i_list(&a,2,lf[336],t5));}
else{
t4=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[4]);
t5=t3;
f_7463(t5,(C_word)C_a_i_list(&a,2,lf[482],t4));}}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],*((C_word*)lf[7]+1)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7490,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1437 ##sys#extension-information */
t4=*((C_word*)lf[521]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[547]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1447 ##sys#extension-information */
t4=*((C_word*)lf[521]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[547]);}}}}}

/* k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7548,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[546],t1);
t3=(C_word)C_i_assq(lf[528],t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7560,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
/* eval.scm: 1451 add-req */
t5=((C_word*)t0)[2];
f_7383(t5,t4,((C_word*)t0)[3]);}
else{
t5=t4;
f_7560(2,t5,C_SCHEME_UNDEFINED);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7629,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1463 add-req */
t3=((C_word*)t0)[2];
f_7383(t3,t2,((C_word*)t0)[3]);}}

/* k7627 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7629,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[319],t2);
/* eval.scm: 1464 values */
C_values(4,0,((C_word*)t0)[2],t3,C_SCHEME_FALSE);}

/* k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7571,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,lf[317],t4);
t6=t3;
f_7575(t6,(C_word)C_a_i_list(&a,1,t5));}
else{
t4=t3;
f_7575(t4,C_SCHEME_END_OF_LIST);}}

/* k7573 in k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7575(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7575,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7579,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)t0)[4])?C_SCHEME_FALSE:((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_7579(t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7593,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7595,a[2]=lf[548],tmp=(C_word)a,a+=3,tmp);
t6=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cdr(((C_word*)t0)[4]):(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));
/* map */
t7=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}

/* a7594 in k7573 in k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7595(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7595,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[127],t2));}

/* k7591 in k7573 in k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7593,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[319],t1);
t3=((C_word*)t0)[2];
f_7579(t3,(C_word)C_a_i_list(&a,1,t2));}

/* k7577 in k7573 in k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1408 ##sys#append */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7569 in k7558 in k7546 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7571,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[146],t1);
/* eval.scm: 1452 values */
C_values(4,0,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k7488 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7490,2,t0,t1);}
t2=(C_word)C_i_assq(lf[546],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7504,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t5=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,lf[317],t5);
t7=t4;
f_7508(t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t5=t4;
f_7508(t5,C_SCHEME_END_OF_LIST);}}

/* k7506 in k7488 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7508,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7516,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_a_i_list(&a,2,lf[545],((C_word*)t0)[2]);
t4=(C_word)C_a_i_list(&a,2,lf[127],t3);
t5=t2;
f_7516(t5,(C_word)C_a_i_list(&a,2,lf[336],t4));}
else{
t3=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[2]);
t4=t2;
f_7516(t4,(C_word)C_a_i_list(&a,2,lf[482],t3));}}

/* k7514 in k7506 in k7488 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7516(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7516,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 1408 ##sys#append */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7502 in k7488 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7504,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[146],t1);
/* eval.scm: 1439 values */
C_values(4,0,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k7461 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1431 values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k7424 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7429,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_memq(t1,*((C_word*)lf[339]+1)))){
t3=t2;
f_7429(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7438,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7446,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7450,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1427 ##sys#symbol->string */
t6=*((C_word*)lf[492]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k7448 in k7424 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1427 ##sys#resolve-include-filename */
t2=*((C_word*)lf[544]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k7444 in k7424 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1427 ##sys#load */
t2=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k7436 in k7424 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7438,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],*((C_word*)lf[339]+1));
t3=C_mutate((C_word*)lf[339]+1,t2);
t4=((C_word*)t0)[2];
f_7429(t4,t3);}

/* k7427 in k7424 in k7412 in doit in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1429 values */
C_values(4,0,((C_word*)t0)[2],lf[543],C_SCHEME_TRUE);}

/* add-req in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7383(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7383,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7392,a[2]=t2,a[3]=lf[534],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7398,a[2]=t2,a[3]=lf[535],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1413 hash-table-update! */
t5=*((C_word*)lf[536]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t1,*((C_word*)lf[537]+1),lf[538],t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a7397 in add-req in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7398,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}

/* a7391 in add-req in ##sys#do-the-right-thing in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7392(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7392,3,t0,t1,t2);}
/* lset-adjoin */
t3=*((C_word*)lf[532]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,*((C_word*)lf[533]+1),t2,((C_word*)t0)[2]);}

/* ##sys#lookup-runtime-requirements in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7331(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7331,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7337,a[2]=t4,a[3]=lf[529],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7337(t6,t1,t2);}

/* loop1 in ##sys#lookup-runtime-requirements in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7337(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7337,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7351,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* eval.scm: 1402 ##sys#extension-information */
t5=*((C_word*)lf[521]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_FALSE);}}

/* k7349 in loop1 in ##sys#lookup-runtime-requirements in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_assq(lf[528],t1);
t4=t2;
f_7354(t4,(C_truep(t3)?(C_word)C_i_cdr(t3):C_SCHEME_FALSE));}
else{
t3=t2;
f_7354(t3,C_SCHEME_FALSE);}}

/* k7352 in k7349 in loop1 in ##sys#lookup-runtime-requirements in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7354(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7354,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7361,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* eval.scm: 1406 loop1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7337(t5,t3,t4);}

/* k7359 in k7352 in k7349 in loop1 in ##sys#lookup-runtime-requirements in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1401 append */
t2=*((C_word*)lf[91]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7324(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7324,3,t0,t1,t2);}
/* eval.scm: 1390 ##sys#extension-information */
t3=*((C_word*)lf[521]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[525]);}

/* ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7293(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7293,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1383 ##sys#canonicalize-extension-path */
t5=*((C_word*)lf[488]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7297,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7322,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1384 ##sys#repository-path */
t4=*((C_word*)lf[497]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7320 in k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1384 string-append */
t2=((C_word*)t0)[4];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],t1,lf[4],((C_word*)t0)[2],lf[523]);}

/* k7298 in k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7303,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7318,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1385 string-append */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t1,lf[23]);}

/* k7316 in k7298 in k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1385 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7301 in k7298 in k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7303,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7310,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[522],tmp=(C_word)a,a+=5,tmp);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7310 in k7301 in k7298 in k7295 in ##sys#extension-information in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7310,3,t0,t1,t2);}
/* with-input-from-file943 */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#require in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7280(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_7280r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7280r(t0,t1,t2);}}

static void C_ccall f_7280r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7286,a[2]=lf[519],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a7285 in ##sys#require in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7286(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7286,3,t0,t1,t2);}
/* ##sys#load-extension */
t3=*((C_word*)lf[508]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[518]);}

/* ##sys#provided? in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7266,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7277,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1364 ##sys#canonicalize-extension-path */
t4=*((C_word*)lf[488]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[516]);}

/* k7275 in ##sys#provided? in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_member(t1,*((C_word*)lf[506]+1));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* ##sys#provide in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7246(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_7246r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7246r(t0,t1,t2);}}

static void C_ccall f_7246r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7252,a[2]=lf[513],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a7251 in ##sys#provide in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7252,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[512]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7259,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1357 ##sys#canonicalize-extension-path */
t5=*((C_word*)lf[488]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[512]);}

/* k7257 in a7251 in ##sys#provide in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7259,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,*((C_word*)lf[506]+1));
t3=C_mutate((C_word*)lf[506]+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_7171r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7171r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7175,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t5)[1]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7241,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1338 string->symbol */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t5)[1]);}
else{
t7=t6;
f_7175(t7,(C_word)C_i_check_symbol_2(((C_word*)t5)[1],t3));}}

/* k7239 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7175(t3,t2);}

/* k7173 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7175,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1340 ##sys#canonicalize-extension-path */
t3=*((C_word*)lf[488]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}

/* k7176 in k7173 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7178,2,t0,t1);}
t2=(C_word)C_i_member(t1,*((C_word*)lf[506]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[5]+1)))){
/* eval.scm: 1343 ##sys#load-library */
t3=*((C_word*)lf[473]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1345 ##sys#find-extension */
t4=*((C_word*)lf[500]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_SCHEME_TRUE);}}}

/* k7194 in k7176 in k7173 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7196,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1347 ##sys#load */
t3=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[4];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_7212(2,t4,C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_7212(2,t5,(C_word)C_i_car(t2));}
else{
/* eval.scm: 1350 ##sys#error */
t5=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}}

/* k7210 in k7194 in k7176 in k7173 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* eval.scm: 1350 ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[509],((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7200 in k7194 in k7176 in k7173 in ##sys#load-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7202,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],*((C_word*)lf[506]+1));
t3=C_mutate((C_word*)lf[506]+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}

/* ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7094,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7097,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[501],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7128,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7168,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1326 ##sys#repository-path */
t7=*((C_word*)lf[497]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k7166 in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7168,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7161,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm: 1327 ##sys#append */
t4=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[503]+1),lf[504]);}
else{
t4=t3;
f_7161(2,t4,C_SCHEME_END_OF_LIST);}}

/* k7159 in k7166 in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1326 ##sys#append */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7126 in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7128,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[502],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7130(t5,((C_word*)t0)[2],t1);}

/* loop in k7126 in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7130(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7130,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7143,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1330 check */
t5=((C_word*)t0)[2];
f_7097(t5,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7141 in loop in k7126 in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1331 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_7130(t3,((C_word*)t0)[4],t2);}}

/* check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7097(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7097,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7101,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1322 string-append */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,t2,lf[4],((C_word*)t0)[2]);}

/* k7099 in check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7121,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1323 ##sys#string-append */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,*((C_word*)lf[439]+1));}

/* k7119 in k7099 in check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1323 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7105 in k7099 in check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7110,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_7110(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7117,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1324 ##sys#string-append */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[20]);}}

/* k7115 in k7105 in k7099 in check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1324 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7108 in k7105 in k7099 in check in ##sys#find-extension in k7089 in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6943,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6946,a[2]=t2,a[3]=t3,a[4]=lf[490],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6953,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t6=t5;
f_6953(2,t6,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* eval.scm: 1286 ##sys#symbol->string */
t6=*((C_word*)lf[492]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep((C_word)C_i_listp(t2))){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7036,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=lf[495],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_7036(t9,t5,t2);}
else{
t6=t5;
f_6953(2,t6,C_SCHEME_UNDEFINED);}}}}

/* loop in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_7036(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7036,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[493]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7053,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(t3))){
/* eval.scm: 1293 ##sys#symbol->string */
t5=*((C_word*)lf[492]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
if(C_truep((C_word)C_i_stringp(t3))){
t5=t4;
f_7053(2,t5,t3);}
else{
/* eval.scm: 1295 err */
t5=((C_word*)t0)[2];
f_6946(t5,t4);}}}}

/* k7051 in loop in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7053(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7053,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?lf[494]:lf[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7061,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* eval.scm: 1299 loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_7036(t7,t5,t6);}

/* k7059 in k7051 in loop in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_7061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1291 string-append */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6951 in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6953,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6958,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[491],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6958(t5,((C_word*)t0)[2],t1);}

/* check in k6951 in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6958(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6958,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* eval.scm: 1302 err */
t5=((C_word*)t0)[3];
f_6946(t5,t1);}
else{
t5=(C_word)C_i_string_ref(t2,C_fix(0));
t6=(C_word)C_eqp(lf[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6984,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1304 ##sys#substring */
t8=*((C_word*)lf[428]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,t2,C_fix(1),t3);}
else{
t7=(C_word)C_fixnum_difference(t3,C_fix(1));
t8=(C_word)C_i_string_ref(t2,t7);
t9=(C_word)C_eqp(lf[2],t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6997,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_fixnum_difference(t3,C_fix(1));
/* eval.scm: 1306 ##sys#substring */
t12=*((C_word*)lf[428]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t10,t2,C_fix(0),t11);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t2);}}}}

/* k6995 in check in k6951 in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1306 check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6958(t2,((C_word*)t0)[2],t1);}

/* k6982 in check in k6951 in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1304 check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6958(t2,((C_word*)t0)[2],t1);}

/* err in ##sys#canonicalize-extension-path in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6946,NULL,2,t0,t1);}
/* eval.scm: 1284 ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],lf[489],((C_word*)t0)[2]);}

/* ##sys#split-at-separator in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6887,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6896,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=lf[486],tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_6896(t8,t1,C_SCHEME_END_OF_LIST,C_fix(0),C_fix(0));}

/* loop in ##sys#split-at-separator in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6896(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6896,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6914,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1272 ##sys#substring */
t6=*((C_word*)lf[428]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[4],t4,((C_word*)t0)[6]);}
else{
t5=(C_word)C_eqp((C_word)C_subchar(((C_word*)t0)[4],t3),((C_word*)t0)[3]);
if(C_truep(t5)){
t6=(C_word)C_fixnum_plus(t3,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6934,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1275 ##sys#substring */
t8=*((C_word*)lf[428]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[4],t4,t3);}
else{
t6=(C_word)C_fixnum_plus(t3,C_fix(1));
/* eval.scm: 1276 loop */
t11=t1;
t12=t2;
t13=t6;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* k6932 in loop in ##sys#split-at-separator in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6934,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* eval.scm: 1275 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6896(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2],((C_word*)t0)[2]);}

/* k6912 in loop in ##sys#split-at-separator in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6914,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* eval.scm: 1272 reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6858(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_6858r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_6858r(t0,t1,t2,t3);}}

static void C_ccall f_6858r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_symbol_2(t2,lf[482]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6865,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_notvemptyp(t3);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
/* eval.scm: 1263 ##sys#load-library */
t8=*((C_word*)lf[473]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t5,t2,t7);}

/* k6863 in load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6865,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}}

/* k6873 in k6863 in load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1264 ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[482],lf[483],((C_word*)t0)[2],t1);}

/* ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6752,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6756,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 1236 ##sys#->feature-id */
t5=*((C_word*)lf[480]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6756,2,t0,t1);}
t2=(C_word)C_i_memq(t1,*((C_word*)lf[339]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_6765(t4,(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* eval.scm: 1241 ##sys#string-append */
t6=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,*((C_word*)lf[469]+1));}}}

/* k6846 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6852,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1242 dynamic-load-libraries */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6850 in k6846 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6852,2,t0,t1);}
t2=((C_word*)t0)[3];
f_6765(t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6765(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6765,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6830,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6834,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1247 ##sys#string->c-identifier */
t6=*((C_word*)lf[479]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k6832 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1245 string-append */
t2=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[477],t1,lf[478]);}

/* k6828 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1244 ##sys#make-c-string */
t2=*((C_word*)lf[432]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6771,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6817,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1249 load-verbose */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k6815 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6817,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1250 display */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[476]);}
else{
t2=((C_word*)t0)[3];
f_6771(2,t2,C_SCHEME_UNDEFINED);}}

/* k6818 in k6815 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6823,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1251 display */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6821 in k6818 in k6815 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1252 display */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[475]);}

/* k6769 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6771,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6776,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=lf[474],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_6776(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k6769 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6776,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6789,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1255 ##sys#make-c-string */
t6=*((C_word*)lf[432]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k6808 in loop in k6769 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1255 ##sys#dload */
t2=*((C_word*)lf[431]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6787 in loop in k6769 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6789,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6792,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],*((C_word*)lf[339]+1)))){
t3=t2;
f_6792(t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],*((C_word*)lf[339]+1));
t4=C_mutate((C_word*)lf[339]+1,t3);
t5=t2;
f_6792(t5,t4);}}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1258 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6776(t3,((C_word*)t0)[5],t2);}}

/* k6790 in k6787 in loop in k6769 in k6766 in k6763 in k6754 in ##sys#load-library in k6748 in k6741 in k6737 in k6733 in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6687(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_6687r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6687r(t0,t1,t2,t3);}}

static void C_ccall f_6687r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6691,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6730,a[2]=lf[466],tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
t6=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[467],t3,t5);}

/* a6729 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6730,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6727,a[2]=lf[464],tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
t4=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[465],((C_word*)t0)[2],t3);}

/* a6726 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6727,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6697,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6724,a[2]=lf[462],tmp=(C_word)a,a+=3,tmp);
/* ##sys#get-keyword */
t4=*((C_word*)lf[128]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[463],((C_word*)t0)[2],t3);}

/* a6723 in k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6724,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6695 in k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6697(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6697,2,t0,t1);}
t2=*((C_word*)lf[448]+1);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6702,a[2]=t3,a[3]=t5,a[4]=lf[459],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6710,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[460],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6716,a[2]=t5,a[3]=t3,a[4]=lf[461],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a6715 in k6695 in k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6716,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* a6709 in k6695 in k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6710,2,t0,t1);}
/* eval.scm: 1203 ##sys#load */
t2=*((C_word*)lf[405]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6701 in k6695 in k6692 in k6689 in load-noisily in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6702,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6622(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_6622r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6622r(t0,t1,t2,t3);}}

static void C_ccall f_6622r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(19);
t4=*((C_word*)lf[448]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6628,a[2]=t5,a[3]=t7,a[4]=lf[454],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6636,a[2]=t2,a[3]=t3,a[4]=lf[455],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6679,a[2]=t7,a[3]=t5,a[4]=lf[456],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a6678 in load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6679,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* a6635 in load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6644,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_string_ref(((C_word*)t0)[2],C_fix(0));
t4=(C_word)C_eqp(lf[2],t3);
if(C_truep(t4)){
t5=t2;
f_6644(2,t5,((C_word*)t0)[2]);}
else{
/* eval.scm: 1198 ##sys#string-append */
t5=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,*((C_word*)lf[387]+1),((C_word*)t0)[2]);}}

/* k6642 in a6635 in load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6644,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6648,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_6648(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_6648(2,t5,(C_word)C_i_car(t2));}
else{
/* eval.scm: 1199 ##sys#error */
t5=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6646 in k6642 in a6635 in load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1195 ##sys#load */
t2=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* a6627 in load-relative in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6628,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6571(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_6571r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6571r(t0,t1,t2,t3);}}

static void C_ccall f_6571r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(19);
t4=*((C_word*)lf[448]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6577,a[2]=t5,a[3]=t7,a[4]=lf[449],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6585,a[2]=t2,a[3]=t3,a[4]=lf[450],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6614,a[2]=t7,a[3]=t5,a[4]=lf[451],tmp=(C_word)a,a+=5,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a6613 in load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6614,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* a6584 in load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6585,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6593,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_6593(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_6593(2,t5,(C_word)C_i_car(t2));}
else{
/* eval.scm: 1191 ##sys#error */
t5=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6591 in a6584 in load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1191 ##sys#load */
t2=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* a6576 in load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6577,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[448]+1));
t3=C_mutate((C_word*)lf[448]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[408]+1));}

/* ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+27)){
C_save_and_reclaim((void*)tr5r,(void*)f_6181r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6181r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6181r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(27);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t4,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t3,a[16]=lf[444],tmp=(C_word)a,a+=17,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6518,a[2]=t7,a[3]=lf[445],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6523,a[2]=t8,a[3]=lf[446],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-timer723801 */
t10=t9;
f_6523(t10,t1);}
else{
t10=(C_word)C_i_car(t5);
t11=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-printer724799 */
t12=t8;
f_6518(t12,t1,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body721726 */
t14=t7;
f_6183(t14,t1,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}

/* def-timer723 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6523,NULL,2,t0,t1);}
/* def-printer724799 */
t2=((C_word*)t0)[2];
f_6518(t2,t1,C_SCHEME_FALSE);}

/* def-printer724 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6518(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6518,NULL,3,t0,t1,t2);}
/* body721726 */
t3=((C_word*)t0)[2];
f_6183(t3,t1,t2,C_SCHEME_FALSE);}

/* body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6183(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6183,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=((C_word*)t0)[13],a[16]=t1,a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[7])[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6517,a[2]=t4,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1125 ##sys#expand-home-path */
t6=*((C_word*)lf[443]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=t4;
f_6187(t5,C_SCHEME_UNDEFINED);}}

/* k6515 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_6187(t3,t2);}

/* k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6187(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6187,NULL,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6451,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1128 port? */
t6=*((C_word*)lf[442]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}

/* k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6451,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6190(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1130 ##sys#file-info */
t3=*((C_word*)lf[438]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
/* eval.scm: 1121 ##sys#signal-hook */
t3=*((C_word*)lf[395]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[440],lf[420],lf[441],t2);}}}

/* k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_slot(t1,C_fix(4));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t2;
f_6469(t6,(C_word)C_i_not(t3));}
else{
t4=t2;
f_6469(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6469(t3,C_SCHEME_FALSE);}}

/* k6467 in k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6469(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6469,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6190(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1136 ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[439]+1));}}

/* k6470 in k6467 in k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1137 ##sys#file-info */
t3=*((C_word*)lf[438]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k6476 in k6470 in k6467 in k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6478,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6190(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1139 ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[20]);}}

/* k6479 in k6476 in k6470 in k6467 in k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1140 ##sys#file-info */
t3=*((C_word*)lf[438]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k6485 in k6479 in k6476 in k6470 in k6467 in k6464 in k6449 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6190(2,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[5];
f_6190(2,t3,(C_truep(t2)?C_SCHEME_FALSE:((C_word*)((C_word*)t0)[2])[1]));}}

/* k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6190,2,t0,t1);}
t2=((C_word*)t0)[18];
t3=(C_truep(t2)?t2:((C_word*)t0)[17]);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t3,a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t1,a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t5=(C_word)C_i_stringp(((C_word*)((C_word*)t0)[7])[1]);
t6=(C_truep(t5)?(C_word)C_i_not(t1):C_SCHEME_FALSE);
if(C_truep(t6)){
/* eval.scm: 1145 ##sys#signal-hook */
t7=*((C_word*)lf[395]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,lf[434],lf[420],lf[435],((C_word*)((C_word*)t0)[7])[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6442,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1146 load-verbose */
t8=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t8))(2,t8,t7);}}

/* k6440 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6442,2,t0,t1);}
t2=(C_truep(t1)?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6433,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1147 display */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[437]);}
else{
t3=((C_word*)t0)[2];
f_6196(2,t3,C_SCHEME_UNDEFINED);}}

/* k6431 in k6440 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1148 display */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6434 in k6431 in k6440 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1149 display */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[436]);}

/* k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6199,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t0)[15])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6418,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1151 ##sys#make-c-string */
t5=*((C_word*)lf[432]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[15]);}
else{
t3=t2;
f_6199(2,t3,C_SCHEME_FALSE);}}

/* k6416 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1151 ##sys#dload */
t2=*((C_word*)lf[431]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6388 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6390,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_6199(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6414,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1152 has-sep? */
f_6135(t2,((C_word*)t0)[3]);}}

/* k6412 in k6388 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6414,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6199(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6410,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1153 string-append */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[433],lf[4],((C_word*)t0)[2]);}}

/* k6408 in k6412 in k6388 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1153 ##sys#make-c-string */
t2=*((C_word*)lf[432]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6404 in k6412 in k6388 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1153 ##sys#dload */
t2=*((C_word*)lf[431]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6202,a[2]=((C_word*)t0)[14],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_6202(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=lf[430],tmp=(C_word)a,a+=15,tmp);
/* eval.scm: 1154 call-with-current-continuation */
t4=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6207,3,t0,t1,t2);}
t3=C_SCHEME_TRUE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[13];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6211,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t6,a[15]=t4,a[16]=t2,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[13])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6377,a[2]=((C_word*)t0)[13],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1160 has-sep? */
f_6135(t8,((C_word*)t0)[13]);}
else{
t8=t7;
f_6211(2,t8,C_SCHEME_FALSE);}}

/* k6375 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(t1,C_fix(1));
/* eval.scm: 1161 ##sys#substring */
t3=*((C_word*)lf[428]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
f_6211(2,t2,lf[429]);}}

/* k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
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
C_word ab[52],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6211,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6212,a[2]=((C_word*)t0)[16],a[3]=lf[406],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6221,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t13,a[7]=t11,a[8]=t9,a[9]=t7,a[10]=lf[409],tmp=(C_word)a,a+=11,tmp);
t15=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6235,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=lf[426],tmp=(C_word)a,a+=14,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6362,a[2]=t13,a[3]=t11,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=lf[427],tmp=(C_word)a,a+=11,tmp);
/* ##sys#dynamic-wind */
t17=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,((C_word*)t0)[2],t14,t15,t16);}

/* a6361 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6362(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6362,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[407]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[386]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[387]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[384]+1));
t6=C_mutate((C_word*)lf[407]+1,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[386]+1,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[387]+1,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[384]+1,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,*((C_word*)lf[408]+1));}

/* a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6239,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[5])){
/* eval.scm: 1163 open-input-file */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_6239(2,t3,((C_word*)((C_word*)t0)[2])[1]);}}

/* k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6244,a[2]=lf[410],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6247,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],a[11]=lf[423],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6353,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[424],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1164 ##sys#dynamic-wind */
t5=*((C_word*)lf[425]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],t2,t3,t4);}

/* a6352 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6353,2,t0,t1);}
/* eval.scm: 1186 close-input-port */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6251,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1167 peek-char */
t3=*((C_word*)lf[422]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6347,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}
else{
t4=t2;
f_6254(2,t4,C_SCHEME_UNDEFINED);}}

/* k6345 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1169 ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[420],lf[421],((C_word*)t0)[2],t1);}

/* k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 1170 read */
t3=((C_word*)t0)[10];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[9]);}

/* k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6257,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6262,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t3,a[11]=lf[419],tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_6262(t5,((C_word*)t0)[2],t1);}

/* do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6262(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6262,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6272,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm: 1173 printer */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_6272(2,t4,C_SCHEME_UNDEFINED);}}}

/* k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6275,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=lf[416],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[418],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1174 ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a6317 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6318(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_6318r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6318r(t0,t1,t2);}}

static void C_ccall f_6318r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[417],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a6326 in a6317 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6327,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6331,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1183 write */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k6329 in a6326 in a6317 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1184 newline */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6284,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6291,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1177 ##sys#start-timer */
t3=*((C_word*)lf[415]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* eval.scm: 1178 evproc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}}

/* k6289 in a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6296,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[411],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6302,a[2]=lf[414],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1177 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a6301 in k6289 in a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6302(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_6302r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6302r(t0,t1,t2);}}

static void C_ccall f_6302r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6306,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6313,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1177 ##sys#stop-timer */
t5=*((C_word*)lf[413]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6311 in a6301 in k6289 in a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1177 ##sys#display-times */
t2=*((C_word*)lf[412]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6304 in a6301 in k6289 in a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6295 in k6289 in a6283 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6296,2,t0,t1);}
/* eval.scm: 1177 evproc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k6273 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6282,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1171 read */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6280 in k6273 in k6270 in do774 in k6255 in k6252 in k6249 in a6246 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_6262(t2,((C_word*)t0)[2],t1);}

/* a6243 in k6237 in a6234 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6244,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a6220 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6221(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6221,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[407]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[386]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[387]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[384]+1));
t6=C_mutate((C_word*)lf[407]+1,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[386]+1,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[387]+1,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[384]+1,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,*((C_word*)lf[408]+1));}

/* f_6212 in k6209 in a6206 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6212,2,t0,t1);}
/* eval.scm: 1162 abrt */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* k6200 in k6197 in k6194 in k6188 in k6185 in body721 in ##sys#load in k6131 in k6051 in k5952 in k1745 */
static void C_ccall f_6202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* has-sep? in k6131 in k6051 in k5952 in k1745 */
static void C_fcall f_6135(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6135,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6145,a[2]=t2,a[3]=lf[403],tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6145(t5,t4));}

/* loop in has-sep? in k6131 in k6051 in k5952 in k1745 */
static C_word C_fcall f_6145(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
if(C_truep((C_word)C_i_zerop(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(lf[2],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_fixnum_difference(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* set-dynamic-load-mode! in k6051 in k5952 in k1745 */
static void C_ccall f_6060(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6060,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?t2:(C_word)C_a_i_list(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6067,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6072,a[2]=t6,a[3]=t8,a[4]=t11,a[5]=lf[397],tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_6072(t13,t9,t4);}

/* loop in set-dynamic-load-mode! in k6051 in k5952 in k1745 */
static void C_fcall f_6072(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6072,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6085,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[391]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t4;
f_6085(2,t7,t6);}
else{
t6=(C_word)C_eqp(t3,lf[392]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t8=t4;
f_6085(2,t8,t7);}
else{
t7=(C_word)C_eqp(t3,lf[393]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t9=t4;
f_6085(2,t9,t8);}
else{
t8=(C_word)C_eqp(t3,lf[394]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t10=t4;
f_6085(2,t10,t9);}
else{
t9=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1100 ##sys#signal-hook */
t10=*((C_word*)lf[395]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t4,lf[389],lf[396],t9);}}}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k6083 in loop in set-dynamic-load-mode! in k6051 in k5952 in k1745 */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1101 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6072(t3,((C_word*)t0)[2],t2);}

/* k6065 in set-dynamic-load-mode! in k6051 in k5952 in k1745 */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1102 ##sys#set-dlopen-flags! */
t2=*((C_word*)lf[390]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* f_6055 in k6051 in k5952 in k1745 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6055,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* ##sys#decompose-lambda-list in k5952 in k1745 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5971,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5974,a[2]=t2,a[3]=lf[380],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5984,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=lf[381],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_5984(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* loop in ##sys#decompose-lambda-list in k5952 in k1745 */
static void C_fcall f_5984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(17);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5984,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5998,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1070 reverse */
t7=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t3);}
else{
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6017,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_a_i_cons(&a,2,t2,t3);
/* eval.scm: 1072 reverse */
t8=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}
else{
if(C_truep((C_word)C_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=(C_word)C_fixnum_plus(t4,C_fix(1));
/* eval.scm: 1074 loop */
t14=t1;
t15=t6;
t16=t8;
t17=t9;
t1=t14;
t2=t15;
t3=t16;
t4=t17;
goto loop;}
else{
/* eval.scm: 1073 err */
t6=((C_word*)t0)[2];
f_5974(t6,t1);}}}
else{
/* eval.scm: 1071 err */
t6=((C_word*)t0)[2];
f_5974(t6,t1);}}}

/* k6015 in loop in ##sys#decompose-lambda-list in k5952 in k1745 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1072 k */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5996 in loop in ##sys#decompose-lambda-list in k5952 in k1745 */
static void C_ccall f_5998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1070 k */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* err in ##sys#decompose-lambda-list in k5952 in k1745 */
static void C_fcall f_5974(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5974,NULL,2,t0,t1);}
t2=C_set_block_item(lf[378],0,C_SCHEME_FALSE);
/* eval.scm: 1067 ##sys#syntax-error-hook */
t3=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[379],((C_word*)t0)[2]);}

/* eval in k5952 in k1745 */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5957r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5957r(t0,t1,t2,t3);}}

static void C_ccall f_5957r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5965,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1055 ##sys#eval-handler */
t5=*((C_word*)lf[374]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5963 in eval in k5952 in k1745 */
static void C_ccall f_5965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5969,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1056 ##sys#interpreter-toplevel-macroexpand-hook */
t3=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5967 in k5963 in eval in k5952 in k1745 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* ##sys#compile-to-closure in k1745 */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+52)){
C_save_and_reclaim((void*)tr5r,(void*)f_3717r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3717r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(52);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3720,a[2]=lf[212],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3762,a[2]=t6,a[3]=lf[215],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3874,a[2]=t7,a[3]=t9,a[4]=lf[216],tmp=(C_word)a,a+=5,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3927,a[2]=lf[218],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3933,a[2]=lf[219],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3939,a[2]=lf[220],tmp=(C_word)a,a+=3,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3945,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t15,a[8]=t17,a[9]=t12,a[10]=((C_word*)t0)[3],a[11]=t6,a[12]=lf[361],tmp=(C_word)a,a+=13,tmp));
t19=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5695,a[2]=t15,a[3]=t11,a[4]=lf[372],tmp=(C_word)a,a+=5,tmp));
t20=(C_word)C_fixnum_greaterp(*((C_word*)lf[205]+1),C_fix(0));
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5931,a[2]=t20,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
t22=t21;
f_5931(2,t22,C_SCHEME_FALSE);}
else{
t22=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t22))){
t23=t21;
f_5931(2,t23,(C_word)C_i_car(t5));}
else{
/* eval.scm: 1034 ##sys#error */
t23=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t21,lf[0],t5);}}}

/* k5929 in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1034 compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3945(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2],t1);}

/* compile-call in ##sys#compile-to-closure in k1745 */
static void C_fcall f_5695(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5695,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5699,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 998  compile */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3945(t8,t6,t7,t3,C_SCHEME_FALSE,t4,t5);}

/* k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
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
C_word ab[67],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=lf[362],tmp=(C_word)a,a+=3,tmp);
t4=f_5669(t2,C_fix(0));
t5=((C_word*)t0)[8];
switch(t4){
case C_SCHEME_FALSE:
/* eval.scm: 1003 ##sys#syntax-error-hook */
t6=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[7],lf[363],((C_word*)t0)[8]);
case C_fix(0):
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5721,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[364],tmp=(C_word)a,a+=8,tmp));
case C_fix(1):
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5740,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1007 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3945(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(2):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5768,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1011 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3945(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(3):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5803,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1016 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3945(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(4):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5845,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1022 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3945(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
default:
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5888,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=lf[371],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1029 ##sys#map */
t8=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t2);}}

/* a5911 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5912,3,t0,t1,t2);}
/* eval.scm: 1029 compile */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3945(t3,t1,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5886 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5888,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=lf[370],tmp=(C_word)a,a+=9,tmp));}

/* f_5889 in k5886 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5889,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5900,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5898 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5904,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[3],a[3]=lf[369],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1032 ##sys#map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a5905 in k5898 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5906,3,t0,t1,t2);}
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k5902 in k5898 */
static void C_ccall f_5904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5843 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1023 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5846 in k5843 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm: 1024 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7]);}

/* k5849 in k5846 in k5843 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5854,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 1025 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(3)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k5852 in k5849 in k5846 in k5843 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5854,2,t0,t1);}
t2=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=lf[368],tmp=(C_word)a,a+=12,tmp));}

/* f_5855 in k5852 in k5849 in k5846 in k5843 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5855(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5855,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5864 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5868 in k5864 */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5872 in k5868 in k5864 */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5876 in k5872 in k5868 in k5864 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5881,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5879 in k5876 in k5872 in k5868 in k5864 */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5801 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1017 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5804 in k5801 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 1018 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7]);}

/* k5807 in k5804 in k5801 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=lf[367],tmp=(C_word)a,a+=11,tmp));}

/* f_5810 in k5807 in k5804 in k5801 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5810,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5821,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5819 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5825,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5823 in k5819 */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5827 in k5823 in k5819 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5832,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5830 in k5827 in k5823 in k5819 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5766 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5771,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 1012 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3945(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5769 in k5766 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=lf[366],tmp=(C_word)a,a+=10,tmp));}

/* f_5772 in k5769 in k5766 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5772,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5783,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5781 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5787,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5785 in k5781 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5790,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5788 in k5785 in k5781 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5738 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5740,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5741,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=lf[365],tmp=(C_word)a,a+=9,tmp));}

/* f_5741 in k5738 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5741,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5752,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5750 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5755,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5753 in k5750 */
static void C_ccall f_5755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5721 in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5721,3,t0,t1,t2);}
t3=f_3927(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1006 fn */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k5729 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* loop in k5697 in compile-call in ##sys#compile-to-closure in k1745 */
static C_word C_fcall f_5669(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(t2);}
else{
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3945(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3945,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_symbolp(t2))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3957,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[11],a[5]=lf[221],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3963,a[2]=t6,a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=lf[229],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 650  ##sys#call-with-values */
C_call_with_values(4,0,t1,t7,t8);}
else{
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=((C_word*)t0)[8],a[12]=t6,a[13]=t5,a[14]=((C_word*)t0)[9],a[15]=t1,a[16]=t2,tmp=(C_word)a,a+=17,tmp);
/* eval.scm: 671  ##sys#number? */
t8=*((C_word*)lf[360]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}

/* k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[16];
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4052,a[2]=lf[230],tmp=(C_word)a,a+=3,tmp));
case C_fix(0):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4060,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp));
case C_fix(1):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4068,a[2]=lf[232],tmp=(C_word)a,a+=3,tmp));
default:
t3=(C_word)C_eqp(t2,C_fix(2));
t4=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4076,a[2]=lf[233],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[16],a[3]=lf[234],tmp=(C_word)a,a+=4,tmp)));}}
else{
if(C_truep((C_word)C_booleanp(((C_word*)t0)[16]))){
t2=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)t0)[16])?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4089,a[2]=lf[235],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4091,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp)));}
else{
t2=(C_word)C_charp(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=t3;
f_4101(t4,t2);}
else{
t4=(C_word)C_eofp(((C_word*)t0)[16]);
t5=t3;
f_4101(t5,(C_truep(t4)?t4:(C_word)C_i_stringp(((C_word*)t0)[16])));}}}}

/* k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_4101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4101,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[16];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[15],a[3]=lf[237],tmp=(C_word)a,a+=4,tmp));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[15]))){
t2=(C_word)C_slot(((C_word*)t0)[15],C_fix(0));
if(C_truep((C_word)C_i_symbolp(t2))){
t3=f_3933(((C_word*)t0)[13],((C_word*)t0)[15],((C_word*)t0)[12]);
t4=(C_word)C_slot(((C_word*)t0)[15],C_fix(0));
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[11],tmp=(C_word)a,a+=17,tmp);
/* eval.scm: 690  defined? */
t6=((C_word*)t0)[4];
f_3762(t6,t5,t4,((C_word*)t0)[10]);}
else{
t3=f_3933(((C_word*)t0)[13],((C_word*)t0)[15],((C_word*)t0)[12]);
/* eval.scm: 979  compile-call */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5695(t4,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[10],((C_word*)t0)[13],((C_word*)t0)[12]);}}
else{
/* eval.scm: 686  ##sys#syntax-error-hook */
t2=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[16],lf[359],((C_word*)t0)[15]);}}}

/* k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4130,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 691  compile-call */
t2=((C_word*)((C_word*)t0)[16])[1];
f_5695(t2,((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[11]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* eval.scm: 692  macroexpand-1-checked */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3874(t3,t2,((C_word*)t0)[14],((C_word*)t0)[13]);}}

/* k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
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
C_word ab[126],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4136,2,t0,t1);}
t2=(C_word)C_eqp(t1,((C_word*)t0)[15]);
if(C_truep(t2)){
t3=(C_word)C_eqp(((C_word*)t0)[14],lf[127]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 697  ##sys#check-syntax */
t5=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[127],((C_word*)t0)[15],lf[246],C_SCHEME_FALSE);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[14],lf[247]);
if(C_truep(t4)){
t5=(C_word)C_i_cadr(((C_word*)t0)[15]);
if(C_truep(*((C_word*)lf[193]+1))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4227,a[2]=((C_word*)t0)[13],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 712  ##sys#hash-table-location */
t7=*((C_word*)lf[190]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,*((C_word*)lf[193]+1),t5,C_SCHEME_TRUE);}
else{
t6=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4233,a[2]=t5,a[3]=lf[249],tmp=(C_word)a,a+=4,tmp));}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[14],lf[250]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 717  compile */
t7=((C_word*)((C_word*)t0)[12])[1];
f_3945(t7,((C_word*)t0)[13],t6,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[14],lf[251]);
if(C_truep(t6)){
t7=(C_word)C_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 720  compile */
t8=((C_word*)((C_word*)t0)[12])[1];
f_3945(t8,((C_word*)t0)[13],t7,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[14],lf[154]);
if(C_truep(t7)){
t8=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4267,a[2]=lf[252],tmp=(C_word)a,a+=3,tmp));}
else{
t8=(C_word)C_eqp(((C_word*)t0)[14],lf[253]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 725  ##sys#check-syntax */
t10=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,lf[253],((C_word*)t0)[15],lf[256],C_SCHEME_FALSE);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[14],lf[146]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4334,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[15],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 734  ##sys#check-syntax */
t11=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,lf[146],((C_word*)t0)[15],lf[260],C_SCHEME_FALSE);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[14],lf[92]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[14],lf[94]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[15],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 750  ##sys#check-syntax */
t13=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t12,lf[92],((C_word*)t0)[15],lf[270],C_SCHEME_FALSE);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[14],lf[80]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 772  ##sys#check-syntax */
t14=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t13,lf[80],((C_word*)t0)[15],lf[281],C_SCHEME_FALSE);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[14],lf[129]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[15],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 822  ##sys#check-syntax */
t15=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t15+1)))(6,t15,t14,lf[129],((C_word*)t0)[15],lf[315],C_SCHEME_FALSE);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[14],lf[81]);
if(C_truep(t14)){
t15=(C_word)C_i_cdr(((C_word*)t0)[15]);
t16=(C_word)C_a_i_cons(&a,2,lf[129],t15);
/* eval.scm: 916  compile */
t17=((C_word*)((C_word*)t0)[12])[1];
f_3945(t17,((C_word*)t0)[13],t16,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[14],lf[316]);
if(C_truep(t15)){
t16=(C_word)C_i_cddr(((C_word*)t0)[15]);
t17=(C_word)C_a_i_cons(&a,2,lf[129],t16);
t18=(C_word)C_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 919  compile */
t19=((C_word*)((C_word*)t0)[12])[1];
f_3945(t19,((C_word*)t0)[13],t17,((C_word*)t0)[11],t18,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[14],lf[317]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5288,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5319,a[2]=lf[322],tmp=(C_word)a,a+=3,tmp);
t19=(C_word)C_i_cdr(((C_word*)t0)[15]);
/* map */
t20=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t17,t18,t19);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[14],lf[323]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t19=(C_word)C_i_cdr(((C_word*)t0)[15]);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5349,a[2]=t21,a[3]=lf[328],tmp=(C_word)a,a+=4,tmp));
t23=((C_word*)t21)[1];
f_5349(t23,t18,t19);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[14],lf[329]);
t19=(C_truep(t18)?t18:(C_word)C_eqp(((C_word*)t0)[14],lf[330]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5395,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5401,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=(C_word)C_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 941  ##sys#compile-to-closure */
t23=*((C_word*)lf[209]+1);
((C_proc6)(void*)(*((C_word*)t23+1)))(6,t23,t21,t22,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[14],lf[332]);
if(C_truep(t20)){
t21=(C_word)C_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 945  compile */
t22=((C_word*)((C_word*)t0)[12])[1];
f_3945(t22,((C_word*)t0)[13],t21,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t21=(C_word)C_eqp(((C_word*)t0)[14],lf[333]);
t22=(C_truep(t21)?t21:(C_word)C_eqp(((C_word*)t0)[14],lf[334]));
if(C_truep(t22)){
/* eval.scm: 948  compile */
t23=((C_word*)((C_word*)t0)[12])[1];
f_3945(t23,((C_word*)t0)[13],lf[335],((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[14],lf[336]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_memq(lf[338],*((C_word*)lf[339]+1)))){
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5450,a[2]=lf[341],tmp=(C_word)a,a+=3,tmp);
t26=(C_word)C_i_cdr(((C_word*)t0)[15]);
/* for-each */
t27=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t24,t25,t26);}
else{
/* eval.scm: 953  ##sys#warn */
t25=*((C_word*)lf[342]+1);
((C_proc4)(void*)(*((C_word*)t25+1)))(4,t25,t24,lf[343],((C_word*)t0)[15]);}}
else{
t24=(C_word)C_eqp(((C_word*)t0)[14],lf[344]);
t25=(C_truep(t24)?t24:(C_word)C_eqp(((C_word*)t0)[14],lf[345]));
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5489,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[15],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 957  cadadr */
t27=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t27))(3,t27,t26,((C_word*)t0)[15]);}
else{
t26=(C_word)C_eqp(((C_word*)t0)[14],lf[346]);
t27=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t26)){
t28=t27;
f_5502(t28,t26);}
else{
t28=(C_word)C_eqp(((C_word*)t0)[14],lf[350]);
if(C_truep(t28)){
t29=t27;
f_5502(t29,t28);}
else{
t29=(C_word)C_eqp(((C_word*)t0)[14],lf[351]);
if(C_truep(t29)){
t30=t27;
f_5502(t30,t29);}
else{
t30=(C_word)C_eqp(((C_word*)t0)[14],lf[352]);
if(C_truep(t30)){
t31=t27;
f_5502(t31,t30);}
else{
t31=(C_word)C_eqp(((C_word*)t0)[14],lf[353]);
if(C_truep(t31)){
t32=t27;
f_5502(t32,t31);}
else{
t32=(C_word)C_eqp(((C_word*)t0)[14],lf[354]);
if(C_truep(t32)){
t33=t27;
f_5502(t33,t32);}
else{
t33=(C_word)C_eqp(((C_word*)t0)[14],lf[355]);
if(C_truep(t33)){
t34=t27;
f_5502(t34,t33);}
else{
t34=(C_word)C_eqp(((C_word*)t0)[14],lf[356]);
if(C_truep(t34)){
t35=t27;
f_5502(t35,t34);}
else{
t35=(C_word)C_eqp(((C_word*)t0)[14],lf[357]);
t36=t27;
f_5502(t36,(C_truep(t35)?t35:(C_word)C_eqp(((C_word*)t0)[14],lf[358])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}
else{
/* eval.scm: 975  compile */
t3=((C_word*)((C_word*)t0)[12])[1];
f_3945(t3,((C_word*)t0)[13],t1,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* k5500 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_5502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
/* eval.scm: 964  ##sys#syntax-error-hook */
t2=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[8],lf[347],((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[83]);
if(C_truep(t2)){
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* eval.scm: 967  compile-call */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5695(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[348]);
if(C_truep(t3)){
/* eval.scm: 971  ##sys#syntax-error-hook */
t4=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[8],lf[349],((C_word*)t0)[7]);}
else{
/* eval.scm: 973  compile-call */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5695(t4,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}}}

/* k5487 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5489,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[92],t3);
/* eval.scm: 957  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3945(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5449 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5450(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5450,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
/* eval.scm: 952  ##compiler#process-declaration */
t4=*((C_word*)lf[340]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* k5437 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 954  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3945(t2,((C_word*)t0)[5],lf[337],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5399 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5393 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 942  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3945(t2,((C_word*)t0)[5],lf[331],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_5349(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5349,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[324]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5361,a[2]=t2,a[3]=lf[326],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5371,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[327],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 936  ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}}

/* a5370 in loop in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5371,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5379,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* eval.scm: 937  loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_5349(t6,t4,t5);}

/* k5377 in a5370 in loop in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5379,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[146],((C_word*)t0)[2],t1));}

/* a5360 in loop in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5369,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 936  cadar */
t3=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5367 in a5360 in loop in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 936  ##sys#do-the-right-thing */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k5341 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 932  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3945(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5318 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5319,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5326,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 922  ##sys#compile-to-closure */
t4=*((C_word*)lf[209]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5324 in a5318 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5288,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5291,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_apply(4,0,t2,*((C_word*)lf[319]+1),t1);}

/* k5289 in k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 924  ##sys#lookup-runtime-requirements */
t3=*((C_word*)lf[321]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5292 in k5289 in k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_nullp(t1))){
t3=t2;
f_5301(t3,lf[318]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5311,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5313,a[2]=lf[320],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}}

/* a5312 in k5292 in k5289 in k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5313,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[127],t2));}

/* k5309 in k5292 in k5289 in k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5311,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5301(t2,(C_word)C_a_i_cons(&a,2,lf[319],t1));}

/* k5299 in k5292 in k5289 in k5286 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_5301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 925  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3945(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[9]);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[8];
t9=(C_truep(t8)?t8:lf[282]);
t10=(C_word)C_a_i_cons(&a,2,t9,((C_word*)t4)[1]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4898,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=t10,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5223,a[2]=t11,a[3]=t7,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 826  ##sys#extended-lambda-list? */
t13=*((C_word*)lf[110]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,((C_word*)t4)[1]);}

/* k5221 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5223,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[313],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[314],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 827  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
f_4898(2,t2,C_SCHEME_UNDEFINED);}}

/* a5233 in k5221 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5234,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a5227 in k5221 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5228,2,t0,t1);}
/* eval.scm: 829  ##sys#expand-extended-lambda-list */
t2=*((C_word*)lf[118]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[76]+1));}

/* k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=lf[311],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 832  ##sys#decompose-lambda-list */
t3=*((C_word*)lf[312]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[24],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4903,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[9]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t4,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5206,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5212,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=lf[310],tmp=(C_word)a,a+=5,tmp);
t9=((C_word*)t0)[6];
t10=(C_truep(t9)?t9:((C_word*)t0)[5]);
/* eval.scm: 838  ##sys#canonicalize-body */
t11=*((C_word*)lf[145]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t7,((C_word*)((C_word*)t0)[2])[1],t8,((C_word*)t0)[4],t10);}

/* a5211 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5212,3,t0,t1,t2);}
/* defined?300 */
t3=((C_word*)t0)[3];
f_3762(t3,t1,t2,((C_word*)t0)[2]);}

/* k5204 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[6];
t3=(C_truep(t2)?t2:((C_word*)t0)[5]);
/* eval.scm: 837  ##sys#compile-to-closure */
t4=*((C_word*)lf[209]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[98],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4910,2,t0,t1);}
t2=((C_word*)t0)[8];
switch(t2){
case C_fix(0):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[284],tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[286],tmp=(C_word)a,a+=8,tmp)));
case C_fix(1):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[288],tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4982,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[290],tmp=(C_word)a,a+=8,tmp)));
case C_fix(2):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5010,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[292],tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[294],tmp=(C_word)a,a+=8,tmp)));
case C_fix(3):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[296],tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[298],tmp=(C_word)a,a+=8,tmp)));
default:
t3=(C_word)C_eqp(t2,C_fix(4));
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[300],tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[303],tmp=(C_word)a,a+=8,tmp)):(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=lf[306],tmp=(C_word)a,a+=9,tmp):(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=lf[309],tmp=(C_word)a,a+=9,tmp))));}}

/* f_5168 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5168(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5168,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5174,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=lf[308],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 907  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5173 */
static void C_ccall f_5174(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_5174r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5174r(t0,t1,t2);}}

static void C_ccall f_5174r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(t3,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5198,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,*((C_word*)lf[301]+1),t2);}
else{
/* eval.scm: 911  ##sys#error */
t5=*((C_word*)lf[171]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[307],((C_word*)t0)[4],t3);}}

/* k5196 in a5173 */
static void C_ccall f_5198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5198,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5145 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5145(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5145,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5151,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=lf[305],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 900  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5150 */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr2r,(void*)f_5151r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5151r(t0,t1,t2);}}

static void C_ccall f_5151r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5163,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5167,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
if(C_truep((C_word)C_i_nullp(t2))){
t6=t4;
f_5167(2,t6,(C_word)C_a_i_list(&a,1,t2));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5636,a[2]=t7,a[3]=t2,a[4]=lf[304],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_5636(t9,t4,t5,t2,C_SCHEME_FALSE);}}

/* do588 in a5150 */
static void C_fcall f_5636(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5636,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,1,t3);
t7=(C_word)C_i_setslot(t4,C_fix(1),t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[3]);}
else{
t6=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_slot(t3,C_fix(1));
t11=t1;
t12=t6;
t13=t7;
t14=t3;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}

/* k5165 in a5150 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[301]+1),t1);}

/* k5161 in a5150 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5163,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5123 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5123,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5129,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[302],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 893  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5128 */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5129,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5141,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 895  ##sys#vector */
t7=*((C_word*)lf[301]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t2,t3,t4,t5);}

/* k5139 in a5128 */
static void C_ccall f_5141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5141,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5104 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5104,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[299],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 888  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5109 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr6r,(void*)f_5110r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_5110r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_5110r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t7=(C_word)C_a_i_vector(&a,5,t2,t3,t4,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* f_5076 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5076,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[297],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 882  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5081 */
static void C_ccall f_5082(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5082,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_vector(&a,3,t2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_5057 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5057,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[295],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 877  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5062 */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_5063r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5063r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5063r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=(C_word)C_a_i_vector(&a,4,t2,t3,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,t7);}

/* f_5029 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5029(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5029,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[293],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 871  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5034 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5035,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_vector(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_5010 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5010,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[291],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 866  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5015 */
static void C_ccall f_5016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_5016r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5016r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5016r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=(C_word)C_a_i_vector(&a,3,t2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_4982 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4982(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4982,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[289],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 860  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4987 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4988,3,t0,t1,t2);}
t3=(C_word)C_a_i_vector(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* f_4963 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4963(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4963,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[287],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 855  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4968 */
static void C_ccall f_4969(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4969r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4969r(t0,t1,t2,t3);}}

static void C_ccall f_4969r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(C_word)C_a_i_vector(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_4939 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4939,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[285],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 850  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4944 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_4920 in k4908 in a4902 in k4896 in k4884 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4920(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4920,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=lf[283],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 845  decorate */
f_3939(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4925 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4926r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4926r(t0,t1,t2);}}

static void C_ccall f_4926r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(C_word)C_a_i_vector(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[10]);
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t3,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=lf[280],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a4872 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4873(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4873,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4867,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[279],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 778  ##sys#canonicalize-body */
t7=*((C_word*)lf[145]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t5,t6,((C_word*)t0)[4],((C_word*)t0)[7]);}

/* a4866 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4867(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4867,3,t0,t1,t2);}
/* defined?300 */
t3=((C_word*)t0)[3];
f_3762(t3,t1,t2,((C_word*)t0)[2]);}

/* k4859 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 777  ##sys#compile-to-closure */
t2=*((C_word*)lf[209]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
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
C_word ab[81],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4563,2,t0,t1);}
switch(((C_word*)t0)[10]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4572,a[2]=t1,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 783  cadar */
t4=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 786  cadar */
t4=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4709,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 790  cadar */
t4=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4791,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 798  cadar */
t4=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);
default:
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4845,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[278],tmp=(C_word)a,a+=7,tmp);
/* map */
t4=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}}

/* a4844 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4845,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_i_car(t2);
/* eval.scm: 812  compile */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3945(t5,t1,t3,((C_word*)t0)[4],t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4796 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4798,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4799,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[277],tmp=(C_word)a,a+=6,tmp));}

/* f_4799 in k4796 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4799,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 814  ##sys#make-vector */
t4=*((C_word*)lf[276]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k4801 */
static void C_ccall f_4803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4806,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=lf[275],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4815(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* do470 in k4801 */
static void C_fcall f_4815(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4815,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4840,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}

/* k4838 in do470 in k4801 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_4815(t5,((C_word*)t0)[2],t3,t4);}

/* k4804 in k4801 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k4789 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[7]);
/* eval.scm: 798  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 799  cadadr */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[10]);}

/* k4781 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 799  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4731,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4775,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 801  cadar */
t5=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4773 in k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
/* eval.scm: 801  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4729 in k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t1,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4767,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 802  cadadr */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4765 in k4729 in k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadddr(((C_word*)t0)[7]);
/* eval.scm: 802  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4732 in k4729 in k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4734,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=lf[274],tmp=(C_word)a,a+=8,tmp));}

/* f_4735 in k4732 in k4729 in k4723 in k4720 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4735(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4735,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4749 */
static void C_ccall f_4751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4753 in k4749 */
static void C_ccall f_4755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4757 in k4753 in k4749 */
static void C_ccall f_4759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4761 in k4757 in k4753 in k4749 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4763,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4707 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[7]);
/* eval.scm: 790  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4658,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 791  cadadr */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[10]);}

/* k4699 in k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 791  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4656 in k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4658,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 793  cadar */
t5=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4691 in k4656 in k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
/* eval.scm: 793  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4662 in k4656 in k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4664,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=lf[273],tmp=(C_word)a,a+=7,tmp));}

/* f_4665 in k4662 in k4656 in k4653 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4665,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4679 */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4683 in k4679 */
static void C_ccall f_4685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4687 in k4683 in k4679 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4689,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4640 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[7]);
/* eval.scm: 786  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4604 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4609,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 787  cadadr */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4632 in k4604 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 787  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4607 in k4604 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4609,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4610,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=lf[272],tmp=(C_word)a,a+=6,tmp));}

/* f_4610 in k4607 in k4604 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4610,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4626,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4624 */
static void C_ccall f_4626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4628 in k4624 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4630,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4591 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[7]);
/* eval.scm: 783  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3945(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4570 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4572,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4573,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=lf[271],tmp=(C_word)a,a+=5,tmp));}

/* f_4573 in k4570 in k4561 in k4555 in k4546 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4573,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4589,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4587 */
static void C_ccall f_4589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4589,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,1,t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4442,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=lf[261],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=t2,a[8]=lf[269],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4456,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4460,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_caddr(((C_word*)t0)[6]);
/* eval.scm: 753  compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3945(t6,t4,t5,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_zerop(((C_word*)t0)[5]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4514,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[262],tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4527,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=lf[263],tmp=(C_word)a,a+=6,tmp)));}
else{
if(C_truep(*((C_word*)lf[193]+1))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4472,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 756  ##sys#hash-table-location */
t4=*((C_word*)lf[190]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[193]+1),((C_word*)t0)[2],*((C_word*)lf[194]+1));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4499,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[268],tmp=(C_word)a,a+=5,tmp));}}}

/* f_4499 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4499(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4499,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4505 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* k4470 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4475(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 760  ##sys#error */
t3=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[267],((C_word*)t0)[2]);}}

/* k4473 in k4470 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4475,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=lf[264],tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4491,a[2]=((C_word*)t0)[2],a[3]=lf[266],tmp=(C_word)a,a+=4,tmp)));}

/* f_4491 in k4473 in k4470 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4491(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4491,2,t0,t1);}
/* eval.scm: 763  ##sys#error */
t2=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[265],((C_word*)t0)[2]);}

/* f_4482 in k4473 in k4470 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4482,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4488 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_4527 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4527(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4527,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4533 */
static void C_ccall f_4535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot((C_word)C_u_i_list_ref(((C_word*)t0)[4],((C_word*)t0)[3]),((C_word*)t0)[2],t1));}

/* f_4514 in k4458 in a4455 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4514,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4524 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* a4449 in k4440 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4450,2,t0,t1);}
/* eval.scm: 752  lookup */
f_3720(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4334(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4334,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t3=(C_word)C_i_length(t2);
switch(t3){
case C_fix(0):
/* eval.scm: 738  compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3945(t4,((C_word*)t0)[5],lf[257],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
case C_fix(1):
t4=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 739  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3945(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
case C_fix(2):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 740  compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3945(t6,t4,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
default:
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 744  compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3945(t6,t4,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4391 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 745  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3945(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4394 in k4391 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,lf[146],t4);
/* eval.scm: 746  compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3945(t6,t2,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4397 in k4394 in k4391 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=lf[259],tmp=(C_word)a,a+=6,tmp));}

/* f_4400 in k4397 in k4394 in k4391 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4400,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4402 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4405 in k4402 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4369 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 741  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3945(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4372 in k4369 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4374,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=lf[258],tmp=(C_word)a,a+=5,tmp));}

/* f_4375 in k4372 in k4369 in k4332 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4375,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4379,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4377 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4275 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 726  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3945(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4278 in k4275 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[6]);
/* eval.scm: 727  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3945(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4281 in k4278 in k4275 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdddr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadddr(((C_word*)t0)[6]);
/* eval.scm: 729  compile */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3945(t5,t2,t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* eval.scm: 730  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3945(t4,t2,lf[255],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4284 in k4281 in k4278 in k4275 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=lf[254],tmp=(C_word)a,a+=6,tmp));}

/* f_4287 in k4284 in k4281 in k4278 in k4275 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4287,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4292 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* f_4267 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4267,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_4233 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4233(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4233,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k4225 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4227,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4228,a[2]=t1,a[3]=lf[248],tmp=(C_word)a,a+=4,tmp));}

/* f_4228 in k4225 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(1)));}

/* k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4151,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4161,a[2]=lf[238],tmp=(C_word)a,a+=3,tmp));
case C_fix(0):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=lf[239],tmp=(C_word)a,a+=3,tmp));
case C_fix(1):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=lf[240],tmp=(C_word)a,a+=3,tmp));
case C_fix(2):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4185,a[2]=lf[241],tmp=(C_word)a,a+=3,tmp));
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4193,a[2]=lf[242],tmp=(C_word)a,a+=3,tmp));
case C_SCHEME_FALSE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4201,a[2]=lf[243],tmp=(C_word)a,a+=3,tmp));
default:
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=lf[244],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4211,a[2]=t2,a[3]=lf[245],tmp=(C_word)a,a+=4,tmp)));}}

/* f_4211 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4209 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* f_4201 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4201,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4193 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_4185 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4185(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4185,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_4177 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_4169 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4169(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4169,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_4161 in k4149 in k4134 in k4128 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4161,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* f_4102 in k4099 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4102(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4102,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4091 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4091,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4089 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4089,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_4078 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4076 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4076,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_4068 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4068,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_4060 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4060,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_4052 in k4043 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3963(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[26],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3963,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
t5=(C_word)C_i_zerop(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4026,a[2]=t3,a[3]=lf[222],tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=t3,a[3]=t2,a[4]=lf[223],tmp=(C_word)a,a+=5,tmp)));}
else{
if(C_truep(*((C_word*)lf[193]+1))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 653  ##sys#hash-table-location */
t6=*((C_word*)lf[190]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[193]+1),((C_word*)t0)[3],C_SCHEME_TRUE);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4004,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[204]+1))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4019,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 666  ##sys#symbol-has-toplevel-binding? */
t8=*((C_word*)lf[228]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[3]);}
else{
t7=t6;
f_4004(t7,C_SCHEME_FALSE);}}}}

/* k4017 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4004(t2,(C_word)C_i_not(t1));}

/* k4002 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_4004(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4004,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,t2,*((C_word*)lf[204]+1));
t4=C_mutate((C_word*)lf[204]+1,t3);
t5=((C_word*)t0)[2];
f_3999(t5,t4);}
else{
t2=((C_word*)t0)[2];
f_3999(t2,C_SCHEME_UNDEFINED);}}

/* k3997 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3999,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4000,a[2]=((C_word*)t0)[2],a[3]=lf[227],tmp=(C_word)a,a+=4,tmp));}

/* f_4000 in k3997 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4000(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4000,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_retrieve(((C_word*)t0)[2]));}

/* k3974 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_3979(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 654  ##sys#syntax-error-hook */
t3=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[226],((C_word*)t0)[2]);}}

/* k3977 in k3974 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3979,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[225],tmp=(C_word)a,a+=6,tmp));}

/* f_3980 in k3977 in k3974 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_eqp(((C_word*)t0)[3],t2);
if(C_truep(t3)){
/* eval.scm: 661  ##sys#error */
t4=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,lf[224],((C_word*)t0)[2]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* f_4035 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4035,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot((C_word)C_u_i_list_ref(t2,((C_word*)t0)[3]),((C_word*)t0)[2]));}

/* f_4026 in a3962 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4026,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t3,((C_word*)t0)[2]));}

/* a3956 in compile in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3957,2,t0,t1);}
/* eval.scm: 650  lookup */
f_3720(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* decorate in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3939(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3939,NULL,5,t1,t2,t3,t4,t5);}
/* eval.scm: 646  ##sys#eval-decorator */
t6=*((C_word*)lf[195]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t2,t3,t4,t5);}

/* emit-syntax-trace-info in ##sys#compile-to-closure in k1745 */
static C_word C_fcall f_3933(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_stack_check;
return((C_truep(t1)?(C_word)C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[217]+1)):C_SCHEME_UNDEFINED));}

/* emit-trace-info in ##sys#compile-to-closure in k1745 */
static C_word C_fcall f_3927(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_stack_check;
return((C_truep(t1)?(C_word)C_emit_eval_trace_info(t2,t3,*((C_word*)lf[217]+1)):C_SCHEME_UNDEFINED));}

/* macroexpand-1-checked in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3874(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3874,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3878,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 626  ##sys#macroexpand-1-local */
t5=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}

/* k3876 in macroexpand-1-checked in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_slot(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(t2,lf[80]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3925,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 629  defined? */
t6=((C_word*)t0)[2];
f_3762(t6,t5,lf[80],((C_word*)t0)[3]);}
else{
t5=t3;
f_3893(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* k3923 in k3876 in macroexpand-1-checked in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3893(t2,(C_word)C_i_not(t1));}

/* k3891 in k3876 in macroexpand-1-checked in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3893,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_3902(t5,(C_word)C_i_symbolp(t4));}
else{
t4=t3;
f_3902(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k3900 in k3891 in k3876 in macroexpand-1-checked in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3902(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* eval.scm: 632  macroexpand-1-checked */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3874(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* defined? in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3762(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3762,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3768,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=lf[213],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3774,a[2]=lf[214],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a3773 in defined? in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3774,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* a3767 in defined? in ##sys#compile-to-closure in k1745 */
static void C_ccall f_3768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3768,2,t0,t1);}
/* eval.scm: 601  lookup */
f_3720(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lookup in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3720(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3720,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3726,a[2]=t5,a[3]=t2,a[4]=lf[211],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3726(t7,t1,t3,C_fix(0));}

/* loop in lookup in ##sys#compile-to-closure in k1745 */
static void C_fcall f_3726(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3726,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* eval.scm: 596  values */
C_values(4,0,t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3844,a[2]=t5,a[3]=lf[210],tmp=(C_word)a,a+=4,tmp);
t7=f_3844(t6,t4,C_fix(0));
if(C_truep(t7)){
/* eval.scm: 597  values */
C_values(4,0,t1,t3,t7);}
else{
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_fixnum_plus(t3,C_fix(1));
/* eval.scm: 598  loop */
t11=t1;
t12=t8;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* loop in loop in lookup in ##sys#compile-to-closure in k1745 */
static C_word C_fcall f_3844(C_word t0,C_word t1,C_word t2){
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
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=(C_word)C_slot(t1,C_fix(1));
t6=(C_word)C_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* ##sys#eval-decorator in k1745 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3673,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3679,a[2]=lf[196],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3692,a[2]=t3,a[3]=lf[201],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 567  ##sys#decorate-lambda */
t8=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,t6,t7);}

/* a3691 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3692,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3700,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 574  open-output-string */
t6=*((C_word*)lf[200]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3702 in a3691 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3707,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 575  write */
t3=*((C_word*)lf[199]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3705 in k3702 in a3691 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 576  get-output-string */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3708 in k3705 in k3702 in a3691 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 573  ##sys#make-lambda-info */
t2=*((C_word*)lf[197]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3698 in a3691 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}

/* a3678 in ##sys#eval-decorator in k1745 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3679,3,t0,t1,t2);}
t3=(C_word)C_immp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_lambdainfop(t2)));}

/* ##sys#hash-table-location in k1745 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3613,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3617,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_block_size(t2);
/* eval.scm: 547  ##sys#hash-symbol */
t7=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t3,t6);}

/* k3615 in ##sys#hash-table-location in k1745 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3617,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3625,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=lf[191],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_3625(t6,((C_word*)t0)[2],t2);}

/* loop in k3615 in ##sys#hash-table-location in k1745 */
static void C_fcall f_3625(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3625,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[8])){
t3=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],C_SCHEME_TRUE);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[5]);
t5=(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[7],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 558  loop */
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* ##sys#hash-table-for-each in k1745 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3567,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3573,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,a[6]=lf[187],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3573(t8,t1,C_fix(0));}

/* do258 in ##sys#hash-table-for-each in k1745 */
static void C_fcall f_3573(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3573,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3583,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[3],a[3]=lf[185],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[2],t2);
/* eval.scm: 539  ##sys#for-each */
t6=*((C_word*)lf[186]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}}

/* a3591 in do258 in ##sys#hash-table-for-each in k1745 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3592,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 540  p */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* k3581 in do258 in ##sys#hash-table-for-each in k1745 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3573(t3,((C_word*)t0)[2],t2);}

/* ##sys#hash-table-set! in k1745 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3512,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3516,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 525  ##sys#hash-symbol */
t6=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,(C_word)C_block_size(t2));}

/* k3514 in ##sys#hash-table-set! in k1745 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3516,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3524,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=lf[182],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3524(t6,((C_word*)t0)[2],t2);}

/* loop in k3514 in ##sys#hash-table-set! in k1745 */
static void C_fcall f_3524(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3524,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t5));}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(t4,C_fix(1),((C_word*)t0)[6]));}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 533  loop */
t11=t1;
t12=t7;
t1=t11;
t2=t12;
goto loop;}}}

/* ##sys#hash-table-ref in k1745 */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3467,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3471,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 514  ##sys#hash-symbol */
t5=*((C_word*)lf[178]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,(C_word)C_block_size(t2));}

/* k3469 in ##sys#hash-table-ref in k1745 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[3],a[3]=lf[180],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3480(t3,t2));}

/* loop in k3469 in ##sys#hash-table-ref in k1745 */
static C_word C_fcall f_3480(C_word t0,C_word t1){
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
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_LIST);
if(C_truep(t2)){
return(C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return((C_word)C_slot(t3,C_fix(1)));}
else{
t6=(C_word)C_slot(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}}

/* ##sys#hash-symbol in k1745 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3452,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_fixnum_modulo(((C_word*)((C_word*)t0)[2])[1],t3));}
else{
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_hash_string(t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_fixnum_modulo(t6,t3));}}

/* ##sys#expand-curried-define in k1745 */
static void C_ccall f_3392(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3392,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3395,a[2]=t7,a[3]=t5,a[4]=lf[176],tmp=(C_word)a,a+=5,tmp));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3447,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 496  loop */
t10=((C_word*)t7)[1];
f_3395(t10,t9,t2,t3);}

/* k3445 in ##sys#expand-curried-define in k1745 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3447,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t1));}

/* loop in ##sys#expand-curried-define in k1745 */
static void C_fcall f_3395(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(15);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3395,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_slot(t2,C_fix(0));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,lf[129],t8));}
else{
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
t8=(C_word)C_a_i_cons(&a,2,lf[129],t7);
t9=(C_word)C_a_i_list(&a,1,t8);
/* eval.scm: 495  loop */
t15=t1;
t16=t5;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* ##sys#match-expression in k1745 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3301,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3304,a[2]=t8,a[3]=t4,a[4]=t6,a[5]=lf[174],tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3390,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 483  mwalk */
t11=((C_word*)t8)[1];
f_3304(t11,t10,t2,t3);}

/* k3388 in ##sys#match-expression in k1745 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}

/* mwalk in ##sys#match-expression in k1745 */
static void C_fcall f_3304(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3304,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not((C_word)C_blockp(t3));
t5=(C_truep(t4)?t4:(C_word)C_i_not((C_word)C_pairp(t3)));
if(C_truep(t5)){
t6=(C_word)C_i_assq(t3,((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t6)){
t7=(C_word)C_slot(t6,C_fix(1));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_equalp(t2,t7));}
else{
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[3]))){
t7=(C_word)C_a_i_cons(&a,2,t3,t2);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)((C_word*)t0)[4])[1]);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_TRUE);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_eqp(t2,t3));}}}
else{
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3359,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_slot(t2,C_fix(0));
t10=(C_word)C_slot(t3,C_fix(0));
/* eval.scm: 480  mwalk */
t17=t8;
t18=t9;
t19=t10;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* k3357 in mwalk in ##sys#match-expression in k1745 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 481  mwalk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3304(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##sys#canonicalize-body in k1745 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_2815r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2815r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2815r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2817,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=lf[168],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3248,a[2]=t5,a[3]=lf[169],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3253,a[2]=t6,a[3]=lf[170],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-me148201 */
t8=t7;
f_3253(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-container149199 */
t10=t6;
f_3248(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body146151 */
t12=t5;
f_2817(t12,t1,t8);}
else{
/* ##sys#error */
t12=*((C_word*)lf[171]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-me148 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_3253(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3253,NULL,2,t0,t1);}
/* def-container149199 */
t2=((C_word*)t0)[2];
f_3248(t2,t1,C_SCHEME_FALSE);}

/* def-container149 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_3248(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3248,NULL,3,t0,t1,t2);}
/* body146151 */
t3=((C_word*)t0)[2];
f_2817(t3,t1,t2);}

/* body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2817,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=lf[156],tmp=(C_word)a,a+=6,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=lf[167],tmp=(C_word)a,a+=6,tmp));
/* eval.scm: 464  expand */
t9=((C_word*)t6)[1];
f_3000(t9,t1,((C_word*)t0)[2]);}

/* expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_3000(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3000,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=lf[166],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3006(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3006,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_pairp(t2))){
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_i_pairp(t7);
t10=(C_truep(t9)?(C_word)C_slot(t7,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t10,a[7]=t2,a[8]=t6,a[9]=t5,a[10]=t4,a[11]=t3,a[12]=t1,a[13]=((C_word*)t0)[5],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_symbolp(t10))){
/* eval.scm: 430  lookup */
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,t10);}
else{
t12=t11;
f_3040(2,t12,C_SCHEME_FALSE);}}
else{
/* eval.scm: 429  fini */
t11=((C_word*)((C_word*)t0)[5])[1];
f_2820(t11,t1,t3,t4,t5,t6,t2);}}
else{
/* eval.scm: 425  fini */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2820(t7,t1,t3,t4,t5,t6,t2);}}

/* k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 431  fini */
t2=((C_word*)((C_word*)t0)[13])[1];
f_2820(t2,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(lf[147],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3052,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 433  ##sys#check-syntax */
t4=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[147],((C_word*)t0)[3],lf[163],C_SCHEME_FALSE);}
else{
t3=(C_word)C_eqp(lf[148],((C_word*)t0)[6]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 454  ##sys#check-syntax */
t5=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[148],((C_word*)t0)[3],lf[164],C_SCHEME_FALSE);}
else{
t4=(C_word)C_eqp(lf[146],((C_word*)t0)[6]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 457  ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[146],((C_word*)t0)[3],lf[165],C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3212,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 460  ##sys#macroexpand-0 */
t6=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}}}}}

/* k3210 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3212,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[11],t1);
if(C_truep(t2)){
/* eval.scm: 462  fini */
t3=((C_word*)((C_word*)t0)[10])[1];
f_2820(t3,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* eval.scm: 463  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3006(t4,((C_word*)t0)[9],t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* k3196 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3205,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 458  ##sys#append */
t4=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k3203 in k3196 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 458  loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3006(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3168 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3170,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[8]);
t4=(C_word)C_i_caddr(((C_word*)t0)[9]);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
/* eval.scm: 455  loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3006(t6,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3,t5);}

/* k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t3,a[9]=lf[162],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3057(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2 in k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_3057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3057,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3104,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 445  ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[147],t2,lf[158],C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 448  ##sys#check-syntax */
t6=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[147],t2,lf[159],C_SCHEME_FALSE);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 437  ##sys#check-syntax */
t5=*((C_word*)lf[87]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[147],t2,lf[161],C_SCHEME_FALSE);}}

/* k3068 in loop2 in k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3070,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_i_cddr(((C_word*)t0)[8]);
t4=(C_word)C_i_pairp(t3);
t5=(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[8]):lf[160]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
/* eval.scm: 438  loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_3006(t7,((C_word*)t0)[5],((C_word*)t0)[4],t2,t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3120 in loop2 in k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3122,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[10],C_fix(0));
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[9]);
t4=(C_word)C_slot(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_i_cddr(((C_word*)t0)[8]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[129],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[7]);
/* eval.scm: 449  loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_3006(t9,((C_word*)t0)[5],((C_word*)t0)[4],t3,t8,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3102 in loop2 in k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* eval.scm: 446  ##sys#expand-curried-define */
t4=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k3113 in k3102 in loop2 in k3050 in k3038 in loop in expand in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[147],t1);
/* eval.scm: 446  loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3057(t3,((C_word*)t0)[2],t2);}

/* fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_2820(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2820,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_nullp(t2);
t8=(C_truep(t7)?(C_word)C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2832,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[149],tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2832(t12,t1,t6,C_SCHEME_END_OF_LIST);}
else{
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2902,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 409  reverse */
t10=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,t2);}}

/* k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=lf[155],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2992,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,*((C_word*)lf[125]+1),t1,((C_word*)t0)[3]);}

/* k2990 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 410  ##sys#map */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2979 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2980,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[154]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t2,t3));}

/* k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2917,a[2]=((C_word*)t0)[9],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=lf[153],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 412  reverse */
t6=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k2976 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 412  map */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2969 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2970,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[94],t2,t3));}

/* k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[5],a[3]=lf[152],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 419  reverse */
t6=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k2962 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2968,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 420  reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2966 in k2962 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 413  map */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2930 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2931,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2935,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 414  ##sys#map */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[117]+1),t2);}

/* k2933 in a2930 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2935,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[129],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2956,a[2]=lf[151],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 418  map */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[2],t1);}

/* a2955 in k2933 in a2930 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2956,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[94],t2,t3));}

/* k2952 in k2933 in a2930 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[129],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[150],((C_word*)t0)[2],t3));}

/* k2927 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2923 in k2919 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2915 in k2911 in k2900 in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2917,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[80],t2));}

/* loop in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_2832(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2832,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_slot(t4,C_fix(0));
t7=(C_word)C_a_i_list(&a,2,lf[147],lf[148]);
t8=t5;
f_2851(t8,(C_word)C_i_memq(t6,t7));}
else{
t6=t5;
f_2851(t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[146],((C_word*)t0)[2]));}}

/* k2849 in loop in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_fcall f_2851(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2851,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 407  reverse */
t4=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* eval.scm: 408  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2832(t4,((C_word*)t0)[8],t2,t3);}}

/* k2860 in k2849 in loop in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 407  expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3000(t3,t2,((C_word*)t0)[2]);}

/* k2868 in k2860 in k2849 in loop in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 407  ##sys#append */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2856 in k2849 in loop in fini in body146 in ##sys#canonicalize-body in k1745 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[146],t1));}

/* ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2296,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2299,a[2]=t2,a[3]=t4,a[4]=lf[119],tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2318,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t9,a[8]=t7,a[9]=lf[142],tmp=(C_word)a,a+=10,tmp));
t13=((C_word*)t11)[1];
f_2318(t13,t1,C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t2);}

/* loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2318(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
a=C_alloc(85);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2318,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t4,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2541,a[2]=((C_word*)t0)[8],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 325  reverse */
t9=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}
else{
/* eval.scm: 325  reverse */
t8=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}
else{
if(C_truep((C_word)C_i_symbolp(t6))){
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(2)))){
/* eval.scm: 348  err */
t7=((C_word*)t0)[4];
f_2299(t7,t1,lf[132]);}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2562,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t8)){
t9=t7;
f_2562(t9,C_SCHEME_UNDEFINED);}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
t10=t7;
f_2562(t10,t9);}}}
else{
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_slot(t6,C_fix(0));
t8=(C_word)C_slot(t6,C_fix(1));
t9=(C_word)C_eqp(t7,lf[112]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t11)){
t12=t10;
f_2594(t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2613,a[2]=t10,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 360  gensym */
t13=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t13))(2,t13,t12);}}
else{
t10=(C_word)C_eqp(t7,lf[111]);
if(C_truep(t10)){
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[7],a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_pairp(t8))){
t12=(C_word)C_slot(t8,C_fix(0));
t13=t11;
f_2631(t13,(C_word)C_i_symbolp(t12));}
else{
t12=t11;
f_2631(t12,C_SCHEME_FALSE);}}
else{
/* eval.scm: 372  err */
t11=((C_word*)t0)[4];
f_2299(t11,t1,lf[135]);}}
else{
t11=(C_word)C_eqp(t7,lf[113]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t13=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t13)){
t14=t12;
f_2677(t14,C_SCHEME_UNDEFINED);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t12,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 374  gensym */
t15=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t15))(2,t15,t14);}}
else{
if(C_truep((C_word)C_i_symbolp(t7))){
t12=t2;
switch(t12){
case C_fix(0):
t13=(C_word)C_a_i_cons(&a,2,t7,t3);
/* eval.scm: 381  loop */
t34=t1;
t35=C_fix(0);
t36=t13;
t37=C_SCHEME_END_OF_LIST;
t38=C_SCHEME_END_OF_LIST;
t39=t8;
t1=t34;
t2=t35;
t3=t36;
t4=t37;
t5=t38;
t6=t39;
goto loop;
case C_fix(1):
t13=(C_word)C_a_i_list(&a,2,t7,C_SCHEME_FALSE);
t14=(C_word)C_a_i_cons(&a,2,t13,t4);
/* eval.scm: 382  loop */
t34=t1;
t35=C_fix(1);
t36=t3;
t37=t14;
t38=C_SCHEME_END_OF_LIST;
t39=t8;
t1=t34;
t2=t35;
t3=t36;
t4=t37;
t5=t38;
t6=t39;
goto loop;
case C_fix(2):
/* eval.scm: 383  err */
t13=((C_word*)t0)[4];
f_2299(t13,t1,lf[137]);
default:
t13=(C_word)C_a_i_list(&a,1,t7);
t14=(C_word)C_a_i_cons(&a,2,t13,t5);
/* eval.scm: 384  loop */
t34=t1;
t35=C_fix(3);
t36=t3;
t37=t4;
t38=t14;
t39=t8;
t1=t34;
t2=t35;
t3=t36;
t4=t37;
t5=t38;
t6=t39;
goto loop;}}
else{
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2758,a[2]=t5,a[3]=t8,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=t7,a[8]=t1,a[9]=((C_word*)t0)[4],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t7))){
t13=(C_word)C_i_length(t7);
t14=t12;
f_2758(t14,(C_word)C_eqp(C_fix(2),t13));}
else{
t13=t12;
f_2758(t13,C_SCHEME_FALSE);}}}}}}
else{
/* eval.scm: 354  err */
t7=((C_word*)t0)[4];
f_2299(t7,t1,lf[141]);}}}}

/* k2756 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2758(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2758,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
switch(t2){
case C_fix(0):
/* eval.scm: 387  err */
t3=((C_word*)t0)[9];
f_2299(t3,((C_word*)t0)[8],lf[138]);
case C_fix(1):
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
/* eval.scm: 388  loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2318(t4,((C_word*)t0)[8],C_fix(1),((C_word*)t0)[4],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
case C_fix(2):
/* eval.scm: 389  err */
t3=((C_word*)t0)[9];
f_2299(t3,((C_word*)t0)[8],lf[139]);
default:
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[2]);
/* eval.scm: 390  loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2318(t4,((C_word*)t0)[8],C_fix(3),((C_word*)t0)[4],((C_word*)t0)[6],t3,((C_word*)t0)[3]);}}
else{
/* eval.scm: 391  err */
t2=((C_word*)t0)[9];
f_2299(t2,((C_word*)t0)[8],lf[140]);}}

/* k2694 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2677(t3,t2);}

/* k2675 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2677(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[8],C_fix(3)))){
/* eval.scm: 376  loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2318(t2,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
/* eval.scm: 377  err */
t2=((C_word*)t0)[2];
f_2299(t2,((C_word*)t0)[6],lf[136]);}}

/* k2629 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2631(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2631,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t3)){
t4=t2;
f_2634(t4,C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_slot(((C_word*)t0)[9],C_fix(0));
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=t2;
f_2634(t6,t5);}}
else{
/* eval.scm: 371  err */
t2=((C_word*)t0)[2];
f_2299(t2,((C_word*)t0)[6],lf[134]);}}

/* k2632 in k2629 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* eval.scm: 370  loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2318(t5,((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}

/* k2611 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2594(t3,t2);}

/* k2592 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[7],C_fix(0));
if(C_truep(t2)){
/* eval.scm: 362  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2318(t3,((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
/* eval.scm: 363  err */
t3=((C_word*)t0)[2];
f_2299(t3,((C_word*)t0)[5],lf[133]);}}

/* k2560 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2562(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
/* eval.scm: 352  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2318(t3,((C_word*)t0)[4],C_fix(4),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k2539 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 325  ##sys#append */
t2=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_2336(t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[6],a[3]=lf[131],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2534,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 336  reverse */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[4]);}}

/* k2532 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2476 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2477,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2530,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
/* eval.scm: 315  string->keyword */
t6=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k2528 in a2476 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[127],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_cdr(((C_word*)t0)[2]);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[129],t6);
t8=t3;
f_2504(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
t5=t3;
f_2504(t5,C_SCHEME_END_OF_LIST);}}

/* k2502 in k2528 in a2476 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2504,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[5])[1],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[128],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t4));}

/* k2473 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[126],t2);
t4=((C_word*)t0)[2];
f_2336(t4,(C_word)C_a_i_list(&a,1,t3));}

/* k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2336(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2336,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t3=t2;
f_2339(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t4)){
t5=t3;
f_2348(t5,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
t5=(C_word)C_i_cdr(((C_word*)t0)[6]);
t6=t3;
f_2348(t6,(C_word)C_i_nullp(t5));}
else{
t5=t3;
f_2348(t5,C_SCHEME_FALSE);}}}}

/* k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2348(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2348,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 340  caar */
t3=*((C_word*)lf[122]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_i_nullp(((C_word*)t0)[3]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 342  reverse */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2427,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 344  reverse */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[5]);}}}

/* k2425 in k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2427,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_truep(t2)?t2:((C_word*)((C_word*)t0)[3])[1]);
t4=(C_word)C_a_i_list(&a,1,t3);
/* eval.scm: 344  ##sys#append */
t5=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k2421 in k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[124],t3);
t5=((C_word*)t0)[2];
f_2339(t5,(C_word)C_a_i_list(&a,1,t4));}

/* k2402 in k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2404,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[123],t3);
t5=((C_word*)t0)[2];
f_2339(t5,(C_word)C_a_i_list(&a,1,t4));}

/* k2369 in k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 340  cadar */
t3=*((C_word*)lf[121]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2377 in k2369 in k2346 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2379,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[120],((C_word*)((C_word*)t0)[5])[1],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=(C_word)C_a_i_cons(&a,2,lf[80],t5);
t7=((C_word*)t0)[2];
f_2339(t7,(C_word)C_a_i_list(&a,1,t6));}

/* k2337 in k2334 in k2330 in loop in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 324  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* err in ##sys#expand-extended-lambda-list in k1745 */
static void C_fcall f_2299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2299,NULL,3,t0,t1,t2);}
/* eval.scm: 314  errh */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#extended-lambda-list? in k1745 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2253,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2259,a[2]=t4,a[3]=lf[114],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2259(t6,t1,t2);}

/* loop in ##sys#extended-lambda-list? in k1745 */
static void C_fcall f_2259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2259,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_eqp(t3,lf[111]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2278(t6,t4);}
else{
t6=(C_word)C_eqp(t3,lf[112]);
t7=t5;
f_2278(t7,(C_truep(t6)?t6:(C_word)C_eqp(t3,lf[113])));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2276 in loop in ##sys#extended-lambda-list? in k1745 */
static void C_fcall f_2278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 308  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2259(t3,((C_word*)t0)[4],t2);}}

/* macroexpand-1 in k1745 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2237r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2237r(t0,t1,t2,t3);}}

static void C_ccall f_2237r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
/* eval.scm: 288  ##sys#macroexpand-0 */
t6=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t5);}

/* macroexpand in k1745 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2201r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2201r(t0,t1,t2,t3);}}

static void C_ccall f_2201r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2210,a[2]=t7,a[3]=t5,a[4]=lf[106],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2210(t9,t1,t2);}

/* loop in macroexpand in k1745 */
static void C_fcall f_2210(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2210,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2216,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[104],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2222,a[2]=((C_word*)t0)[2],a[3]=lf[105],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a2221 in loop in macroexpand in k1745 */
static void C_ccall f_2222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2222,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* eval.scm: 284  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2210(t4,t1,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* a2215 in loop in macroexpand in k1745 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2216,2,t0,t1);}
/* eval.scm: 282  ##sys#macroexpand-0 */
t2=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#macroexpand-1-local in k1745 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2194,4,t0,t1,t2,t3);}
/* eval.scm: 269  ##sys#macroexpand-0 */
t4=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##sys#interpreter-toplevel-macroexpand-hook in k1745 */
static void C_ccall f_2191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2191,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#compiler-toplevel-macroexpand-hook in k1745 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2188,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1818,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1821,a[2]=((C_word*)t0)[2],a[3]=lf[75],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1967,a[2]=t4,a[3]=t3,a[4]=lf[79],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_symbolp(t6))){
t8=(C_word)C_eqp(t6,lf[80]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2055,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 238  ##sys#check-syntax */
t10=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[80],t7,lf[89]);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2128,a[2]=t6,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_truep((C_word)C_eqp(t6,lf[92]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,lf[94]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
if(C_truep((C_word)C_i_pairp(t7))){
t10=(C_word)C_slot(t7,C_fix(0));
t11=t9;
f_2128(t11,(C_word)C_i_pairp(t10));}
else{
t10=t9;
f_2128(t10,C_SCHEME_FALSE);}}
else{
t10=t9;
f_2128(t10,C_SCHEME_FALSE);}}}
else{
/* eval.scm: 261  values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}
else{
/* eval.scm: 262  values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}

/* k2126 in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_2128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2128,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 254  ##sys#check-syntax */
t4=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[92],((C_word*)t0)[6],lf[93]);}
else{
/* eval.scm: 260  expand */
t2=((C_word*)t0)[4];
f_1967(t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2132 in k2126 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_a_i_list(&a,2,lf[90],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t7=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
/* eval.scm: 256  append */
t8=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t2,t5,t6,t7);}

/* k2139 in k2132 in k2126 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 255  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k2053 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2055,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 241  ##sys#check-syntax */
t4=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[80],((C_word*)t0)[4],lf[88]);}
else{
/* eval.scm: 249  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* k2065 in k2053 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2067,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2109,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=lf[86],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* a2114 in k2065 in k2053 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2115,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k2107 in k2065 in k2053 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2109,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[81],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_list(&a,3,lf[82],t6,((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2089,a[2]=((C_word*)t0)[3],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 247  ##sys#map */
t9=*((C_word*)lf[84]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,*((C_word*)lf[85]+1),((C_word*)t0)[2]);}

/* k2087 in k2107 in k2065 in k2053 in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2089,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[83],t2);
/* eval.scm: 243  values */
C_values(4,0,((C_word*)t0)[2],t3,C_SCHEME_TRUE);}

/* expand in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1967(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1967,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t3,((C_word*)t0)[3]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_slot(t4,C_fix(1));
t7=t6;
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1987,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 222  ##sys#hash-table-ref */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[41]+1),t3);}}

/* k1985 in expand in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1987,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1995,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[78],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1995(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
/* eval.scm: 231  values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* scan in k1985 in expand in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1995,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2009,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 228  call-handler */
t4=((C_word*)t0)[6];
f_1821(t4,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 229  scan */
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}
else{
/* eval.scm: 230  ##sys#syntax-error-hook */
t3=*((C_word*)lf[76]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[77],((C_word*)t0)[3]);}}}

/* k2007 in scan in k1985 in expand in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 228  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k1979 in expand in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 221  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* call-handler in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1821,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1828,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1830,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=lf[73],tmp=(C_word)a,a+=7,tmp);
/* call-with-current-continuation */
t7=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1830,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1836,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[67],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1943,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[71],tmp=(C_word)a,a+=6,tmp);
/* with-exception-handler */
t5=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a1942 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[68],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1955,a[2]=((C_word*)t0)[2],a[3]=lf[70],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1954 in a1942 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1955r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1955r(t0,t1,t2);}}

static void C_ccall f_1955r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1961,a[2]=t2,a[3]=lf[69],tmp=(C_word)a,a+=4,tmp);
/* g3941 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1960 in a1954 in a1942 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1961,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1948 in a1942 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1949,2,t0,t1);}
/* eval.scm: 218  handler */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1836,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=lf[66],tmp=(C_word)a,a+=6,tmp);
/* g3941 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[4],lf[59]))){
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=t3;
f_1853(t5,(C_word)C_i_memv(lf[65],t4));}
else{
t4=t3;
f_1853(t4,C_SCHEME_FALSE);}}

/* k1851 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1853(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1853,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1864,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1870,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[64],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1870(t8,t3,t4);}
else{
t2=((C_word*)t0)[4];
f_1850(t2,((C_word*)t0)[5]);}}

/* copy in k1851 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1870,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_equalp(lf[63],t3))){
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_i_car(t4);
t7=t5;
f_1889(t7,(C_word)C_i_stringp(t6));}
else{
t6=t5;
f_1889(t6,C_SCHEME_FALSE);}}
else{
t6=t5;
f_1889(t6,C_SCHEME_FALSE);}}}

/* k1887 in copy in k1851 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1889(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1889,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_i_car(((C_word*)t0)[6]);
/* eval.scm: 212  string-append */
t5=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,lf[61],t3,lf[62],t4);}
else{
/* eval.scm: 216  copy */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1870(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k1898 in k1887 in copy in k1851 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1900,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[60],t3));}

/* k1862 in k1851 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1864,2,t0,t1);}
t2=((C_word*)t0)[3];
f_1850(t2,(C_word)C_a_i_record(&a,3,lf[59],((C_word*)t0)[2],t1));}

/* k1848 in a1841 in a1835 in a1829 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_fcall f_1850(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 196  ##sys#abort */
t2=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1826 in call-handler in ##sys#macroexpand-0 in k1745 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* undefine-macro! in k1745 */
static void C_ccall f_1809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1809,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[54]);
t4=t2;
/* eval.scm: 181  ##sys#hash-table-set! */
t5=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[41]+1),t4,C_SCHEME_FALSE);}

/* macro? in k1745 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1791,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[52]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1801,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 178  ##sys#hash-table-ref */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[41]+1),t2);}

/* k1799 in macro? in k1745 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* ##sys#copy-macro in k1745 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1781,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1789,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 174  ##sys#hash-table-ref */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[41]+1),t2);}

/* k1787 in ##sys#copy-macro in k1745 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 174  ##sys#hash-table-set! */
t2=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[41]+1),((C_word*)t0)[2],t1);}

/* ##sys#register-macro in k1745 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1765,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1771,a[2]=t3,a[3]=lf[47],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 169  ##sys#hash-table-set! */
t5=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[41]+1),t2,t4);}

/* a1770 in ##sys#register-macro in k1745 */
static void C_ccall f_1771(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1771,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
C_apply(4,0,t1,((C_word*)t0)[2],t3);}

/* ##sys#register-macro-2 in k1745 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1749,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=t3,a[3]=lf[43],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 163  ##sys#hash-table-set! */
t5=*((C_word*)lf[44]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[41]+1),t2,t4);}

/* a1754 in ##sys#register-macro-2 in k1745 */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1755,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 165  handler */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* chicken-home */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 148  getenv */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[39]);}

/* k1704 in chicken-home */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 149  getenv */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[38]);}}

/* k1710 in k1704 in chicken-home */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(C_word)C_block_size(t1);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(C_word)C_i_string_ref(t1,t4);
t6=(C_word)C_eqp(t5,*((C_word*)lf[3]+1));
t7=(C_truep(t6)?lf[35]:lf[36]);
/* eval.scm: 150  ##sys#string-append */
t8=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t2,t1,t7);}
else{
t3=t2;
f_1715(2,t3,C_SCHEME_FALSE);}}

/* k1713 in k1710 in k1704 in chicken-home */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1715,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[943] = {
{"topleveleval.scm",(void*)C_eval_toplevel},
{"f_1747eval.scm",(void*)f_1747},
{"f_11194eval.scm",(void*)f_11194},
{"f_11198eval.scm",(void*)f_11198},
{"f_11222eval.scm",(void*)f_11222},
{"f_11216eval.scm",(void*)f_11216},
{"f_11206eval.scm",(void*)f_11206},
{"f_11204eval.scm",(void*)f_11204},
{"f_5954eval.scm",(void*)f_5954},
{"f_6053eval.scm",(void*)f_6053},
{"f_6133eval.scm",(void*)f_6133},
{"f_11188eval.scm",(void*)f_11188},
{"f_11184eval.scm",(void*)f_11184},
{"f_11180eval.scm",(void*)f_11180},
{"f_11176eval.scm",(void*)f_11176},
{"f_11166eval.scm",(void*)f_11166},
{"f_6735eval.scm",(void*)f_6735},
{"f_11151eval.scm",(void*)f_11151},
{"f_11147eval.scm",(void*)f_11147},
{"f_11143eval.scm",(void*)f_11143},
{"f_11133eval.scm",(void*)f_11133},
{"f_6739eval.scm",(void*)f_6739},
{"f_6743eval.scm",(void*)f_6743},
{"f_11117eval.scm",(void*)f_11117},
{"f_11109eval.scm",(void*)f_11109},
{"f_11111eval.scm",(void*)f_11111},
{"f_6750eval.scm",(void*)f_6750},
{"f_11093eval.scm",(void*)f_11093},
{"f_11099eval.scm",(void*)f_11099},
{"f_11096eval.scm",(void*)f_11096},
{"f_7091eval.scm",(void*)f_7091},
{"f_11039eval.scm",(void*)f_11039},
{"f_11053eval.scm",(void*)f_11053},
{"f_11089eval.scm",(void*)f_11089},
{"f_11085eval.scm",(void*)f_11085},
{"f_11073eval.scm",(void*)f_11073},
{"f_11077eval.scm",(void*)f_11077},
{"f_11047eval.scm",(void*)f_11047},
{"f_7818eval.scm",(void*)f_7818},
{"f_10918eval.scm",(void*)f_10918},
{"f_10955eval.scm",(void*)f_10955},
{"f_10964eval.scm",(void*)f_10964},
{"f_10983eval.scm",(void*)f_10983},
{"f_10987eval.scm",(void*)f_10987},
{"f_10973eval.scm",(void*)f_10973},
{"f_10970eval.scm",(void*)f_10970},
{"f_10921eval.scm",(void*)f_10921},
{"f_7821eval.scm",(void*)f_7821},
{"f_7879eval.scm",(void*)f_7879},
{"f_10916eval.scm",(void*)f_10916},
{"f_8214eval.scm",(void*)f_8214},
{"f_8218eval.scm",(void*)f_8218},
{"f_10912eval.scm",(void*)f_10912},
{"f_8221eval.scm",(void*)f_8221},
{"f_8225eval.scm",(void*)f_8225},
{"f_10815eval.scm",(void*)f_10815},
{"f_10821eval.scm",(void*)f_10821},
{"f_10837eval.scm",(void*)f_10837},
{"f_10840eval.scm",(void*)f_10840},
{"f_10875eval.scm",(void*)f_10875},
{"f_10878eval.scm",(void*)f_10878},
{"f_10862eval.scm",(void*)f_10862},
{"f_10865eval.scm",(void*)f_10865},
{"f_10872eval.scm",(void*)f_10872},
{"f_8915eval.scm",(void*)f_8915},
{"f_10787eval.scm",(void*)f_10787},
{"f_8918eval.scm",(void*)f_8918},
{"f_10744eval.scm",(void*)f_10744},
{"f_10766eval.scm",(void*)f_10766},
{"f_8921eval.scm",(void*)f_8921},
{"f_10547eval.scm",(void*)f_10547},
{"f_10553eval.scm",(void*)f_10553},
{"f_10569eval.scm",(void*)f_10569},
{"f_10645eval.scm",(void*)f_10645},
{"f_10702eval.scm",(void*)f_10702},
{"f_10648eval.scm",(void*)f_10648},
{"f_10675eval.scm",(void*)f_10675},
{"f_10608eval.scm",(void*)f_10608},
{"f_10627eval.scm",(void*)f_10627},
{"f_10599eval.scm",(void*)f_10599},
{"f_8924eval.scm",(void*)f_8924},
{"f_10444eval.scm",(void*)f_10444},
{"f_10454eval.scm",(void*)f_10454},
{"f_10467eval.scm",(void*)f_10467},
{"f_10483eval.scm",(void*)f_10483},
{"f_10521eval.scm",(void*)f_10521},
{"f_10519eval.scm",(void*)f_10519},
{"f_10511eval.scm",(void*)f_10511},
{"f_10465eval.scm",(void*)f_10465},
{"f_8927eval.scm",(void*)f_8927},
{"f_10391eval.scm",(void*)f_10391},
{"f_10401eval.scm",(void*)f_10401},
{"f_10404eval.scm",(void*)f_10404},
{"f_10409eval.scm",(void*)f_10409},
{"f_10434eval.scm",(void*)f_10434},
{"f_8930eval.scm",(void*)f_8930},
{"f_10321eval.scm",(void*)f_10321},
{"f_10331eval.scm",(void*)f_10331},
{"f_10334eval.scm",(void*)f_10334},
{"f_10381eval.scm",(void*)f_10381},
{"f_10345eval.scm",(void*)f_10345},
{"f_10367eval.scm",(void*)f_10367},
{"f_10353eval.scm",(void*)f_10353},
{"f_10349eval.scm",(void*)f_10349},
{"f_8933eval.scm",(void*)f_8933},
{"f_10202eval.scm",(void*)f_10202},
{"f_10206eval.scm",(void*)f_10206},
{"f_10209eval.scm",(void*)f_10209},
{"f_10212eval.scm",(void*)f_10212},
{"f_10303eval.scm",(void*)f_10303},
{"f_10219eval.scm",(void*)f_10219},
{"f_10242eval.scm",(void*)f_10242},
{"f_10256eval.scm",(void*)f_10256},
{"f_10254eval.scm",(void*)f_10254},
{"f_8936eval.scm",(void*)f_8936},
{"f_9910eval.scm",(void*)f_9910},
{"f_10120eval.scm",(void*)f_10120},
{"f_10124eval.scm",(void*)f_10124},
{"f_10145eval.scm",(void*)f_10145},
{"f_10187eval.scm",(void*)f_10187},
{"f_9923eval.scm",(void*)f_9923},
{"f_10111eval.scm",(void*)f_10111},
{"f_10115eval.scm",(void*)f_10115},
{"f_10094eval.scm",(void*)f_10094},
{"f_10098eval.scm",(void*)f_10098},
{"f_10083eval.scm",(void*)f_10083},
{"f_10075eval.scm",(void*)f_10075},
{"f_10064eval.scm",(void*)f_10064},
{"f_10030eval.scm",(void*)f_10030},
{"f_10011eval.scm",(void*)f_10011},
{"f_9984eval.scm",(void*)f_9984},
{"f_9941eval.scm",(void*)f_9941},
{"f_9937eval.scm",(void*)f_9937},
{"f_9913eval.scm",(void*)f_9913},
{"f_9921eval.scm",(void*)f_9921},
{"f_8939eval.scm",(void*)f_8939},
{"f_9900eval.scm",(void*)f_9900},
{"f_8942eval.scm",(void*)f_8942},
{"f_8946eval.scm",(void*)f_8946},
{"f_9897eval.scm",(void*)f_9897},
{"f_8953eval.scm",(void*)f_8953},
{"f_9330eval.scm",(void*)f_9330},
{"f_9755eval.scm",(void*)f_9755},
{"f_9873eval.scm",(void*)f_9873},
{"f_9876eval.scm",(void*)f_9876},
{"f_9863eval.scm",(void*)f_9863},
{"f_9758eval.scm",(void*)f_9758},
{"f_9762eval.scm",(void*)f_9762},
{"f_9773eval.scm",(void*)f_9773},
{"f_9416eval.scm",(void*)f_9416},
{"f_9736eval.scm",(void*)f_9736},
{"f_9740eval.scm",(void*)f_9740},
{"f_9749eval.scm",(void*)f_9749},
{"f_9747eval.scm",(void*)f_9747},
{"f_9419eval.scm",(void*)f_9419},
{"f_9730eval.scm",(void*)f_9730},
{"f_9422eval.scm",(void*)f_9422},
{"f_9724eval.scm",(void*)f_9724},
{"f_9425eval.scm",(void*)f_9425},
{"f_9715eval.scm",(void*)f_9715},
{"f_9722eval.scm",(void*)f_9722},
{"f_9705eval.scm",(void*)f_9705},
{"f_9690eval.scm",(void*)f_9690},
{"f_9694eval.scm",(void*)f_9694},
{"f_9699eval.scm",(void*)f_9699},
{"f_9703eval.scm",(void*)f_9703},
{"f_9668eval.scm",(void*)f_9668},
{"f_9672eval.scm",(void*)f_9672},
{"f_9677eval.scm",(void*)f_9677},
{"f_9681eval.scm",(void*)f_9681},
{"f_9688eval.scm",(void*)f_9688},
{"f_9642eval.scm",(void*)f_9642},
{"f_9648eval.scm",(void*)f_9648},
{"f_9652eval.scm",(void*)f_9652},
{"f_9666eval.scm",(void*)f_9666},
{"f_9655eval.scm",(void*)f_9655},
{"f_9662eval.scm",(void*)f_9662},
{"f_9626eval.scm",(void*)f_9626},
{"f_9632eval.scm",(void*)f_9632},
{"f_9640eval.scm",(void*)f_9640},
{"f_9589eval.scm",(void*)f_9589},
{"f_9593eval.scm",(void*)f_9593},
{"f_9598eval.scm",(void*)f_9598},
{"f_9602eval.scm",(void*)f_9602},
{"f_9624eval.scm",(void*)f_9624},
{"f_9620eval.scm",(void*)f_9620},
{"f_9616eval.scm",(void*)f_9616},
{"f_9605eval.scm",(void*)f_9605},
{"f_9612eval.scm",(void*)f_9612},
{"f_9563eval.scm",(void*)f_9563},
{"f_9569eval.scm",(void*)f_9569},
{"f_9573eval.scm",(void*)f_9573},
{"f_9587eval.scm",(void*)f_9587},
{"f_9576eval.scm",(void*)f_9576},
{"f_9583eval.scm",(void*)f_9583},
{"f_9550eval.scm",(void*)f_9550},
{"f_9524eval.scm",(void*)f_9524},
{"f_9528eval.scm",(void*)f_9528},
{"f_9533eval.scm",(void*)f_9533},
{"f_9537eval.scm",(void*)f_9537},
{"f_9548eval.scm",(void*)f_9548},
{"f_9544eval.scm",(void*)f_9544},
{"f_9508eval.scm",(void*)f_9508},
{"f_9514eval.scm",(void*)f_9514},
{"f_9522eval.scm",(void*)f_9522},
{"f_9496eval.scm",(void*)f_9496},
{"f_9502eval.scm",(void*)f_9502},
{"f_9506eval.scm",(void*)f_9506},
{"f_9487eval.scm",(void*)f_9487},
{"f_9491eval.scm",(void*)f_9491},
{"f_9428eval.scm",(void*)f_9428},
{"f_9438eval.scm",(void*)f_9438},
{"f_9463eval.scm",(void*)f_9463},
{"f_9475eval.scm",(void*)f_9475},
{"f_9481eval.scm",(void*)f_9481},
{"f_9469eval.scm",(void*)f_9469},
{"f_9444eval.scm",(void*)f_9444},
{"f_9450eval.scm",(void*)f_9450},
{"f_9454eval.scm",(void*)f_9454},
{"f_9457eval.scm",(void*)f_9457},
{"f_9461eval.scm",(void*)f_9461},
{"f_9436eval.scm",(void*)f_9436},
{"f_9341eval.scm",(void*)f_9341},
{"f_9351eval.scm",(void*)f_9351},
{"f_9354eval.scm",(void*)f_9354},
{"f_9368eval.scm",(void*)f_9368},
{"f_9386eval.scm",(void*)f_9386},
{"f_9355eval.scm",(void*)f_9355},
{"f_9332eval.scm",(void*)f_9332},
{"f_8974eval.scm",(void*)f_8974},
{"f_9033eval.scm",(void*)f_9033},
{"f_9036eval.scm",(void*)f_9036},
{"f_9315eval.scm",(void*)f_9315},
{"f_9319eval.scm",(void*)f_9319},
{"f_9323eval.scm",(void*)f_9323},
{"f_9118eval.scm",(void*)f_9118},
{"f_9124eval.scm",(void*)f_9124},
{"f_9296eval.scm",(void*)f_9296},
{"f_9302eval.scm",(void*)f_9302},
{"f_9131eval.scm",(void*)f_9131},
{"f_9134eval.scm",(void*)f_9134},
{"f_9137eval.scm",(void*)f_9137},
{"f_9291eval.scm",(void*)f_9291},
{"f_9146eval.scm",(void*)f_9146},
{"f_9149eval.scm",(void*)f_9149},
{"f_9164eval.scm",(void*)f_9164},
{"f_9182eval.scm",(void*)f_9182},
{"f_9278eval.scm",(void*)f_9278},
{"f_9274eval.scm",(void*)f_9274},
{"f_9245eval.scm",(void*)f_9245},
{"f_9198eval.scm",(void*)f_9198},
{"f_9203eval.scm",(void*)f_9203},
{"f_9207eval.scm",(void*)f_9207},
{"f_9210eval.scm",(void*)f_9210},
{"f_9222eval.scm",(void*)f_9222},
{"f_9225eval.scm",(void*)f_9225},
{"f_9213eval.scm",(void*)f_9213},
{"f_9186eval.scm",(void*)f_9186},
{"f_9168eval.scm",(void*)f_9168},
{"f_9171eval.scm",(void*)f_9171},
{"f_9155eval.scm",(void*)f_9155},
{"f_9053eval.scm",(void*)f_9053},
{"f_9058eval.scm",(void*)f_9058},
{"f_9061eval.scm",(void*)f_9061},
{"f_9066eval.scm",(void*)f_9066},
{"f_9073eval.scm",(void*)f_9073},
{"f_9113eval.scm",(void*)f_9113},
{"f_9076eval.scm",(void*)f_9076},
{"f_9088eval.scm",(void*)f_9088},
{"f_9097eval.scm",(void*)f_9097},
{"f_9091eval.scm",(void*)f_9091},
{"f_9079eval.scm",(void*)f_9079},
{"f_9082eval.scm",(void*)f_9082},
{"f_9044eval.scm",(void*)f_9044},
{"f_9038eval.scm",(void*)f_9038},
{"f_9004eval.scm",(void*)f_9004},
{"f_9014eval.scm",(void*)f_9014},
{"f_9019eval.scm",(void*)f_9019},
{"f_8992eval.scm",(void*)f_8992},
{"f_8998eval.scm",(void*)f_8998},
{"f_8977eval.scm",(void*)f_8977},
{"f_8986eval.scm",(void*)f_8986},
{"f_8981eval.scm",(void*)f_8981},
{"f_8971eval.scm",(void*)f_8971},
{"f_8955eval.scm",(void*)f_8955},
{"f_8969eval.scm",(void*)f_8969},
{"f_8966eval.scm",(void*)f_8966},
{"f_8959eval.scm",(void*)f_8959},
{"f_8523eval.scm",(void*)f_8523},
{"f_8660eval.scm",(void*)f_8660},
{"f_8665eval.scm",(void*)f_8665},
{"f_8883eval.scm",(void*)f_8883},
{"f_8864eval.scm",(void*)f_8864},
{"f_8810eval.scm",(void*)f_8810},
{"f_8681eval.scm",(void*)f_8681},
{"f_8686eval.scm",(void*)f_8686},
{"f_8705eval.scm",(void*)f_8705},
{"f_8631eval.scm",(void*)f_8631},
{"f_8637eval.scm",(void*)f_8637},
{"f_8569eval.scm",(void*)f_8569},
{"f_8573eval.scm",(void*)f_8573},
{"f_8581eval.scm",(void*)f_8581},
{"f_8604eval.scm",(void*)f_8604},
{"f_8526eval.scm",(void*)f_8526},
{"f_8533eval.scm",(void*)f_8533},
{"f_8538eval.scm",(void*)f_8538},
{"f_8542eval.scm",(void*)f_8542},
{"f_8567eval.scm",(void*)f_8567},
{"f_8556eval.scm",(void*)f_8556},
{"f_8560eval.scm",(void*)f_8560},
{"f_8549eval.scm",(void*)f_8549},
{"f_8487eval.scm",(void*)f_8487},
{"f_8509eval.scm",(void*)f_8509},
{"f_8479eval.scm",(void*)f_8479},
{"f_8425eval.scm",(void*)f_8425},
{"f_8429eval.scm",(void*)f_8429},
{"f_8432eval.scm",(void*)f_8432},
{"f_8435eval.scm",(void*)f_8435},
{"f_8438eval.scm",(void*)f_8438},
{"f_8441eval.scm",(void*)f_8441},
{"f_8444eval.scm",(void*)f_8444},
{"f_8447eval.scm",(void*)f_8447},
{"f_8450eval.scm",(void*)f_8450},
{"f_8453eval.scm",(void*)f_8453},
{"f_8404eval.scm",(void*)f_8404},
{"f_8408eval.scm",(void*)f_8408},
{"f_8411eval.scm",(void*)f_8411},
{"f_8380eval.scm",(void*)f_8380},
{"f_8386eval.scm",(void*)f_8386},
{"f_8396eval.scm",(void*)f_8396},
{"f_8250eval.scm",(void*)f_8250},
{"f_8254eval.scm",(void*)f_8254},
{"f_8308eval.scm",(void*)f_8308},
{"f_8359eval.scm",(void*)f_8359},
{"f_8318eval.scm",(void*)f_8318},
{"f_8320eval.scm",(void*)f_8320},
{"f_8344eval.scm",(void*)f_8344},
{"f_8330eval.scm",(void*)f_8330},
{"f_8291eval.scm",(void*)f_8291},
{"f_8256eval.scm",(void*)f_8256},
{"f_8272eval.scm",(void*)f_8272},
{"f_8278eval.scm",(void*)f_8278},
{"f_8269eval.scm",(void*)f_8269},
{"f_8231eval.scm",(void*)f_8231},
{"f_8235eval.scm",(void*)f_8235},
{"f_8198eval.scm",(void*)f_8198},
{"f_8200eval.scm",(void*)f_8200},
{"f_8204eval.scm",(void*)f_8204},
{"f_8160eval.scm",(void*)f_8160},
{"f_8167eval.scm",(void*)f_8167},
{"f_8174eval.scm",(void*)f_8174},
{"f_8116eval.scm",(void*)f_8116},
{"f_8149eval.scm",(void*)f_8149},
{"f_8136eval.scm",(void*)f_8136},
{"f_8113eval.scm",(void*)f_8113},
{"f_7994eval.scm",(void*)f_7994},
{"f_8088eval.scm",(void*)f_8088},
{"f_8098eval.scm",(void*)f_8098},
{"f_8086eval.scm",(void*)f_8086},
{"f_8015eval.scm",(void*)f_8015},
{"f_8039eval.scm",(void*)f_8039},
{"f_8058eval.scm",(void*)f_8058},
{"f_8033eval.scm",(void*)f_8033},
{"f_7886eval.scm",(void*)f_7886},
{"f_7896eval.scm",(void*)f_7896},
{"f_7901eval.scm",(void*)f_7901},
{"f_7928eval.scm",(void*)f_7928},
{"f_7961eval.scm",(void*)f_7961},
{"f_7922eval.scm",(void*)f_7922},
{"f_7823eval.scm",(void*)f_7823},
{"f_7827eval.scm",(void*)f_7827},
{"f_7835eval.scm",(void*)f_7835},
{"f_7855eval.scm",(void*)f_7855},
{"f_7779eval.scm",(void*)f_7779},
{"f_7811eval.scm",(void*)f_7811},
{"f_7797eval.scm",(void*)f_7797},
{"f_7380eval.scm",(void*)f_7380},
{"f_7655eval.scm",(void*)f_7655},
{"f_7664eval.scm",(void*)f_7664},
{"f_7690eval.scm",(void*)f_7690},
{"f_7692eval.scm",(void*)f_7692},
{"f_7725eval.scm",(void*)f_7725},
{"f_7715eval.scm",(void*)f_7715},
{"f_7710eval.scm",(void*)f_7710},
{"f_7404eval.scm",(void*)f_7404},
{"f_7414eval.scm",(void*)f_7414},
{"f_7548eval.scm",(void*)f_7548},
{"f_7629eval.scm",(void*)f_7629},
{"f_7560eval.scm",(void*)f_7560},
{"f_7575eval.scm",(void*)f_7575},
{"f_7595eval.scm",(void*)f_7595},
{"f_7593eval.scm",(void*)f_7593},
{"f_7579eval.scm",(void*)f_7579},
{"f_7571eval.scm",(void*)f_7571},
{"f_7490eval.scm",(void*)f_7490},
{"f_7508eval.scm",(void*)f_7508},
{"f_7516eval.scm",(void*)f_7516},
{"f_7504eval.scm",(void*)f_7504},
{"f_7463eval.scm",(void*)f_7463},
{"f_7426eval.scm",(void*)f_7426},
{"f_7450eval.scm",(void*)f_7450},
{"f_7446eval.scm",(void*)f_7446},
{"f_7438eval.scm",(void*)f_7438},
{"f_7429eval.scm",(void*)f_7429},
{"f_7383eval.scm",(void*)f_7383},
{"f_7398eval.scm",(void*)f_7398},
{"f_7392eval.scm",(void*)f_7392},
{"f_7331eval.scm",(void*)f_7331},
{"f_7337eval.scm",(void*)f_7337},
{"f_7351eval.scm",(void*)f_7351},
{"f_7354eval.scm",(void*)f_7354},
{"f_7361eval.scm",(void*)f_7361},
{"f_7324eval.scm",(void*)f_7324},
{"f_7293eval.scm",(void*)f_7293},
{"f_7297eval.scm",(void*)f_7297},
{"f_7322eval.scm",(void*)f_7322},
{"f_7300eval.scm",(void*)f_7300},
{"f_7318eval.scm",(void*)f_7318},
{"f_7303eval.scm",(void*)f_7303},
{"f_7310eval.scm",(void*)f_7310},
{"f_7280eval.scm",(void*)f_7280},
{"f_7286eval.scm",(void*)f_7286},
{"f_7266eval.scm",(void*)f_7266},
{"f_7277eval.scm",(void*)f_7277},
{"f_7246eval.scm",(void*)f_7246},
{"f_7252eval.scm",(void*)f_7252},
{"f_7259eval.scm",(void*)f_7259},
{"f_7171eval.scm",(void*)f_7171},
{"f_7241eval.scm",(void*)f_7241},
{"f_7175eval.scm",(void*)f_7175},
{"f_7178eval.scm",(void*)f_7178},
{"f_7196eval.scm",(void*)f_7196},
{"f_7212eval.scm",(void*)f_7212},
{"f_7202eval.scm",(void*)f_7202},
{"f_7094eval.scm",(void*)f_7094},
{"f_7168eval.scm",(void*)f_7168},
{"f_7161eval.scm",(void*)f_7161},
{"f_7128eval.scm",(void*)f_7128},
{"f_7130eval.scm",(void*)f_7130},
{"f_7143eval.scm",(void*)f_7143},
{"f_7097eval.scm",(void*)f_7097},
{"f_7101eval.scm",(void*)f_7101},
{"f_7121eval.scm",(void*)f_7121},
{"f_7107eval.scm",(void*)f_7107},
{"f_7117eval.scm",(void*)f_7117},
{"f_7110eval.scm",(void*)f_7110},
{"f_6943eval.scm",(void*)f_6943},
{"f_7036eval.scm",(void*)f_7036},
{"f_7053eval.scm",(void*)f_7053},
{"f_7061eval.scm",(void*)f_7061},
{"f_6953eval.scm",(void*)f_6953},
{"f_6958eval.scm",(void*)f_6958},
{"f_6997eval.scm",(void*)f_6997},
{"f_6984eval.scm",(void*)f_6984},
{"f_6946eval.scm",(void*)f_6946},
{"f_6887eval.scm",(void*)f_6887},
{"f_6896eval.scm",(void*)f_6896},
{"f_6934eval.scm",(void*)f_6934},
{"f_6914eval.scm",(void*)f_6914},
{"f_6858eval.scm",(void*)f_6858},
{"f_6865eval.scm",(void*)f_6865},
{"f_6875eval.scm",(void*)f_6875},
{"f_6752eval.scm",(void*)f_6752},
{"f_6756eval.scm",(void*)f_6756},
{"f_6848eval.scm",(void*)f_6848},
{"f_6852eval.scm",(void*)f_6852},
{"f_6765eval.scm",(void*)f_6765},
{"f_6834eval.scm",(void*)f_6834},
{"f_6830eval.scm",(void*)f_6830},
{"f_6768eval.scm",(void*)f_6768},
{"f_6817eval.scm",(void*)f_6817},
{"f_6820eval.scm",(void*)f_6820},
{"f_6823eval.scm",(void*)f_6823},
{"f_6771eval.scm",(void*)f_6771},
{"f_6776eval.scm",(void*)f_6776},
{"f_6810eval.scm",(void*)f_6810},
{"f_6789eval.scm",(void*)f_6789},
{"f_6792eval.scm",(void*)f_6792},
{"f_6687eval.scm",(void*)f_6687},
{"f_6730eval.scm",(void*)f_6730},
{"f_6691eval.scm",(void*)f_6691},
{"f_6727eval.scm",(void*)f_6727},
{"f_6694eval.scm",(void*)f_6694},
{"f_6724eval.scm",(void*)f_6724},
{"f_6697eval.scm",(void*)f_6697},
{"f_6716eval.scm",(void*)f_6716},
{"f_6710eval.scm",(void*)f_6710},
{"f_6702eval.scm",(void*)f_6702},
{"f_6622eval.scm",(void*)f_6622},
{"f_6679eval.scm",(void*)f_6679},
{"f_6636eval.scm",(void*)f_6636},
{"f_6644eval.scm",(void*)f_6644},
{"f_6648eval.scm",(void*)f_6648},
{"f_6628eval.scm",(void*)f_6628},
{"f_6571eval.scm",(void*)f_6571},
{"f_6614eval.scm",(void*)f_6614},
{"f_6585eval.scm",(void*)f_6585},
{"f_6593eval.scm",(void*)f_6593},
{"f_6577eval.scm",(void*)f_6577},
{"f_6181eval.scm",(void*)f_6181},
{"f_6523eval.scm",(void*)f_6523},
{"f_6518eval.scm",(void*)f_6518},
{"f_6183eval.scm",(void*)f_6183},
{"f_6517eval.scm",(void*)f_6517},
{"f_6187eval.scm",(void*)f_6187},
{"f_6451eval.scm",(void*)f_6451},
{"f_6466eval.scm",(void*)f_6466},
{"f_6469eval.scm",(void*)f_6469},
{"f_6472eval.scm",(void*)f_6472},
{"f_6478eval.scm",(void*)f_6478},
{"f_6481eval.scm",(void*)f_6481},
{"f_6487eval.scm",(void*)f_6487},
{"f_6190eval.scm",(void*)f_6190},
{"f_6442eval.scm",(void*)f_6442},
{"f_6433eval.scm",(void*)f_6433},
{"f_6436eval.scm",(void*)f_6436},
{"f_6196eval.scm",(void*)f_6196},
{"f_6418eval.scm",(void*)f_6418},
{"f_6390eval.scm",(void*)f_6390},
{"f_6414eval.scm",(void*)f_6414},
{"f_6410eval.scm",(void*)f_6410},
{"f_6406eval.scm",(void*)f_6406},
{"f_6199eval.scm",(void*)f_6199},
{"f_6207eval.scm",(void*)f_6207},
{"f_6377eval.scm",(void*)f_6377},
{"f_6211eval.scm",(void*)f_6211},
{"f_6362eval.scm",(void*)f_6362},
{"f_6235eval.scm",(void*)f_6235},
{"f_6239eval.scm",(void*)f_6239},
{"f_6353eval.scm",(void*)f_6353},
{"f_6247eval.scm",(void*)f_6247},
{"f_6251eval.scm",(void*)f_6251},
{"f_6347eval.scm",(void*)f_6347},
{"f_6254eval.scm",(void*)f_6254},
{"f_6257eval.scm",(void*)f_6257},
{"f_6262eval.scm",(void*)f_6262},
{"f_6272eval.scm",(void*)f_6272},
{"f_6318eval.scm",(void*)f_6318},
{"f_6327eval.scm",(void*)f_6327},
{"f_6331eval.scm",(void*)f_6331},
{"f_6284eval.scm",(void*)f_6284},
{"f_6291eval.scm",(void*)f_6291},
{"f_6302eval.scm",(void*)f_6302},
{"f_6313eval.scm",(void*)f_6313},
{"f_6306eval.scm",(void*)f_6306},
{"f_6296eval.scm",(void*)f_6296},
{"f_6275eval.scm",(void*)f_6275},
{"f_6282eval.scm",(void*)f_6282},
{"f_6244eval.scm",(void*)f_6244},
{"f_6221eval.scm",(void*)f_6221},
{"f_6212eval.scm",(void*)f_6212},
{"f_6202eval.scm",(void*)f_6202},
{"f_6135eval.scm",(void*)f_6135},
{"f_6145eval.scm",(void*)f_6145},
{"f_6060eval.scm",(void*)f_6060},
{"f_6072eval.scm",(void*)f_6072},
{"f_6085eval.scm",(void*)f_6085},
{"f_6067eval.scm",(void*)f_6067},
{"f_6055eval.scm",(void*)f_6055},
{"f_5971eval.scm",(void*)f_5971},
{"f_5984eval.scm",(void*)f_5984},
{"f_6017eval.scm",(void*)f_6017},
{"f_5998eval.scm",(void*)f_5998},
{"f_5974eval.scm",(void*)f_5974},
{"f_5957eval.scm",(void*)f_5957},
{"f_5965eval.scm",(void*)f_5965},
{"f_5969eval.scm",(void*)f_5969},
{"f_3717eval.scm",(void*)f_3717},
{"f_5931eval.scm",(void*)f_5931},
{"f_5695eval.scm",(void*)f_5695},
{"f_5699eval.scm",(void*)f_5699},
{"f_5912eval.scm",(void*)f_5912},
{"f_5888eval.scm",(void*)f_5888},
{"f_5889eval.scm",(void*)f_5889},
{"f_5900eval.scm",(void*)f_5900},
{"f_5906eval.scm",(void*)f_5906},
{"f_5904eval.scm",(void*)f_5904},
{"f_5845eval.scm",(void*)f_5845},
{"f_5848eval.scm",(void*)f_5848},
{"f_5851eval.scm",(void*)f_5851},
{"f_5854eval.scm",(void*)f_5854},
{"f_5855eval.scm",(void*)f_5855},
{"f_5866eval.scm",(void*)f_5866},
{"f_5870eval.scm",(void*)f_5870},
{"f_5874eval.scm",(void*)f_5874},
{"f_5878eval.scm",(void*)f_5878},
{"f_5881eval.scm",(void*)f_5881},
{"f_5803eval.scm",(void*)f_5803},
{"f_5806eval.scm",(void*)f_5806},
{"f_5809eval.scm",(void*)f_5809},
{"f_5810eval.scm",(void*)f_5810},
{"f_5821eval.scm",(void*)f_5821},
{"f_5825eval.scm",(void*)f_5825},
{"f_5829eval.scm",(void*)f_5829},
{"f_5832eval.scm",(void*)f_5832},
{"f_5768eval.scm",(void*)f_5768},
{"f_5771eval.scm",(void*)f_5771},
{"f_5772eval.scm",(void*)f_5772},
{"f_5783eval.scm",(void*)f_5783},
{"f_5787eval.scm",(void*)f_5787},
{"f_5790eval.scm",(void*)f_5790},
{"f_5740eval.scm",(void*)f_5740},
{"f_5741eval.scm",(void*)f_5741},
{"f_5752eval.scm",(void*)f_5752},
{"f_5755eval.scm",(void*)f_5755},
{"f_5721eval.scm",(void*)f_5721},
{"f_5731eval.scm",(void*)f_5731},
{"f_5669eval.scm",(void*)f_5669},
{"f_3945eval.scm",(void*)f_3945},
{"f_4045eval.scm",(void*)f_4045},
{"f_4101eval.scm",(void*)f_4101},
{"f_4130eval.scm",(void*)f_4130},
{"f_4136eval.scm",(void*)f_4136},
{"f_5502eval.scm",(void*)f_5502},
{"f_5489eval.scm",(void*)f_5489},
{"f_5450eval.scm",(void*)f_5450},
{"f_5439eval.scm",(void*)f_5439},
{"f_5401eval.scm",(void*)f_5401},
{"f_5395eval.scm",(void*)f_5395},
{"f_5349eval.scm",(void*)f_5349},
{"f_5371eval.scm",(void*)f_5371},
{"f_5379eval.scm",(void*)f_5379},
{"f_5361eval.scm",(void*)f_5361},
{"f_5369eval.scm",(void*)f_5369},
{"f_5343eval.scm",(void*)f_5343},
{"f_5319eval.scm",(void*)f_5319},
{"f_5326eval.scm",(void*)f_5326},
{"f_5288eval.scm",(void*)f_5288},
{"f_5291eval.scm",(void*)f_5291},
{"f_5294eval.scm",(void*)f_5294},
{"f_5313eval.scm",(void*)f_5313},
{"f_5311eval.scm",(void*)f_5311},
{"f_5301eval.scm",(void*)f_5301},
{"f_4886eval.scm",(void*)f_4886},
{"f_5223eval.scm",(void*)f_5223},
{"f_5234eval.scm",(void*)f_5234},
{"f_5228eval.scm",(void*)f_5228},
{"f_4898eval.scm",(void*)f_4898},
{"f_4903eval.scm",(void*)f_4903},
{"f_5212eval.scm",(void*)f_5212},
{"f_5206eval.scm",(void*)f_5206},
{"f_4910eval.scm",(void*)f_4910},
{"f_5168eval.scm",(void*)f_5168},
{"f_5174eval.scm",(void*)f_5174},
{"f_5198eval.scm",(void*)f_5198},
{"f_5145eval.scm",(void*)f_5145},
{"f_5151eval.scm",(void*)f_5151},
{"f_5636eval.scm",(void*)f_5636},
{"f_5167eval.scm",(void*)f_5167},
{"f_5163eval.scm",(void*)f_5163},
{"f_5123eval.scm",(void*)f_5123},
{"f_5129eval.scm",(void*)f_5129},
{"f_5141eval.scm",(void*)f_5141},
{"f_5104eval.scm",(void*)f_5104},
{"f_5110eval.scm",(void*)f_5110},
{"f_5076eval.scm",(void*)f_5076},
{"f_5082eval.scm",(void*)f_5082},
{"f_5057eval.scm",(void*)f_5057},
{"f_5063eval.scm",(void*)f_5063},
{"f_5029eval.scm",(void*)f_5029},
{"f_5035eval.scm",(void*)f_5035},
{"f_5010eval.scm",(void*)f_5010},
{"f_5016eval.scm",(void*)f_5016},
{"f_4982eval.scm",(void*)f_4982},
{"f_4988eval.scm",(void*)f_4988},
{"f_4963eval.scm",(void*)f_4963},
{"f_4969eval.scm",(void*)f_4969},
{"f_4939eval.scm",(void*)f_4939},
{"f_4945eval.scm",(void*)f_4945},
{"f_4920eval.scm",(void*)f_4920},
{"f_4926eval.scm",(void*)f_4926},
{"f_4548eval.scm",(void*)f_4548},
{"f_4873eval.scm",(void*)f_4873},
{"f_4557eval.scm",(void*)f_4557},
{"f_4867eval.scm",(void*)f_4867},
{"f_4861eval.scm",(void*)f_4861},
{"f_4563eval.scm",(void*)f_4563},
{"f_4845eval.scm",(void*)f_4845},
{"f_4798eval.scm",(void*)f_4798},
{"f_4799eval.scm",(void*)f_4799},
{"f_4803eval.scm",(void*)f_4803},
{"f_4815eval.scm",(void*)f_4815},
{"f_4840eval.scm",(void*)f_4840},
{"f_4806eval.scm",(void*)f_4806},
{"f_4791eval.scm",(void*)f_4791},
{"f_4722eval.scm",(void*)f_4722},
{"f_4783eval.scm",(void*)f_4783},
{"f_4725eval.scm",(void*)f_4725},
{"f_4775eval.scm",(void*)f_4775},
{"f_4731eval.scm",(void*)f_4731},
{"f_4767eval.scm",(void*)f_4767},
{"f_4734eval.scm",(void*)f_4734},
{"f_4735eval.scm",(void*)f_4735},
{"f_4751eval.scm",(void*)f_4751},
{"f_4755eval.scm",(void*)f_4755},
{"f_4759eval.scm",(void*)f_4759},
{"f_4763eval.scm",(void*)f_4763},
{"f_4709eval.scm",(void*)f_4709},
{"f_4655eval.scm",(void*)f_4655},
{"f_4701eval.scm",(void*)f_4701},
{"f_4658eval.scm",(void*)f_4658},
{"f_4693eval.scm",(void*)f_4693},
{"f_4664eval.scm",(void*)f_4664},
{"f_4665eval.scm",(void*)f_4665},
{"f_4681eval.scm",(void*)f_4681},
{"f_4685eval.scm",(void*)f_4685},
{"f_4689eval.scm",(void*)f_4689},
{"f_4642eval.scm",(void*)f_4642},
{"f_4606eval.scm",(void*)f_4606},
{"f_4634eval.scm",(void*)f_4634},
{"f_4609eval.scm",(void*)f_4609},
{"f_4610eval.scm",(void*)f_4610},
{"f_4626eval.scm",(void*)f_4626},
{"f_4630eval.scm",(void*)f_4630},
{"f_4593eval.scm",(void*)f_4593},
{"f_4572eval.scm",(void*)f_4572},
{"f_4573eval.scm",(void*)f_4573},
{"f_4589eval.scm",(void*)f_4589},
{"f_4442eval.scm",(void*)f_4442},
{"f_4456eval.scm",(void*)f_4456},
{"f_4460eval.scm",(void*)f_4460},
{"f_4499eval.scm",(void*)f_4499},
{"f_4507eval.scm",(void*)f_4507},
{"f_4472eval.scm",(void*)f_4472},
{"f_4475eval.scm",(void*)f_4475},
{"f_4491eval.scm",(void*)f_4491},
{"f_4482eval.scm",(void*)f_4482},
{"f_4490eval.scm",(void*)f_4490},
{"f_4527eval.scm",(void*)f_4527},
{"f_4535eval.scm",(void*)f_4535},
{"f_4514eval.scm",(void*)f_4514},
{"f_4526eval.scm",(void*)f_4526},
{"f_4450eval.scm",(void*)f_4450},
{"f_4334eval.scm",(void*)f_4334},
{"f_4393eval.scm",(void*)f_4393},
{"f_4396eval.scm",(void*)f_4396},
{"f_4399eval.scm",(void*)f_4399},
{"f_4400eval.scm",(void*)f_4400},
{"f_4404eval.scm",(void*)f_4404},
{"f_4407eval.scm",(void*)f_4407},
{"f_4371eval.scm",(void*)f_4371},
{"f_4374eval.scm",(void*)f_4374},
{"f_4375eval.scm",(void*)f_4375},
{"f_4379eval.scm",(void*)f_4379},
{"f_4277eval.scm",(void*)f_4277},
{"f_4280eval.scm",(void*)f_4280},
{"f_4283eval.scm",(void*)f_4283},
{"f_4286eval.scm",(void*)f_4286},
{"f_4287eval.scm",(void*)f_4287},
{"f_4294eval.scm",(void*)f_4294},
{"f_4267eval.scm",(void*)f_4267},
{"f_4233eval.scm",(void*)f_4233},
{"f_4227eval.scm",(void*)f_4227},
{"f_4228eval.scm",(void*)f_4228},
{"f_4151eval.scm",(void*)f_4151},
{"f_4211eval.scm",(void*)f_4211},
{"f_4209eval.scm",(void*)f_4209},
{"f_4201eval.scm",(void*)f_4201},
{"f_4193eval.scm",(void*)f_4193},
{"f_4185eval.scm",(void*)f_4185},
{"f_4177eval.scm",(void*)f_4177},
{"f_4169eval.scm",(void*)f_4169},
{"f_4161eval.scm",(void*)f_4161},
{"f_4102eval.scm",(void*)f_4102},
{"f_4091eval.scm",(void*)f_4091},
{"f_4089eval.scm",(void*)f_4089},
{"f_4078eval.scm",(void*)f_4078},
{"f_4076eval.scm",(void*)f_4076},
{"f_4068eval.scm",(void*)f_4068},
{"f_4060eval.scm",(void*)f_4060},
{"f_4052eval.scm",(void*)f_4052},
{"f_3963eval.scm",(void*)f_3963},
{"f_4019eval.scm",(void*)f_4019},
{"f_4004eval.scm",(void*)f_4004},
{"f_3999eval.scm",(void*)f_3999},
{"f_4000eval.scm",(void*)f_4000},
{"f_3976eval.scm",(void*)f_3976},
{"f_3979eval.scm",(void*)f_3979},
{"f_3980eval.scm",(void*)f_3980},
{"f_4035eval.scm",(void*)f_4035},
{"f_4026eval.scm",(void*)f_4026},
{"f_3957eval.scm",(void*)f_3957},
{"f_3939eval.scm",(void*)f_3939},
{"f_3933eval.scm",(void*)f_3933},
{"f_3927eval.scm",(void*)f_3927},
{"f_3874eval.scm",(void*)f_3874},
{"f_3878eval.scm",(void*)f_3878},
{"f_3925eval.scm",(void*)f_3925},
{"f_3893eval.scm",(void*)f_3893},
{"f_3902eval.scm",(void*)f_3902},
{"f_3762eval.scm",(void*)f_3762},
{"f_3774eval.scm",(void*)f_3774},
{"f_3768eval.scm",(void*)f_3768},
{"f_3720eval.scm",(void*)f_3720},
{"f_3726eval.scm",(void*)f_3726},
{"f_3844eval.scm",(void*)f_3844},
{"f_3673eval.scm",(void*)f_3673},
{"f_3692eval.scm",(void*)f_3692},
{"f_3704eval.scm",(void*)f_3704},
{"f_3707eval.scm",(void*)f_3707},
{"f_3710eval.scm",(void*)f_3710},
{"f_3700eval.scm",(void*)f_3700},
{"f_3679eval.scm",(void*)f_3679},
{"f_3613eval.scm",(void*)f_3613},
{"f_3617eval.scm",(void*)f_3617},
{"f_3625eval.scm",(void*)f_3625},
{"f_3567eval.scm",(void*)f_3567},
{"f_3573eval.scm",(void*)f_3573},
{"f_3592eval.scm",(void*)f_3592},
{"f_3583eval.scm",(void*)f_3583},
{"f_3512eval.scm",(void*)f_3512},
{"f_3516eval.scm",(void*)f_3516},
{"f_3524eval.scm",(void*)f_3524},
{"f_3467eval.scm",(void*)f_3467},
{"f_3471eval.scm",(void*)f_3471},
{"f_3480eval.scm",(void*)f_3480},
{"f_3452eval.scm",(void*)f_3452},
{"f_3392eval.scm",(void*)f_3392},
{"f_3447eval.scm",(void*)f_3447},
{"f_3395eval.scm",(void*)f_3395},
{"f_3301eval.scm",(void*)f_3301},
{"f_3390eval.scm",(void*)f_3390},
{"f_3304eval.scm",(void*)f_3304},
{"f_3359eval.scm",(void*)f_3359},
{"f_2815eval.scm",(void*)f_2815},
{"f_3253eval.scm",(void*)f_3253},
{"f_3248eval.scm",(void*)f_3248},
{"f_2817eval.scm",(void*)f_2817},
{"f_3000eval.scm",(void*)f_3000},
{"f_3006eval.scm",(void*)f_3006},
{"f_3040eval.scm",(void*)f_3040},
{"f_3212eval.scm",(void*)f_3212},
{"f_3198eval.scm",(void*)f_3198},
{"f_3205eval.scm",(void*)f_3205},
{"f_3170eval.scm",(void*)f_3170},
{"f_3052eval.scm",(void*)f_3052},
{"f_3057eval.scm",(void*)f_3057},
{"f_3070eval.scm",(void*)f_3070},
{"f_3122eval.scm",(void*)f_3122},
{"f_3104eval.scm",(void*)f_3104},
{"f_3115eval.scm",(void*)f_3115},
{"f_2820eval.scm",(void*)f_2820},
{"f_2902eval.scm",(void*)f_2902},
{"f_2992eval.scm",(void*)f_2992},
{"f_2980eval.scm",(void*)f_2980},
{"f_2913eval.scm",(void*)f_2913},
{"f_2978eval.scm",(void*)f_2978},
{"f_2970eval.scm",(void*)f_2970},
{"f_2921eval.scm",(void*)f_2921},
{"f_2964eval.scm",(void*)f_2964},
{"f_2968eval.scm",(void*)f_2968},
{"f_2931eval.scm",(void*)f_2931},
{"f_2935eval.scm",(void*)f_2935},
{"f_2956eval.scm",(void*)f_2956},
{"f_2954eval.scm",(void*)f_2954},
{"f_2929eval.scm",(void*)f_2929},
{"f_2925eval.scm",(void*)f_2925},
{"f_2917eval.scm",(void*)f_2917},
{"f_2832eval.scm",(void*)f_2832},
{"f_2851eval.scm",(void*)f_2851},
{"f_2862eval.scm",(void*)f_2862},
{"f_2870eval.scm",(void*)f_2870},
{"f_2858eval.scm",(void*)f_2858},
{"f_2296eval.scm",(void*)f_2296},
{"f_2318eval.scm",(void*)f_2318},
{"f_2758eval.scm",(void*)f_2758},
{"f_2696eval.scm",(void*)f_2696},
{"f_2677eval.scm",(void*)f_2677},
{"f_2631eval.scm",(void*)f_2631},
{"f_2634eval.scm",(void*)f_2634},
{"f_2613eval.scm",(void*)f_2613},
{"f_2594eval.scm",(void*)f_2594},
{"f_2562eval.scm",(void*)f_2562},
{"f_2541eval.scm",(void*)f_2541},
{"f_2332eval.scm",(void*)f_2332},
{"f_2534eval.scm",(void*)f_2534},
{"f_2477eval.scm",(void*)f_2477},
{"f_2530eval.scm",(void*)f_2530},
{"f_2504eval.scm",(void*)f_2504},
{"f_2475eval.scm",(void*)f_2475},
{"f_2336eval.scm",(void*)f_2336},
{"f_2348eval.scm",(void*)f_2348},
{"f_2427eval.scm",(void*)f_2427},
{"f_2423eval.scm",(void*)f_2423},
{"f_2404eval.scm",(void*)f_2404},
{"f_2371eval.scm",(void*)f_2371},
{"f_2379eval.scm",(void*)f_2379},
{"f_2339eval.scm",(void*)f_2339},
{"f_2299eval.scm",(void*)f_2299},
{"f_2253eval.scm",(void*)f_2253},
{"f_2259eval.scm",(void*)f_2259},
{"f_2278eval.scm",(void*)f_2278},
{"f_2237eval.scm",(void*)f_2237},
{"f_2201eval.scm",(void*)f_2201},
{"f_2210eval.scm",(void*)f_2210},
{"f_2222eval.scm",(void*)f_2222},
{"f_2216eval.scm",(void*)f_2216},
{"f_2194eval.scm",(void*)f_2194},
{"f_2191eval.scm",(void*)f_2191},
{"f_2188eval.scm",(void*)f_2188},
{"f_1818eval.scm",(void*)f_1818},
{"f_2128eval.scm",(void*)f_2128},
{"f_2134eval.scm",(void*)f_2134},
{"f_2141eval.scm",(void*)f_2141},
{"f_2055eval.scm",(void*)f_2055},
{"f_2067eval.scm",(void*)f_2067},
{"f_2115eval.scm",(void*)f_2115},
{"f_2109eval.scm",(void*)f_2109},
{"f_2089eval.scm",(void*)f_2089},
{"f_1967eval.scm",(void*)f_1967},
{"f_1987eval.scm",(void*)f_1987},
{"f_1995eval.scm",(void*)f_1995},
{"f_2009eval.scm",(void*)f_2009},
{"f_1981eval.scm",(void*)f_1981},
{"f_1821eval.scm",(void*)f_1821},
{"f_1830eval.scm",(void*)f_1830},
{"f_1943eval.scm",(void*)f_1943},
{"f_1955eval.scm",(void*)f_1955},
{"f_1961eval.scm",(void*)f_1961},
{"f_1949eval.scm",(void*)f_1949},
{"f_1836eval.scm",(void*)f_1836},
{"f_1842eval.scm",(void*)f_1842},
{"f_1853eval.scm",(void*)f_1853},
{"f_1870eval.scm",(void*)f_1870},
{"f_1889eval.scm",(void*)f_1889},
{"f_1900eval.scm",(void*)f_1900},
{"f_1864eval.scm",(void*)f_1864},
{"f_1850eval.scm",(void*)f_1850},
{"f_1828eval.scm",(void*)f_1828},
{"f_1809eval.scm",(void*)f_1809},
{"f_1791eval.scm",(void*)f_1791},
{"f_1801eval.scm",(void*)f_1801},
{"f_1781eval.scm",(void*)f_1781},
{"f_1789eval.scm",(void*)f_1789},
{"f_1765eval.scm",(void*)f_1765},
{"f_1771eval.scm",(void*)f_1771},
{"f_1749eval.scm",(void*)f_1749},
{"f_1755eval.scm",(void*)f_1755},
{"f_1702eval.scm",(void*)f_1702},
{"f_1706eval.scm",(void*)f_1706},
{"f_1712eval.scm",(void*)f_1712},
{"f_1715eval.scm",(void*)f_1715},
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
