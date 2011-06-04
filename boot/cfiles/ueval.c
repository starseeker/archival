/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: eval.scm -output-file ueval.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
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

static C_TLS C_word lf[511];


/* from ##sys#clear-trace-buffer in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall stub1315(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1315(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_clear_trace_buffer();
return C_r;}

C_noret_decl(C_eval_toplevel)
C_externexport void C_ccall C_eval_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1730)
static void C_ccall f_1730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11042)
static void C_ccall f_11042(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_11042)
static void C_ccall f_11042r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_11046)
static void C_fcall f_11046(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11070)
static void C_ccall f_11070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11064)
static void C_ccall f_11064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11054)
static void C_ccall f_11054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11052)
static void C_ccall f_11052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11036)
static void C_ccall f_11036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11032)
static void C_ccall f_11032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11028)
static void C_ccall f_11028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11024)
static void C_ccall f_11024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11014)
static void C_fcall f_11014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6627)
static void C_fcall f_6627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10999)
static void C_ccall f_10999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10995)
static void C_ccall f_10995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10991)
static void C_ccall f_10991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10981)
static void C_fcall f_10981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6631)
static void C_fcall f_6631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10965)
static void C_ccall f_10965(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10960)
static void C_ccall f_10960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10962)
static void C_ccall f_10962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6642)
static void C_ccall f_6642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10944)
static void C_ccall f_10944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10950)
static void C_ccall f_10950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10947)
static void C_ccall f_10947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6980)
static void C_ccall f_6980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10893)
static void C_ccall f_10893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10907)
static void C_fcall f_10907(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10940)
static void C_ccall f_10940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10936)
static void C_ccall f_10936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10924)
static void C_ccall f_10924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10901)
static void C_ccall f_10901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10772)
static void C_ccall f_10772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10809)
static void C_fcall f_10809(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10818)
static void C_ccall f_10818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10837)
static void C_ccall f_10837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10841)
static void C_ccall f_10841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10827)
static void C_ccall f_10827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10824)
static void C_ccall f_10824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10775)
static void C_fcall f_10775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7694)
static void C_ccall f_7694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7752)
static void C_ccall f_7752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10770)
static void C_ccall f_10770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8078)
static void C_ccall f_8078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10766)
static void C_ccall f_10766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8085)
static void C_ccall f_8085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8089)
static void C_ccall f_8089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10669)
static void C_ccall f_10669(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10675)
static void C_fcall f_10675(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10691)
static void C_ccall f_10691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10694)
static void C_ccall f_10694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10729)
static void C_ccall f_10729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10732)
static void C_ccall f_10732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10716)
static void C_ccall f_10716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10719)
static void C_ccall f_10719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10726)
static void C_ccall f_10726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8772)
static void C_ccall f_8772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10641)
static void C_ccall f_10641(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8775)
static void C_ccall f_8775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10598)
static void C_ccall f_10598(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10620)
static void C_ccall f_10620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8778)
static void C_ccall f_8778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10401)
static void C_ccall f_10401(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10407)
static void C_fcall f_10407(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10423)
static void C_ccall f_10423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10499)
static void C_fcall f_10499(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10556)
static void C_ccall f_10556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10502)
static void C_ccall f_10502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10529)
static void C_ccall f_10529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10462)
static void C_ccall f_10462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10481)
static void C_ccall f_10481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10453)
static void C_ccall f_10453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8781)
static void C_ccall f_8781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10298)
static void C_ccall f_10298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10321)
static void C_fcall f_10321(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10337)
static void C_ccall f_10337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10375)
static void C_ccall f_10375(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10373)
static void C_ccall f_10373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10365)
static void C_ccall f_10365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10319)
static void C_ccall f_10319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8784)
static void C_ccall f_8784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10245)
static void C_ccall f_10245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10258)
static void C_ccall f_10258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10263)
static void C_fcall f_10263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10288)
static void C_ccall f_10288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8787)
static void C_ccall f_8787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10175)
static void C_ccall f_10175(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10188)
static void C_ccall f_10188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10235)
static void C_ccall f_10235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10199)
static void C_ccall f_10199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10221)
static void C_ccall f_10221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10207)
static void C_ccall f_10207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10203)
static void C_ccall f_10203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8790)
static void C_ccall f_8790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10056)
static void C_ccall f_10056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_10056)
static void C_ccall f_10056r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_10060)
static void C_ccall f_10060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10063)
static void C_ccall f_10063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10157)
static void C_ccall f_10157(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10073)
static void C_ccall f_10073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10096)
static void C_fcall f_10096(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10110)
static void C_ccall f_10110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10108)
static void C_ccall f_10108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9764)
static void C_ccall f_9764(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9974)
static void C_fcall f_9974(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9978)
static void C_ccall f_9978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9999)
static void C_ccall f_9999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9777)
static void C_fcall f_9777(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9969)
static void C_ccall f_9969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9948)
static void C_ccall f_9948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9952)
static void C_ccall f_9952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9937)
static void C_ccall f_9937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9929)
static void C_ccall f_9929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9884)
static void C_ccall f_9884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9865)
static void C_ccall f_9865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9838)
static void C_ccall f_9838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9791)
static void C_ccall f_9791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9767)
static void C_fcall f_9767(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9775)
static void C_ccall f_9775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8796)
static void C_ccall f_8796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9754)
static void C_ccall f_9754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8799)
static void C_ccall f_8799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8803)
static void C_ccall f_8803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9751)
static void C_ccall f_9751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8810)
static void C_ccall f_8810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9187)
static void C_ccall f_9187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9609)
static void C_ccall f_9609(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_9609)
static void C_ccall f_9609r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_9727)
static void C_ccall f_9727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9717)
static void C_ccall f_9717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9612)
static void C_fcall f_9612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9616)
static void C_fcall f_9616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9627)
static void C_fcall f_9627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9270)
static void C_ccall f_9270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9590)
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9590)
static void C_ccall f_9590r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9594)
static void C_ccall f_9594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9603)
static void C_ccall f_9603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9601)
static void C_ccall f_9601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9273)
static void C_ccall f_9273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9584)
static void C_ccall f_9584(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9276)
static void C_ccall f_9276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9578)
static void C_ccall f_9578(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9279)
static void C_ccall f_9279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9569)
static void C_ccall f_9569(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9576)
static void C_ccall f_9576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9559)
static void C_ccall f_9559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9544)
static void C_ccall f_9544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9548)
static void C_ccall f_9548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_ccall f_9557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9522)
static void C_ccall f_9522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9526)
static void C_ccall f_9526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9531)
static void C_ccall f_9531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9542)
static void C_ccall f_9542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9496)
static void C_ccall f_9496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9502)
static void C_ccall f_9502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9506)
static void C_ccall f_9506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9520)
static void C_ccall f_9520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9509)
static void C_ccall f_9509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9516)
static void C_ccall f_9516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9480)
static void C_ccall f_9480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9486)
static void C_ccall f_9486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9494)
static void C_ccall f_9494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9443)
static void C_ccall f_9443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9447)
static void C_ccall f_9447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9452)
static void C_ccall f_9452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9478)
static void C_ccall f_9478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9474)
static void C_ccall f_9474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9470)
static void C_ccall f_9470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9459)
static void C_ccall f_9459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9466)
static void C_ccall f_9466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9417)
static void C_ccall f_9417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9423)
static void C_ccall f_9423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9427)
static void C_ccall f_9427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9441)
static void C_ccall f_9441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9430)
static void C_ccall f_9430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9437)
static void C_ccall f_9437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9404)
static C_word C_fcall f_9404(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_9378)
static void C_ccall f_9378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9382)
static void C_ccall f_9382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9387)
static void C_ccall f_9387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9391)
static void C_ccall f_9391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9402)
static void C_ccall f_9402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9398)
static void C_ccall f_9398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9362)
static void C_ccall f_9362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9368)
static void C_ccall f_9368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9376)
static void C_ccall f_9376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9350)
static void C_ccall f_9350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9356)
static void C_ccall f_9356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9360)
static void C_ccall f_9360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9341)
static void C_fcall f_9341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9345)
static void C_ccall f_9345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9282)
static void C_fcall f_9282(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9292)
static void C_ccall f_9292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9317)
static void C_ccall f_9317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9329)
static void C_ccall f_9329r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9335)
static void C_ccall f_9335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9323)
static void C_ccall f_9323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9298)
static void C_ccall f_9298(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9304)
static void C_ccall f_9304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9308)
static void C_ccall f_9308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9311)
static void C_ccall f_9311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9315)
static void C_ccall f_9315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9290)
static void C_ccall f_9290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9195)
static void C_ccall f_9195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9205)
static void C_ccall f_9205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9222)
static void C_fcall f_9222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9240)
static void C_ccall f_9240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9209)
static void C_fcall f_9209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9189)
static void C_ccall f_9189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8831)
static void C_ccall f_8831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8890)
static void C_ccall f_8890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8893)
static void C_ccall f_8893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9172)
static void C_ccall f_9172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9176)
static void C_ccall f_9176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9180)
static void C_ccall f_9180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8975)
static void C_ccall f_8975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8981)
static void C_fcall f_8981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9153)
static void C_ccall f_9153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9159)
static void C_ccall f_9159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8988)
static void C_ccall f_8988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8991)
static void C_ccall f_8991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8994)
static void C_ccall f_8994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9148)
static void C_ccall f_9148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9003)
static void C_ccall f_9003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9006)
static void C_ccall f_9006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9021)
static void C_ccall f_9021(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_9021)
static void C_ccall f_9021r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_9039)
static void C_fcall f_9039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9060)
static void C_ccall f_9060(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9064)
static void C_ccall f_9064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9067)
static void C_ccall f_9067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9079)
static void C_ccall f_9079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9082)
static void C_ccall f_9082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9070)
static void C_ccall f_9070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9043)
static void C_ccall f_9043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9025)
static void C_ccall f_9025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9028)
static void C_ccall f_9028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9012)
static void C_ccall f_9012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8910)
static void C_ccall f_8910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8915)
static void C_ccall f_8915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8918)
static void C_ccall f_8918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8923)
static void C_ccall f_8923(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8923)
static void C_ccall f_8923r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8930)
static void C_ccall f_8930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8970)
static void C_ccall f_8970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8945)
static void C_fcall f_8945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8954)
static void C_ccall f_8954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8948)
static void C_ccall f_8948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8901)
static C_word C_fcall f_8901(C_word t0);
C_noret_decl(f_8895)
static C_word C_fcall f_8895(C_word t0);
C_noret_decl(f_8861)
static void C_fcall f_8861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8871)
static void C_fcall f_8871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8849)
static void C_fcall f_8849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8855)
static void C_ccall f_8855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8834)
static void C_fcall f_8834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8843)
static void C_ccall f_8843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8838)
static void C_ccall f_8838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8828)
static void C_ccall f_8828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8812)
static void C_ccall f_8812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8826)
static void C_ccall f_8826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8823)
static void C_ccall f_8823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8816)
static void C_ccall f_8816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_8380)
static void C_ccall f_8380r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_8517)
static void C_fcall f_8517(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8522)
static void C_fcall f_8522(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8740)
static void C_ccall f_8740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8721)
static void C_ccall f_8721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8667)
static void C_ccall f_8667(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8538)
static void C_fcall f_8538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8543)
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8488)
static void C_ccall f_8488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8494)
static C_word C_fcall f_8494(C_word t0);
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8438)
static void C_fcall f_8438(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8461)
static void C_ccall f_8461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8383)
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8390)
static void C_ccall f_8390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_fcall f_8395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8413)
static void C_ccall f_8413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8417)
static void C_ccall f_8417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8406)
static void C_ccall f_8406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8344)
static void C_ccall f_8344(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8366)
static void C_ccall f_8366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8282)
static void C_ccall f_8282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8289)
static void C_ccall f_8289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8295)
static void C_ccall f_8295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8298)
static void C_ccall f_8298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8301)
static void C_ccall f_8301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_ccall f_8304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8307)
static void C_ccall f_8307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8261)
static void C_fcall f_8261(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8265)
static void C_ccall f_8265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8268)
static void C_ccall f_8268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8237)
static void C_fcall f_8237(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8243)
static void C_fcall f_8243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8253)
static void C_ccall f_8253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8223)
static void C_ccall f_8223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8182)
static void C_ccall f_8182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8184)
static void C_fcall f_8184(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8155)
static void C_fcall f_8155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8120)
static void C_fcall f_8120(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8142)
static void C_ccall f_8142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8095)
static void C_fcall f_8095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8099)
static void C_ccall f_8099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8062)
static void C_fcall f_8062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8064)
static void C_ccall f_8064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8068)
static void C_ccall f_8068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8038)
static void C_ccall f_8038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8016)
static void C_ccall f_8016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8003)
static void C_ccall f_8003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7983)
static void C_ccall f_7983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7968)
static void C_ccall f_7968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7956)
static void C_ccall f_7956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7885)
static void C_fcall f_7885(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7909)
static void C_fcall f_7909(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7928)
static void C_ccall f_7928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7903)
static void C_ccall f_7903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_7769)
static void C_ccall f_7769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7774)
static void C_fcall f_7774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7801)
static void C_fcall f_7801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7795)
static void C_ccall f_7795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7696)
static void C_ccall f_7696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7700)
static void C_ccall f_7700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7708)
static void C_fcall f_7708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7728)
static void C_fcall f_7728(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7655)
static void C_ccall f_7655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7670)
static void C_ccall f_7670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7256)
static void C_ccall f_7256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7531)
static void C_fcall f_7531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7540)
static void C_ccall f_7540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7566)
static void C_ccall f_7566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7568)
static void C_fcall f_7568(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7601)
static void C_ccall f_7601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7591)
static void C_ccall f_7591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7586)
static void C_ccall f_7586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7280)
static void C_fcall f_7280(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7290)
static void C_ccall f_7290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7424)
static void C_ccall f_7424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7505)
static void C_ccall f_7505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7436)
static void C_ccall f_7436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7451)
static void C_fcall f_7451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7471)
static void C_ccall f_7471(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7469)
static void C_ccall f_7469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7455)
static void C_fcall f_7455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7384)
static void C_fcall f_7384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7392)
static void C_fcall f_7392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7380)
static void C_ccall f_7380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7339)
static void C_fcall f_7339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7302)
static void C_ccall f_7302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7314)
static void C_ccall f_7314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7305)
static void C_fcall f_7305(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7259)
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7213)
static void C_fcall f_7213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7227)
static void C_ccall f_7227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7230)
static void C_fcall f_7230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7237)
static void C_ccall f_7237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7198)
static void C_ccall f_7198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7176)
static void C_ccall f_7176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7186)
static void C_ccall f_7186(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7156)
static void C_ccall f_7156r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7142)
static void C_ccall f_7142(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7131)
static void C_ccall f_7131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7135)
static void C_ccall f_7135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7064)
static void C_fcall f_7064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7067)
static void C_ccall f_7067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7085)
static void C_ccall f_7085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7091)
static void C_ccall f_7091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7019)
static void C_fcall f_7019(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6986)
static void C_fcall f_6986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6990)
static void C_ccall f_6990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6996)
static void C_ccall f_6996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6832)
static void C_ccall f_6832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6925)
static void C_fcall f_6925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6942)
static void C_ccall f_6942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6847)
static void C_fcall f_6847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6886)
static void C_ccall f_6886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6873)
static void C_ccall f_6873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6835)
static void C_fcall f_6835(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6776)
static void C_ccall f_6776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6785)
static void C_fcall f_6785(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6823)
static void C_ccall f_6823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6803)
static void C_ccall f_6803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6754)
static void C_ccall f_6754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6744)
static void C_ccall f_6744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6657)
static void C_fcall f_6657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6726)
static void C_ccall f_6726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6660)
static void C_ccall f_6660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6709)
static void C_ccall f_6709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_ccall f_6712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_ccall f_6715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6668)
static void C_fcall f_6668(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6702)
static void C_ccall f_6702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6681)
static void C_ccall f_6681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6684)
static void C_fcall f_6684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6579)
static void C_ccall f_6579r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6622)
static void C_ccall f_6622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6583)
static void C_ccall f_6583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6619)
static void C_ccall f_6619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6586)
static void C_ccall f_6586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6616)
static void C_ccall f_6616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6589)
static void C_ccall f_6589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6608)
static void C_ccall f_6608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6594)
static void C_ccall f_6594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6571)
static void C_ccall f_6571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6543)
static void C_ccall f_6543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6432)
static void C_fcall f_6432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6427)
static void C_fcall f_6427(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6092)
static void C_fcall f_6092(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6426)
static void C_ccall f_6426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6096)
static void C_fcall f_6096(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6375)
static void C_ccall f_6375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6378)
static void C_fcall f_6378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6099)
static void C_ccall f_6099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6327)
static void C_ccall f_6327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6299)
static void C_ccall f_6299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6319)
static void C_ccall f_6319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6108)
static void C_ccall f_6108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6148)
static void C_ccall f_6148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6166)
static void C_ccall f_6166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_fcall f_6171(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6227)
static void C_ccall f_6227r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6236)
static void C_ccall f_6236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6240)
static void C_ccall f_6240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6200)
static void C_ccall f_6200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6130)
static void C_ccall f_6130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6111)
static void C_ccall f_6111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_fcall f_6044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static C_word C_fcall f_6054(C_word t0,C_word t1);
C_noret_decl(f_5969)
static void C_ccall f_5969(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5981)
static void C_fcall f_5981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5964)
static void C_ccall f_5964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5893)
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_fcall f_5883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5611)
static void C_fcall f_5611(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5828)
static void C_ccall f_5828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5805)
static void C_ccall f_5805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5782)
static void C_ccall f_5782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5786)
static void C_ccall f_5786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5794)
static void C_ccall f_5794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5656)
static void C_ccall f_5656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5637)
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5585)
static C_word C_fcall f_5585(C_word t0,C_word t1);
C_noret_decl(f_3891)
static void C_fcall f_3891(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_fcall f_4017(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4052)
static void C_ccall f_4052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_fcall f_5418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5265)
static void C_fcall f_5265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5287)
static void C_ccall f_5287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5235)
static void C_ccall f_5235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5217)
static void C_fcall f_5217(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5552)
static void C_fcall f_5552(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_4979)
static void C_ccall f_4979r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4842)
static void C_ccall f_4842r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_fcall f_4731(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4647)
static void C_ccall f_4647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_ccall f_4522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_ccall f_4391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4406)
static void C_ccall f_4406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4125)
static void C_ccall f_4125(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3968)
static void C_ccall f_3968(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3926)
static void C_ccall f_3926(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3885)
static void C_fcall f_3885(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3879)
static C_word C_fcall f_3879(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3873)
static C_word C_fcall f_3873(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3820)
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3839)
static void C_fcall f_3839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3848)
static void C_fcall f_3848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_fcall f_3708(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3714)
static void C_ccall f_3714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_fcall f_3666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3672)
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3790)
static C_word C_fcall f_3790(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_fcall f_3571(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3519)
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3417)
static void C_ccall f_3417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static C_word C_fcall f_3426(C_word t0,C_word t1);
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_fcall f_3341(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_fcall f_3250(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3202)
static void C_fcall f_3202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_fcall f_3197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2766)
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2949)
static void C_fcall f_2949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2955)
static void C_fcall f_2955(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2769)
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_ccall f_2941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2781)
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2800)
static void C_fcall f_2800(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2267)
static void C_fcall f_2267(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2707)
static void C_fcall f_2707(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_fcall f_2626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_fcall f_2580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_fcall f_2583(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_fcall f_2543(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_fcall f_2511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2453)
static void C_fcall f_2453(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_fcall f_2285(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2297)
static void C_fcall f_2297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_fcall f_2288(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2248)
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2208)
static void C_fcall f_2208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2227)
static void C_fcall f_2227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2159)
static void C_fcall f_2159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2077)
static void C_fcall f_2077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2038)
static void C_ccall f_2038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_fcall f_1830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_fcall f_1847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1866)
static void C_fcall f_1866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_fcall f_1827(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1764)
static void C_ccall f_1764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);
x=C_fix((C_word)t1);
C_save(x);C_callback_wrapper((void *)f_9559,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))));
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9544,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9522,2));}

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
return C_truep(C_callback_wrapper((void *)f_9496,4));}

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
return C_truep(C_callback_wrapper((void *)f_9480,3));}

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
return C_truep(C_callback_wrapper((void *)f_9443,3));}

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
return C_truep(C_callback_wrapper((void *)f_9417,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x, *a=C_alloc(0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3);
C_callback_adjust_stack_limits(a);
x=C_mpointer(&a,(void*)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9378,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x, *a=C_alloc(0+3);
C_callback_adjust_stack_limits(a);
x=((C_word)t0);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_9362,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x, *a=C_alloc(0);
C_callback_adjust_stack_limits(a);
return C_truep(C_callback_wrapper((void *)f_9350,0));}

C_noret_decl(trf_11046)
static void C_fcall trf_11046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11046(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11046(t0,t1);}

C_noret_decl(trf_11014)
static void C_fcall trf_11014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11014(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11014(t0,t1);}

C_noret_decl(trf_6627)
static void C_fcall trf_6627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6627(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6627(t0,t1);}

C_noret_decl(trf_10981)
static void C_fcall trf_10981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10981(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10981(t0,t1);}

C_noret_decl(trf_6631)
static void C_fcall trf_6631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6631(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6631(t0,t1);}

C_noret_decl(trf_10907)
static void C_fcall trf_10907(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10907(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10907(t0,t1,t2);}

C_noret_decl(trf_10809)
static void C_fcall trf_10809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10809(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10809(t0,t1);}

C_noret_decl(trf_10775)
static void C_fcall trf_10775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10775(t0,t1);}

C_noret_decl(trf_10675)
static void C_fcall trf_10675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10675(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10675(t0,t1,t2);}

C_noret_decl(trf_10407)
static void C_fcall trf_10407(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10407(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10407(t0,t1,t2);}

C_noret_decl(trf_10499)
static void C_fcall trf_10499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10499(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10499(t0,t1);}

C_noret_decl(trf_10321)
static void C_fcall trf_10321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10321(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10321(t0,t1,t2);}

C_noret_decl(trf_10263)
static void C_fcall trf_10263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10263(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10263(t0,t1,t2);}

C_noret_decl(trf_10096)
static void C_fcall trf_10096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10096(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10096(t0,t1);}

C_noret_decl(trf_9974)
static void C_fcall trf_9974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9974(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9974(t0,t1,t2);}

C_noret_decl(trf_9777)
static void C_fcall trf_9777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9777(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9777(t0,t1,t2,t3);}

C_noret_decl(trf_9767)
static void C_fcall trf_9767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9767(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9767(t0,t1,t2,t3);}

C_noret_decl(trf_9612)
static void C_fcall trf_9612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9612(t0,t1,t2);}

C_noret_decl(trf_9616)
static void C_fcall trf_9616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9616(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9616(t0,t1);}

C_noret_decl(trf_9627)
static void C_fcall trf_9627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9627(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9627(t0,t1);}

C_noret_decl(trf_9341)
static void C_fcall trf_9341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9341(t0,t1,t2);}

C_noret_decl(trf_9282)
static void C_fcall trf_9282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9282(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9282(t0,t1);}

C_noret_decl(trf_9222)
static void C_fcall trf_9222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9222(t0,t1);}

C_noret_decl(trf_9209)
static void C_fcall trf_9209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9209(t0,t1);}

C_noret_decl(trf_8981)
static void C_fcall trf_8981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8981(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8981(t0,t1);}

C_noret_decl(trf_9039)
static void C_fcall trf_9039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9039(t0,t1,t2,t3);}

C_noret_decl(trf_8945)
static void C_fcall trf_8945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8945(t0,t1);}

C_noret_decl(trf_8861)
static void C_fcall trf_8861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8861(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8861(t0,t1,t2);}

C_noret_decl(trf_8871)
static void C_fcall trf_8871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8871(t0,t1);}

C_noret_decl(trf_8849)
static void C_fcall trf_8849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8849(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8849(t0,t1,t2);}

C_noret_decl(trf_8834)
static void C_fcall trf_8834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8834(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8834(t0,t1,t2);}

C_noret_decl(trf_8517)
static void C_fcall trf_8517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8517(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8517(t0,t1);}

C_noret_decl(trf_8522)
static void C_fcall trf_8522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8522(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8522(t0,t1,t2,t3);}

C_noret_decl(trf_8538)
static void C_fcall trf_8538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8538(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8538(t0,t1);}

C_noret_decl(trf_8543)
static void C_fcall trf_8543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8543(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8543(t0,t1,t2,t3);}

C_noret_decl(trf_8438)
static void C_fcall trf_8438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8438(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8438(t0,t1,t2);}

C_noret_decl(trf_8383)
static void C_fcall trf_8383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8383(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8383(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8395)
static void C_fcall trf_8395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8395(t0,t1,t2);}

C_noret_decl(trf_8261)
static void C_fcall trf_8261(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8261(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8261(t0,t1,t2,t3);}

C_noret_decl(trf_8237)
static void C_fcall trf_8237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8237(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8237(t0,t1,t2);}

C_noret_decl(trf_8243)
static void C_fcall trf_8243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8243(t0,t1,t2);}

C_noret_decl(trf_8184)
static void C_fcall trf_8184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8184(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8184(t0,t1,t2);}

C_noret_decl(trf_8155)
static void C_fcall trf_8155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8155(t0,t1,t2);}

C_noret_decl(trf_8120)
static void C_fcall trf_8120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8120(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8120(t0,t1,t2,t3);}

C_noret_decl(trf_8095)
static void C_fcall trf_8095(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8095(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8095(t0,t1);}

C_noret_decl(trf_8062)
static void C_fcall trf_8062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8062(t0,t1);}

C_noret_decl(trf_7885)
static void C_fcall trf_7885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7885(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7885(t0,t1,t2,t3);}

C_noret_decl(trf_7909)
static void C_fcall trf_7909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7909(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7909(t0,t1,t2,t3);}

C_noret_decl(trf_7774)
static void C_fcall trf_7774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7774(t0,t1,t2);}

C_noret_decl(trf_7801)
static void C_fcall trf_7801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7801(t0,t1,t2);}

C_noret_decl(trf_7708)
static void C_fcall trf_7708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7708(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7708(t0,t1,t2);}

C_noret_decl(trf_7728)
static void C_fcall trf_7728(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7728(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7728(t0,t1);}

C_noret_decl(trf_7531)
static void C_fcall trf_7531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7531(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7531(t0,t1);}

C_noret_decl(trf_7568)
static void C_fcall trf_7568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7568(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7568(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7280)
static void C_fcall trf_7280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7280(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7280(t0,t1,t2);}

C_noret_decl(trf_7451)
static void C_fcall trf_7451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7451(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7451(t0,t1);}

C_noret_decl(trf_7455)
static void C_fcall trf_7455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7455(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7455(t0,t1);}

C_noret_decl(trf_7384)
static void C_fcall trf_7384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7384(t0,t1);}

C_noret_decl(trf_7392)
static void C_fcall trf_7392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7392(t0,t1);}

C_noret_decl(trf_7339)
static void C_fcall trf_7339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7339(t0,t1);}

C_noret_decl(trf_7305)
static void C_fcall trf_7305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7305(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7305(t0,t1);}

C_noret_decl(trf_7259)
static void C_fcall trf_7259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7259(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7259(t0,t1,t2);}

C_noret_decl(trf_7213)
static void C_fcall trf_7213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7213(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7213(t0,t1,t2);}

C_noret_decl(trf_7230)
static void C_fcall trf_7230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7230(t0,t1);}

C_noret_decl(trf_7064)
static void C_fcall trf_7064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7064(t0,t1);}

C_noret_decl(trf_7019)
static void C_fcall trf_7019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7019(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7019(t0,t1,t2);}

C_noret_decl(trf_6986)
static void C_fcall trf_6986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6986(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6986(t0,t1,t2);}

C_noret_decl(trf_6925)
static void C_fcall trf_6925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6925(t0,t1,t2);}

C_noret_decl(trf_6847)
static void C_fcall trf_6847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6847(t0,t1,t2);}

C_noret_decl(trf_6835)
static void C_fcall trf_6835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6835(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6835(t0,t1);}

C_noret_decl(trf_6785)
static void C_fcall trf_6785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6785(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6785(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6657)
static void C_fcall trf_6657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6657(t0,t1);}

C_noret_decl(trf_6668)
static void C_fcall trf_6668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6668(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6668(t0,t1,t2);}

C_noret_decl(trf_6684)
static void C_fcall trf_6684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6684(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6684(t0,t1);}

C_noret_decl(trf_6432)
static void C_fcall trf_6432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6432(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6432(t0,t1);}

C_noret_decl(trf_6427)
static void C_fcall trf_6427(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6427(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6427(t0,t1,t2);}

C_noret_decl(trf_6092)
static void C_fcall trf_6092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6092(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6092(t0,t1,t2,t3);}

C_noret_decl(trf_6096)
static void C_fcall trf_6096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6096(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6096(t0,t1);}

C_noret_decl(trf_6378)
static void C_fcall trf_6378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6378(t0,t1);}

C_noret_decl(trf_6171)
static void C_fcall trf_6171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6171(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6171(t0,t1,t2);}

C_noret_decl(trf_6044)
static void C_fcall trf_6044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6044(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6044(t0,t1);}

C_noret_decl(trf_5981)
static void C_fcall trf_5981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5981(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5981(t0,t1,t2);}

C_noret_decl(trf_5893)
static void C_fcall trf_5893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5893(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5893(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5883)
static void C_fcall trf_5883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5883(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5883(t0,t1);}

C_noret_decl(trf_5611)
static void C_fcall trf_5611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5611(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5611(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3891)
static void C_fcall trf_3891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3891(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3891(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4017)
static void C_fcall trf_4017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4017(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4017(t0,t1);}

C_noret_decl(trf_5418)
static void C_fcall trf_5418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5418(t0,t1);}

C_noret_decl(trf_5265)
static void C_fcall trf_5265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5265(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5265(t0,t1,t2);}

C_noret_decl(trf_5217)
static void C_fcall trf_5217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5217(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5217(t0,t1);}

C_noret_decl(trf_5552)
static void C_fcall trf_5552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5552(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5552(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4731)
static void C_fcall trf_4731(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4731(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4731(t0,t1,t2,t3);}

C_noret_decl(trf_3885)
static void C_fcall trf_3885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3885(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3885(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3820)
static void C_fcall trf_3820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3820(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3820(t0,t1,t2,t3);}

C_noret_decl(trf_3839)
static void C_fcall trf_3839(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3839(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3839(t0,t1);}

C_noret_decl(trf_3848)
static void C_fcall trf_3848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3848(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3848(t0,t1);}

C_noret_decl(trf_3708)
static void C_fcall trf_3708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3708(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3708(t0,t1,t2,t3);}

C_noret_decl(trf_3666)
static void C_fcall trf_3666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3666(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3666(t0,t1,t2);}

C_noret_decl(trf_3672)
static void C_fcall trf_3672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3672(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3672(t0,t1,t2,t3);}

C_noret_decl(trf_3571)
static void C_fcall trf_3571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3571(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3571(t0,t1,t2);}

C_noret_decl(trf_3519)
static void C_fcall trf_3519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3519(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3519(t0,t1,t2);}

C_noret_decl(trf_3470)
static void C_fcall trf_3470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3470(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3470(t0,t1,t2);}

C_noret_decl(trf_3341)
static void C_fcall trf_3341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3341(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3341(t0,t1,t2,t3);}

C_noret_decl(trf_3250)
static void C_fcall trf_3250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3250(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3250(t0,t1,t2,t3);}

C_noret_decl(trf_3202)
static void C_fcall trf_3202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3202(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3202(t0,t1);}

C_noret_decl(trf_3197)
static void C_fcall trf_3197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3197(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3197(t0,t1,t2);}

C_noret_decl(trf_2766)
static void C_fcall trf_2766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2766(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2766(t0,t1,t2);}

C_noret_decl(trf_2949)
static void C_fcall trf_2949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2949(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2949(t0,t1,t2);}

C_noret_decl(trf_2955)
static void C_fcall trf_2955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2955(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2955(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3006)
static void C_fcall trf_3006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3006(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3006(t0,t1,t2);}

C_noret_decl(trf_2769)
static void C_fcall trf_2769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2769(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2769(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2781)
static void C_fcall trf_2781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2781(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2781(t0,t1,t2,t3);}

C_noret_decl(trf_2800)
static void C_fcall trf_2800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2800(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2800(t0,t1);}

C_noret_decl(trf_2267)
static void C_fcall trf_2267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2267(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2267(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2707)
static void C_fcall trf_2707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2707(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2707(t0,t1);}

C_noret_decl(trf_2626)
static void C_fcall trf_2626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2626(t0,t1);}

C_noret_decl(trf_2580)
static void C_fcall trf_2580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2580(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2580(t0,t1);}

C_noret_decl(trf_2583)
static void C_fcall trf_2583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2583(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2583(t0,t1);}

C_noret_decl(trf_2543)
static void C_fcall trf_2543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2543(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2543(t0,t1);}

C_noret_decl(trf_2511)
static void C_fcall trf_2511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2511(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2511(t0,t1);}

C_noret_decl(trf_2453)
static void C_fcall trf_2453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2453(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2453(t0,t1);}

C_noret_decl(trf_2285)
static void C_fcall trf_2285(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2285(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2285(t0,t1);}

C_noret_decl(trf_2297)
static void C_fcall trf_2297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2297(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2297(t0,t1);}

C_noret_decl(trf_2288)
static void C_fcall trf_2288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2288(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2288(t0,t1);}

C_noret_decl(trf_2248)
static void C_fcall trf_2248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2248(t0,t1,t2);}

C_noret_decl(trf_2208)
static void C_fcall trf_2208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2208(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2208(t0,t1,t2);}

C_noret_decl(trf_2227)
static void C_fcall trf_2227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2227(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2227(t0,t1);}

C_noret_decl(trf_2159)
static void C_fcall trf_2159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2159(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2159(t0,t1,t2);}

C_noret_decl(trf_2077)
static void C_fcall trf_2077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2077(t0,t1);}

C_noret_decl(trf_1944)
static void C_fcall trf_1944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1944(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1944(t0,t1,t2,t3);}

C_noret_decl(trf_1798)
static void C_fcall trf_1798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1798(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1798(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1830)
static void C_fcall trf_1830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1830(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1830(t0,t1);}

C_noret_decl(trf_1847)
static void C_fcall trf_1847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1847(t0,t1,t2);}

C_noret_decl(trf_1866)
static void C_fcall trf_1866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1866(t0,t1);}

C_noret_decl(trf_1827)
static void C_fcall trf_1827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1827(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1827(t0,t1);}

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
C_check_nursery_minimum(8);
if(!C_demand(8)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(7581)){
C_save(t1);
C_rereclaim2(7581*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(8);
C_initialize_lf(lf,511);
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
lf[40]=C_h_intern(&lf[40],21,"\003sysmacro-environment");
lf[41]=C_h_intern(&lf[41],20,"\003sysregister-macro-2");
lf[42]=C_h_intern(&lf[42],19,"\003syshash-table-set!");
lf[43]=C_h_intern(&lf[43],18,"\003sysregister-macro");
lf[44]=C_h_intern(&lf[44],14,"\003syscopy-macro");
lf[45]=C_h_intern(&lf[45],18,"\003syshash-table-ref");
lf[46]=C_h_intern(&lf[46],6,"macro\077");
lf[47]=C_h_intern(&lf[47],15,"undefine-macro!");
lf[48]=C_h_intern(&lf[48],13,"string-append");
lf[49]=C_h_intern(&lf[49],17,"\003sysmacroexpand-0");
lf[50]=C_h_intern(&lf[50],9,"\003sysabort");
lf[51]=C_h_intern(&lf[51],9,"condition");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"message");
lf[52]=C_h_pair(C_restore,tmp);
lf[53]=C_static_string(C_heaptop,21,"during expansion of (");
lf[54]=C_static_string(C_heaptop,8," ...) - ");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"message");
lf[55]=C_h_pair(C_restore,tmp);
lf[56]=C_h_intern(&lf[56],3,"exn");
lf[57]=C_h_intern(&lf[57],22,"with-exception-handler");
lf[58]=C_h_intern(&lf[58],30,"call-with-current-continuation");
lf[59]=C_h_intern(&lf[59],3,"let");
lf[60]=C_h_intern(&lf[60],16,"\004coreloop-lambda");
lf[61]=C_h_intern(&lf[61],6,"letrec");
lf[62]=C_h_intern(&lf[62],8,"\004coreapp");
lf[63]=C_h_intern(&lf[63],7,"\003sysmap");
lf[64]=C_h_intern(&lf[64],4,"cadr");
lf[65]=C_h_intern(&lf[65],16,"\003syscheck-syntax");
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
lf[66]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(2);
C_save(tmp);
lf[67]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[68]=C_h_intern(&lf[68],10,"\003syssetter");
lf[69]=C_h_intern(&lf[69],6,"append");
lf[70]=C_h_intern(&lf[70],4,"set!");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[71]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[72]=C_h_intern(&lf[72],9,"\004coreset!");
lf[73]=C_h_intern(&lf[73],38,"\003syscompiler-toplevel-macroexpand-hook");
lf[74]=C_h_intern(&lf[74],41,"\003sysinterpreter-toplevel-macroexpand-hook");
lf[75]=C_h_intern(&lf[75],23,"\003sysmacroexpand-1-local");
lf[76]=C_h_intern(&lf[76],25,"\003sysenable-runtime-macros");
lf[77]=C_h_intern(&lf[77],11,"macroexpand");
lf[78]=C_h_intern(&lf[78],13,"macroexpand-1");
lf[79]=C_h_intern(&lf[79],25,"\003sysextended-lambda-list\077");
lf[80]=C_h_intern(&lf[80],6,"#!rest");
lf[81]=C_h_intern(&lf[81],10,"#!optional");
lf[82]=C_h_intern(&lf[82],5,"#!key");
lf[83]=C_h_intern(&lf[83],7,"reverse");
lf[84]=C_h_intern(&lf[84],6,"gensym");
lf[85]=C_h_intern(&lf[85],31,"\003sysexpand-extended-lambda-list");
lf[86]=C_h_intern(&lf[86],9,":optional");
lf[87]=C_h_intern(&lf[87],13,"let-optionals");
lf[88]=C_h_intern(&lf[88],14,"let-optionals*");
lf[89]=C_h_intern(&lf[89],10,"\003sysappend");
lf[90]=C_h_intern(&lf[90],4,"let*");
lf[91]=C_h_intern(&lf[91],5,"quote");
lf[92]=C_h_intern(&lf[92],15,"\003sysget-keyword");
lf[93]=C_h_intern(&lf[93],6,"lambda");
lf[94]=C_h_intern(&lf[94],15,"string->keyword");
lf[95]=C_static_string(C_heaptop,43,"rest argument list specified more than once");
lf[96]=C_static_string(C_heaptop,45,"`#!optional\047 argument marker in wrong context");
lf[97]=C_static_string(C_heaptop,35,"invalid syntax of `#!rest\047 argument");
lf[98]=C_static_string(C_heaptop,41,"`#!rest\047 argument marker in wrong context");
lf[99]=C_static_string(C_heaptop,40,"`#!key\047 argument marker in wrong context");
lf[100]=C_static_string(C_heaptop,48,"invalid lambda list syntax after `#!rest\047 marker");
lf[101]=C_static_string(C_heaptop,32,"invalid required argument syntax");
lf[102]=C_static_string(C_heaptop,48,"invalid lambda list syntax after `#!rest\047 marker");
lf[103]=C_static_string(C_heaptop,26,"invalid lambda list syntax");
lf[104]=C_static_string(C_heaptop,26,"invalid lambda list syntax");
lf[105]=C_h_intern(&lf[105],3,"map");
lf[106]=C_h_intern(&lf[106],21,"\003syscanonicalize-body");
lf[107]=C_h_intern(&lf[107],5,"begin");
lf[108]=C_h_intern(&lf[108],6,"define");
lf[109]=C_h_intern(&lf[109],13,"define-values");
lf[110]=C_h_intern(&lf[110],20,"\003syscall-with-values");
lf[111]=C_h_intern(&lf[111],14,"\004coreundefined");
lf[112]=C_h_intern(&lf[112],25,"\003sysexpand-curried-define");
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
lf[113]=C_h_pair(C_restore,tmp);
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
lf[114]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[115]=C_h_pair(C_restore,tmp);
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
lf[116]=C_h_pair(C_restore,tmp);
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
lf[117]=C_h_pair(C_restore,tmp);
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
lf[118]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[119]=C_h_pair(C_restore,tmp);
lf[120]=C_h_intern(&lf[120],20,"\003sysmatch-expression");
lf[121]=C_h_intern(&lf[121],15,"\003syshash-symbol");
lf[122]=C_h_intern(&lf[122],23,"\003syshash-table-for-each");
lf[123]=C_h_intern(&lf[123],12,"\003sysfor-each");
lf[124]=C_h_intern(&lf[124],28,"\003sysarbitrary-unbound-symbol");
lf[125]=C_h_intern(&lf[125],23,"\003syshash-table-location");
lf[126]=C_h_intern(&lf[126],20,"\003syseval-environment");
lf[127]=C_h_intern(&lf[127],26,"\003sysenvironment-is-mutable");
lf[128]=C_h_intern(&lf[128],18,"\003syseval-decorator");
lf[129]=C_h_intern(&lf[129],20,"\003sysmake-lambda-info");
lf[130]=C_h_intern(&lf[130],17,"get-output-string");
lf[131]=C_h_intern(&lf[131],5,"write");
lf[132]=C_h_intern(&lf[132],18,"open-output-string");
lf[133]=C_h_intern(&lf[133],19,"\003sysdecorate-lambda");
lf[134]=C_h_intern(&lf[134],19,"\003sysunbound-in-eval");
lf[135]=C_h_intern(&lf[135],20,"\003syseval-debug-level");
lf[136]=C_h_intern(&lf[136],6,"cadadr");
lf[137]=C_h_intern(&lf[137],20,"with-input-from-file");
lf[138]=C_h_intern(&lf[138],7,"display");
lf[139]=C_h_intern(&lf[139],22,"\003syscompile-to-closure");
lf[140]=C_h_intern(&lf[140],18,"\003syscurrent-thread");
lf[141]=C_h_intern(&lf[141],21,"\003syssyntax-error-hook");
lf[142]=C_static_string(C_heaptop,33,"reference to undefined identifier");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[143]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[144]=C_h_intern(&lf[144],15,"\004coreglobal-ref");
lf[145]=C_h_intern(&lf[145],10,"\004corecheck");
lf[146]=C_h_intern(&lf[146],14,"\004coreimmutable");
lf[147]=C_h_intern(&lf[147],2,"if");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[148]=C_h_pair(C_restore,tmp);
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
lf[149]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[150]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[151]=C_h_pair(C_restore,tmp);
lf[152]=C_h_intern(&lf[152],9,"\003syserror");
lf[153]=C_static_string(C_heaptop,32,"assignment to immutable variable");
lf[154]=C_static_string(C_heaptop,34,"assignment of undefined identifier");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"variable");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[155]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[156]=C_h_intern(&lf[156],15,"\003sysmake-vector");
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
lf[157]=C_h_pair(C_restore,tmp);
lf[158]=C_h_intern(&lf[158],1,"\077");
lf[159]=C_h_intern(&lf[159],10,"\003sysvector");
lf[160]=C_static_string(C_heaptop,18,"bad argument count");
lf[161]=C_h_intern(&lf[161],25,"\003sysdecompose-lambda-list");
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
lf[162]=C_h_pair(C_restore,tmp);
lf[163]=C_h_intern(&lf[163],17,"\004corenamed-lambda");
lf[164]=C_h_intern(&lf[164],23,"\004corerequire-for-syntax");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[165]=C_h_pair(C_restore,tmp);
lf[166]=C_h_intern(&lf[166],11,"\003sysrequire");
lf[167]=C_h_intern(&lf[167],31,"\003syslookup-runtime-requirements");
lf[168]=C_h_intern(&lf[168],22,"\004corerequire-extension");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[169]=C_h_pair(C_restore,tmp);
lf[170]=C_h_intern(&lf[170],22,"\003sysdo-the-right-thing");
lf[171]=C_h_intern(&lf[171],24,"\004coreelaborationtimeonly");
lf[172]=C_h_intern(&lf[172],23,"\004coreelaborationtimetoo");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[173]=C_h_pair(C_restore,tmp);
lf[174]=C_h_intern(&lf[174],19,"\004corecompiletimetoo");
lf[175]=C_h_intern(&lf[175],20,"\004corecompiletimeonly");
lf[176]=C_h_intern(&lf[176],13,"\004corecallunit");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[177]=C_h_pair(C_restore,tmp);
lf[178]=C_h_intern(&lf[178],12,"\004coredeclare");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[179]=C_h_pair(C_restore,tmp);
lf[180]=C_h_intern(&lf[180],10,"\000compiling");
lf[181]=C_h_intern(&lf[181],12,"\003sysfeatures");
lf[182]=C_h_intern(&lf[182],28,"\010compilerprocess-declaration");
lf[183]=C_h_intern(&lf[183],8,"\003syswarn");
lf[184]=C_static_string(C_heaptop,44,"declarations are ignored in interpreted code");
lf[185]=C_h_intern(&lf[185],18,"\004coredefine-inline");
lf[186]=C_h_intern(&lf[186],20,"\004coredefine-constant");
lf[187]=C_h_intern(&lf[187],14,"\004coreprimitive");
lf[188]=C_static_string(C_heaptop,38,"can not evaluate compiler-special-form");
lf[189]=C_h_intern(&lf[189],8,"location");
lf[190]=C_static_string(C_heaptop,38,"can not evaluate compiler-special-form");
lf[191]=C_h_intern(&lf[191],11,"\004coreinline");
lf[192]=C_h_intern(&lf[192],20,"\004coreinline_allocate");
lf[193]=C_h_intern(&lf[193],19,"\004coreforeign-lambda");
lf[194]=C_h_intern(&lf[194],28,"\004coredefine-foreign-variable");
lf[195]=C_h_intern(&lf[195],29,"\004coredefine-external-variable");
lf[196]=C_h_intern(&lf[196],17,"\004corelet-location");
lf[197]=C_h_intern(&lf[197],22,"\004coreforeign-primitive");
lf[198]=C_h_intern(&lf[198],20,"\004coreforeign-lambda*");
lf[199]=C_h_intern(&lf[199],24,"\004coredefine-foreign-type");
lf[200]=C_static_string(C_heaptop,25,"illegal non-atomic object");
lf[201]=C_h_intern(&lf[201],11,"\003sysnumber\077");
lf[202]=C_static_string(C_heaptop,20,"malformed expression");
lf[203]=C_h_intern(&lf[203],16,"\003syseval-handler");
lf[204]=C_h_intern(&lf[204],12,"eval-handler");
lf[205]=C_h_intern(&lf[205],4,"eval");
lf[206]=C_h_intern(&lf[206],24,"\003syssyntax-error-culprit");
lf[207]=C_static_string(C_heaptop,26,"illegal lambda-list syntax");
lf[208]=C_h_intern(&lf[208],12,"load-verbose");
lf[209]=C_h_intern(&lf[209],14,"\003sysabort-load");
lf[210]=C_h_intern(&lf[210],21,"\003syscurrent-load-file");
lf[211]=C_h_intern(&lf[211],21,"\003syscurrent-load-path");
lf[212]=C_static_string(C_heaptop,0,"");
lf[213]=C_h_intern(&lf[213],22,"set-dynamic-load-mode!");
lf[214]=C_h_intern(&lf[214],21,"\003sysset-dlopen-flags!");
lf[215]=C_h_intern(&lf[215],6,"global");
lf[216]=C_h_intern(&lf[216],5,"local");
lf[217]=C_h_intern(&lf[217],4,"lazy");
lf[218]=C_h_intern(&lf[218],3,"now");
lf[219]=C_h_intern(&lf[219],15,"\003syssignal-hook");
lf[220]=C_static_string(C_heaptop,25,"invalid dynamic-load mode");
lf[221]=C_h_intern(&lf[221],4,"read");
lf[222]=C_h_intern(&lf[222],7,"newline");
lf[223]=C_h_intern(&lf[223],15,"open-input-file");
lf[224]=C_h_intern(&lf[224],16,"close-input-port");
lf[225]=C_h_intern(&lf[225],8,"\003sysload");
lf[226]=C_h_intern(&lf[226],31,"\003sysread-error-with-line-number");
lf[227]=C_h_intern(&lf[227],19,"\003sysundefined-value");
lf[228]=C_h_intern(&lf[228],17,"\003sysdisplay-times");
lf[229]=C_h_intern(&lf[229],14,"\003sysstop-timer");
lf[230]=C_h_intern(&lf[230],15,"\003sysstart-timer");
lf[231]=C_h_intern(&lf[231],4,"load");
lf[232]=C_static_string(C_heaptop,30,"unable to load compiled module");
lf[233]=C_h_intern(&lf[233],9,"peek-char");
lf[234]=C_h_intern(&lf[234],16,"\003sysdynamic-wind");
lf[235]=C_h_intern(&lf[235],13,"\003syssubstring");
lf[236]=C_static_string(C_heaptop,0,"");
lf[237]=C_h_intern(&lf[237],9,"\003sysdload");
lf[238]=C_h_intern(&lf[238],17,"\003sysmake-c-string");
lf[239]=C_static_string(C_heaptop,1,".");
lf[240]=C_h_intern(&lf[240],11,"\000file-error");
lf[241]=C_static_string(C_heaptop,17,"can not open file");
lf[242]=C_static_string(C_heaptop,5," ...\012");
lf[243]=C_static_string(C_heaptop,10,"; loading ");
lf[244]=C_h_intern(&lf[244],13,"\003sysfile-info");
lf[245]=C_h_intern(&lf[245],26,"\003sysload-dynamic-extension");
lf[246]=C_h_intern(&lf[246],11,"\000type-error");
lf[247]=C_static_string(C_heaptop,40,"bad argument type - not a port or string");
lf[248]=C_h_intern(&lf[248],5,"port\077");
lf[249]=C_h_intern(&lf[249],20,"\003sysexpand-home-path");
lf[250]=C_h_intern(&lf[250],21,"\003syscurrent-namespace");
lf[251]=C_h_intern(&lf[251],13,"load-relative");
lf[252]=C_h_intern(&lf[252],12,"load-noisily");
lf[253]=C_h_intern(&lf[253],8,"\000printer");
lf[254]=C_h_intern(&lf[254],5,"\000time");
lf[255]=C_h_intern(&lf[255],10,"\000evaluator");
lf[256]=C_h_intern(&lf[256],26,"\003sysload-library-extension");
lf[257]=C_h_intern(&lf[257],6,"cygwin");
lf[258]=C_h_intern(&lf[258],34,"\003sysdefault-dynamic-load-libraries");
lf[259]=C_h_intern(&lf[259],22,"dynamic-load-libraries");
lf[260]=C_h_intern(&lf[260],16,"\003sysload-library");
lf[261]=C_static_string(C_heaptop,5," ...\012");
lf[262]=C_static_string(C_heaptop,18,"; loading library ");
lf[263]=C_static_string(C_heaptop,2,"C_");
lf[264]=C_static_string(C_heaptop,9,"_toplevel");
lf[265]=C_h_intern(&lf[265],24,"\003sysstring->c-identifier");
lf[266]=C_h_intern(&lf[266],16,"\003sys->feature-id");
lf[267]=C_h_intern(&lf[267],12,"load-library");
lf[268]=C_static_string(C_heaptop,22,"unable to load library");
lf[270]=C_h_intern(&lf[270],31,"\003syscanonicalize-extension-path");
lf[271]=C_static_string(C_heaptop,22,"invalid extension path");
lf[272]=C_h_intern(&lf[272],18,"\003syssymbol->string");
lf[273]=C_static_string(C_heaptop,0,"");
lf[274]=C_static_string(C_heaptop,0,"");
lf[275]=C_h_intern(&lf[275],19,"\003sysrepository-path");
lf[276]=C_h_intern(&lf[276],15,"repository-path");
lf[277]=C_h_intern(&lf[277],12,"file-exists\077");
lf[278]=C_h_intern(&lf[278],18,"\003sysfind-extension");
lf[279]=C_h_intern(&lf[279],21,"\003sysinclude-pathnames");
tmp=C_static_string(C_heaptop,1,".");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[280]=C_h_pair(C_restore,tmp);
lf[281]=C_h_intern(&lf[281],21,"\003sysloaded-extensions");
lf[282]=C_h_intern(&lf[282],14,"string->symbol");
lf[283]=C_h_intern(&lf[283],18,"\003sysload-extension");
lf[284]=C_static_string(C_heaptop,22,"can not load extension");
lf[285]=C_h_intern(&lf[285],11,"\003sysprovide");
lf[286]=C_h_intern(&lf[286],7,"provide");
lf[287]=C_h_intern(&lf[287],13,"\003sysprovided\077");
lf[288]=C_h_intern(&lf[288],9,"provided\077");
lf[289]=C_h_intern(&lf[289],7,"require");
lf[290]=C_h_intern(&lf[290],25,"\003sysextension-information");
lf[291]=C_static_string(C_heaptop,1,".");
lf[292]=C_h_intern(&lf[292],21,"extension-information");
lf[293]=C_h_intern(&lf[293],14,"extension-info");
lf[294]=C_h_intern(&lf[294],18,"require-at-runtime");
lf[295]=C_h_intern(&lf[295],12,"vector->list");
lf[296]=C_h_intern(&lf[296],11,"lset-adjoin");
lf[297]=C_h_intern(&lf[297],3,"eq\077");
lf[298]=C_h_intern(&lf[298],18,"hash-table-update!");
lf[299]=C_h_intern(&lf[299],26,"\010compilerfile-requirements");
lf[300]=C_h_intern(&lf[300],19,"syntax-requirements");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[301]=C_h_pair(C_restore,tmp);
lf[302]=C_h_intern(&lf[302],18,"chicken-ffi-macros");
lf[303]=C_h_intern(&lf[303],19,"chicken-more-macros");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[304]=C_h_pair(C_restore,tmp);
lf[305]=C_h_intern(&lf[305],28,"\003sysresolve-include-filename");
lf[306]=C_h_intern(&lf[306],4,"uses");
lf[307]=C_h_intern(&lf[307],6,"syntax");
lf[308]=C_h_intern(&lf[308],17,"require-extension");
lf[309]=C_h_intern(&lf[309],12,"\003sysfeature\077");
lf[310]=C_h_intern(&lf[310],24,"\003sysextension-specifiers");
lf[311]=C_static_string(C_heaptop,29,"undefined extension specifier");
lf[312]=C_static_string(C_heaptop,27,"invalid extension specifier");
lf[313]=C_h_intern(&lf[313],24,"set-extension-specifier!");
lf[314]=C_h_intern(&lf[314],11,"string-copy");
lf[317]=C_h_intern(&lf[317],11,"environment");
lf[319]=C_h_intern(&lf[319],18,"\003syscopy-env-table");
lf[320]=C_h_intern(&lf[320],23,"\003sysenvironment-symbols");
lf[321]=C_h_intern(&lf[321],18,"\003syswalk-namespace");
lf[322]=C_h_intern(&lf[322],23,"interaction-environment");
lf[323]=C_h_intern(&lf[323],25,"scheme-report-environment");
lf[324]=C_static_string(C_heaptop,22,"no support for version");
lf[325]=C_h_intern(&lf[325],11,"make-vector");
lf[326]=C_h_intern(&lf[326],16,"null-environment");
lf[327]=C_static_string(C_heaptop,22,"no support for version");
lf[328]=C_static_string(C_heaptop,1,"0");
lf[329]=C_static_string(C_heaptop,11," major GCs\012");
lf[330]=C_static_string(C_heaptop,11," minor GCs\012");
lf[331]=C_static_string(C_heaptop,11," mutations\012");
lf[332]=C_static_string(C_heaptop,23," seconds in (major) GC\012");
lf[333]=C_static_string(C_heaptop,17," seconds elapsed\012");
lf[334]=C_h_intern(&lf[334],24,"\003sysline-number-database");
lf[335]=C_h_intern(&lf[335],13,"\000syntax-error");
lf[336]=C_h_intern(&lf[336],12,"syntax-error");
lf[337]=C_h_intern(&lf[337],15,"get-line-number");
lf[338]=C_h_intern(&lf[338],8,"keyword\077");
lf[339]=C_h_intern(&lf[339],14,"symbol->string");
lf[340]=C_static_string(C_heaptop,1,"(");
lf[341]=C_static_string(C_heaptop,10,") in line ");
lf[342]=C_static_string(C_heaptop,3," - ");
lf[343]=C_static_string(C_heaptop,1,"(");
lf[344]=C_static_string(C_heaptop,2,") ");
lf[345]=C_static_string(C_heaptop,20,"not enough arguments");
lf[346]=C_static_string(C_heaptop,18,"too many arguments");
lf[347]=C_static_string(C_heaptop,17,"not a proper list");
lf[348]=C_h_intern(&lf[348],1,"_");
lf[349]=C_h_intern(&lf[349],4,"pair");
lf[350]=C_h_intern(&lf[350],5,"pair\077");
lf[351]=C_static_string(C_heaptop,13,"pair expected");
lf[352]=C_h_intern(&lf[352],8,"variable");
lf[353]=C_static_string(C_heaptop,19,"identifier expected");
lf[354]=C_h_intern(&lf[354],6,"symbol");
lf[355]=C_h_intern(&lf[355],7,"symbol\077");
lf[356]=C_static_string(C_heaptop,15,"symbol expected");
lf[357]=C_h_intern(&lf[357],4,"list");
lf[358]=C_static_string(C_heaptop,20,"proper list expected");
lf[359]=C_h_intern(&lf[359],6,"number");
lf[360]=C_h_intern(&lf[360],7,"number\077");
lf[361]=C_static_string(C_heaptop,15,"number expected");
lf[362]=C_h_intern(&lf[362],6,"string");
lf[363]=C_h_intern(&lf[363],7,"string\077");
lf[364]=C_static_string(C_heaptop,15,"string expected");
lf[365]=C_h_intern(&lf[365],11,"lambda-list");
lf[366]=C_static_string(C_heaptop,20,"lambda-list expected");
lf[367]=C_static_string(C_heaptop,15,"missing keyword");
lf[368]=C_static_string(C_heaptop,15,"incomplete form");
lf[369]=C_static_string(C_heaptop,17,"unexpected object");
lf[370]=C_h_intern(&lf[370],18,"\003sysrepl-eval-hook");
lf[371]=C_h_intern(&lf[371],27,"\003sysrepl-print-length-limit");
lf[372]=C_h_intern(&lf[372],18,"\003sysrepl-read-hook");
lf[373]=C_h_intern(&lf[373],11,"repl-prompt");
lf[374]=C_h_intern(&lf[374],20,"\003sysread-prompt-hook");
lf[375]=C_h_intern(&lf[375],16,"\003sysflush-output");
lf[376]=C_h_intern(&lf[376],19,"\003sysstandard-output");
lf[377]=C_h_intern(&lf[377],9,"\003sysprint");
lf[378]=C_h_intern(&lf[378],22,"\003sysclear-trace-buffer");
lf[379]=C_h_intern(&lf[379],16,"print-call-chain");
lf[380]=C_h_intern(&lf[380],12,"flush-output");
lf[381]=C_h_intern(&lf[381],5,"reset");
lf[382]=C_h_intern(&lf[382],4,"repl");
lf[383]=C_h_intern(&lf[383],16,"\003syswrite-char-0");
lf[384]=C_h_intern(&lf[384],27,"\003syswith-print-length-limit");
lf[385]=C_h_intern(&lf[385],18,"\003sysstandard-error");
lf[386]=C_h_intern(&lf[386],18,"\003sysstandard-input");
lf[387]=C_static_string(C_heaptop,2,": ");
lf[388]=C_static_string(C_heaptop,2,": ");
lf[389]=C_static_string(C_heaptop,5,"Error");
lf[390]=C_h_intern(&lf[390],17,"\003syserror-handler");
lf[391]=C_h_intern(&lf[391],20,"\003syswarnings-enabled");
lf[392]=C_static_string(C_heaptop,5," (in ");
lf[393]=C_static_string(C_heaptop,2,"  ");
lf[394]=C_static_string(C_heaptop,70,"Warning: the following toplevel variables are referenced but unbound:\012");
lf[395]=C_h_intern(&lf[395],32,"\003syssymbol-has-toplevel-binding\077");
lf[396]=C_h_intern(&lf[396],15,"\003sysread-char-0");
lf[397]=C_h_intern(&lf[397],15,"\003syspeek-char-0");
lf[398]=C_h_intern(&lf[398],28,"\003sysdefault-namespace-prefix");
lf[399]=C_h_intern(&lf[399],21,"\003sysenable-qualifiers");
lf[400]=C_h_intern(&lf[400],17,"\003sysreset-handler");
lf[401]=C_h_intern(&lf[401],28,"\003syssharp-comma-reader-ctors");
lf[402]=C_h_intern(&lf[402],18,"define-reader-ctor");
lf[403]=C_h_intern(&lf[403],18,"\003sysuser-read-hook");
lf[404]=C_h_intern(&lf[404],9,"read-char");
lf[405]=C_h_intern(&lf[405],14,"\003sysread-error");
lf[406]=C_static_string(C_heaptop,33,"invalid sharp-comma external form");
lf[407]=C_static_string(C_heaptop,33,"undefined sharp-comma constructor");
lf[410]=C_h_intern(&lf[410],19,"print-error-message");
lf[412]=C_h_intern(&lf[412],6,"\003sysgc");
lf[414]=C_h_intern(&lf[414],13,"thread-yield!");
lf[417]=C_h_intern(&lf[417],17,"open-input-string");
lf[419]=C_static_string(C_heaptop,40,"Error: not enough room for result string");
lf[427]=C_static_string(C_heaptop,8,"No error");
lf[428]=C_h_intern(&lf[428],15,"\003sysmake-string");
lf[429]=C_h_intern(&lf[429],6,"module");
lf[430]=C_static_string(C_heaptop,25,"modules are not supported");
lf[431]=C_h_intern(&lf[431],13,"define-syntax");
lf[432]=C_static_string(C_heaptop,34,"highlevel macros are not supported");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[433]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[434]=C_h_intern(&lf[434],12,"define-macro");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[435]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[436]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[437]=C_h_pair(C_restore,tmp);
lf[438]=C_static_string(C_heaptop,4,"#;> ");
lf[439]=C_h_intern(&lf[439],14,"make-parameter");
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
lf[440]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[441]=C_h_intern(&lf[441],16,"\003sysmake-promise");
lf[442]=C_h_intern(&lf[442],5,"delay");
lf[443]=C_h_intern(&lf[443],16,"\003syslist->vector");
lf[444]=C_h_intern(&lf[444],7,"unquote");
lf[445]=C_h_intern(&lf[445],8,"\003syslist");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"unquote");
C_save(tmp);
lf[446]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"unquote");
C_save(tmp);
lf[447]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[448]=C_h_intern(&lf[448],10,"quasiquote");
lf[449]=C_h_intern(&lf[449],8,"\003syscons");
lf[450]=C_h_intern(&lf[450],16,"unquote-splicing");
lf[451]=C_h_intern(&lf[451],1,"a");
lf[452]=C_h_intern(&lf[452],1,"b");
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
lf[453]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[454]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003syscons");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"\003syslist");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"b");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[455]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"b");
C_save(tmp);
lf[456]=C_h_list(2,C_pick(1),C_pick(0));
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
lf[457]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_intern(C_heaptop,1,"a");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[458]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[459]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[460]=C_h_pair(C_restore,tmp);
lf[461]=C_static_string(C_heaptop,2,"do");
lf[462]=C_h_intern(&lf[462],2,"do");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[463]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[464]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[465]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[466]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[467]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[468]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[469]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[470]=C_h_intern(&lf[470],4,"else");
lf[471]=C_h_intern(&lf[471],2,"or");
lf[472]=C_h_intern(&lf[472],4,"eqv\077");
lf[473]=C_h_intern(&lf[473],4,"case");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[474]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[475]=C_h_pair(C_restore,tmp);
lf[476]=C_h_intern(&lf[476],2,"=>");
lf[477]=C_h_intern(&lf[477],9,"\003sysapply");
lf[478]=C_h_intern(&lf[478],4,"cond");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[479]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[480]=C_h_pair(C_restore,tmp);
lf[481]=C_h_intern(&lf[481],3,"and");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[482]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[483]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[484]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
lf[485]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[486]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[487]=C_h_vector(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
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
lf[488]=C_h_list(7,C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
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
lf[489]=C_h_list(189,C_pick(188),C_pick(187),C_pick(186),C_pick(185),C_pick(184),C_pick(183),C_pick(182),C_pick(181),C_pick(180),C_pick(179),C_pick(178),C_pick(177),C_pick(176),C_pick(175),C_pick(174),C_pick(173),C_pick(172),C_pick(171),C_pick(170),C_pick(169),C_pick(168),C_pick(167),C_pick(166),C_pick(165),C_pick(164),C_pick(163),C_pick(162),C_pick(161),C_pick(160),C_pick(159),C_pick(158),C_pick(157),C_pick(156),C_pick(155),C_pick(154),C_pick(153),C_pick(152),C_pick(151),C_pick(150),C_pick(149),C_pick(148),C_pick(147),C_pick(146),C_pick(145),C_pick(144),C_pick(143),C_pick(142),C_pick(141),C_pick(140),C_pick(139),C_pick(138),C_pick(137),C_pick(136),C_pick(135),C_pick(134),C_pick(133),C_pick(132),C_pick(131),C_pick(130),C_pick(129),C_pick(128),C_pick(127),C_pick(126),C_pick(125),C_pick(124),C_pick(123),C_pick(122),C_pick(121),C_pick(120),C_pick(119),C_pick(118),C_pick(117),C_pick(116),C_pick(115),C_pick(114),C_pick(113),C_pick(112),C_pick(111),C_pick(110),C_pick(109),C_pick(108),C_pick(107),C_pick(106),C_pick(105),C_pick(104),C_pick(103),C_pick(102),C_pick(101),C_pick(100),C_pick(99),C_pick(98),C_pick(97),C_pick(96),C_pick(95),C_pick(94),C_pick(93),C_pick(92),C_pick(91),C_pick(90),C_pick(89),C_pick(88),C_pick(87),C_pick(86),C_pick(85),C_pick(84),C_pick(83),C_pick(82),C_pick(81),C_pick(80),C_pick(79),C_pick(78),C_pick(77),C_pick(76),C_pick(75),C_pick(74),C_pick(73),C_pick(72),C_pick(71),C_pick(70),C_pick(69),C_pick(68),C_pick(67),C_pick(66),C_pick(65),C_pick(64),C_pick(63),C_pick(62),C_pick(61),C_pick(60),C_pick(59),C_pick(58),C_pick(57),C_pick(56),C_pick(55),C_pick(54),C_pick(53),C_pick(52),C_pick(51),C_pick(50),C_pick(49),C_pick(48),C_pick(47),C_pick(46),C_pick(45),C_pick(44),C_pick(43),C_pick(42),C_pick(41),C_pick(40),C_pick(39),C_pick(38),C_pick(37),C_pick(36),C_pick(35),C_pick(34),C_pick(33),C_pick(32),C_pick(31),C_pick(30),C_pick(29),C_pick(28),C_pick(27),C_pick(26),C_pick(25),C_pick(24),C_pick(23),C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(189);
lf[490]=C_h_intern(&lf[490],18,"\003sysnumber->string");
lf[491]=C_h_intern(&lf[491],5,"error");
lf[492]=C_static_string(C_heaptop,25,"invalid extension version");
lf[493]=C_h_intern(&lf[493],7,"version");
lf[494]=C_static_string(C_heaptop,51,"installed extension does not match required version");
lf[495]=C_h_intern(&lf[495],9,"string>=\077");
lf[496]=C_static_string(C_heaptop,29,"invalid version specification");
lf[497]=C_h_intern(&lf[497],12,"list->vector");
lf[498]=C_h_intern(&lf[498],18,"\003sysstring->symbol");
lf[499]=C_static_string(C_heaptop,5,"srfi-");
lf[500]=C_h_intern(&lf[500],4,"srfi");
lf[501]=C_static_string(C_heaptop,12,"CHICKEN_HOME");
lf[502]=C_h_intern(&lf[502],14,"build-platform");
lf[503]=C_h_intern(&lf[503],6,"macosx");
lf[504]=C_h_intern(&lf[504],4,"hpux");
lf[505]=C_h_intern(&lf[505],4,"hppa");
lf[506]=C_h_intern(&lf[506],12,"machine-type");
lf[507]=C_h_intern(&lf[507],16,"software-version");
lf[508]=C_h_intern(&lf[508],7,"windows");
lf[509]=C_h_intern(&lf[509],13,"software-type");
lf[510]=C_static_string(C_heaptop,10,"C_toplevel");
C_register_lf2(lf,511,create_ptable());
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
t21=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 160  make-vector */
t23=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t22,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k1728 */
static void C_ccall f_1730(C_word c,C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1730,2,t0,t1);}
t2=C_mutate((C_word*)lf[40]+1,t1);
t3=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1732,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1748,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1764,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1774,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1789,tmp=(C_word)a,a+=2,tmp));
t8=*((C_word*)lf[48]+1);
t9=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1795,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2137,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2140,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2143,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(lf[76],0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2150,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2186,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2202,tmp=(C_word)a,a+=2,tmp));
t17=*((C_word*)lf[83]+1);
t18=*((C_word*)lf[84]+1);
t19=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t18,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t20=*((C_word*)lf[83]+1);
t21=*((C_word*)lf[105]+1);
t22=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=t21,a[3]=t20,tmp=(C_word)a,a+=4,tmp));
t23=C_mutate((C_word*)lf[120]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3247,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[112]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3338,tmp=(C_word)a,a+=2,tmp));
t25=C_SCHEME_FALSE;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_FALSE;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_mutate((C_word*)lf[121]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3398,a[2]=t28,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t30=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3413,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3458,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3513,tmp=(C_word)a,a+=2,tmp));
t33=(C_word)C_slot(lf[124],C_fix(0));
t34=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3559,a[2]=t33,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(lf[126],0,C_SCHEME_FALSE);
t36=C_set_block_item(lf[127],0,C_SCHEME_FALSE);
t37=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3619,tmp=(C_word)a,a+=2,tmp));
t38=C_set_block_item(lf[134],0,C_SCHEME_FALSE);
t39=C_set_block_item(lf[135],0,C_fix(1));
t40=*((C_word*)lf[46]+1);
t41=*((C_word*)lf[131]+1);
t42=*((C_word*)lf[136]+1);
t43=*((C_word*)lf[83]+1);
t44=*((C_word*)lf[132]+1);
t45=*((C_word*)lf[130]+1);
t46=*((C_word*)lf[137]+1);
t47=(C_word)C_slot(lf[124],C_fix(0));
t48=*((C_word*)lf[138]+1);
t49=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3663,a[2]=t42,tmp=(C_word)a,a+=3,tmp));
t50=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t51=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11042,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1037 make-parameter */
t52=*((C_word*)lf[439]+1);
((C_proc3)(void*)(*((C_word*)t52+1)))(3,t52,t50,t51);}

/* a11041 in k1728 */
static void C_ccall f_11042(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3rv,(void*)f_11042r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_11042r(t0,t1,t2,t3);}}

static void C_ccall f_11042r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(10);
t4=*((C_word*)lf[127]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11046,a[2]=t2,a[3]=t1,a[4]=t7,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t9=(C_word)C_slot(t3,C_fix(0));
if(C_truep(t9)){
t10=(C_word)C_slot(t9,C_fix(1));
t11=C_set_block_item(t7,0,t10);
t12=(C_word)C_slot(t9,C_fix(2));
t13=C_set_block_item(t5,0,t12);
t14=t8;
f_11046(t14,t13);}
else{
t10=t8;
f_11046(t10,C_SCHEME_UNDEFINED);}}
else{
t9=t8;
f_11046(t9,C_SCHEME_UNDEFINED);}}

/* k11044 in a11041 in k1728 */
static void C_fcall f_11046(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11046,NULL,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11052,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11054,a[2]=t5,a[3]=t3,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11070,a[2]=t9,a[3]=t7,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1047 ##sys#dynamic-wind */
t14=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t10,t11,t12,t13);}

/* a11069 in k11044 in a11041 in k1728 */
static void C_ccall f_11070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11070,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[127]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[126]+1));
t4=C_mutate((C_word*)lf[127]+1,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[126]+1,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[227]+1));}

/* a11063 in k11044 in a11041 in k1728 */
static void C_ccall f_11064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11064,2,t0,t1);}
/* eval.scm: 1049 ##sys#compile-to-closure */
t2=*((C_word*)lf[139]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* a11053 in k11044 in a11041 in k1728 */
static void C_ccall f_11054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11054,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,*((C_word*)lf[127]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[126]+1));
t4=C_mutate((C_word*)lf[127]+1,((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate((C_word*)lf[126]+1,((C_word*)((C_word*)t0)[2])[1]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,*((C_word*)lf[227]+1));}

/* k11050 in k11044 in a11041 in k1728 */
static void C_ccall f_11052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5861 in k1728 */
static void C_ccall f_5863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5863,2,t0,t1);}
t2=C_mutate((C_word*)lf[203]+1,t1);
t3=C_mutate((C_word*)lf[204]+1,*((C_word*)lf[203]+1));
t4=C_mutate((C_word*)lf[205]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5866,tmp=(C_word)a,a+=2,tmp));
t5=*((C_word*)lf[83]+1);
t6=C_mutate((C_word*)lf[161]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5880,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5962,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fudge(C_fix(13));
/* eval.scm: 1081 make-parameter */
t9=*((C_word*)lf[439]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}

/* k5960 in k5861 in k1728 */
static void C_ccall f_5962(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5962,2,t0,t1);}
t2=C_mutate((C_word*)lf[208]+1,t1);
t3=C_mutate((C_word*)lf[209]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5964,tmp=(C_word)a,a+=2,tmp));
t4=C_set_block_item(lf[210],0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[211]+1,lf[212]);
t6=C_mutate((C_word*)lf[213]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5969,tmp=(C_word)a,a+=2,tmp));
t7=*((C_word*)lf[221]+1);
t8=*((C_word*)lf[131]+1);
t9=*((C_word*)lf[138]+1);
t10=*((C_word*)lf[222]+1);
t11=*((C_word*)lf[205]+1);
t12=*((C_word*)lf[223]+1);
t13=*((C_word*)lf[224]+1);
t14=*((C_word*)lf[48]+1);
t15=*((C_word*)lf[208]+1);
t16=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6042,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t9,a[5]=t14,a[6]=t12,a[7]=t13,a[8]=t8,a[9]=t10,a[10]=t7,a[11]=t11,tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1113 ##sys#make-c-string */
t17=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,lf[510]);}

/* k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6044,tmp=(C_word)a,a+=2,tmp);
t3=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6090,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp));
t4=C_mutate((C_word*)lf[231]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6477,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[251]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6521,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[252]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6579,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11036,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1206 software-type */
t9=*((C_word*)lf[509]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}

/* k11034 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_11036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11036,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[508]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6627(t3,lf[15]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1207 software-version */
t4=*((C_word*)lf[507]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11030 in k11034 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_11032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11032,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[503]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6627(t3,lf[13]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11028,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1208 software-version */
t5=*((C_word*)lf[507]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11026 in k11030 in k11034 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_11028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11028,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[504]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1209 machine-type */
t4=*((C_word*)lf[506]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_11014(t3,C_SCHEME_FALSE);}}

/* k11022 in k11026 in k11030 in k11034 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_11024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_11014(t2,(C_word)C_eqp(t1,lf[505]));}

/* k11012 in k11030 in k11034 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_11014(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6627(t2,(C_truep(t1)?lf[17]:lf[18]));}

/* k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6627,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[256]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10999,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1213 software-version */
t5=*((C_word*)lf[507]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k10997 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10999,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[503]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_6631(t3,lf[18]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10995,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1214 software-version */
t5=*((C_word*)lf[507]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k10993 in k10997 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10995,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[504]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1215 machine-type */
t4=*((C_word*)lf[506]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_10981(t3,C_SCHEME_FALSE);}}

/* k10989 in k10993 in k10997 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10981(t2,(C_word)C_eqp(t1,lf[505]));}

/* k10979 in k10997 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6631(t2,(C_truep(t1)?lf[18]:*((C_word*)lf[256]+1)));}

/* k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6631(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6631,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[245]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1219 build-platform */
t4=*((C_word*)lf[502]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6635(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6635,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[257]);
t3=(C_truep(t2)?lf[11]:lf[9]);
t4=C_mutate((C_word*)lf[258]+1,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10960,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10965,tmp=(C_word)a,a+=2,tmp);
/* map */
t8=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,*((C_word*)lf[258]+1));}

/* a10964 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10965(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10965,3,t0,t1,t2);}
/* ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,*((C_word*)lf[256]+1));}

/* k10958 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10962,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1224 make-parameter */
t3=*((C_word*)lf[439]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a10961 in k10958 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10962,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6642(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6642,2,t0,t1);}
t2=C_mutate((C_word*)lf[259]+1,t1);
t3=*((C_word*)lf[208]+1);
t4=*((C_word*)lf[48]+1);
t5=*((C_word*)lf[259]+1);
t6=*((C_word*)lf[138]+1);
t7=C_mutate((C_word*)lf[260]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6644,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=C_mutate((C_word*)lf[267]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6750,tmp=(C_word)a,a+=2,tmp));
t9=*((C_word*)lf[83]+1);
t10=C_mutate(&lf[269],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6776,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[48]+1);
t12=C_mutate((C_word*)lf[270]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6832,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10944,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1311 getenv */
t15=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t14,lf[25]);}

/* k10942 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_10947(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10950,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1312 getenv */
t4=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[501]);}}

/* k10948 in k10942 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10950,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_10947(2,t2,t1);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_EGG_HOME),C_fix(0));}}

/* k10945 in k10942 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1310 make-parameter */
t2=*((C_word*)lf[439]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6980(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6980,2,t0,t1);}
t2=C_mutate((C_word*)lf[275]+1,t1);
t3=C_mutate((C_word*)lf[276]+1,*((C_word*)lf[275]+1));
t4=*((C_word*)lf[277]+1);
t5=*((C_word*)lf[48]+1);
t6=C_mutate((C_word*)lf[278]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6983,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(lf[281],0,C_SCHEME_END_OF_LIST);
t8=*((C_word*)lf[282]+1);
t9=C_mutate((C_word*)lf[283]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7060,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[285]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7125,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[286]+1,*((C_word*)lf[285]+1));
t12=C_mutate((C_word*)lf[287]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7142,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[288]+1,*((C_word*)lf[287]+1));
t14=C_mutate((C_word*)lf[166]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7156,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[289]+1,*((C_word*)lf[166]+1));
t16=*((C_word*)lf[137]+1);
t17=*((C_word*)lf[277]+1);
t18=*((C_word*)lf[48]+1);
t19=*((C_word*)lf[221]+1);
t20=C_mutate((C_word*)lf[290]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7169,a[2]=t18,a[3]=t17,a[4]=t19,a[5]=t16,tmp=(C_word)a,a+=6,tmp));
t21=C_mutate((C_word*)lf[292]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7200,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[293]+1,*((C_word*)lf[292]+1));
t23=*((C_word*)lf[137]+1);
t24=*((C_word*)lf[221]+1);
t25=C_mutate((C_word*)lf[167]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7207,tmp=(C_word)a,a+=2,tmp));
t26=*((C_word*)lf[295]+1);
t27=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7256,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t28=C_set_block_item(lf[310],0,C_SCHEME_END_OF_LIST);
t29=C_mutate((C_word*)lf[313]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7655,tmp=(C_word)a,a+=2,tmp));
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t31=*((C_word*)lf[497]+1);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10893,a[2]=t31,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1501 set-extension-specifier! */
t33=*((C_word*)lf[313]+1);
((C_proc4)(void*)(*((C_word*)t33+1)))(4,t33,t30,lf[500],t32);}

/* a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_10893,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10901,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10907,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_10907(t9,t4,t5);}

/* loop in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10907(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10907,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10924,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10936,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10940,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1511 number->string */
C_number_to_string(3,0,t6,t3);}}

/* k10938 in loop in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1511 ##sys#string-append */
t2=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[499],t1);}

/* k10934 in loop in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1511 ##sys#string->symbol */
t2=*((C_word*)lf[498]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k10922 in loop in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10928,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1512 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10907(t4,t2,t3);}

/* k10926 in k10922 in loop in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10928,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k10899 in a10892 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1505 list->vector */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10772,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1517 set-extension-specifier! */
t4=*((C_word*)lf[313]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[493],t3);}

/* a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10772,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10775,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10809,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_eqp(t6,lf[493]);
if(C_truep(t7)){
t8=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_u_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_u_i_cdddr(t2);
t11=t5;
f_10809(t11,(C_word)C_i_nullp(t10));}
else{
t10=t5;
f_10809(t10,C_SCHEME_FALSE);}}
else{
t9=t5;
f_10809(t9,C_SCHEME_FALSE);}}
else{
t8=t5;
f_10809(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_10809(t6,C_SCHEME_FALSE);}}

/* k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10809(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10809,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_u_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10818,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1527 extension-information */
t5=*((C_word*)lf[292]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* syntax-error */
t2=*((C_word*)lf[336]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[308],lf[496],((C_word*)t0)[4]);}}

/* k10816 in k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10818(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10818,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_u_i_assq(lf[493],t1):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10824,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10827,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t2);
/* eval.scm: 1529 ->string */
f_10775(t5,t6);}
else{
t5=t4;
f_10827(2,t5,C_SCHEME_FALSE);}}

/* k10835 in k10816 in k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10841,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1529 ->string */
f_10775(t2,((C_word*)t0)[2]);}

/* k10839 in k10835 in k10816 in k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1529 string>=? */
t2=*((C_word*)lf[495]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10825 in k10816 in k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_10824(2,t2,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 1530 error */
t2=*((C_word*)lf[491]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[494],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k10822 in k10816 in k10807 in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ->string in a10771 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10775(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10775,NULL,2,t1,t2);}
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
t3=*((C_word*)lf[490]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
/* eval.scm: 1524 error */
t3=*((C_word*)lf[491]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[492],t2);}}}}

/* k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7694,2,t0,t1);}
t2=*((C_word*)lf[314]+1);
t3=C_mutate((C_word*)lf[265]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7696,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1551 make-vector */
t5=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7752(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7752,2,t0,t1);}
t2=C_mutate(&lf[315],t1);
t3=lf[316]=C_SCHEME_FALSE;;
t4=(C_word)C_a_i_record(&a,3,lf[317],C_SCHEME_FALSE,C_SCHEME_TRUE);
t5=C_mutate(&lf[318],t4);
t6=C_mutate((C_word*)lf[319]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7759,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[320]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7867,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[322]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7983,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[323]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7986,tmp=(C_word)a,a+=2,tmp));
t10=*((C_word*)lf[325]+1);
t11=C_mutate((C_word*)lf[326]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8027,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8062,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8078,a[2]=t12,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10770,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1632 initb */
f_8062(t14,lf[315]);}

/* k10768 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[489]);}

/* k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1653 ##sys#copy-env-table */
t3=*((C_word*)lf[319]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[315],C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8082,2,t0,t1);}
t2=C_mutate(&lf[316],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8085,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10766,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1655 initb */
f_8062(t4,lf[316]);}

/* k10764 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,lf[488]);}

/* k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1662 chicken-home */
t3=*((C_word*)lf[33]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8089(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8089,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_a_i_list(&a,1,t1):C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[279]+1,t2);
t4=*((C_word*)lf[48]+1);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8095,tmp=(C_word)a,a+=2,tmp);
t6=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8114,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[138]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8237,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8261,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t10=C_mutate((C_word*)lf[228]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8282,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(lf[334],0,C_SCHEME_FALSE);
t12=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8336,tmp=(C_word)a,a+=2,tmp));
t13=C_set_block_item(lf[206],0,C_SCHEME_FALSE);
t14=C_mutate((C_word*)lf[336]+1,*((C_word*)lf[141]+1));
t15=C_mutate((C_word*)lf[337]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8344,tmp=(C_word)a,a+=2,tmp));
t16=*((C_word*)lf[48]+1);
t17=*((C_word*)lf[338]+1);
t18=*((C_word*)lf[337]+1);
t19=*((C_word*)lf[339]+1);
t20=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8380,a[2]=t17,a[3]=t18,a[4]=t19,a[5]=t16,tmp=(C_word)a,a+=6,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10669,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1823 ##sys#register-macro-2 */
t23=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t23+1)))(4,t23,t21,lf[108],t22);}

/* a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10669(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10669,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10675,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_10675(t6,t1,t2);}

/* loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10675(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10675,NULL,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10716,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1834 ##sys#check-syntax */
t7=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[108],t3,lf[483]);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10729,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1838 ##sys#check-syntax */
t7=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[108],t3,lf[485]);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10691,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1830 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[108],t3,lf[354]);}}

/* k10689 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1831 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[108],((C_word*)t0)[4],lf[487]);}

/* k10692 in k10689 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10694,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_u_i_car(((C_word*)t0)[4]):lf[486]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[72],((C_word*)t0)[2],t3));}

/* k10727 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1839 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[108],((C_word*)t0)[3],lf[484]);}

/* k10730 in k10727 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10732,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[4]);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,lf[93],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[72],t2,t5));}

/* k10714 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1835 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[108],((C_word*)t0)[2],lf[482]);}

/* k10717 in k10714 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10726,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1836 ##sys#expand-curried-define */
t3=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10724 in k10717 in k10714 in loop in a10668 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1836 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10675(t2,((C_word*)t0)[2],t1);}

/* k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10641,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1842 ##sys#register-macro-2 */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[481],t3);}

/* a10640 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10641(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_10641,3,t0,t1,t2);}
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
t7=(C_word)C_a_i_cons(&a,2,lf[481],t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,4,lf[147],t5,t7,C_SCHEME_FALSE));}}}

/* k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8775,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[84]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10598,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1853 ##sys#register-macro-2 */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[471],t4);}

/* a10597 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10598(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_10598,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10620,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1863 gensym */
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k10618 in a10597 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10620,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[471],((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,4,lf[147],t1,t1,t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[59],t3,t5));}

/* k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[84]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10401,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1867 ##sys#register-macro-2 */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[478],t4);}

/* a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10401(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10401,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10407,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10407(t6,t1,t2);}

/* expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10407(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10407,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10423,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1876 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[478],t3,lf[479]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[480]);}}

/* k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10423(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10423,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[470],t2);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[107],t4));}
else{
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t5=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(C_word)C_u_i_car(((C_word*)t0)[6]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10453,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1878 expand */
t8=((C_word*)((C_word*)t0)[4])[1];
f_10407(t8,t7,((C_word*)t0)[3]);}
else{
t6=(C_word)C_u_i_cadr(((C_word*)t0)[6]);
t7=(C_word)C_eqp(lf[476],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1880 gensym */
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[6]))){
t9=(C_word)C_i_length(((C_word*)t0)[6]);
t10=(C_word)C_eqp(t9,C_fix(4));
if(C_truep(t10)){
t11=(C_word)C_u_i_caddr(((C_word*)t0)[6]);
t12=t8;
f_10499(t12,(C_word)C_eqp(lf[476],t11));}
else{
t11=t8;
f_10499(t11,C_SCHEME_FALSE);}}
else{
t9=t8;
f_10499(t9,C_SCHEME_FALSE);}}}}}

/* k10497 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10499(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10499,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1886 gensym */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_u_i_car(((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,lf[107],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10556,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1895 expand */
t6=((C_word*)((C_word*)t0)[4])[1];
f_10407(t6,t5,((C_word*)t0)[3]);}}

/* k10554 in k10497 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10556,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[147],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10500 in k10497 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10502(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10502,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,3,lf[93],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_u_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,3,lf[477],t4,t1);
t6=(C_word)C_u_i_cadddr(((C_word*)t0)[5]);
t7=(C_word)C_a_i_list(&a,3,lf[477],t6,t1);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10529,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t7,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1892 expand */
t9=((C_word*)((C_word*)t0)[3])[1];
f_10407(t9,t8,((C_word*)t0)[2]);}

/* k10527 in k10500 in k10497 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10529,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[147],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,3,lf[93],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[110],((C_word*)t0)[2],t3));}

/* k10460 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10462(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10462,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_u_i_caddr(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10481,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1884 expand */
t8=((C_word*)((C_word*)t0)[3])[1];
f_10407(t8,t7,((C_word*)t0)[2]);}

/* k10479 in k10460 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10481,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[147],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[59],((C_word*)t0)[2],t2));}

/* k10451 in k10421 in expand in a10400 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10453,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[471],((C_word*)t0)[2],t1));}

/* k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8781,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[84]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10298,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1897 ##sys#register-macro-2 */
t5=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[473],t4);}

/* a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10298,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10308,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1903 gensym */
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10308,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10319,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10321,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10321(t8,t4,((C_word*)t0)[2]);}

/* expand in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10321(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10321,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10337,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1910 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[473],t3,lf[474]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[475]);}}

/* k10335 in expand in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10337(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10337,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[470],t2);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[107],t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_u_i_car(((C_word*)t0)[6]);
/* eval.scm: 1913 ##sys#map */
t7=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}

/* a10374 in k10335 in expand in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10375(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10375,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[91],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[472],((C_word*)t0)[2],t3));}

/* k10371 in k10335 in expand in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10373,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[471],t1);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,lf[107],t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10365,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1915 expand */
t6=((C_word*)((C_word*)t0)[3])[1];
f_10321(t6,t5,((C_word*)t0)[2]);}

/* k10363 in k10371 in k10335 in expand in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10365,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[147],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k10317 in k10306 in a10297 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10319,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[59],((C_word*)t0)[2],t1));}

/* k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10245,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1917 ##sys#register-macro-2 */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[90],t3);}

/* a10244 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10245,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10255,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1922 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[90],t3,lf[469]);}

/* k10253 in a10244 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1923 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[90],((C_word*)t0)[4],lf[468]);}

/* k10256 in k10253 in a10244 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10258,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10263,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_10263(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* expand in k10256 in k10253 in a10244 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10263(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10263,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[59],t4));}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10288,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 1927 expand */
t10=t6;
t11=t7;
t1=t10;
t2=t11;
goto loop;}}

/* k10286 in expand in k10256 in k10253 in a10244 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10288,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[59],((C_word*)t0)[2],t1));}

/* k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10175,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1929 ##sys#register-macro-2 */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[61],t3);}

/* a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10175(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10175,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10185,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1934 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[61],t3,lf[467]);}

/* k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1935 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[61],((C_word*)t0)[3],lf[466]);}

/* k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10235,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1936 ##sys#map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a10234 in k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10235,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t3,lf[465]));}

/* k10197 in k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10203,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10207,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10221,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1937 ##sys#map */
t5=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a10220 in k10197 in k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10221,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_u_i_cadr(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[72],t3,t4));}

/* k10205 in k10197 in k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10207,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[59],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k10201 in k10197 in k10186 in k10183 in a10174 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10203,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[59],t2));}

/* k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[84]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10056,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1940 ##sys#register-macro */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[462],t4);}

/* a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_10056r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_10056r(t0,t1,t2,t3,t4);}}

static void C_ccall f_10056r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10060,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1944 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[462],t2,lf[464]);}

/* k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10060,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1945 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[462],((C_word*)t0)[6],lf[463]);}

/* k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1946 gensym */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[461]);}

/* k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10157,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1947 ##sys#map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a10156 in k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10157(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10157,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_u_i_car(t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,2,t3,t5));}

/* k10071 in k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10073(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10073,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
t5=(C_truep(t4)?lf[459]:(C_word)C_a_i_cons(&a,2,lf[107],t3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10096,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t6;
f_10096(t8,lf[460]);}
else{
t8=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t9=t6;
f_10096(t9,(C_word)C_a_i_cons(&a,2,lf[59],t8));}}

/* k10094 in k10071 in k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_10096(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10096,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10110,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1958 ##sys#map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a10109 in k10094 in k10071 in k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10110(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_10110,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(t4,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_u_i_car(t2));}
else{
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t6,C_fix(1));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_u_i_car(t7));}}

/* k10106 in k10094 in k10071 in k10064 in k10061 in k10058 in a10055 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10108,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[62],t2);
t4=(C_word)C_a_i_list(&a,3,lf[107],((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_list(&a,4,lf[147],((C_word*)t0)[5],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[59],((C_word*)t0)[7],((C_word*)t0)[2],t5));}

/* k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[295]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9764,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1964 ##sys#register-macro */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,lf[448],t4);}

/* a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9764(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9764,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9767,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9777,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9974,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
/* eval.scm: 2025 walk */
t12=((C_word*)t4)[1];
f_9767(t12,t1,t2,C_fix(0));}

/* simplify in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9974(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9974,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9978,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2012 ##sys#match-expression */
t4=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[457],lf[458]);}

/* k9976 in simplify in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9978,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_assq(lf[451],t1);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_list(&a,2,lf[445],t3);
/* eval.scm: 2013 simplify */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9974(t5,((C_word*)t0)[3],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2014 ##sys#match-expression */
t3=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[455],lf[456]);}}

/* k9997 in k9976 in simplify in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9999(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9999,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_assq(lf[452],t1);
t3=(C_word)C_i_length(t2);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(32)))){
t4=(C_word)C_u_i_assq(lf[451],t1);
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,lf[445],t7);
/* eval.scm: 2018 simplify */
t9=((C_word*)((C_word*)t0)[4])[1];
f_9974(t9,((C_word*)t0)[3],t8);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2021 ##sys#match-expression */
t3=*((C_word*)lf[120]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[453],lf[454]);}}

/* k10039 in k9997 in k9976 in simplify in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_10041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_i_assq(lf[451],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9777(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9777,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9791,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9795,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1974 vector->list */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep((C_word)C_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t4,lf[444]);
if(C_truep(t6)){
t7=(C_truep((C_word)C_blockp(t5))?(C_word)C_pairp(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_slot(t5,C_fix(0));
t9=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t11=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* eval.scm: 1986 walk */
t12=((C_word*)((C_word*)t0)[3])[1];
f_9767(t12,t10,t8,t11);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[447]);}}
else{
t7=(C_word)C_eqp(t4,lf[448]);
if(C_truep(t7)){
t8=(C_truep((C_word)C_blockp(t5))?(C_word)C_pairp(t5):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(C_word)C_a_i_list(&a,2,lf[91],lf[448]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9865,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_slot(t5,C_fix(0));
t12=(C_word)C_u_fixnum_plus(t3,C_fix(1));
/* eval.scm: 1991 walk */
t13=((C_word*)((C_word*)t0)[3])[1];
f_9767(t13,t10,t11,t12);}
else{
t9=(C_word)C_a_i_list(&a,2,lf[91],lf[448]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9884,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1992 walk */
t11=((C_word*)((C_word*)t0)[3])[1];
f_9767(t11,t10,t5,t3);}}
else{
t8=(C_truep((C_word)C_blockp(t4))?(C_word)C_pairp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(C_word)C_slot(t4,C_fix(0));
t10=(C_word)C_slot(t4,C_fix(1));
t11=(C_word)C_eqp(t9,lf[450]);
t12=(C_truep(t11)?(C_truep((C_word)C_blockp(t10))?(C_word)C_pairp(t10):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=(C_word)C_slot(t10,C_fix(0));
t14=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9918,a[2]=t13,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2003 walk */
t16=((C_word*)((C_word*)t0)[3])[1];
f_9767(t16,t15,t5,t3);}
else{
t15=(C_word)C_a_i_list(&a,2,lf[91],lf[450]);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9937,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t15,tmp=(C_word)a,a+=7,tmp);
t17=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* eval.scm: 2005 walk */
t18=((C_word*)((C_word*)t0)[3])[1];
f_9767(t18,t16,t13,t17);}}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9948,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2007 walk */
t14=((C_word*)((C_word*)t0)[3])[1];
f_9767(t14,t13,t4,t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9965,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2008 walk */
t10=((C_word*)((C_word*)t0)[3])[1];
f_9767(t10,t9,t4,t3);}}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[91],t2));}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[91],t2));}}

/* k9963 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9969,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2008 walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9767(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9967 in k9963 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9969,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[449],((C_word*)t0)[2],t1));}

/* k9946 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9952,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2007 walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9767(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9950 in k9946 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9952,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[449],((C_word*)t0)[2],t1));}

/* k9935 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9937,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[445],((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9929,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2006 walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9767(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9927 in k9935 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9929,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[449],((C_word*)t0)[2],t1));}

/* k9916 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9918,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[89],((C_word*)t0)[2],t1));}

/* k9882 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9884,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[449],((C_word*)t0)[2],t1));}

/* k9863 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9865,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[445],((C_word*)t0)[2],t1));}

/* k9836 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9838,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[445],lf[446],t1));}

/* k9793 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1974 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9767(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9789 in walk1 in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9791,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[443],t1));}

/* walk in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9767(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9767,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9775,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1969 walk1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_9777(t5,t4,t2,t3);}

/* k9773 in walk in a9763 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1969 simplify */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9974(t2,((C_word*)t0)[2],t1);}

/* k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9754,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2027 ##sys#register-macro */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[442],t3);}

/* a9753 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9754,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,3,lf[93],C_SCHEME_END_OF_LIST,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[441],t3));}

/* k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2035 append */
t3=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[440],*((C_word*)lf[181]+1));}

/* k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8803,2,t0,t1);}
t2=C_mutate((C_word*)lf[181]+1,t1);
t3=C_set_block_item(lf[370],0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[371],0,C_SCHEME_FALSE);
t5=C_set_block_item(lf[372],0,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9751,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2045 make-parameter */
t8=*((C_word*)lf[439]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* a9750 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9751,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[438]);}

/* k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8810(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8810,2,t0,t1);}
t2=C_mutate((C_word*)lf[373]+1,t1);
t3=*((C_word*)lf[373]+1);
t4=C_mutate((C_word*)lf[374]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8812,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[378]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8828,tmp=(C_word)a,a+=2,tmp));
t6=*((C_word*)lf[205]+1);
t7=*((C_word*)lf[221]+1);
t8=*((C_word*)lf[58]+1);
t9=*((C_word*)lf[379]+1);
t10=*((C_word*)lf[380]+1);
t11=*((C_word*)lf[208]+1);
t12=*((C_word*)lf[381]+1);
t13=C_mutate((C_word*)lf[382]+1,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8831,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t11,a[6]=t9,a[7]=t10,tmp=(C_word)a,a+=8,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9187,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2167 make-vector */
t15=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9187(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9187,2,t0,t1);}
t2=C_mutate((C_word*)lf[401]+1,t1);
t3=C_mutate((C_word*)lf[402]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9189,tmp=(C_word)a,a+=2,tmp));
t4=*((C_word*)lf[403]+1);
t5=*((C_word*)lf[404]+1);
t6=*((C_word*)lf[221]+1);
t7=C_mutate((C_word*)lf[403]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9195,a[2]=t4,a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9609,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2196 ##sys#register-macro */
t10=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,lf[434],t9);}

/* a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9609(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr3r,(void*)f_9609r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_9609r(t0,t1,t2,t3);}}

static void C_ccall f_9609r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9612,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9717,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2207 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[434],t3,lf[435]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9727,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2210 ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[434],t2,lf[437]);}}

/* k9725 in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2211 ##sys#check-syntax */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[434],((C_word*)t0)[4],lf[436]);}

/* k9728 in k9725 in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9730,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(C_word)C_a_i_cons(&a,2,lf[93],t4);
/* eval.scm: 2212 expand */
f_9612(((C_word*)t0)[2],t2,t5);}

/* k9715 in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
/* eval.scm: 2208 expand */
f_9612(((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* expand in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9612(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9612,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9616,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_eqp(lf[93],t5);
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_u_i_cadr(t3);
t9=t4;
f_9616(t9,(C_word)C_i_symbolp(t8));}
else{
t8=t4;
f_9616(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_9616(t7,C_SCHEME_FALSE);}}
else{
t5=t4;
f_9616(t5,C_SCHEME_FALSE);}}

/* k9614 in expand in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9616(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9616,NULL,2,t0,t1);}
t2=(C_truep(*((C_word*)lf[76]+1))?lf[172]:lf[171]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9627,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[3]);
t5=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_u_i_cddr(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[93],t8);
t10=t3;
f_9627(t10,(C_word)C_a_i_list(&a,3,lf[41],t4,t9));}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t4=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[3]);
t6=t3;
f_9627(t6,(C_word)C_a_i_list(&a,3,lf[44],t4,t5));}
else{
t4=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[3]);
t5=t3;
f_9627(t5,(C_word)C_a_i_list(&a,3,lf[43],t4,((C_word*)t0)[2]));}}}

/* k9625 in k9614 in expand in a9608 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9627,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9590,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2214 ##sys#register-macro */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[308],t3);}

/* a9589 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_9590r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9590r(t0,t1,t2);}}

static void C_ccall f_9590r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9594,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2217 ##sys#check-syntax */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[308],t2,lf[433]);}

/* k9592 in a9589 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9601,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9603,tmp=(C_word)a,a+=2,tmp);
/* map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a9602 in k9592 in a9589 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9603,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[91],t2));}

/* k9599 in k9592 in a9589 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9601,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[168],t1));}

/* k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9584,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2223 ##sys#register-macro-2 */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[431],t3);}

/* a9583 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9584(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9584,3,t0,t1,t2);}
/* eval.scm: 2226 ##sys#syntax-error-hook */
t3=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[431],lf[432]);}

/* k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9578,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2228 ##sys#register-macro-2 */
t4=*((C_word*)lf[41]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[429],t3);}

/* a9577 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9578(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9578,3,t0,t1,t2);}
/* eval.scm: 2231 ##sys#syntax-error-hook */
t3=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[429],lf[430]);}

/* k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9279(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9279,2,t0,t1);}
t2=lf[408]=C_SCHEME_FALSE;;
t3=C_mutate(&lf[409],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9282,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[411],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9341,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[413],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9350,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[415],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9362,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[416],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9378,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[418],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9404,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[420],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9417,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[421],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9443,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[422],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9480,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[423],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9496,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[424],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9522,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[425],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9544,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[426],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9559,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[129]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9569,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* ##sys#make-lambda-info in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9569(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9569,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9576,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2338 ##sys#make-string */
t5=*((C_word*)lf[428]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k9574 in ##sys#make-lambda-info in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(C_word)C_string_to_lambdainfo(t1);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* CHICKEN_get_error_message in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9559,4,t0,t1,t2,t3);}
t4=lf[408];
t5=(C_truep(t4)?t4:lf[427]);
/* eval.scm: 2331 store-string */
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_9404(t5,t3,t2));}

/* CHICKEN_load in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9544,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9548,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k9546 in CHICKEN_load in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9553,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2328 run-safe */
f_9282(((C_word*)t0)[2],t2);}

/* a9552 in k9546 in CHICKEN_load in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9557,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2328 load */
t3=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9555 in a9552 in k9546 in CHICKEN_load in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* CHICKEN_read in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9522,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9526,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9524 in CHICKEN_read in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9526,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9531,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2322 run-safe */
f_9282(((C_word*)t0)[2],t3);}

/* a9530 in k9524 in CHICKEN_read in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9535,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2324 open-input-string */
t3=*((C_word*)lf[417]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9533 in a9530 in k9524 in CHICKEN_read in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2325 read */
t3=*((C_word*)lf[221]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k9540 in k9533 in a9530 in k9524 in CHICKEN_read in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2325 store-result */
f_9341(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9496,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9502,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2315 run-safe */
f_9282(t1,t6);}

/* a9501 in CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2317 open-output-string */
t3=*((C_word*)lf[132]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9504 in a9501 in CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9509,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9520,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9518 in k9504 in a9501 in CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2318 write */
t2=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9507 in k9504 in a9501 in CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9516,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2319 get-output-string */
t3=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9514 in k9507 in k9504 in a9501 in CHICKEN_apply_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2319 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9404(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_apply in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9480,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9486,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2310 run-safe */
f_9282(t1,t5);}

/* a9485 in CHICKEN_apply in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9494,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9492 in a9485 in CHICKEN_apply in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2310 store-result */
f_9341(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9443,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9447,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(0));}

/* k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9447,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9452,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2301 run-safe */
f_9282(((C_word*)t0)[2],t4);}

/* a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2303 open-output-string */
t3=*((C_word*)lf[132]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9459,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9470,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9474,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9478,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2304 open-input-string */
t6=*((C_word*)lf[417]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k9476 in k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 read */
t2=*((C_word*)lf[221]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9472 in k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 eval */
t2=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9468 in k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2304 write */
t2=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9457 in k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9466,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2305 get-output-string */
t3=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9464 in k9457 in k9454 in a9451 in k9445 in CHICKEN_eval_string_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2305 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9404(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9417,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9423,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2292 run-safe */
f_9282(t1,t5);}

/* a9422 in CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2294 open-output-string */
t3=*((C_word*)lf[132]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9425 in a9422 in CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9430,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9441,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2295 eval */
t4=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9439 in k9425 in a9422 in CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2295 write */
t2=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9428 in k9425 in a9422 in CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2296 get-output-string */
t3=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9435 in k9428 in k9425 in a9422 in CHICKEN_eval_to_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2296 store-string */
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_9404(t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* store-string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall f_9404(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_block_size(t1);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t2))){
t5=C_mutate(&lf[408],lf[419]);
return(C_SCHEME_FALSE);}
else{
return((C_word)C_copy_result_string(t1,t3,t4));}}

/* CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9378(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9378,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9382,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_fix(0));}

/* k9380 in CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9382,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9387,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2273 run-safe */
f_9282(((C_word*)t0)[2],t3);}

/* a9386 in k9380 in CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9391,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2275 open-input-string */
t3=*((C_word*)lf[417]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9389 in a9386 in k9380 in CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2276 read */
t4=*((C_word*)lf[221]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k9400 in k9389 in a9386 in k9380 in CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2276 eval */
t2=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k9396 in k9389 in a9386 in k9380 in CHICKEN_eval_string in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2276 store-result */
f_9341(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_eval in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9362,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9368,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2268 run-safe */
f_9282(t1,t4);}

/* a9367 in CHICKEN_eval in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9376,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2270 eval */
t3=*((C_word*)lf[205]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9374 in a9367 in CHICKEN_eval in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2270 store-result */
f_9341(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* CHICKEN_yield in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9356,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 2265 run-safe */
f_9282(t1,t2);}

/* a9355 in CHICKEN_yield in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9360,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2265 thread-yield! */
t3=*((C_word*)lf[414]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9358 in a9355 in CHICKEN_yield in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* store-result in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9341(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9341,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9345,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2259 ##sys#gc */
t5=*((C_word*)lf[412]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_SCHEME_FALSE);}

/* k9343 in store-result in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_store_result(((C_word*)t0)[3],((C_word*)t0)[4]):C_SCHEME_UNDEFINED);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9282(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9282,NULL,2,t1,t2);}
t3=lf[408]=C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9292,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2247 call-with-current-continuation */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9292,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9317,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2247 with-exception-handler */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a9316 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9323,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2247 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t2,t3);}

/* a9328 in a9316 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9329(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_9329r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9329r(t0,t1,t2);}}

static void C_ccall f_9329r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9335,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2247 g1437 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a9334 in a9328 in a9316 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9335,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a9322 in a9316 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9323,2,t0,t1);}
/* eval.scm: 2252 thunk */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* a9297 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9298(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9298,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9304,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2247 g1437 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a9303 in a9297 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9308,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2248 open-output-string */
t3=*((C_word*)lf[132]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9306 in a9303 in a9297 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9311,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2249 print-error-message */
t3=*((C_word*)lf[410]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k9309 in k9306 in a9303 in a9297 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9315,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2250 get-output-string */
t3=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9313 in k9309 in k9306 in a9303 in a9297 in a9291 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[408],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k9288 in run-safe in k9277 in k9274 in k9271 in k9268 in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9195,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_make_character(44));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2179 read-char */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
/* eval.scm: 2191 old */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}}

/* k9203 in ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2180 read */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k9206 in k9203 in ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9209,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_nullp(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9222,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_9222(t5,t3);}
else{
t5=(C_word)C_i_listp(t1);
t6=t4;
f_9222(t6,(C_word)C_i_not(t5));}}

/* k9220 in k9206 in k9203 in ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9222,NULL,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 2183 err */
t2=((C_word*)t0)[5];
f_9209(t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9240,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2187 ##sys#hash-table-ref */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[401]+1),t2);}
else{
/* eval.scm: 2186 err */
t3=((C_word*)t0)[5];
f_9209(t3,((C_word*)t0)[4]);}}}

/* k9238 in k9220 in k9206 in k9203 in ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_apply(4,0,((C_word*)t0)[4],t1,t2);}
else{
/* eval.scm: 2190 ##sys#read-error */
t2=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[407],((C_word*)t0)[2]);}}

/* err in k9206 in k9203 in ##sys#user-read-hook in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9209,NULL,2,t0,t1);}
/* eval.scm: 2181 ##sys#read-error */
t2=*((C_word*)lf[405]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],lf[406],((C_word*)t0)[2]);}

/* define-reader-ctor in k9185 in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9189,4,t0,t1,t2,t3);}
/* eval.scm: 2171 ##sys#hash-table-set! */
t4=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,*((C_word*)lf[401]+1),t2,t3);}

/* repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8831(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8834,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8861,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=*((C_word*)lf[386]+1);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=*((C_word*)lf[376]+1);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=*((C_word*)lf[385]+1);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8890,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=t10,a[12]=t8,a[13]=t6,tmp=(C_word)a,a+=14,tmp);
/* eval.scm: 2079 ##sys#error-handler */
t12=*((C_word*)lf[390]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_8893,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* eval.scm: 2080 ##sys#reset-handler */
t3=*((C_word*)lf[400]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8893(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8893,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[134]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8895,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8901,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8910,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=t6,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8975,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9172,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2094 ##sys#dynamic-wind */
t10=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,((C_word*)t0)[2],t7,t8,t9);}

/* a9171 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9176,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2159 load-verbose */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k9174 in a9171 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9176,2,t0,t1);}
t2=C_mutate((C_word*)lf[134]+1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9180,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2161 ##sys#error-handler */
t4=*((C_word*)lf[390]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9178 in k9174 in a9171 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2162 ##sys#reset-handler */
t2=*((C_word*)lf[400]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8975,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_8981(t5,t1);}

/* loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8981,NULL,2,t0,t1);}
t2=f_8895(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8988,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9153,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2117 call-with-current-continuation */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a9152 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9153,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9159,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2119 ##sys#reset-handler */
t4=*((C_word*)lf[400]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a9158 in a9152 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9159,2,t0,t1);}
t2=C_set_block_item(lf[226],0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[398],0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[399],0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[250],0,C_SCHEME_FALSE);
t6=f_8901(((C_word*)t0)[3]);
/* eval.scm: 2126 c */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,C_SCHEME_FALSE);}

/* k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8991,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2127 ##sys#read-prompt-hook */
t3=*((C_word*)lf[374]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=*((C_word*)lf[372]+1);
t4=(C_truep(t3)?t3:((C_word*)t0)[2]);
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8994,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9003,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9148,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2130 ##sys#peek-char-0 */
t4=*((C_word*)lf[397]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[386]+1));}}

/* k9146 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(10),t1);
if(C_truep(t2)){
/* eval.scm: 2131 ##sys#read-char-0 */
t3=*((C_word*)lf[396]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],*((C_word*)lf[386]+1));}
else{
t3=((C_word*)t0)[2];
f_9003(2,t3,C_SCHEME_UNDEFINED);}}

/* k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2132 ##sys#clear-trace-buffer */
t3=*((C_word*)lf[378]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9006,2,t0,t1);}
t2=C_set_block_item(lf[134],0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9012,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2134 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9021(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr2r,(void*)f_9021r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_9021r(t0,t1,t2);}}

static void C_ccall f_9021r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9025,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(*((C_word*)lf[391]+1))?(C_word)C_i_pairp(*((C_word*)lf[134]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9039,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_9039(t8,t3,*((C_word*)lf[134]+1),C_SCHEME_END_OF_LIST);}
else{
t5=t3;
f_9025(2,t5,C_SCHEME_UNDEFINED);}}

/* loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_9039(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9039,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9055,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2139 ##sys#print */
t6=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[394],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}
else{
t5=t4;
f_9043(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(C_word)C_u_i_caar(t2);
t6=(C_word)C_u_i_memq(t5,t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9102,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_9102(2,t8,t6);}
else{
t8=(C_word)C_u_i_caar(t2);
/* eval.scm: 2153 ##sys#symbol-has-toplevel-binding? */
t9=*((C_word*)lf[395]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}}}

/* k9100 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9102,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* eval.scm: 2154 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_9039(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_i_car(((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* eval.scm: 2155 loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9039(t5,((C_word*)t0)[3],t2,t4);}}

/* k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9060,tmp=(C_word)a,a+=2,tmp);
/* for-each */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9060(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9060,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9064,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2144 ##sys#print */
t4=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[393],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}

/* k9062 in a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_car(((C_word*)t0)[2]);
/* eval.scm: 2145 ##sys#print */
t4=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[385]+1));}

/* k9065 in k9062 in a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9070,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[2],C_fix(1)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9079,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2147 ##sys#print */
t4=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[392],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}
else{
t3=t2;
f_9070(2,t3,C_SCHEME_UNDEFINED);}}

/* k9077 in k9065 in k9062 in a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9082,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
/* eval.scm: 2148 ##sys#print */
t4=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_TRUE,*((C_word*)lf[385]+1));}

/* k9080 in k9077 in k9065 in k9062 in a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2149 ##sys#write-char-0 */
t2=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(41),*((C_word*)lf[385]+1));}

/* k9068 in k9065 in k9062 in a9059 in k9053 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2150 ##sys#write-char-0 */
t2=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[385]+1));}

/* k9041 in loop in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(9));}

/* k9023 in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9028,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2156 write-results */
t3=((C_word*)t0)[3];
f_8861(t3,t2,((C_word*)t0)[2]);}

/* k9026 in k9023 in a9020 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2157 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8981(t2,((C_word*)t0)[2]);}

/* a9011 in k9004 in k9001 in k8992 in k8989 in k8986 in loop in a8974 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_9012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9012,2,t0,t1);}
t2=*((C_word*)lf[370]+1);
t3=(C_truep(t2)?t2:((C_word*)t0)[3]);
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,((C_word*)t0)[2]);}

/* a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8915,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 2096 load-verbose */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8915,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8918,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 2097 load-verbose */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_SCHEME_TRUE);}

/* k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 2098 ##sys#error-handler */
t3=*((C_word*)lf[390]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8923(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_8923r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8923r(t0,t1,t2,t3);}}

static void C_ccall f_8923r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=f_8901(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8930,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 2101 ##sys#print */
t6=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[389],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}

/* k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8970,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2103 ##sys#print */
t4=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[388],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}
else{
t3=t2;
f_8933(2,t3,C_SCHEME_UNDEFINED);}}

/* k8968 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2104 ##sys#print */
t2=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}

/* k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8936,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8945,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t5=t3;
f_8945(t5,(C_word)C_i_nullp(t4));}
else{
t4=t3;
f_8945(t4,C_SCHEME_FALSE);}}

/* k8943 in k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8945,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2107 ##sys#print */
t3=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[387],C_SCHEME_FALSE,*((C_word*)lf[385]+1));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 2110 ##sys#write-char-0 */
t3=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),*((C_word*)lf[385]+1));}}

/* k8952 in k8943 in k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2111 write-err */
t2=((C_word*)t0)[4];
f_8849(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8946 in k8943 in k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2108 write-err */
t2=((C_word*)t0)[4];
f_8849(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8934 in k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8939,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2112 print-call-chain */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[385]+1));}

/* k8937 in k8934 in k8931 in k8928 in a8922 in k8916 in k8913 in a8909 in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2113 flush-output */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[385]+1));}

/* resetports in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall f_8901(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
t1=C_mutate((C_word*)lf[386]+1,((C_word*)((C_word*)t0)[4])[1]);
t2=C_mutate((C_word*)lf[376]+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate((C_word*)lf[385]+1,((C_word*)((C_word*)t0)[2])[1]);
return(t3);}

/* saveports in k8891 in k8888 in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall f_8895(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
t1=C_mutate(((C_word *)((C_word*)t0)[4])+1,*((C_word*)lf[386]+1));
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[376]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,*((C_word*)lf[385]+1));
return(t3);}

/* write-results in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8861,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8871,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_8871(t5,t3);}
else{
t5=(C_word)C_u_i_car(t2);
t6=t4;
f_8871(t6,(C_word)C_eqp(C_SCHEME_UNDEFINED,t5));}}

/* k8869 in write-results in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8876,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* a8875 in k8869 in write-results in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8876(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8876,3,t0,t1,t2);}
/* write-one1324 */
f_8834(t1,t2,*((C_word*)lf[376]+1));}

/* write-err in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8849(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8849,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a8854 in write-err in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8855(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8855,3,t0,t1,t2);}
/* write-one1324 */
f_8834(t1,t2,*((C_word*)lf[385]+1));}

/* write-one in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8834(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8834,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8838,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8843,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 2066 ##sys#with-print-length-limit */
t6=*((C_word*)lf[384]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,*((C_word*)lf[371]+1),t5);}

/* a8842 in write-one in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8843,2,t0,t1);}
/* ##sys#print */
t2=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k8836 in write-one in repl in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2067 ##sys#write-char-0 */
t2=*((C_word*)lf[383]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##sys#clear-trace-buffer in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8828,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub1315(C_SCHEME_UNDEFINED));}

/* ##sys#read-prompt-hook in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8816,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8826,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 2050 repl-prompt */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k8824 in ##sys#read-prompt-hook in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k8821 in ##sys#read-prompt-hook in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2050 ##sys#print */
t2=*((C_word*)lf[377]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,*((C_word*)lf[376]+1));}

/* k8814 in ##sys#read-prompt-hook in k8808 in k8801 in k8797 in k8794 in k8791 in k8788 in k8785 in k8782 in k8779 in k8776 in k8773 in k8770 in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 2051 ##sys#flush-output */
t2=*((C_word*)lf[375]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],*((C_word*)lf[376]+1));}

/* ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr5rv,(void*)f_8380r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_8380r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_8380r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(24);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8383,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8488,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8517,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=t8,a[6]=t9,a[7]=t7,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_notvemptyp(t5))){
t11=(C_word)C_slot(t5,C_fix(0));
t12=C_mutate((C_word*)lf[206]+1,t11);
t13=t10;
f_8517(t13,t12);}
else{
t11=t10;
f_8517(t11,C_SCHEME_UNDEFINED);}}

/* k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8517,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8522,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_8522(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8522(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(19);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8522,NULL,4,t0,t1,t2,t3);}
t4=(C_truep((C_word)C_blockp(t3))?(C_word)C_vectorp(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_block_size(t3);
t7=(C_word)C_fixnum_greaterp(t6,C_fix(1));
t8=(C_truep(t7)?(C_word)C_slot(t3,C_fix(1)):C_fix(0));
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8538,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t10=(C_word)C_eqp(t6,C_fix(1));
if(C_truep(t10)){
t11=t9;
f_8538(t11,C_fix(1));}
else{
t11=(C_word)C_fixnum_greaterp(t6,C_fix(2));
t12=t9;
f_8538(t12,(C_truep(t11)?(C_word)C_slot(t3,C_fix(2)):C_fix(99999)));}}
else{
if(C_truep((C_word)C_blockp(t3))){
if(C_truep((C_word)C_symbolp(t3))){
t5=t3;
t6=(C_word)C_eqp(t5,lf[348]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_TRUE);}
else{
t7=(C_word)C_eqp(t5,lf[349]);
if(C_truep(t7)){
/* eval.scm: 1806 test */
t8=((C_word*)t0)[4];
f_8383(t8,t1,t2,*((C_word*)lf[350]+1),lf[351]);}
else{
t8=(C_word)C_eqp(t5,lf[352]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8667,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1807 test */
t10=((C_word*)t0)[4];
f_8383(t10,t1,t2,t9,lf[353]);}
else{
t9=(C_word)C_eqp(t5,lf[354]);
if(C_truep(t9)){
/* eval.scm: 1808 test */
t10=((C_word*)t0)[4];
f_8383(t10,t1,t2,*((C_word*)lf[355]+1),lf[356]);}
else{
t10=(C_word)C_eqp(t5,lf[357]);
if(C_truep(t10)){
/* eval.scm: 1809 test */
t11=((C_word*)t0)[4];
f_8383(t11,t1,t2,((C_word*)t0)[3],lf[358]);}
else{
t11=(C_word)C_eqp(t5,lf[359]);
if(C_truep(t11)){
/* eval.scm: 1810 test */
t12=((C_word*)t0)[4];
f_8383(t12,t1,t2,*((C_word*)lf[360]+1),lf[361]);}
else{
t12=(C_word)C_eqp(t5,lf[362]);
if(C_truep(t12)){
/* eval.scm: 1811 test */
t13=((C_word*)t0)[4];
f_8383(t13,t1,t2,*((C_word*)lf[363]+1),lf[364]);}
else{
t13=(C_word)C_eqp(t5,lf[365]);
if(C_truep(t13)){
/* eval.scm: 1812 test */
t14=((C_word*)t0)[4];
f_8383(t14,t1,t2,((C_word*)t0)[2],lf[366]);}
else{
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8721,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1813 test */
t15=((C_word*)t0)[4];
f_8383(t15,t1,t2,t14,lf[367]);}}}}}}}}}
else{
t5=(C_word)C_i_not((C_word)C_blockp(t2));
t6=(C_truep(t5)?t5:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t6)){
/* eval.scm: 1815 err */
t7=((C_word*)t0)[6];
f_8395(t7,t1,lf[368]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8740,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
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
f_8395(t6,t1,lf[369]);}}}}

/* k8738 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1818 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8522(t4,((C_word*)t0)[2],t2,t3);}

/* a8720 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8721,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(t2,((C_word*)t0)[2]));}

/* a8666 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8667(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8667,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_symbolp(t2));}

/* k8536 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8538,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8543,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_8543(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* do1193 in k8536 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8543(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8543,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[7]))){
/* eval.scm: 1795 err */
t5=((C_word*)t0)[6];
f_8395(t5,t1,lf[345]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8562,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
/* eval.scm: 1797 err */
t6=((C_word*)t0)[6];
f_8395(t6,t5,lf[346]);}
else{
t6=(C_word)C_i_not((C_word)C_blockp(t2));
t7=(C_truep(t6)?t6:(C_word)C_i_not((C_word)C_pairp(t2)));
if(C_truep(t7)){
/* eval.scm: 1799 err */
t8=((C_word*)t0)[6];
f_8395(t8,t5,lf[347]);}
else{
t8=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1800 walk */
t9=((C_word*)((C_word*)t0)[3])[1];
f_8522(t9,t5,t8,((C_word*)t0)[2]);}}}}

/* k8560 in do1193 in k8536 in walk in k8515 in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_8543(t4,((C_word*)t0)[2],t2,t3);}

/* proper-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8488,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8494,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_8494(t2));}

/* loop in proper-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall f_8494(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
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

/* lambda-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8426,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8430,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1762 ##sys#extended-lambda-list? */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8428 in lambda-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8430,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8438,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_8438(t5,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* loop in k8428 in lambda-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8438(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8438,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_symbolp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8461,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1766 keyword? */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
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

/* k8459 in loop in k8428 in lambda-list? in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* test in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8383(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8383,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8390,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1750 pred */
t6=t3;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k8388 in test in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 1750 err */
t2=((C_word*)t0)[3];
f_8395(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8395(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8395,NULL,3,t0,t1,t2);}
t3=*((C_word*)lf[206]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 1754 get-line-number */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k8397 in err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8406,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8413,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1757 symbol->string */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8424,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1758 symbol->string */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}}

/* k8422 in k8397 in err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1758 string-append */
t2=((C_word*)t0)[4];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[343],t1,lf[344],((C_word*)t0)[2]);}

/* k8411 in k8397 in err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8417,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1757 number->string */
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}

/* k8415 in k8411 in k8397 in err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1757 string-append */
t2=((C_word*)t0)[5];
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[4],lf[340],((C_word*)t0)[3],lf[341],t1,lf[342],((C_word*)t0)[2]);}

/* k8404 in k8397 in err in ##sys#check-syntax in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1755 ##sys#syntax-error-hook */
t2=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* get-line-number in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8344(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8344,3,t0,t1,t2);}
if(C_truep(*((C_word*)lf[334]+1))){
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8366,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1736 ##sys#hash-table-ref */
t5=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[334]+1),t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k8364 in get-line-number in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_i_assq(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##sys#syntax-error-hook in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8336(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_8336r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8336r(t0,t1,t2);}}

static void C_ccall f_8336r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_apply(5,0,t1,*((C_word*)lf[219]+1),lf[335],t2);}

/* ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8282(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8282,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8286,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1711 display-rj */
t5=((C_word*)t0)[2];
f_8261(t5,t3,t4,C_fix(8));}

/* k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1712 display */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[333]);}

/* k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1713 display-rj */
t4=((C_word*)t0)[2];
f_8261(t4,t2,t3,C_fix(8));}

/* k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1714 display */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[332]);}

/* k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
/* eval.scm: 1715 display-rj */
t4=((C_word*)t0)[2];
f_8261(t4,t2,t3,C_fix(8));}

/* k8296 in k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1716 display */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[331]);}

/* k8299 in k8296 in k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
/* eval.scm: 1717 display-rj */
t4=((C_word*)t0)[2];
f_8261(t4,t2,t3,C_fix(8));}

/* k8302 in k8299 in k8296 in k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1718 display */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[330]);}

/* k8305 in k8302 in k8299 in k8296 in k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
/* eval.scm: 1719 display-rj */
t4=((C_word*)t0)[2];
f_8261(t4,t2,t3,C_fix(8));}

/* k8308 in k8305 in k8302 in k8299 in k8296 in k8293 in k8290 in k8287 in k8284 in ##sys#display-times in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1720 display */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[329]);}

/* display-rj in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8261(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8261,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8265,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_zerop(t2))){
t5=t4;
f_8265(2,t5,lf[328]);}
else{
/* eval.scm: 1706 number->string */
C_number_to_string(3,0,t4,t2);}}

/* k8263 in display-rj in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8265,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8268,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],t2);
/* eval.scm: 1708 spaces */
t5=((C_word*)t0)[2];
f_8237(t5,t3,t4);}

/* k8266 in k8263 in display-rj in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1709 display */
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* spaces in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8237(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8237,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8243,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_8243(t6,t1,t2);}

/* do1123 in spaces in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8243,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8253,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1703 display */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_make_character(32));}}

/* k8251 in do1123 in spaces in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_8243(t3,((C_word*)t0)[2],t2);}

/* ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4rv,(void*)f_8114r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_8114r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8114r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(17);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_slot(t4,C_fix(0)));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8120,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8155,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8172,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1684 test */
t12=t10;
f_8155(t12,t11,t2);}

/* k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8172,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8182,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1686 ##sys#repository-path */
t4=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_8182(2,t3,*((C_word*)lf[279]+1));}}}

/* k8221 in k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8223,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 1686 ##sys#append */
t3=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],*((C_word*)lf[279]+1),t2);}

/* k8180 in k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8182,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8184,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8184(t5,((C_word*)t0)[2],t1);}

/* loop in k8180 in k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8184(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8184,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8194,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8208,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1689 string-append */
t7=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,t6,lf[4],((C_word*)t0)[5]);}}

/* k8206 in loop in k8180 in k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1689 test */
t2=((C_word*)t0)[3];
f_8155(t2,((C_word*)t0)[2],t1);}

/* k8192 in loop in k8180 in k8170 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8194(C_word c,C_word t0,C_word t1){
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
f_8184(t3,((C_word*)t0)[4],t2);}}

/* test in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8155(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8155,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[3])?(C_word)C_a_i_list(&a,2,lf[20],*((C_word*)lf[245]+1)):(C_word)C_a_i_list(&a,2,*((C_word*)lf[245]+1),lf[20]));
/* eval.scm: 1679 test2 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8120(t4,t1,t2,t3);}

/* test2 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8120(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8120,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8133,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1673 exists? */
f_8095(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8136,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_u_i_car(t3);
/* eval.scm: 1674 ##sys#string-append */
t6=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t2,t5);}}

/* k8134 in test2 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8142,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1675 exists? */
f_8095(t2,t1);}

/* k8140 in k8134 in test2 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1677 test2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8120(t3,((C_word*)t0)[6],((C_word*)t0)[2],t2);}}

/* k8131 in test2 in ##sys#resolve-include-filename in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* exists? in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8095(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8095,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8099,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1668 ##sys#file-info */
t4=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k8097 in exists? in k8087 in k8083 in k8080 in k8076 in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8099(C_word c,C_word t0,C_word t1){
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

/* initb in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_8062(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8062,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8064,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_8064 in initb in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8064,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8068,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1629 ##sys#hash-table-location */
t4=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k8066 */
static void C_ccall f_8068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(t1,C_fix(1),t2));}

/* null-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8027(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_8027r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_8027r(t0,t1,t2,t3);}}

static void C_ccall f_8027r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_fixnum_lessp(t2,C_fix(4));
t6=(C_truep(t5)?t5:(C_word)C_fixnum_greaterp(t2,C_fix(5)));
if(C_truep(t6)){
/* eval.scm: 1620 ##sys#error */
t7=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,lf[326],lf[327],t2);}
else{
t7=t4;
f_8031(2,t7,C_SCHEME_UNDEFINED);}}

/* k8029 in null-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1623 make-vector */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k8036 in k8029 in null-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8038,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[3]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[3],C_fix(0)):C_SCHEME_FALSE);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,3,lf[317],t1,t3));}

/* scheme-report-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7986(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7986r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7986r(t0,t1,t2,t3);}}

static void C_ccall f_7986r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=t2;
switch(t6){
case C_fix(4):
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8003,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1611 ##sys#copy-env-table */
t8=*((C_word*)lf[319]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[315],C_SCHEME_TRUE,t5);
case C_fix(5):
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8016,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1612 ##sys#copy-env-table */
t8=*((C_word*)lf[319]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,lf[316],C_SCHEME_TRUE,t5);
default:
/* eval.scm: 1613 ##sys#error */
t7=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,lf[323],lf[324],t2);}}

/* k8014 in scheme-report-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8016,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[317],t1,((C_word*)t0)[2]));}

/* k8001 in scheme-report-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_8003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8003,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[317],t1,((C_word*)t0)[2]));}

/* interaction-environment in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7983,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[318]);}

/* ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7867(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7867r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7867r(t0,t1,t2,t3);}}

static void C_ccall f_7867r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(18);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(C_word)C_slot(t2,C_fix(1));
if(C_truep(t6)){
t7=(C_word)C_fix((C_word)C_header_size(t6));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7885,a[2]=t5,a[3]=t6,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7885(t11,t1,C_fix(0),C_SCHEME_END_OF_LIST);}
else{
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7956,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7958,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1598 ##sys#walk-namespace */
t11=*((C_word*)lf[321]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}}

/* a7957 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7958(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7958,3,t0,t1,t2);}
t3=(C_word)C_i_not(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7968,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_7968(2,t5,t3);}
else{
/* eval.scm: 1600 pred */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k7966 in a7957 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7968,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k7954 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* do1057 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7885(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7885,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7903,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_slot(((C_word*)t0)[3],t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7909,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_7909(t10,t5,t6,t3);}}

/* loop in do1057 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7909(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7909,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_i_not(((C_word*)t0)[3]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7928,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_7928(2,t8,t6);}
else{
/* eval.scm: 1592 pred */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t5);}}}

/* k7926 in loop in do1057 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7928,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* eval.scm: 1593 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7909(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* eval.scm: 1594 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7909(t3,((C_word*)t0)[2],t2,((C_word*)t0)[4]);}}

/* k7901 in do1057 in ##sys#environment-symbols in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_7885(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7759(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5rv,(void*)f_7759r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_7759r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_7759r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t6=(C_word)C_notvemptyp(t5);
t7=(C_truep(t6)?(C_word)C_slot(t5,C_fix(0)):C_SCHEME_FALSE);
t8=(C_word)C_block_size(t2);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7769,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t2,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 1559 ##sys#make-vector */
t10=*((C_word*)lf[156]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,t8,C_SCHEME_END_OF_LIST);}

/* k7767 in ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7769,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7774,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_7774(t5,((C_word*)t0)[2],C_fix(0));}

/* do1040 in k7767 in ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7774(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7774,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[7]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7795,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7801,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_7801(t8,t3,t4);}}

/* copy in do1040 in k7767 in ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7801(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7801,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_i_not(((C_word*)t0)[5]);
t6=(C_truep(t5)?t5:(C_word)C_u_i_memq(t4,((C_word*)t0)[5]));
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(1));
t8=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[3]:(C_word)C_slot(t3,C_fix(2)));
t9=(C_word)C_a_i_vector(&a,3,t4,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7834,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
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

/* k7832 in copy in do1040 in k7767 in ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7834,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7793 in do1040 in k7767 in ##sys#copy-env-table in k7750 in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7774(t4,((C_word*)t0)[2],t3);}

/* ##sys#string->c-identifier in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7696,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7700,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1540 string-copy */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k7698 in ##sys#string->c-identifier in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7700,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7708,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7708(t6,((C_word*)t0)[2],C_fix(0));}

/* do1025 in k7698 in ##sys#string->c-identifier in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7708(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7708,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7728,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_u_i_char_alphabeticp(t3))){
t5=t4;
f_7728(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_u_i_char_numericp(t3);
t6=(C_word)C_i_not(t5);
t7=t4;
f_7728(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,C_fix(0))));}}}

/* k7726 in do1025 in k7698 in ##sys#string->c-identifier in k7692 in k7689 in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7728(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(t1)?(C_word)C_setsubchar(((C_word*)t0)[5],((C_word*)t0)[4],C_make_character(95)):C_SCHEME_UNDEFINED);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7708(t4,((C_word*)t0)[2],t3);}

/* set-extension-specifier! in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7655,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_assq(t2,*((C_word*)lf[310]+1));
if(C_truep(t4)){
t5=(C_word)C_slot(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7670,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(t4,C_fix(1),t6));}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7684,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_a_i_cons(&a,2,t2,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,*((C_word*)lf[310]+1));
t8=C_mutate((C_word*)lf[310]+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* a7683 in set-extension-specifier! in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7684,3,t0,t1,t2);}
/* eval.scm: 1495 proc */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* a7669 in set-extension-specifier! in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7670,3,t0,t1,t2);}
/* eval.scm: 1493 proc */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7256(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7256,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7259,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7280,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7531,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t7=(C_word)C_u_i_car(t2);
t8=t6;
f_7531(t8,(C_word)C_i_symbolp(t7));}
else{
t7=t6;
f_7531(t7,C_SCHEME_FALSE);}}

/* k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7531,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t3=(C_word)C_u_i_assq(t2,*((C_word*)lf[310]+1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7540,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[6]);}
else{
/* eval.scm: 1481 ##sys#error */
t4=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[5],lf[311],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[6]))){
/* eval.scm: 1483 doit */
t2=((C_word*)t0)[2];
f_7280(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* eval.scm: 1484 ##sys#error */
t2=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],lf[312],((C_word*)t0)[6]);}}}

/* k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7540,2,t0,t1);}
if(C_truep((C_word)C_i_stringp(t1))){
t2=(C_word)C_a_i_list(&a,2,lf[231],t1);
/* eval.scm: 1469 values */
C_values(4,0,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7566,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1471 vector->list */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}
else{
/* eval.scm: 1480 ##sys#do-the-right-thing */
t2=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3]);}}}

/* k7564 in k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7566,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7568,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7568(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k7564 in k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7568(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7568,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7586,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1475 reverse */
t6=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7591,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7601,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1476 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}}

/* a7600 in loop in k7564 in k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7601,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t6=(C_truep(t3)?t3:((C_word*)t0)[3]);
/* eval.scm: 1477 loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_7568(t7,t1,t4,t5,t6);}

/* a7590 in loop in k7564 in k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7591,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[3]);
/* eval.scm: 1476 ##sys#do-the-right-thing */
t3=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k7584 in loop in k7564 in k7538 in k7529 in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7586,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
/* eval.scm: 1475 values */
C_values(4,0,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7280(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7280,NULL,3,t0,t1,t2);}
t3=(C_word)C_u_i_memq(t2,lf[29]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7290(2,t5,t3);}
else{
if(C_truep(((C_word*)t0)[3])){
t5=t4;
f_7290(2,t5,(C_word)C_u_i_memq(t2,lf[31]));}
else{
/* eval.scm: 1422 ##sys#feature? */
t5=*((C_word*)lf[309]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}}

/* k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7290(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7290,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 1423 values */
C_values(4,0,((C_word*)t0)[5],lf[301],C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[4];
if(C_truep((C_truep((C_word)C_eqp(t2,lf[302]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t2,lf[303]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7302,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1425 ##sys#->feature-id */
t4=*((C_word*)lf[266]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[4],*((C_word*)lf[5]+1)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7339,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_a_i_list(&a,2,lf[306],((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,2,lf[91],t4);
t6=t3;
f_7339(t6,(C_word)C_a_i_list(&a,2,lf[178],t5));}
else{
t4=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[4]);
t5=t3;
f_7339(t5,(C_word)C_a_i_list(&a,2,lf[267],t4));}}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[4],*((C_word*)lf[7]+1)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7366,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1437 ##sys#extension-information */
t4=*((C_word*)lf[290]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[308]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1447 ##sys#extension-information */
t4=*((C_word*)lf[290]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[308]);}}}}}

/* k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7424,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_assq(lf[307],t1);
t3=(C_word)C_u_i_assq(lf[294],t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7436,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
/* eval.scm: 1451 add-req */
t5=((C_word*)t0)[2];
f_7259(t5,t4,((C_word*)t0)[3]);}
else{
t5=t4;
f_7436(2,t5,C_SCHEME_UNDEFINED);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7505,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1463 add-req */
t3=((C_word*)t0)[2];
f_7259(t3,t2,((C_word*)t0)[3]);}}

/* k7503 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7505,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[166],t2);
/* eval.scm: 1464 values */
C_values(4,0,((C_word*)t0)[2],t3,C_SCHEME_FALSE);}

/* k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7447,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,lf[164],t4);
t6=t3;
f_7451(t6,(C_word)C_a_i_list(&a,1,t5));}
else{
t4=t3;
f_7451(t4,C_SCHEME_END_OF_LIST);}}

/* k7449 in k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7451(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7451,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7455,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(((C_word*)t0)[4])?C_SCHEME_FALSE:((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_7455(t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7469,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7471,tmp=(C_word)a,a+=2,tmp);
t6=(C_truep(((C_word*)t0)[4])?(C_word)C_slot(((C_word*)t0)[4],C_fix(1)):(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));
/* map */
t7=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}

/* a7470 in k7449 in k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7471(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7471,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[91],t2));}

/* k7467 in k7449 in k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7469,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[166],t1);
t3=((C_word*)t0)[2];
f_7455(t3,(C_word)C_a_i_list(&a,1,t2));}

/* k7453 in k7449 in k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7455(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1408 ##sys#append */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7445 in k7434 in k7422 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7447,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
/* eval.scm: 1452 values */
C_values(4,0,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k7364 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7366(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7366,2,t0,t1);}
t2=(C_word)C_u_i_assq(lf[307],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7380,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t5=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,lf[164],t5);
t7=t4;
f_7384(t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t5=t4;
f_7384(t5,C_SCHEME_END_OF_LIST);}}

/* k7382 in k7364 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7384(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7384,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7392,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_a_i_list(&a,2,lf[306],((C_word*)t0)[2]);
t4=(C_word)C_a_i_list(&a,2,lf[91],t3);
t5=t2;
f_7392(t5,(C_word)C_a_i_list(&a,2,lf[178],t4));}
else{
t3=(C_word)C_a_i_list(&a,2,lf[91],((C_word*)t0)[2]);
t4=t2;
f_7392(t4,(C_word)C_a_i_list(&a,2,lf[267],t3));}}

/* k7390 in k7382 in k7364 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7392,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 1408 ##sys#append */
t3=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7378 in k7364 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7380,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[107],t1);
/* eval.scm: 1439 values */
C_values(4,0,((C_word*)t0)[2],t2,C_SCHEME_TRUE);}

/* k7337 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1431 values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k7300 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7305,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_u_i_memq(t1,*((C_word*)lf[181]+1)))){
t3=t2;
f_7305(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7314,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7322,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7326,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1427 ##sys#symbol->string */
t6=*((C_word*)lf[272]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k7324 in k7300 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1427 ##sys#resolve-include-filename */
t2=*((C_word*)lf[305]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k7320 in k7300 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1427 ##sys#load */
t2=*((C_word*)lf[225]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k7312 in k7300 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7314,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],*((C_word*)lf[181]+1));
t3=C_mutate((C_word*)lf[181]+1,t2);
t4=((C_word*)t0)[2];
f_7305(t4,t3);}

/* k7303 in k7300 in k7288 in doit in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7305(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1429 values */
C_values(4,0,((C_word*)t0)[2],lf[304],C_SCHEME_TRUE);}

/* add-req in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7259,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7274,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1413 hash-table-update! */
t5=*((C_word*)lf[298]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,*((C_word*)lf[299]+1),lf[300],t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a7273 in add-req in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7274,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}

/* a7267 in add-req in ##sys#do-the-right-thing in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7268(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7268,3,t0,t1,t2);}
/* lset-adjoin */
t3=*((C_word*)lf[296]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[297]+1),t2,((C_word*)t0)[2]);}

/* ##sys#lookup-runtime-requirements in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7207,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7213,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7213(t6,t1,t2);}

/* loop1 in ##sys#lookup-runtime-requirements in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7213,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7227,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_i_car(t2);
/* eval.scm: 1402 ##sys#extension-information */
t5=*((C_word*)lf[290]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,C_SCHEME_FALSE);}}

/* k7225 in loop1 in ##sys#lookup-runtime-requirements in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_u_i_assq(lf[294],t1);
t4=t2;
f_7230(t4,(C_truep(t3)?(C_word)C_slot(t3,C_fix(1)):C_SCHEME_FALSE));}
else{
t3=t2;
f_7230(t3,C_SCHEME_FALSE);}}

/* k7228 in k7225 in loop1 in ##sys#lookup-runtime-requirements in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7230,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7237,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1406 loop1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7213(t5,t3,t4);}

/* k7235 in k7228 in k7225 in loop1 in ##sys#lookup-runtime-requirements in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1401 append */
t2=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7200,3,t0,t1,t2);}
/* eval.scm: 1390 ##sys#extension-information */
t3=*((C_word*)lf[290]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[292]);}

/* ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7169,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1383 ##sys#canonicalize-extension-path */
t5=*((C_word*)lf[270]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7198,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1384 ##sys#repository-path */
t4=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k7196 in k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1384 string-append */
t2=((C_word*)t0)[4];
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],t1,lf[4],((C_word*)t0)[2],lf[291]);}

/* k7174 in k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7179,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7194,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1385 string-append */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[23]);}

/* k7192 in k7174 in k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1385 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7177 in k7174 in k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7179,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* f_7186 in k7177 in k7174 in k7171 in ##sys#extension-information in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7186(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7186,3,t0,t1,t2);}
/* with-input-from-file932 */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#require in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7156(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr2r,(void*)f_7156r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7156r(t0,t1,t2);}}

static void C_ccall f_7156r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7162,tmp=(C_word)a,a+=2,tmp);
/* for-each */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a7161 in ##sys#require in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7162,3,t0,t1,t2);}
/* ##sys#load-extension */
t3=*((C_word*)lf[283]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[289]);}

/* ##sys#provided? in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7142(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7142,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7153,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1364 ##sys#canonicalize-extension-path */
t4=*((C_word*)lf[270]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[288]);}

/* k7151 in ##sys#provided? in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_member(t1,*((C_word*)lf[281]+1));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* ##sys#provide in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7125(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr2r,(void*)f_7125r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7125r(t0,t1,t2);}}

static void C_ccall f_7125r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7131,tmp=(C_word)a,a+=2,tmp);
/* for-each */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a7130 in ##sys#provide in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7131,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7135,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1357 ##sys#canonicalize-extension-path */
t4=*((C_word*)lf[270]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[286]);}

/* k7133 in a7130 in ##sys#provide in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7135,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,*((C_word*)lf[281]+1));
t3=C_mutate((C_word*)lf[281]+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_7060r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7060r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7064,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t5)[1]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7123,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1338 string->symbol */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t5)[1]);}
else{
t7=t6;
f_7064(t7,C_SCHEME_UNDEFINED);}}

/* k7121 in ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7064(t3,t2);}

/* k7062 in ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7064,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1340 ##sys#canonicalize-extension-path */
t3=*((C_word*)lf[270]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[2]);}

/* k7065 in k7062 in ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7067,2,t0,t1);}
t2=(C_word)C_i_member(t1,*((C_word*)lf[281]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[5]+1)))){
/* eval.scm: 1343 ##sys#load-library */
t3=*((C_word*)lf[260]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7085,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 1345 ##sys#find-extension */
t4=*((C_word*)lf[278]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_SCHEME_TRUE);}}}

/* k7083 in k7065 in k7062 in ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7085,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7091,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1347 ##sys#load */
t3=*((C_word*)lf[225]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,t1,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[4];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_TRUE:(C_word)C_u_i_car(t2));
if(C_truep(t4)){
/* eval.scm: 1350 ##sys#error */
t5=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],((C_word*)t0)[3],lf[284],((C_word*)((C_word*)t0)[2])[1]);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}

/* k7089 in k7083 in k7065 in k7062 in ##sys#load-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7091,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],*((C_word*)lf[281]+1));
t3=C_mutate((C_word*)lf[281]+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}

/* ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6983,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6986,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7017,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7057,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1326 ##sys#repository-path */
t7=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k7055 in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7050,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm: 1327 ##sys#append */
t4=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[279]+1),lf[280]);}
else{
t4=t3;
f_7050(2,t4,C_SCHEME_END_OF_LIST);}}

/* k7048 in k7055 in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1326 ##sys#append */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7015 in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7017,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7019,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_7019(t5,((C_word*)t0)[2],t1);}

/* loop in k7015 in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_7019(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7019,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7032,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1330 check */
t5=((C_word*)t0)[2];
f_6986(t5,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k7030 in loop in k7015 in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7032(C_word c,C_word t0,C_word t1){
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
f_7019(t3,((C_word*)t0)[4],t2);}}

/* check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6986,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6990,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1322 string-append */
t4=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,lf[4],((C_word*)t0)[2]);}

/* k6988 in check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6996,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7010,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1323 ##sys#string-append */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,*((C_word*)lf[245]+1));}

/* k7008 in k6988 in check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1323 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6994 in k6988 in check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6999,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_6999(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7006,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1324 ##sys#string-append */
t4=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],lf[20]);}}

/* k7004 in k6994 in k6988 in check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_7006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1324 file-exists? */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6997 in k6994 in k6988 in check in ##sys#find-extension in k6978 in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6832,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6835,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6842,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t6=t5;
f_6842(2,t6,t2);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* eval.scm: 1286 ##sys#symbol->string */
t6=*((C_word*)lf[272]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
if(C_truep((C_word)C_i_listp(t2))){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6925,a[2]=t4,a[3]=t7,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_6925(t9,t5,t2);}
else{
t6=t5;
f_6842(2,t6,C_SCHEME_UNDEFINED);}}}}

/* loop in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6925(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6925,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[273]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6942,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(t3))){
/* eval.scm: 1293 ##sys#symbol->string */
t5=*((C_word*)lf[272]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
if(C_truep((C_word)C_i_stringp(t3))){
t5=t4;
f_6942(2,t5,t3);}
else{
/* eval.scm: 1295 err */
t5=((C_word*)t0)[2];
f_6835(t5,t4);}}}}

/* k6940 in loop in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6942(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6942,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?lf[274]:lf[4]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6950,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* eval.scm: 1299 loop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6925(t7,t5,t6);}

/* k6948 in k6940 in loop in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1291 string-append */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6840 in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6842,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6847,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6847(t5,((C_word*)t0)[2],t1);}

/* check in k6840 in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6847(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6847,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* eval.scm: 1302 err */
t5=((C_word*)t0)[3];
f_6835(t5,t1);}
else{
t5=(C_word)C_subchar(t2,C_fix(0));
t6=(C_word)C_eqp(lf[2],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6873,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1304 ##sys#substring */
t8=*((C_word*)lf[235]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,t2,C_fix(1),t3);}
else{
t7=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t8=(C_word)C_subchar(t2,t7);
t9=(C_word)C_eqp(lf[2],t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6886,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* eval.scm: 1306 ##sys#substring */
t12=*((C_word*)lf[235]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t10,t2,C_fix(0),t11);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t2);}}}}

/* k6884 in check in k6840 in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1306 check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6847(t2,((C_word*)t0)[2],t1);}

/* k6871 in check in k6840 in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1304 check */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6847(t2,((C_word*)t0)[2],t1);}

/* err in ##sys#canonicalize-extension-path in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6835(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6835,NULL,2,t0,t1);}
/* eval.scm: 1284 ##sys#error */
t2=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[3],lf[271],((C_word*)t0)[2]);}

/* ##sys#split-at-separator in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6776,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6785,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6785(t8,t1,C_SCHEME_END_OF_LIST,C_fix(0),C_fix(0));}

/* loop in ##sys#split-at-separator in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6785(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_6785,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6803,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1272 ##sys#substring */
t6=*((C_word*)lf[235]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[4],t4,((C_word*)t0)[6]);}
else{
t5=(C_word)C_eqp((C_word)C_subchar(((C_word*)t0)[4],t3),((C_word*)t0)[3]);
if(C_truep(t5)){
t6=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6823,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1275 ##sys#substring */
t8=*((C_word*)lf[235]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[4],t4,t3);}
else{
t6=(C_word)C_u_fixnum_plus(t3,C_fix(1));
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

/* k6821 in loop in ##sys#split-at-separator in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6823,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* eval.scm: 1275 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_6785(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2],((C_word*)t0)[2]);}

/* k6801 in loop in ##sys#split-at-separator in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6803,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* eval.scm: 1272 reverse */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6750(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_6750r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_6750r(t0,t1,t2,t3);}}

static void C_ccall f_6750r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6754,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
/* eval.scm: 1263 ##sys#load-library */
t7=*((C_word*)lf[260]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t2,t6);}

/* k6752 in load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6754,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}}

/* k6762 in k6752 in load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1264 ##sys#error */
t2=*((C_word*)lf[152]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[267],lf[268],((C_word*)t0)[2],t1);}

/* ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6644(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6644,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 1236 ##sys#->feature-id */
t5=*((C_word*)lf[266]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6648,2,t0,t1);}
t2=(C_word)C_u_i_memq(t1,*((C_word*)lf[181]+1));
if(C_truep(t2)){
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6657,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=t3;
f_6657(t4,(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* eval.scm: 1241 ##sys#string-append */
t6=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,*((C_word*)lf[256]+1));}}}

/* k6738 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6744,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1242 dynamic-load-libraries */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6742 in k6738 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6744,2,t0,t1);}
t2=((C_word*)t0)[3];
f_6657(t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6657(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6657,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6660,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6726,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1247 ##sys#string->c-identifier */
t6=*((C_word*)lf[265]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k6724 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1245 string-append */
t2=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[263],t1,lf[264]);}

/* k6720 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1244 ##sys#make-c-string */
t2=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6663,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6709,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1249 load-verbose */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k6707 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6709,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1250 display */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[262]);}
else{
t2=((C_word*)t0)[3];
f_6663(2,t2,C_SCHEME_UNDEFINED);}}

/* k6710 in k6707 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1251 display */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6713 in k6710 in k6707 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1252 display */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[261]);}

/* k6661 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6663,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6668,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_6668(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k6661 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6668(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6668,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6681,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6702,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1255 ##sys#make-c-string */
t6=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k6700 in loop in k6661 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1255 ##sys#dload */
t2=*((C_word*)lf[237]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6679 in loop in k6661 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6681,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6684,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[4],*((C_word*)lf[181]+1)))){
t3=t2;
f_6684(t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],*((C_word*)lf[181]+1));
t4=C_mutate((C_word*)lf[181]+1,t3);
t5=t2;
f_6684(t5,t4);}}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 1258 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6668(t3,((C_word*)t0)[5],t2);}}

/* k6682 in k6679 in loop in k6661 in k6658 in k6655 in k6646 in ##sys#load-library in k6640 in k6633 in k6629 in k6625 in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6684(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6579(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6579r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6579r(t0,t1,t2,t3);}}

static void C_ccall f_6579r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6583,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6622,tmp=(C_word)a,a+=2,tmp);
/* ##sys#get-keyword */
t6=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[255],t3,t5);}

/* a6621 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6622,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6619,tmp=(C_word)a,a+=2,tmp);
/* ##sys#get-keyword */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[254],((C_word*)t0)[2],t3);}

/* a6618 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6619,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6589,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6616,tmp=(C_word)a,a+=2,tmp);
/* ##sys#get-keyword */
t4=*((C_word*)lf[92]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[253],((C_word*)t0)[2],t3);}

/* a6615 in k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6616,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k6587 in k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6589(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6589,2,t0,t1);}
t2=*((C_word*)lf[250]+1);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6594,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6602,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6608,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t9=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,((C_word*)t0)[2],t6,t7,t8);}

/* a6607 in k6587 in k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6608,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* a6601 in k6587 in k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6602,2,t0,t1);}
/* eval.scm: 1203 ##sys#load */
t2=*((C_word*)lf[225]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,t1,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6593 in k6587 in k6584 in k6581 in load-noisily in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6594,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* load-relative in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_6521r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6521r(t0,t1,t2,t3);}}

static void C_ccall f_6521r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(16);
t4=*((C_word*)lf[250]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6527,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6571,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a6570 in load-relative in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6571,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* a6534 in load-relative in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6543,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_subchar(((C_word*)t0)[2],C_fix(0));
t4=(C_word)C_eqp(lf[2],t3);
if(C_truep(t4)){
t5=t2;
f_6543(2,t5,((C_word*)t0)[2]);}
else{
/* eval.scm: 1198 ##sys#string-append */
t5=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,*((C_word*)lf[211]+1),((C_word*)t0)[2]);}}

/* k6541 in a6534 in load-relative in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[3];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_u_i_car(t2));
/* eval.scm: 1195 ##sys#load */
t5=*((C_word*)lf[225]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],t1,t4,C_SCHEME_FALSE);}

/* a6526 in load-relative in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6527,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6477(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_6477r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6477r(t0,t1,t2,t3);}}

static void C_ccall f_6477r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(16);
t4=*((C_word*)lf[250]+1);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6483,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6491,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6513,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t1,t8,t9,t10);}

/* a6512 in load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6513,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* a6490 in load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6491,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_u_i_car(t2));
/* eval.scm: 1191 ##sys#load */
t5=*((C_word*)lf[225]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* a6482 in load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6483,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,*((C_word*)lf[250]+1));
t3=C_mutate((C_word*)lf[250]+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[227]+1));}

/* ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr5r,(void*)f_6090r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_6090r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_6090r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(24);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t6,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t4,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=t3,tmp=(C_word)a,a+=16,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6427,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6432,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-timer715793 */
t10=t9;
f_6432(t10,t1);}
else{
t10=(C_word)C_u_i_car(t5);
t11=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-printer716791 */
t12=t8;
f_6427(t12,t1,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body713718 */
t14=t7;
f_6092(t14,t1,t10,t12);}}}

/* def-timer715 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6432,NULL,2,t0,t1);}
/* def-printer716791 */
t2=((C_word*)t0)[2];
f_6427(t2,t1,C_SCHEME_FALSE);}

/* def-printer716 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6427(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6427,NULL,3,t0,t1,t2);}
/* body713718 */
t3=((C_word*)t0)[2];
f_6092(t3,t1,t2,C_SCHEME_FALSE);}

/* body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6092(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6092,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=((C_word*)t0)[13],a[16]=t1,a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[15],tmp=(C_word)a,a+=19,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[7])[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6426,a[2]=t4,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1125 ##sys#expand-home-path */
t6=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=t4;
f_6096(t5,C_SCHEME_UNDEFINED);}}

/* k6424 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_6096(t3,t2);}

/* k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6096(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6096,NULL,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6360,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1128 port? */
t6=*((C_word*)lf[248]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)((C_word*)t0)[7])[1]);}

/* k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6360,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6099(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1130 ##sys#file-info */
t3=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
/* eval.scm: 1121 ##sys#signal-hook */
t3=*((C_word*)lf[219]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[246],lf[231],lf[247],t2);}}}

/* k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_slot(t1,C_fix(4));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t2;
f_6378(t6,(C_word)C_i_not(t3));}
else{
t4=t2;
f_6378(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6378(t3,C_SCHEME_FALSE);}}

/* k6376 in k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6378,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6099(2,t2,((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1136 ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[3])[1],*((C_word*)lf[245]+1));}}

/* k6379 in k6376 in k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1137 ##sys#file-info */
t3=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k6385 in k6379 in k6376 in k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6387,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6099(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1139 ##sys#string-append */
t3=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[20]);}}

/* k6388 in k6385 in k6379 in k6376 in k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1140 ##sys#file-info */
t3=*((C_word*)lf[244]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k6394 in k6388 in k6385 in k6379 in k6376 in k6373 in k6358 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6099(2,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[5];
f_6099(2,t3,(C_truep(t2)?C_SCHEME_FALSE:((C_word*)((C_word*)t0)[2])[1]));}}

/* k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6099(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6099,2,t0,t1);}
t2=((C_word*)t0)[18];
t3=(C_truep(t2)?t2:((C_word*)t0)[17]);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6105,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t3,a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t1,a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t5=(C_word)C_i_stringp(((C_word*)((C_word*)t0)[7])[1]);
t6=(C_truep(t5)?(C_word)C_i_not(t1):C_SCHEME_FALSE);
if(C_truep(t6)){
/* eval.scm: 1145 ##sys#signal-hook */
t7=*((C_word*)lf[219]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,lf[240],lf[231],lf[241],((C_word*)((C_word*)t0)[7])[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6351,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1146 load-verbose */
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k6349 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6351,2,t0,t1);}
t2=(C_truep(t1)?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1147 display */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[243]);}
else{
t3=((C_word*)t0)[2];
f_6105(2,t3,C_SCHEME_UNDEFINED);}}

/* k6340 in k6349 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1148 display */
t3=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6343 in k6340 in k6349 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1149 display */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[242]);}

/* k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6108,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],tmp=(C_word)a,a+=15,tmp);
if(C_truep(((C_word*)t0)[15])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6299,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6327,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1151 ##sys#make-c-string */
t5=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[15]);}
else{
t3=t2;
f_6108(2,t3,C_SCHEME_FALSE);}}

/* k6325 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1151 ##sys#dload */
t2=*((C_word*)lf[237]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6297 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6299,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_6108(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1152 has-sep? */
f_6044(t2,((C_word*)t0)[3]);}}

/* k6321 in k6297 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6323,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_6108(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6315,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6319,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1153 string-append */
t4=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[239],lf[4],((C_word*)t0)[2]);}}

/* k6317 in k6321 in k6297 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1153 ##sys#make-c-string */
t2=*((C_word*)lf[238]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6313 in k6321 in k6297 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1153 ##sys#dload */
t2=*((C_word*)lf[237]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6111,a[2]=((C_word*)t0)[14],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_6111(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* eval.scm: 1154 call-with-current-continuation */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}}

/* a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6116(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6116,3,t0,t1,t2);}
t3=C_SCHEME_TRUE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t0)[13];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6120,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t6,a[15]=t4,a[16]=t2,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[13])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[13],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1160 has-sep? */
f_6044(t8,((C_word*)t0)[13]);}
else{
t8=t7;
f_6120(2,t8,C_SCHEME_FALSE);}}

/* k6284 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(t1,C_fix(1));
/* eval.scm: 1161 ##sys#substring */
t3=*((C_word*)lf[235]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
f_6120(2,t2,lf[236]);}}

/* k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6120(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6120,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6121,a[2]=((C_word*)t0)[16],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6130,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t13,a[7]=t11,a[8]=t9,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t15=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6271,a[2]=t13,a[3]=t11,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],tmp=(C_word)a,a+=10,tmp);
/* ##sys#dynamic-wind */
t17=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t17+1)))(5,t17,((C_word*)t0)[2],t14,t15,t16);}

/* a6270 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[226]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[210]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[211]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[209]+1));
t6=C_mutate((C_word*)lf[226]+1,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[210]+1,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[211]+1,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[209]+1,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,*((C_word*)lf[227]+1));}

/* a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6148,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[5])){
/* eval.scm: 1163 open-input-file */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_6148(2,t3,((C_word*)((C_word*)t0)[2])[1]);}}

/* k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6153,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6156,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6262,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1164 ##sys#dynamic-wind */
t5=*((C_word*)lf[234]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[2],t2,t3,t4);}

/* a6261 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6262,2,t0,t1);}
/* eval.scm: 1186 close-input-port */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1167 peek-char */
t3=*((C_word*)lf[233]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6163,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6256,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_dlerror),C_fix(0));}
else{
t4=t2;
f_6163(2,t4,C_SCHEME_UNDEFINED);}}

/* k6254 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1169 ##sys#error */
t2=*((C_word*)lf[152]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[231],lf[232],((C_word*)t0)[2],t1);}

/* k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6163,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 1170 read */
t3=((C_word*)t0)[10];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[9]);}

/* k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6166,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6171,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t3,tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_6171(t5,((C_word*)t0)[2],t1);}

/* do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6171(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6171,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm: 1173 printer */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_6181(2,t4,C_SCHEME_UNDEFINED);}}}

/* k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1174 ##sys#call-with-values */
C_u_call_with_values(4,0,t2,t3,t4);}

/* a6226 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6227(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_6227r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6227r(t0,t1,t2);}}

static void C_ccall f_6227r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* a6235 in a6226 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6236,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6240,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1183 write */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k6238 in a6235 in a6226 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1184 newline */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6193,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6200,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1177 ##sys#start-timer */
t3=*((C_word*)lf[230]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* eval.scm: 1178 evproc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}}

/* k6198 in a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6211,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 1177 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a6210 in k6198 in a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_6211r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6211r(t0,t1,t2);}}

static void C_ccall f_6211r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6215,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6222,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1177 ##sys#stop-timer */
t5=*((C_word*)lf[229]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k6220 in a6210 in k6198 in a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1177 ##sys#display-times */
t2=*((C_word*)lf[228]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6213 in a6210 in k6198 in a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6204 in k6198 in a6192 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6205,2,t0,t1);}
/* eval.scm: 1177 evproc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k6182 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6191,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 1171 read */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6189 in k6182 in k6179 in do766 in k6164 in k6161 in k6158 in a6155 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_6171(t2,((C_word*)t0)[2],t1);}

/* a6152 in k6146 in a6143 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6153,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a6129 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6130(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6130,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,*((C_word*)lf[226]+1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,*((C_word*)lf[210]+1));
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,*((C_word*)lf[211]+1));
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,*((C_word*)lf[209]+1));
t6=C_mutate((C_word*)lf[226]+1,((C_word*)((C_word*)t0)[5])[1]);
t7=C_mutate((C_word*)lf[210]+1,((C_word*)((C_word*)t0)[4])[1]);
t8=C_mutate((C_word*)lf[211]+1,((C_word*)((C_word*)t0)[3])[1]);
t9=C_mutate((C_word*)lf[209]+1,((C_word*)((C_word*)t0)[2])[1]);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,*((C_word*)lf[227]+1));}

/* f_6121 in k6118 in a6115 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6121,2,t0,t1);}
/* eval.scm: 1162 abrt */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* k6109 in k6106 in k6103 in k6097 in k6094 in body713 in ##sys#load in k6040 in k5960 in k5861 in k1728 */
static void C_ccall f_6111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* has-sep? in k6040 in k5960 in k5861 in k1728 */
static void C_fcall f_6044(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6044,NULL,2,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6054,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6054(t5,t4));}

/* loop in has-sep? in k6040 in k5960 in k5861 in k1728 */
static C_word C_fcall f_6054(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
if(C_truep((C_word)C_i_zerop(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(lf[2],(C_word)C_subchar(((C_word*)t0)[2],t1));
if(C_truep(t2)){
return(t1);}
else{
t3=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}}

/* set-dynamic-load-mode! in k5960 in k5861 in k1728 */
static void C_ccall f_5969(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5969,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?t2:(C_word)C_a_i_list(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5976,a[2]=t8,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5981,a[2]=t6,a[3]=t8,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5981(t13,t9,t4);}

/* loop in set-dynamic-load-mode! in k5960 in k5861 in k1728 */
static void C_fcall f_5981(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5981,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5994,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[215]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t7=t4;
f_5994(2,t7,t6);}
else{
t6=(C_word)C_eqp(t3,lf[216]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t8=t4;
f_5994(2,t8,t7);}
else{
t7=(C_word)C_eqp(t3,lf[217]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t9=t4;
f_5994(2,t9,t8);}
else{
t8=(C_word)C_eqp(t3,lf[218]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t10=t4;
f_5994(2,t10,t9);}
else{
t9=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1100 ##sys#signal-hook */
t10=*((C_word*)lf[219]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t4,lf[213],lf[220],t9);}}}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k5992 in loop in set-dynamic-load-mode! in k5960 in k5861 in k1728 */
static void C_ccall f_5994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* eval.scm: 1101 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5981(t3,((C_word*)t0)[2],t2);}

/* k5974 in set-dynamic-load-mode! in k5960 in k5861 in k1728 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1102 ##sys#set-dlopen-flags! */
t2=*((C_word*)lf[214]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* f_5964 in k5960 in k5861 in k1728 */
static void C_ccall f_5964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5964,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* ##sys#decompose-lambda-list in k5861 in k1728 */
static void C_ccall f_5880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5880,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5883,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5893,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_5893(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* loop in ##sys#decompose-lambda-list in k5861 in k1728 */
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5893,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5907,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1070 reverse */
t7=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5926,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_a_i_cons(&a,2,t2,t3);
/* eval.scm: 1072 reverse */
t8=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
if(C_truep((C_word)C_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=(C_word)C_u_fixnum_plus(t4,C_fix(1));
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
f_5883(t6,t1);}}}
else{
/* eval.scm: 1071 err */
t6=((C_word*)t0)[2];
f_5883(t6,t1);}}}

/* k5924 in loop in ##sys#decompose-lambda-list in k5861 in k1728 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1072 k */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5905 in loop in ##sys#decompose-lambda-list in k5861 in k1728 */
static void C_ccall f_5907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 1070 k */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* err in ##sys#decompose-lambda-list in k5861 in k1728 */
static void C_fcall f_5883(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5883,NULL,2,t0,t1);}
t2=C_set_block_item(lf[206],0,C_SCHEME_FALSE);
/* eval.scm: 1067 ##sys#syntax-error-hook */
t3=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[207],((C_word*)t0)[2]);}

/* eval in k5861 in k1728 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5866r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5866r(t0,t1,t2,t3);}}

static void C_ccall f_5866r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5874,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1055 ##sys#eval-handler */
t5=*((C_word*)lf[203]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k5872 in eval in k5861 in k1728 */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5878,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 1056 ##sys#interpreter-toplevel-macroexpand-hook */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5876 in k5872 in eval in k5861 in k1728 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* ##sys#compile-to-closure in k1728 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+36)){
C_save_and_reclaim((void*)tr5r,(void*)f_3663r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3663r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3663r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(36);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3666,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3820,a[2]=t7,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3873,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3879,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3885,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3891,a[2]=t9,a[3]=t13,a[4]=t7,a[5]=t4,a[6]=((C_word*)t0)[2],a[7]=t15,a[8]=t17,a[9]=t12,a[10]=t6,tmp=(C_word)a,a+=11,tmp));
t19=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5611,a[2]=t15,a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t20=(C_word)C_fixnum_greaterp(*((C_word*)lf[135]+1),C_fix(0));
t21=(C_word)C_i_nullp(t5);
t22=(C_truep(t21)?C_SCHEME_FALSE:(C_word)C_u_i_car(t5));
/* eval.scm: 1034 compile */
t23=((C_word*)t15)[1];
f_3891(t23,t1,t2,t3,C_SCHEME_FALSE,t20,t22);}

/* compile-call in ##sys#compile-to-closure in k1728 */
static void C_fcall f_5611(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5611,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5615,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 998  compile */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3891(t8,t6,t7,t3,C_SCHEME_FALSE,t4,t5);}

/* k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5615(C_word c,C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5615,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5585,tmp=(C_word)a,a+=2,tmp);
t4=f_5585(t2,C_fix(0));
t5=((C_word*)t0)[8];
switch(t4){
case C_SCHEME_FALSE:
/* eval.scm: 1003 ##sys#syntax-error-hook */
t6=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[7],lf[202],((C_word*)t0)[8]);
case C_fix(0):
t6=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5637,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
case C_fix(1):
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5656,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1007 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3891(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(2):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1011 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3891(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(3):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5719,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1016 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3891(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(4):
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t7=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 1022 compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3891(t8,t6,t7,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
default:
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5804,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5828,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 1029 ##sys#map */
t8=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,t2);}}

/* a5827 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5828(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5828,3,t0,t1,t2);}
/* eval.scm: 1029 compile */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3891(t3,t1,t2,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5802 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5804,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5805,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));}

/* f_5805 in k5802 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5805,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5816,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5814 */
static void C_ccall f_5816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5820,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5822,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1032 ##sys#map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a5821 in k5814 */
static void C_ccall f_5822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5822,3,t0,t1,t2);}
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[2]);}

/* k5818 in k5814 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5759 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1023 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5762 in k5759 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm: 1024 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7]);}

/* k5765 in k5762 in k5759 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5770,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 1025 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(3)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k5768 in k5765 in k5762 in k5759 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5770,2,t0,t1);}
t2=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp));}

/* f_5771 in k5768 in k5765 in k5762 in k5759 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5771,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5782,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5780 */
static void C_ccall f_5782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k5784 in k5780 */
static void C_ccall f_5786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5790,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5788 in k5784 in k5780 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5792 in k5788 in k5784 in k5780 */
static void C_ccall f_5794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5797,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5795 in k5792 in k5788 in k5784 in k5780 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5717 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 1017 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5720 in k5717 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 1018 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(2)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[7]);}

/* k5723 in k5720 in k5717 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));}

/* f_5726 in k5723 in k5720 in k5717 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5726(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5726,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5735 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k5739 in k5735 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5743 in k5739 in k5735 */
static void C_ccall f_5745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5748,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5746 in k5743 in k5739 in k5735 */
static void C_ccall f_5748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5682 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5687,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 1012 compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3891(t3,t2,(C_word)C_u_i_list_ref(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k5685 in k5682 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5688,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));}

/* f_5688 in k5685 in k5682 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5688,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5699,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5697 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k5701 in k5697 */
static void C_ccall f_5703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5706,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5704 in k5701 in k5697 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5654 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5656,2,t0,t1);}
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5657,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));}

/* f_5657 in k5654 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5657,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5668,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5666 */
static void C_ccall f_5668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5671,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5669 in k5666 */
static void C_ccall f_5671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* f_5637 in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5637,3,t0,t1,t2);}
t3=f_3873(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 1006 fn */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5645 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* loop in k5613 in compile-call in ##sys#compile-to-closure in k1728 */
static C_word C_fcall f_5585(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
if(C_truep((C_word)C_i_nullp(t1))){
return(t2);}
else{
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3891(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[25],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3891,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_symbolp(t2))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3903,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3909,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 650  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t7,t8);}
else{
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[10],a[8]=t4,a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=((C_word*)t0)[8],a[12]=t6,a[13]=t5,a[14]=((C_word*)t0)[9],a[15]=t1,a[16]=t2,tmp=(C_word)a,a+=17,tmp);
/* eval.scm: 671  ##sys#number? */
t8=*((C_word*)lf[201]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}}

/* k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[32],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3961,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[16];
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3968,tmp=(C_word)a,a+=2,tmp));
case C_fix(0):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3976,tmp=(C_word)a,a+=2,tmp));
case C_fix(1):
t3=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3984,tmp=(C_word)a,a+=2,tmp));
default:
t3=(C_word)C_eqp(t2,C_fix(2));
t4=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3992,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[16],tmp=(C_word)a,a+=3,tmp)));}}
else{
if(C_truep((C_word)C_booleanp(((C_word*)t0)[16]))){
t2=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)t0)[16])?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4005,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4007,tmp=(C_word)a,a+=2,tmp)));}
else{
t2=(C_word)C_charp(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=t3;
f_4017(t4,t2);}
else{
t4=(C_word)C_eofp(((C_word*)t0)[16]);
t5=t3;
f_4017(t5,(C_truep(t4)?t4:(C_word)C_i_stringp(((C_word*)t0)[16])));}}}}

/* k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_fcall f_4017(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4017,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[16];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4018,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[15]))){
t2=(C_word)C_slot(((C_word*)t0)[15],C_fix(0));
if(C_truep((C_word)C_i_symbolp(t2))){
t3=f_3879(((C_word*)t0)[13],((C_word*)t0)[15],((C_word*)t0)[12]);
t4=(C_word)C_slot(((C_word*)t0)[15],C_fix(0));
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[11],tmp=(C_word)a,a+=17,tmp);
/* eval.scm: 690  defined? */
t6=((C_word*)t0)[4];
f_3708(t6,t5,t4,((C_word*)t0)[10]);}
else{
t3=f_3879(((C_word*)t0)[13],((C_word*)t0)[15],((C_word*)t0)[12]);
/* eval.scm: 979  compile-call */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5611(t4,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[10],((C_word*)t0)[13],((C_word*)t0)[12]);}}
else{
/* eval.scm: 686  ##sys#syntax-error-hook */
t2=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[16],lf[200],((C_word*)t0)[15]);}}}

/* k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4046,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 691  compile-call */
t2=((C_word*)((C_word*)t0)[16])[1];
f_5611(t2,((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12],((C_word*)t0)[11]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4052,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* eval.scm: 692  macroexpand-1-checked */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3820(t3,t2,((C_word*)t0)[14],((C_word*)t0)[13]);}}

/* k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4052(C_word c,C_word t0,C_word t1){
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
C_word ab[121],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4052,2,t0,t1);}
t2=(C_word)C_eqp(t1,((C_word*)t0)[15]);
if(C_truep(t2)){
t3=(C_word)C_eqp(((C_word*)t0)[14],lf[91]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4067,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 697  ##sys#check-syntax */
t5=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[91],((C_word*)t0)[15],lf[143],C_SCHEME_FALSE);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[14],lf[144]);
if(C_truep(t4)){
t5=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
if(C_truep(*((C_word*)lf[126]+1))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4143,a[2]=((C_word*)t0)[13],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 712  ##sys#hash-table-location */
t7=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,*((C_word*)lf[126]+1),t5,C_SCHEME_TRUE);}
else{
t6=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=t5,tmp=(C_word)a,a+=3,tmp));}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[14],lf[145]);
if(C_truep(t5)){
t6=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 717  compile */
t7=((C_word*)((C_word*)t0)[12])[1];
f_3891(t7,((C_word*)t0)[13],t6,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[14],lf[146]);
if(C_truep(t6)){
t7=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 720  compile */
t8=((C_word*)((C_word*)t0)[12])[1];
f_3891(t8,((C_word*)t0)[13],t7,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[14],lf[111]);
if(C_truep(t7)){
t8=((C_word*)t0)[13];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4183,tmp=(C_word)a,a+=2,tmp));}
else{
t8=(C_word)C_eqp(((C_word*)t0)[14],lf[147]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4193,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 725  ##sys#check-syntax */
t10=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,t9,lf[147],((C_word*)t0)[15],lf[149],C_SCHEME_FALSE);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[14],lf[107]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[15],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 734  ##sys#check-syntax */
t11=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,lf[107],((C_word*)t0)[15],lf[151],C_SCHEME_FALSE);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[14],lf[70]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[14],lf[72]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[15],tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 750  ##sys#check-syntax */
t13=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t12,lf[70],((C_word*)t0)[15],lf[155],C_SCHEME_FALSE);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[14],lf[59]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 772  ##sys#check-syntax */
t14=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t13,lf[59],((C_word*)t0)[15],lf[157],C_SCHEME_FALSE);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[14],lf[93]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4802,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[15],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 822  ##sys#check-syntax */
t15=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t15+1)))(6,t15,t14,lf[93],((C_word*)t0)[15],lf[162],C_SCHEME_FALSE);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[14],lf[60]);
if(C_truep(t14)){
t15=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
t16=(C_word)C_a_i_cons(&a,2,lf[93],t15);
/* eval.scm: 916  compile */
t17=((C_word*)((C_word*)t0)[12])[1];
f_3891(t17,((C_word*)t0)[13],t16,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[14],lf[163]);
if(C_truep(t15)){
t16=(C_word)C_u_i_cddr(((C_word*)t0)[15]);
t17=(C_word)C_a_i_cons(&a,2,lf[93],t16);
t18=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 919  compile */
t19=((C_word*)((C_word*)t0)[12])[1];
f_3891(t19,((C_word*)t0)[13],t17,((C_word*)t0)[11],t18,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[14],lf[164]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t18=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5235,tmp=(C_word)a,a+=2,tmp);
t19=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
/* map */
t20=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t17,t18,t19);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[14],lf[168]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5259,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t19=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5265,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=((C_word*)t21)[1];
f_5265(t23,t18,t19);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[14],lf[171]);
t19=(C_truep(t18)?t18:(C_word)C_eqp(((C_word*)t0)[14],lf[172]));
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
t22=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 941  ##sys#compile-to-closure */
t23=*((C_word*)lf[139]+1);
((C_proc6)(void*)(*((C_word*)t23+1)))(6,t23,t21,t22,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[14],lf[174]);
if(C_truep(t20)){
t21=(C_word)C_u_i_cadr(((C_word*)t0)[15]);
/* eval.scm: 945  compile */
t22=((C_word*)((C_word*)t0)[12])[1];
f_3891(t22,((C_word*)t0)[13],t21,((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t21=(C_word)C_eqp(((C_word*)t0)[14],lf[175]);
t22=(C_truep(t21)?t21:(C_word)C_eqp(((C_word*)t0)[14],lf[176]));
if(C_truep(t22)){
/* eval.scm: 948  compile */
t23=((C_word*)((C_word*)t0)[12])[1];
f_3891(t23,((C_word*)t0)[13],lf[177],((C_word*)t0)[11],C_SCHEME_FALSE,((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[14],lf[178]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_u_i_memq(lf[180],*((C_word*)lf[181]+1)))){
t25=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5366,tmp=(C_word)a,a+=2,tmp);
t26=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
/* for-each */
t27=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t27+1)))(4,t27,t24,t25,t26);}
else{
/* eval.scm: 953  ##sys#warn */
t25=*((C_word*)lf[183]+1);
((C_proc4)(void*)(*((C_word*)t25+1)))(4,t25,t24,lf[184],((C_word*)t0)[15]);}}
else{
t24=(C_word)C_eqp(((C_word*)t0)[14],lf[185]);
t25=(C_truep(t24)?t24:(C_word)C_eqp(((C_word*)t0)[14],lf[186]));
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5405,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[15],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 957  cadadr */
t27=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t27+1)))(3,t27,t26,((C_word*)t0)[15]);}
else{
t26=(C_word)C_eqp(((C_word*)t0)[14],lf[187]);
t27=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t26)){
t28=t27;
f_5418(t28,t26);}
else{
t28=(C_word)C_eqp(((C_word*)t0)[14],lf[191]);
if(C_truep(t28)){
t29=t27;
f_5418(t29,t28);}
else{
t29=(C_word)C_eqp(((C_word*)t0)[14],lf[192]);
if(C_truep(t29)){
t30=t27;
f_5418(t30,t29);}
else{
t30=(C_word)C_eqp(((C_word*)t0)[14],lf[193]);
if(C_truep(t30)){
t31=t27;
f_5418(t31,t30);}
else{
t31=(C_word)C_eqp(((C_word*)t0)[14],lf[194]);
if(C_truep(t31)){
t32=t27;
f_5418(t32,t31);}
else{
t32=(C_word)C_eqp(((C_word*)t0)[14],lf[195]);
if(C_truep(t32)){
t33=t27;
f_5418(t33,t32);}
else{
t33=(C_word)C_eqp(((C_word*)t0)[14],lf[196]);
if(C_truep(t33)){
t34=t27;
f_5418(t34,t33);}
else{
t34=(C_word)C_eqp(((C_word*)t0)[14],lf[197]);
if(C_truep(t34)){
t35=t27;
f_5418(t35,t34);}
else{
t35=(C_word)C_eqp(((C_word*)t0)[14],lf[198]);
t36=t27;
f_5418(t36,(C_truep(t35)?t35:(C_word)C_eqp(((C_word*)t0)[14],lf[199])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}
else{
/* eval.scm: 975  compile */
t3=((C_word*)((C_word*)t0)[12])[1];
f_3891(t3,((C_word*)t0)[13],t1,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* k5416 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_fcall f_5418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
/* eval.scm: 964  ##sys#syntax-error-hook */
t2=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[8],lf[188],((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[62]);
if(C_truep(t2)){
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* eval.scm: 967  compile-call */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5611(t4,((C_word*)t0)[8],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[189]);
if(C_truep(t3)){
/* eval.scm: 971  ##sys#syntax-error-hook */
t4=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[8],lf[190],((C_word*)t0)[7]);}
else{
/* eval.scm: 973  compile-call */
t4=((C_word*)((C_word*)t0)[5])[1];
f_5611(t4,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}}}

/* k5403 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5405,2,t0,t1);}
t2=(C_word)C_u_i_cddr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[70],t3);
/* eval.scm: 957  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5365 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5366,3,t0,t1,t2);}
t3=(C_word)C_u_i_cadr(t2);
/* eval.scm: 952  ##compiler#process-declaration */
t4=*((C_word*)lf[182]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* k5353 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 954  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3891(t2,((C_word*)t0)[5],lf[179],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5315 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5309 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 942  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3891(t2,((C_word*)t0)[5],lf[173],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_fcall f_5265(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5265,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[169]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5277,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5287,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 936  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}}

/* a5286 in loop in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5287,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5295,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 937  loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_5265(t6,t4,t5);}

/* k5293 in a5286 in loop in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5295,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[107],((C_word*)t0)[2],t1));}

/* a5276 in loop in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5277,2,t0,t1);}
t2=(C_word)C_u_i_cadar(((C_word*)t0)[2]);
/* eval.scm: 936  ##sys#do-the-right-thing */
t3=*((C_word*)lf[170]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* k5257 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 932  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3891(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5234 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5235,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 922  ##sys#compile-to-closure */
t4=*((C_word*)lf[139]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k5240 in a5234 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5207,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_apply(4,0,t2,*((C_word*)lf[166]+1),t1);}

/* k5205 in k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5210,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 924  ##sys#lookup-runtime-requirements */
t3=*((C_word*)lf[167]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5208 in k5205 in k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_nullp(t1))){
t3=t2;
f_5217(t3,lf[165]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5229,tmp=(C_word)a,a+=2,tmp);
/* map */
t5=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}}

/* a5228 in k5208 in k5205 in k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5229(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5229,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[91],t2));}

/* k5225 in k5208 in k5205 in k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5227,2,t0,t1);}
t2=((C_word*)t0)[2];
f_5217(t2,(C_word)C_a_i_cons(&a,2,lf[166],t1));}

/* k5215 in k5208 in k5205 in k5202 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_fcall f_5217(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 925  compile */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3891(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[9]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_u_i_cddr(((C_word*)t0)[9]);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t0)[8];
t9=(C_truep(t8)?t8:lf[158]);
t10=(C_word)C_a_i_cons(&a,2,t9,((C_word*)t4)[1]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4814,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t7,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=t10,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5139,a[2]=t11,a[3]=t7,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 826  ##sys#extended-lambda-list? */
t13=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,((C_word*)t4)[1]);}

/* k5137 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5139,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 827  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
f_4814(2,t2,C_SCHEME_UNDEFINED);}}

/* a5149 in k5137 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5150,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a5143 in k5137 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5144,2,t0,t1);}
/* eval.scm: 829  ##sys#expand-extended-lambda-list */
t2=*((C_word*)lf[85]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[141]+1));}

/* k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4819,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 832  ##sys#decompose-lambda-list */
t3=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4819,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[9]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t4,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5128,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[6];
t10=(C_truep(t9)?t9:((C_word*)t0)[5]);
/* eval.scm: 838  ##sys#canonicalize-body */
t11=*((C_word*)lf[106]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t7,((C_word*)((C_word*)t0)[2])[1],t8,((C_word*)t0)[4],t10);}

/* a5127 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5128,3,t0,t1,t2);}
/* defined?295 */
t3=((C_word*)t0)[3];
f_3708(t3,t1,t2,((C_word*)t0)[2]);}

/* k5120 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[6];
t3=(C_truep(t2)?t2:((C_word*)t0)[5]);
/* eval.scm: 837  ##sys#compile-to-closure */
t4=*((C_word*)lf[139]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[86],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4826,2,t0,t1);}
t2=((C_word*)t0)[8];
switch(t2){
case C_fix(0):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp)));
case C_fix(1):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp)));
case C_fix(2):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp)));
case C_fix(3):
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp)));
default:
t3=(C_word)C_eqp(t2,C_fix(4));
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp)):(C_truep(((C_word*)t0)[6])?(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp):(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp))));}}

/* f_5084 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5084,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5090,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 907  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5089 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_5090r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5090r(t0,t1,t2);}}

static void C_ccall f_5090r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(t3,((C_word*)t0)[4]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5114,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t5,*((C_word*)lf[159]+1),t2);}
else{
/* eval.scm: 911  ##sys#error */
t5=*((C_word*)lf[152]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[160],((C_word*)t0)[4],t3);}}

/* k5112 in a5089 */
static void C_ccall f_5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5114,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5061 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5061,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 900  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5066 */
static void C_ccall f_5067(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr2r,(void*)f_5067r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5067r(t0,t1,t2);}}

static void C_ccall f_5067r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(17);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5079,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5083,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
if(C_truep((C_word)C_i_nullp(t2))){
t6=t4;
f_5083(2,t6,(C_word)C_a_i_list(&a,1,t2));}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5552,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5552(t9,t4,t5,t2,C_SCHEME_FALSE);}}

/* do581 in a5066 */
static void C_fcall f_5552(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5552,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,1,t3);
t7=(C_word)C_i_setslot(t4,C_fix(1),t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)t0)[3]);}
else{
t6=(C_word)C_u_fixnum_difference(t2,C_fix(1));
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

/* k5081 in a5066 */
static void C_ccall f_5083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[159]+1),t1);}

/* k5077 in a5066 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5079,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5039 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5039,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 893  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5044 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5045,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5057,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 895  ##sys#vector */
t7=*((C_word*)lf[159]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t2,t3,t4,t5);}

/* k5055 in a5044 */
static void C_ccall f_5057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5057,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_5020 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_5020(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5020,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 888  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5025 */
static void C_ccall f_5026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr6r,(void*)f_5026r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_5026r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_5026r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t7=(C_word)C_a_i_vector(&a,5,t2,t3,t4,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t8);}

/* f_4992 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4992,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 882  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4997 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4998,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_vector(&a,3,t2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_4973 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4973,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4979,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 877  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4978 */
static void C_ccall f_4979(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_4979r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_4979r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_4979r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=(C_word)C_a_i_vector(&a,4,t2,t3,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,t7);}

/* f_4945 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4945,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 871  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4950 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4951,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_vector(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_4926 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4926,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4932,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 866  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4931 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4r,(void*)f_4932r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4932r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4932r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t5=(C_word)C_a_i_vector(&a,3,t2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t6);}

/* f_4898 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4898,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4904,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 860  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4903 */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4904,3,t0,t1,t2);}
t3=(C_word)C_a_i_vector(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* f_4879 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4879(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4879,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 855  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4884 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4885r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4885r(t0,t1,t2,t3);}}

static void C_ccall f_4885r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(C_word)C_a_i_vector(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t5);}

/* f_4855 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4855(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4855,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 850  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4860 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4861,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f_4836 in k4824 in a4818 in k4812 in k4800 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4836,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4842,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 845  decorate */
f_3885(t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4841 */
static void C_ccall f_4842(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4842r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4842r(t0,t1,t2);}}

static void C_ccall f_4842r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(C_word)C_a_i_vector(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}

/* k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4464,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[10]);
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t2,a[10]=((C_word*)t0)[8],a[11]=t3,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4789,tmp=(C_word)a,a+=2,tmp);
/* map */
t6=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a4788 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4789,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_car(t2));}

/* k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4473,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4479,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_i_cddr(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4783,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 778  ##sys#canonicalize-body */
t7=*((C_word*)lf[106]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,t5,t6,((C_word*)t0)[4],((C_word*)t0)[6]);}

/* a4782 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4783,3,t0,t1,t2);}
/* defined?295 */
t3=((C_word*)t0)[3];
f_3708(t3,t1,t2,((C_word*)t0)[2]);}

/* k4775 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 777  ##sys#compile-to-closure */
t2=*((C_word*)lf[139]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4479(C_word c,C_word t0,C_word t1){
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
C_word ab[48],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4479,2,t0,t1);}
switch(((C_word*)t0)[10]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4488,a[2]=t1,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_cadar(((C_word*)t0)[8]);
t4=(C_word)C_u_i_car(((C_word*)t0)[7]);
/* eval.scm: 783  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,t2,t3,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3]);
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_u_i_cadar(((C_word*)t0)[8]);
t4=(C_word)C_u_i_car(((C_word*)t0)[7]);
/* eval.scm: 786  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,t2,t3,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3]);
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4571,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_u_i_cadar(((C_word*)t0)[8]);
t4=(C_word)C_u_i_car(((C_word*)t0)[7]);
/* eval.scm: 790  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,t2,t3,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3]);
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_u_i_cadar(((C_word*)t0)[8]);
t4=(C_word)C_u_i_car(((C_word*)t0)[7]);
/* eval.scm: 798  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,t2,t3,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[3]);
default:
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4761,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* map */
t4=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}}

/* a4760 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4761,3,t0,t1,t2);}
t3=(C_word)C_u_i_cadr(t2);
t4=(C_word)C_u_i_car(t2);
/* eval.scm: 812  compile */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3891(t5,t1,t3,((C_word*)t0)[4],t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4712 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4714,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4715,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));}

/* f_4715 in k4712 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4715(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4715,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 814  ##sys#make-vector */
t4=*((C_word*)lf[156]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}

/* k4717 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4731,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4731(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* do463 in k4717 */
static void C_fcall f_4731(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4731,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4756,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t3,C_fix(0));
t6=t5;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}

/* k4754 in do463 in k4717 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_4731(t5,((C_word*)t0)[2],t3,t4);}

/* k4720 in k4717 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 799  cadadr */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* k4697 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 799  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3891(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4639 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
t2=(C_word)C_u_i_cddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4647,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t4=(C_word)C_u_i_cadar(t2);
t5=(C_word)C_u_i_caddr(((C_word*)t0)[7]);
/* eval.scm: 801  compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3891(t6,t3,t4,((C_word*)t0)[5],t5,((C_word*)t0)[4],((C_word*)t0)[3]);}

/* k4645 in k4639 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t1,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4683,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 802  cadadr */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4681 in k4645 in k4639 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_cadddr(((C_word*)t0)[7]);
/* eval.scm: 802  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3891(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4648 in k4645 in k4639 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4650,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));}

/* f_4651 in k4648 in k4645 in k4639 in k4636 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4651(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4651,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4665 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}

/* k4669 in k4665 */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4673 in k4669 in k4665 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4677 in k4673 in k4669 in k4665 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4679,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4569 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 791  cadadr */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[10]);}

/* k4615 in k4569 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 791  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3891(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4572 in k4569 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4574,2,t0,t1);}
t2=(C_word)C_u_i_cddr(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4580,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_u_i_cadar(t2);
t5=(C_word)C_u_i_caddr(((C_word*)t0)[6]);
/* eval.scm: 793  compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3891(t6,t3,t4,((C_word*)t0)[4],t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4578 in k4572 in k4569 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4580,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));}

/* f_4581 in k4578 in k4572 in k4569 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4581,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4597,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4595 */
static void C_ccall f_4597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k4599 in k4595 */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4603 in k4599 in k4595 */
static void C_ccall f_4605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4605,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4520 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4525,a[2]=t1,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm: 787  cadadr */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4548 in k4520 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_cadr(((C_word*)t0)[7]);
/* eval.scm: 787  compile */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3891(t3,((C_word*)t0)[5],t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4523 in k4520 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4525,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));}

/* f_4526 in k4523 in k4520 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4526,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4540 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4546,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k4544 in k4540 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4486 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));}

/* f_4489 in k4486 in k4477 in k4471 in k4462 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4489,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4505,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4503 */
static void C_ccall f_4505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4505,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,1,t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4358,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4372,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4376,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_i_caddr(((C_word*)t0)[6]);
/* eval.scm: 753  compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3891(t6,t4,t5,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_zerop(((C_word*)t0)[5]);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4430,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4443,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp)));}
else{
if(C_truep(*((C_word*)lf[126]+1))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4388,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 756  ##sys#hash-table-location */
t4=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[126]+1),((C_word*)t0)[2],*((C_word*)lf[127]+1));}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));}}}

/* f_4415 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4415,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4421 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* k4386 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4391(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 760  ##sys#error */
t3=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[154],((C_word*)t0)[2]);}}

/* k4389 in k4386 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4391,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4398,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp)));}

/* f_4407 in k4389 in k4386 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4407,2,t0,t1);}
/* eval.scm: 763  ##sys#error */
t2=*((C_word*)lf[152]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[153],((C_word*)t0)[2]);}

/* f_4398 in k4389 in k4386 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4398(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4398,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4406,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4404 */
static void C_ccall f_4406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* f_4443 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4443,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4449 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot((C_word)C_u_i_list_ref(((C_word*)t0)[4],((C_word*)t0)[3]),((C_word*)t0)[2],t1));}

/* f_4430 in k4374 in a4371 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4430,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4440 */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* a4365 in k4356 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4366,2,t0,t1);}
/* eval.scm: 752  lookup */
f_3666(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4250,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
t3=(C_word)C_i_length(t2);
switch(t3){
case C_fix(0):
/* eval.scm: 738  compile */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3891(t4,((C_word*)t0)[5],lf[150],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
case C_fix(1):
t4=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 739  compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3891(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
case C_fix(2):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 740  compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3891(t6,t4,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);
default:
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* eval.scm: 744  compile */
t6=((C_word*)((C_word*)t0)[6])[1];
f_3891(t6,t4,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4307 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_u_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 745  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3891(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4310 in k4307 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,lf[107],t4);
/* eval.scm: 746  compile */
t6=((C_word*)((C_word*)t0)[5])[1];
f_3891(t6,t2,t5,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4313 in k4310 in k4307 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4315,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp));}

/* f_4316 in k4313 in k4310 in k4307 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4316,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4318 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k4321 in k4318 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4285 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4287,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4290,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 741  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3891(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4288 in k4285 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4290,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp));}

/* f_4291 in k4288 in k4285 in k4248 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4291,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4295,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4293 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4191 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_u_i_cadr(((C_word*)t0)[6]);
/* eval.scm: 726  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3891(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4194 in k4191 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_u_i_caddr(((C_word*)t0)[6]);
/* eval.scm: 727  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3891(t4,t2,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4197 in k4194 in k4191 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_u_i_cdddr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_cadddr(((C_word*)t0)[6]);
/* eval.scm: 729  compile */
t5=((C_word*)((C_word*)t0)[5])[1];
f_3891(t5,t2,t4,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* eval.scm: 730  compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3891(t4,t2,lf[148],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4200 in k4197 in k4194 in k4191 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4202,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4203,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));}

/* f_4203 in k4200 in k4197 in k4194 in k4191 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4203,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4208 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* f_4183 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4183,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* f_4149 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4149,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k4141 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4143,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=t1,tmp=(C_word)a,a+=3,tmp));}

/* f_4144 in k4141 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4144,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(1)));}

/* k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4067,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[3]);
switch(t2){
case C_fix(-1):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4077,tmp=(C_word)a,a+=2,tmp));
case C_fix(0):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4085,tmp=(C_word)a,a+=2,tmp));
case C_fix(1):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4093,tmp=(C_word)a,a+=2,tmp));
case C_fix(2):
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4101,tmp=(C_word)a,a+=2,tmp));
case C_SCHEME_TRUE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4109,tmp=(C_word)a,a+=2,tmp));
case C_SCHEME_FALSE:
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4117,tmp=(C_word)a,a+=2,tmp));
default:
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4125,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=t2,tmp=(C_word)a,a+=3,tmp)));}}

/* f_4127 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4127,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4125 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4125(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4125,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}

/* f_4117 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4117,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4109 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4109(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4109,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_4101 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4101,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_4093 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4093,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_4085 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4085,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_4077 in k4065 in k4050 in k4044 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4077(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4077,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* f_4018 in k4015 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4018(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4018,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_4007 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4007,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* f_4005 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4005,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3994 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3994,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_3992 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3992,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(2));}

/* f_3984 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(1));}

/* f_3976 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3976,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}

/* f_3968 in k3959 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3968(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3968,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(-1));}

/* a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3909,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(t4)){
t5=(C_word)C_i_zerop(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3942,a[2]=t3,tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3951,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp)));}
else{
if(C_truep(*((C_word*)lf[126]+1))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 653  ##sys#hash-table-location */
t6=*((C_word*)lf[125]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[126]+1),((C_word*)t0)[2],C_SCHEME_TRUE);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));}}}

/* f_3934 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3934(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3934,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(0)));}

/* k3920 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3925,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_3925(2,t3,C_SCHEME_UNDEFINED);}
else{
/* eval.scm: 654  ##sys#syntax-error-hook */
t3=*((C_word*)lf[141]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[142],((C_word*)t0)[2]);}}

/* k3923 in k3920 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3925,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));}

/* f_3926 in k3923 in k3920 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3926(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3926,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(((C_word*)t0)[2],C_fix(1)));}

/* f_3951 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3951,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot((C_word)C_u_i_list_ref(t2,((C_word*)t0)[3]),((C_word*)t0)[2]));}

/* f_3942 in a3908 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3942,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t3,((C_word*)t0)[2]));}

/* a3902 in compile in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3903,2,t0,t1);}
/* eval.scm: 650  lookup */
f_3666(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* decorate in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3885(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3885,NULL,5,t1,t2,t3,t4,t5);}
/* eval.scm: 646  ##sys#eval-decorator */
t6=*((C_word*)lf[128]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t2,t3,t4,t5);}

/* emit-syntax-trace-info in ##sys#compile-to-closure in k1728 */
static C_word C_fcall f_3879(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
return((C_truep(t1)?(C_word)C_emit_syntax_trace_info(t2,t3,*((C_word*)lf[140]+1)):C_SCHEME_UNDEFINED));}

/* emit-trace-info in ##sys#compile-to-closure in k1728 */
static C_word C_fcall f_3873(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
return((C_truep(t1)?(C_word)C_emit_eval_trace_info(t2,t3,*((C_word*)lf[140]+1)):C_SCHEME_UNDEFINED));}

/* macroexpand-1-checked in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3820(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3820,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 626  ##sys#macroexpand-1-local */
t5=*((C_word*)lf[75]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,C_SCHEME_END_OF_LIST);}

/* k3822 in macroexpand-1-checked in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3824,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_slot(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3839,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(t2,lf[59]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 629  defined? */
t6=((C_word*)t0)[2];
f_3708(t6,t5,lf[59],((C_word*)t0)[3]);}
else{
t5=t3;
f_3839(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* k3869 in k3822 in macroexpand-1-checked in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3839(t2,(C_word)C_i_not(t1));}

/* k3837 in k3822 in macroexpand-1-checked in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3839,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_3848(t5,(C_word)C_i_symbolp(t4));}
else{
t4=t3;
f_3848(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k3846 in k3837 in k3822 in macroexpand-1-checked in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3848(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* eval.scm: 632  macroexpand-1-checked */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3820(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* defined? in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3708(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3708,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3714,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3720,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a3719 in defined? in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3720,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}

/* a3713 in defined? in ##sys#compile-to-closure in k1728 */
static void C_ccall f_3714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3714,2,t0,t1);}
/* eval.scm: 601  lookup */
f_3666(t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lookup in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3666(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3666,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3672(t7,t1,t3,C_fix(0));}

/* loop in lookup in ##sys#compile-to-closure in k1728 */
static void C_fcall f_3672(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3672,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* eval.scm: 596  values */
C_values(4,0,t1,C_SCHEME_FALSE,((C_word*)t0)[3]);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=((C_word*)t0)[3];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=f_3790(t6,t4,C_fix(0));
if(C_truep(t7)){
/* eval.scm: 597  values */
C_values(4,0,t1,t3,t7);}
else{
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_u_fixnum_plus(t3,C_fix(1));
/* eval.scm: 598  loop */
t11=t1;
t12=t8;
t13=t9;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}}

/* loop in loop in lookup in ##sys#compile-to-closure in k1728 */
static C_word C_fcall f_3790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
if(C_truep((C_word)C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=(C_word)C_slot(t1,C_fix(0));
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=(C_word)C_slot(t1,C_fix(1));
t6=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* ##sys#eval-decorator in k1728 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3619,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3625,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 567  ##sys#decorate-lambda */
t8=*((C_word*)lf[133]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,t6,t7);}

/* a3637 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3638,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3646,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3650,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 574  open-output-string */
t6=*((C_word*)lf[132]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3648 in a3637 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3653,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 575  write */
t3=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3651 in k3648 in a3637 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 576  get-output-string */
t3=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3654 in k3651 in k3648 in a3637 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 573  ##sys#make-lambda-info */
t2=*((C_word*)lf[129]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3644 in a3637 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}

/* a3624 in ##sys#eval-decorator in k1728 */
static void C_ccall f_3625(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3625,3,t0,t1,t2);}
t3=(C_word)C_immp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_lambdainfop(t2)));}

/* ##sys#hash-table-location in k1728 */
static void C_ccall f_3559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3559,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3563,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_block_size(t2);
/* eval.scm: 547  ##sys#hash-symbol */
t7=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t3,t6);}

/* k3561 in ##sys#hash-table-location in k1728 */
static void C_ccall f_3563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3563,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3571,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3571(t6,((C_word*)t0)[2],t2);}

/* loop in k3561 in ##sys#hash-table-location in k1728 */
static void C_fcall f_3571(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3571,NULL,3,t0,t1,t2);}
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

/* ##sys#hash-table-for-each in k1728 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3513,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3519,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3519(t8,t1,C_fix(0));}

/* do253 in ##sys#hash-table-for-each in k1728 */
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3519,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3529,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_slot(((C_word*)t0)[2],t2);
/* eval.scm: 539  ##sys#for-each */
t6=*((C_word*)lf[123]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}}

/* a3537 in do253 in ##sys#hash-table-for-each in k1728 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3538,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 540  p */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* k3527 in do253 in ##sys#hash-table-for-each in k1728 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3519(t3,((C_word*)t0)[2],t2);}

/* ##sys#hash-table-set! in k1728 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3458,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3462,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 525  ##sys#hash-symbol */
t6=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,(C_word)C_block_size(t2));}

/* k3460 in ##sys#hash-table-set! in k1728 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3470,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_3470(t6,((C_word*)t0)[2],t2);}

/* loop in k3460 in ##sys#hash-table-set! in k1728 */
static void C_fcall f_3470(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3470,NULL,3,t0,t1,t2);}
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

/* ##sys#hash-table-ref in k1728 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3413,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3417,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 514  ##sys#hash-symbol */
t5=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,(C_word)C_block_size(t2));}

/* k3415 in ##sys#hash-table-ref in k1728 */
static void C_ccall f_3417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3417,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_3426(t3,t2));}

/* loop in k3415 in ##sys#hash-table-ref in k1728 */
static C_word C_fcall f_3426(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
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

/* ##sys#hash-symbol in k1728 */
static void C_ccall f_3398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3398,4,t0,t1,t2,t3);}
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

/* ##sys#expand-curried-define in k1728 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_3338,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3341,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3393,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 496  loop */
t10=((C_word*)t7)[1];
f_3341(t10,t9,t2,t3);}

/* k3391 in ##sys#expand-curried-define in k1728 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],t1));}

/* loop in ##sys#expand-curried-define in k1728 */
static void C_fcall f_3341(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3341,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_slot(t2,C_fix(0));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,lf[93],t8));}
else{
t5=(C_word)C_slot(t2,C_fix(0));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
t8=(C_word)C_a_i_cons(&a,2,lf[93],t7);
t9=(C_word)C_a_i_list(&a,1,t8);
/* eval.scm: 495  loop */
t15=t1;
t16=t5;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* ##sys#match-expression in k1728 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3247,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3250,a[2]=t8,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 483  mwalk */
t11=((C_word*)t8)[1];
f_3250(t11,t10,t2,t3);}

/* k3334 in ##sys#match-expression in k1728 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}

/* mwalk in ##sys#match-expression in k1728 */
static void C_fcall f_3250(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3250,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not((C_word)C_blockp(t3));
t5=(C_truep(t4)?t4:(C_word)C_i_not((C_word)C_pairp(t3)));
if(C_truep(t5)){
t6=(C_word)C_u_i_assq(t3,((C_word*)((C_word*)t0)[4])[1]);
if(C_truep(t6)){
t7=(C_word)C_slot(t6,C_fix(1));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_equalp(t2,t7));}
else{
if(C_truep((C_word)C_u_i_memq(t3,((C_word*)t0)[3]))){
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
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3305,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
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

/* k3303 in mwalk in ##sys#match-expression in k1728 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
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
f_3250(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##sys#canonicalize-body in k1728 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2764r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2764r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2764r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2766,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-me143196 */
t8=t7;
f_3202(t8,t1);}
else{
t8=(C_word)C_u_i_car(t4);
t9=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-container144194 */
t10=t6;
f_3197(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
/* body141146 */
t12=t5;
f_2766(t12,t1,t8);}}}

/* def-me143 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_3202(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3202,NULL,2,t0,t1);}
/* def-container144194 */
t2=((C_word*)t0)[2];
f_3197(t2,t1,C_SCHEME_FALSE);}

/* def-container144 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_3197(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3197,NULL,3,t0,t1,t2);}
/* body141146 */
t3=((C_word*)t0)[2];
f_2766(t3,t1,t2);}

/* body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2766,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2769,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
/* eval.scm: 464  expand */
t9=((C_word*)t6)[1];
f_2949(t9,t1,((C_word*)t0)[2]);}

/* expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2949(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2949,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2955(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2955(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_2955,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_pairp(t2))){
t7=(C_word)C_slot(t2,C_fix(0));
t8=(C_word)C_slot(t2,C_fix(1));
t9=(C_word)C_i_pairp(t7);
t10=(C_truep(t9)?(C_word)C_slot(t7,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2989,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=t8,a[5]=((C_word*)t0)[4],a[6]=t10,a[7]=t2,a[8]=t6,a[9]=t5,a[10]=t4,a[11]=t3,a[12]=t1,a[13]=((C_word*)t0)[5],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_symbolp(t10))){
/* eval.scm: 430  lookup */
t12=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t10);}
else{
t12=t11;
f_2989(2,t12,C_SCHEME_FALSE);}}
else{
/* eval.scm: 429  fini */
t11=((C_word*)((C_word*)t0)[5])[1];
f_2769(t11,t1,t3,t4,t5,t6,t2);}}
else{
/* eval.scm: 425  fini */
t7=((C_word*)((C_word*)t0)[5])[1];
f_2769(t7,t1,t3,t4,t5,t6,t2);}}

/* k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2989(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2989,2,t0,t1);}
if(C_truep(t1)){
/* eval.scm: 431  fini */
t2=((C_word*)((C_word*)t0)[13])[1];
f_2769(t2,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(C_word)C_eqp(lf[108],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 433  ##sys#check-syntax */
t4=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[108],((C_word*)t0)[3],lf[117],C_SCHEME_FALSE);}
else{
t3=(C_word)C_eqp(lf[109],((C_word*)t0)[6]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 454  ##sys#check-syntax */
t5=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[109],((C_word*)t0)[3],lf[118],C_SCHEME_FALSE);}
else{
t4=(C_word)C_eqp(lf[107],((C_word*)t0)[6]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3147,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* eval.scm: 457  ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[107],((C_word*)t0)[3],lf[119],C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[3],tmp=(C_word)a,a+=12,tmp);
/* eval.scm: 460  ##sys#macroexpand-0 */
t6=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}}}}}

/* k3159 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3161,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[11],t1);
if(C_truep(t2)){
/* eval.scm: 462  fini */
t3=((C_word*)((C_word*)t0)[10])[1];
f_2769(t3,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
/* eval.scm: 463  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2955(t4,((C_word*)t0)[9],t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* k3145 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3154,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* eval.scm: 458  ##sys#append */
t4=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k3152 in k3145 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 458  loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2955(t2,((C_word*)t0)[6],t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3117 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3119,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[8]);
t4=(C_word)C_u_i_caddr(((C_word*)t0)[9]);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
/* eval.scm: 455  loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2955(t6,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3,t5);}

/* k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3001,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3006(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2 in k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_3006(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3006,NULL,3,t0,t1,t2);}
t3=(C_word)C_u_i_cadr(t2);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3053,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 445  ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[108],t2,lf[113],C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 448  ##sys#check-syntax */
t6=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[108],t2,lf[114],C_SCHEME_FALSE);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* eval.scm: 437  ##sys#check-syntax */
t5=*((C_word*)lf[65]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[108],t2,lf[116],C_SCHEME_FALSE);}}

/* k3017 in loop2 in k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3019,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_u_i_cddr(((C_word*)t0)[8]);
t4=(C_word)C_i_pairp(t3);
t5=(C_truep(t4)?(C_word)C_u_i_caddr(((C_word*)t0)[8]):lf[115]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
/* eval.scm: 438  loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2955(t7,((C_word*)t0)[5],((C_word*)t0)[4],t2,t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3069 in loop2 in k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3071,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[10],C_fix(0));
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[9]);
t4=(C_word)C_slot(((C_word*)t0)[10],C_fix(1));
t5=(C_word)C_u_i_cddr(((C_word*)t0)[8]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[93],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[7]);
/* eval.scm: 449  loop */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2955(t9,((C_word*)t0)[5],((C_word*)t0)[4],t3,t8,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3051 in loop2 in k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_cddr(((C_word*)t0)[3]);
/* eval.scm: 446  ##sys#expand-curried-define */
t4=*((C_word*)lf[112]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k3062 in k3051 in loop2 in k2999 in k2987 in loop in expand in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_3064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3064,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[108],t1);
/* eval.scm: 446  loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3006(t3,((C_word*)t0)[2],t2);}

/* fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2769(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2769,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_nullp(t2);
t8=(C_truep(t7)?(C_word)C_i_nullp(t4):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2781,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2781(t12,t1,t6,C_SCHEME_END_OF_LIST);}
else{
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2851,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],a[7]=t6,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* eval.scm: 409  reverse */
t10=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}}

/* k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2862,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2929,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2941,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,*((C_word*)lf[89]+1),t1,((C_word*)t0)[3]);}

/* k2939 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 410  ##sys#map */
t2=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2928 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2929(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2929,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[111]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t2,t3));}

/* k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2866,a[2]=((C_word*)t0)[9],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2919,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 412  reverse */
t6=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k2925 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 412  map */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2918 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2919,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[72],t2,t3));}

/* k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2874,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2878,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2880,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm: 419  reverse */
t6=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k2911 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 420  reverse */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2915 in k2911 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 413  map */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2879 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2880,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2884,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 414  ##sys#map */
t5=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[84]+1),t2);}

/* k2882 in a2879 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2884,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[93],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2903,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2905,tmp=(C_word)a,a+=2,tmp);
/* eval.scm: 418  map */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,t4,((C_word*)t0)[2],t1);}

/* a2904 in k2882 in a2879 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2905,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[72],t2,t3));}

/* k2901 in k2882 in a2879 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2903,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[93],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[110],((C_word*)t0)[2],t3));}

/* k2876 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2872 in k2868 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2864 in k2860 in k2849 in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2866,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[59],t2));}

/* loop in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2781(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2781,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_slot(t4,C_fix(0));
t7=(C_word)C_a_i_list(&a,2,lf[108],lf[109]);
t8=t5;
f_2800(t8,(C_word)C_u_i_memq(t6,t7));}
else{
t6=t5;
f_2800(t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[107],((C_word*)t0)[2]));}}

/* k2798 in loop in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_fcall f_2800(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2800,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 407  reverse */
t4=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
/* eval.scm: 408  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2781(t4,((C_word*)t0)[8],t2,t3);}}

/* k2809 in k2798 in loop in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2819,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 407  expand */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2949(t3,t2,((C_word*)t0)[2]);}

/* k2817 in k2809 in k2798 in loop in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* eval.scm: 407  ##sys#append */
t3=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2805 in k2798 in loop in fini in body141 in ##sys#canonicalize-body in k1728 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[107],t1));}

/* ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2245,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2248,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t5,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t9,a[8]=t7,tmp=(C_word)a,a+=9,tmp));
t13=((C_word*)t11)[1];
f_2267(t13,t1,C_fix(0),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t2);}

/* loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2267(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_2267,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_nullp(t6))){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2281,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t4,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[8])[1])){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[8],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 325  reverse */
t9=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t3);}
else{
/* eval.scm: 325  reverse */
t8=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}}
else{
if(C_truep((C_word)C_i_symbolp(t6))){
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(2)))){
/* eval.scm: 348  err */
t7=((C_word*)t0)[4];
f_2248(t7,t1,lf[95]);}
else{
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2511,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t8)){
t9=t7;
f_2511(t9,C_SCHEME_UNDEFINED);}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[8])+1,t6);
t10=t7;
f_2511(t10,t9);}}}
else{
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_slot(t6,C_fix(0));
t8=(C_word)C_slot(t6,C_fix(1));
t9=(C_word)C_eqp(t7,lf[81]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t11)){
t12=t10;
f_2543(t12,C_SCHEME_UNDEFINED);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2562,a[2]=t10,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 360  gensym */
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}
else{
t10=(C_word)C_eqp(t7,lf[80]);
if(C_truep(t10)){
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(1)))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[7],a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_pairp(t8))){
t12=(C_word)C_slot(t8,C_fix(0));
t13=t11;
f_2580(t13,(C_word)C_i_symbolp(t12));}
else{
t12=t11;
f_2580(t12,C_SCHEME_FALSE);}}
else{
/* eval.scm: 372  err */
t11=((C_word*)t0)[4];
f_2248(t11,t1,lf[98]);}}
else{
t11=(C_word)C_eqp(t7,lf[82]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t13=((C_word*)((C_word*)t0)[8])[1];
if(C_truep(t13)){
t14=t12;
f_2626(t14,C_SCHEME_UNDEFINED);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2645,a[2]=t12,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 374  gensym */
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}}
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
f_2248(t13,t1,lf[100]);
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
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2707,a[2]=t5,a[3]=t8,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=t4,a[7]=t7,a[8]=t1,a[9]=((C_word*)t0)[4],a[10]=t2,tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t7))){
t13=(C_word)C_i_length(t7);
t14=t12;
f_2707(t14,(C_word)C_eqp(C_fix(2),t13));}
else{
t13=t12;
f_2707(t13,C_SCHEME_FALSE);}}}}}}
else{
/* eval.scm: 354  err */
t7=((C_word*)t0)[4];
f_2248(t7,t1,lf[104]);}}}}

/* k2705 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2707(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2707,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
switch(t2){
case C_fix(0):
/* eval.scm: 387  err */
t3=((C_word*)t0)[9];
f_2248(t3,((C_word*)t0)[8],lf[101]);
case C_fix(1):
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
/* eval.scm: 388  loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2267(t4,((C_word*)t0)[8],C_fix(1),((C_word*)t0)[4],t3,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
case C_fix(2):
/* eval.scm: 389  err */
t3=((C_word*)t0)[9];
f_2248(t3,((C_word*)t0)[8],lf[102]);
default:
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[2]);
/* eval.scm: 390  loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2267(t4,((C_word*)t0)[8],C_fix(3),((C_word*)t0)[4],((C_word*)t0)[6],t3,((C_word*)t0)[3]);}}
else{
/* eval.scm: 391  err */
t2=((C_word*)t0)[9];
f_2248(t2,((C_word*)t0)[8],lf[103]);}}

/* k2643 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2626(t3,t2);}

/* k2624 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[8],C_fix(3)))){
/* eval.scm: 376  loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_2267(t2,((C_word*)t0)[6],C_fix(3),((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
/* eval.scm: 377  err */
t2=((C_word*)t0)[2];
f_2248(t2,((C_word*)t0)[6],lf[99]);}}

/* k2578 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2580,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t3)){
t4=t2;
f_2583(t4,C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_slot(((C_word*)t0)[9],C_fix(0));
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=t2;
f_2583(t6,t5);}}
else{
/* eval.scm: 371  err */
t2=((C_word*)t0)[2];
f_2248(t2,((C_word*)t0)[6],lf[97]);}}

/* k2581 in k2578 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2583(C_word t0,C_word t1){
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
f_2267(t5,((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t4);}

/* k2560 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2543(t3,t2);}

/* k2541 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2543(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[7],C_fix(0));
if(C_truep(t2)){
/* eval.scm: 362  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2267(t3,((C_word*)t0)[5],C_fix(1),((C_word*)t0)[4],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
/* eval.scm: 363  err */
t3=((C_word*)t0)[2];
f_2248(t3,((C_word*)t0)[5],lf[96]);}}

/* k2509 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
/* eval.scm: 352  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2267(t3,((C_word*)t0)[4],C_fix(4),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k2488 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 325  ##sys#append */
t2=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2285,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t3=t2;
f_2285(t3,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2424,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2483,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 336  reverse */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}}

/* k2481 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2425 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2426,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2479,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
/* eval.scm: 315  string->keyword */
t6=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k2477 in a2425 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2479,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[91],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[93],t6);
t8=t3;
f_2453(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
t5=t3;
f_2453(t5,C_SCHEME_END_OF_LIST);}}

/* k2451 in k2477 in a2425 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2453(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2453,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[5])[1],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[92],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t4));}

/* k2422 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2424,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[90],t2);
t4=((C_word*)t0)[2];
f_2285(t4,(C_word)C_a_i_list(&a,1,t3));}

/* k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2285(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2285,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t3=t2;
f_2288(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t4)){
t5=t3;
f_2297(t5,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t6=t3;
f_2297(t6,(C_word)C_i_nullp(t5));}
else{
t5=t3;
f_2297(t5,C_SCHEME_FALSE);}}}}

/* k2295 in k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2297(C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2297,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_caar(((C_word*)t0)[8]);
t3=(C_word)C_u_i_cadar(((C_word*)t0)[8]);
t4=(C_word)C_a_i_list(&a,3,lf[86],((C_word*)((C_word*)t0)[7])[1],t3);
t5=(C_word)C_a_i_list(&a,2,t2,t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[6]);
t8=(C_word)C_a_i_cons(&a,2,lf[59],t7);
t9=((C_word*)t0)[5];
f_2288(t9,(C_word)C_a_i_list(&a,1,t8));}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_i_nullp(((C_word*)t0)[3]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 342  reverse */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[8]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2372,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2376,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 344  reverse */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[8]);}}}

/* k2374 in k2295 in k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2376,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_truep(t2)?t2:((C_word*)((C_word*)t0)[3])[1]);
t4=(C_word)C_a_i_list(&a,1,t3);
/* eval.scm: 344  ##sys#append */
t5=*((C_word*)lf[89]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k2370 in k2295 in k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2372,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[88],t3);
t5=((C_word*)t0)[2];
f_2288(t5,(C_word)C_a_i_list(&a,1,t4));}

/* k2351 in k2295 in k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2353,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[87],t3);
t5=((C_word*)t0)[2];
f_2288(t5,(C_word)C_a_i_list(&a,1,t4));}

/* k2286 in k2283 in k2279 in loop in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 324  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* err in ##sys#expand-extended-lambda-list in k1728 */
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2248,NULL,3,t0,t1,t2);}
/* eval.scm: 314  errh */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* ##sys#extended-lambda-list? in k1728 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2202,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2208,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2208(t6,t1,t2);}

/* loop in ##sys#extended-lambda-list? in k1728 */
static void C_fcall f_2208(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2208,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_eqp(t3,lf[80]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_2227(t6,t4);}
else{
t6=(C_word)C_eqp(t3,lf[81]);
t7=t5;
f_2227(t7,(C_truep(t6)?t6:(C_word)C_eqp(t3,lf[82])));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2225 in loop in ##sys#extended-lambda-list? in k1728 */
static void C_fcall f_2227(C_word t0,C_word t1){
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
f_2208(t3,((C_word*)t0)[4],t2);}}

/* macroexpand-1 in k1728 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2186r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2186r(t0,t1,t2,t3);}}

static void C_ccall f_2186r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_END_OF_LIST);
/* eval.scm: 288  ##sys#macroexpand-0 */
t6=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t2,t5);}

/* macroexpand in k1728 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2150r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2150r(t0,t1,t2,t3);}}

static void C_ccall f_2150r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2159,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2159(t9,t1,t2);}

/* loop in macroexpand in k1728 */
static void C_fcall f_2159(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2159,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2165,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a2170 in loop in macroexpand in k1728 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2171,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* eval.scm: 284  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2159(t4,t1,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* a2164 in loop in macroexpand in k1728 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2165,2,t0,t1);}
/* eval.scm: 282  ##sys#macroexpand-0 */
t2=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#macroexpand-1-local in k1728 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2143,4,t0,t1,t2,t3);}
/* eval.scm: 269  ##sys#macroexpand-0 */
t4=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,t3);}

/* ##sys#interpreter-toplevel-macroexpand-hook in k1728 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2140,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#compiler-toplevel-macroexpand-hook in k1728 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2137,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1795,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1944,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_symbolp(t6))){
t8=(C_word)C_eqp(t6,lf[59]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2004,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 238  ##sys#check-syntax */
t10=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t9,lf[59],t7,lf[67]);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2077,a[2]=t6,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_truep((C_word)C_eqp(t6,lf[70]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,lf[72]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
if(C_truep((C_word)C_i_pairp(t7))){
t10=(C_word)C_slot(t7,C_fix(0));
t11=t9;
f_2077(t11,(C_word)C_i_pairp(t10));}
else{
t10=t9;
f_2077(t10,C_SCHEME_FALSE);}}
else{
t10=t9;
f_2077(t10,C_SCHEME_FALSE);}}}
else{
/* eval.scm: 261  values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}
else{
/* eval.scm: 262  values */
C_values(4,0,t1,t2,C_SCHEME_FALSE);}}

/* k2075 in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_2077(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2077,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2083,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 254  ##sys#check-syntax */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[70],((C_word*)t0)[6],lf[71]);}
else{
/* eval.scm: 260  expand */
t2=((C_word*)t0)[4];
f_1944(t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2081 in k2075 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2083(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2090,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_a_i_list(&a,2,lf[68],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t7=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
/* eval.scm: 256  append */
t8=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t2,t5,t6,t7);}

/* k2088 in k2081 in k2075 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 255  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k2002 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2004,2,t0,t1);}
t2=(C_word)C_u_i_car(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2016,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm: 241  ##sys#check-syntax */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[59],((C_word*)t0)[4],lf[66]);}
else{
/* eval.scm: 249  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* k2014 in k2002 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2016,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2058,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2064,tmp=(C_word)a,a+=2,tmp);
/* map */
t5=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* a2063 in k2014 in k2002 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2064,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_car(t2));}

/* k2056 in k2014 in k2002 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=(C_word)C_u_i_cddr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[60],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_list(&a,3,lf[61],t6,((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2038,a[2]=((C_word*)t0)[3],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 247  ##sys#map */
t9=*((C_word*)lf[63]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,*((C_word*)lf[64]+1),((C_word*)t0)[2]);}

/* k2036 in k2056 in k2014 in k2002 in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_2038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2038,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[62],t2);
/* eval.scm: 243  values */
C_values(4,0,((C_word*)t0)[2],t3,C_SCHEME_TRUE);}

/* expand in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1944(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1944,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_assq(t3,((C_word*)t0)[3]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1958,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_slot(t4,C_fix(1));
t7=t6;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1964,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm: 222  ##sys#hash-table-ref */
t6=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[40]+1),t3);}}

/* k1962 in expand in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1964,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 225  call-handler */
t3=((C_word*)t0)[4];
f_1798(t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
/* eval.scm: 231  values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* k1972 in k1962 in expand in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 225  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k1956 in expand in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 221  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* call-handler in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1798(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1798,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1807,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* call-with-current-continuation */
t7=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1807,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1813,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1920,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
t5=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,t4);}

/* a1919 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t2,t3);}

/* a1931 in a1919 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1932r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1932r(t0,t1,t2);}}

static void C_ccall f_1932r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* g3739 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a1937 in a1931 in a1919 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1938,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1925 in a1919 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1926,2,t0,t1);}
/* eval.scm: 218  handler */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1813,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* g3739 */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1827,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[4],lf[51]))){
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=t3;
f_1830(t5,(C_word)C_i_memv(lf[56],t4));}
else{
t4=t3;
f_1830(t4,C_SCHEME_FALSE);}}

/* k1828 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1830,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1841,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1847,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_1847(t8,t3,t4);}
else{
t2=((C_word*)t0)[4];
f_1827(t2,((C_word*)t0)[5]);}}

/* copy in k1828 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1847(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1847,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_equalp(lf[55],t3))){
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_u_i_car(t4);
t7=t5;
f_1866(t7,(C_word)C_i_stringp(t6));}
else{
t6=t5;
f_1866(t6,C_SCHEME_FALSE);}}
else{
t6=t5;
f_1866(t6,C_SCHEME_FALSE);}}}

/* k1864 in copy in k1828 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1866,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_u_i_car(((C_word*)t0)[6]);
/* eval.scm: 212  string-append */
t5=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t2,lf[53],t3,lf[54],t4);}
else{
/* eval.scm: 216  copy */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1847(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k1875 in k1864 in copy in k1828 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[52],t3));}

/* k1839 in k1828 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1841,2,t0,t1);}
t2=((C_word*)t0)[3];
f_1827(t2,(C_word)C_a_i_record(&a,3,lf[51],((C_word*)t0)[2],t1));}

/* k1825 in a1818 in a1812 in a1806 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_fcall f_1827(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 196  ##sys#abort */
t2=*((C_word*)lf[50]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1803 in call-handler in ##sys#macroexpand-0 in k1728 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* undefine-macro! in k1728 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1789,3,t0,t1,t2);}
/* eval.scm: 181  ##sys#hash-table-set! */
t3=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[40]+1),t2,C_SCHEME_FALSE);}

/* macro? in k1728 */
static void C_ccall f_1774(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1774,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 178  ##sys#hash-table-ref */
t4=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[40]+1),t2);}

/* k1779 in macro? in k1728 */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* ##sys#copy-macro in k1728 */
static void C_ccall f_1764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1764,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1772,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 174  ##sys#hash-table-ref */
t5=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[40]+1),t2);}

/* k1770 in ##sys#copy-macro in k1728 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* eval.scm: 174  ##sys#hash-table-set! */
t2=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[40]+1),((C_word*)t0)[2],t1);}

/* ##sys#register-macro in k1728 */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1748,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1754,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 169  ##sys#hash-table-set! */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[40]+1),t2,t4);}

/* a1753 in ##sys#register-macro in k1728 */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1754,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
C_apply(4,0,t1,((C_word*)t0)[2],t3);}

/* ##sys#register-macro-2 in k1728 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1732,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 163  ##sys#hash-table-set! */
t5=*((C_word*)lf[42]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,*((C_word*)lf[40]+1),t2,t4);}

/* a1737 in ##sys#register-macro-2 in k1728 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1738,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
/* eval.scm: 165  handler */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}

/* chicken-home */
static void C_ccall f_1685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm: 148  getenv */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[39]);}

/* k1687 in chicken-home */
static void C_ccall f_1689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1689,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm: 149  getenv */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[38]);}}

/* k1693 in k1687 in chicken-home */
static void C_ccall f_1695(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1695,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=(C_word)C_block_size(t1);
t4=(C_word)C_u_fixnum_difference(t3,C_fix(1));
t5=(C_word)C_subchar(t1,t4);
t6=(C_word)C_eqp(t5,*((C_word*)lf[3]+1));
t7=(C_truep(t6)?lf[35]:lf[36]);
/* eval.scm: 150  ##sys#string-append */
t8=*((C_word*)lf[37]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t2,t1,t7);}
else{
t3=t2;
f_1698(2,t3,C_SCHEME_FALSE);}}

/* k1696 in k1693 in k1687 in chicken-home */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1698,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* ##sys#peek-c-string */
t2=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[923] = {
{"topleveleval.scm",(void*)C_eval_toplevel},
{"f_1730eval.scm",(void*)f_1730},
{"f_11042eval.scm",(void*)f_11042},
{"f_11046eval.scm",(void*)f_11046},
{"f_11070eval.scm",(void*)f_11070},
{"f_11064eval.scm",(void*)f_11064},
{"f_11054eval.scm",(void*)f_11054},
{"f_11052eval.scm",(void*)f_11052},
{"f_5863eval.scm",(void*)f_5863},
{"f_5962eval.scm",(void*)f_5962},
{"f_6042eval.scm",(void*)f_6042},
{"f_11036eval.scm",(void*)f_11036},
{"f_11032eval.scm",(void*)f_11032},
{"f_11028eval.scm",(void*)f_11028},
{"f_11024eval.scm",(void*)f_11024},
{"f_11014eval.scm",(void*)f_11014},
{"f_6627eval.scm",(void*)f_6627},
{"f_10999eval.scm",(void*)f_10999},
{"f_10995eval.scm",(void*)f_10995},
{"f_10991eval.scm",(void*)f_10991},
{"f_10981eval.scm",(void*)f_10981},
{"f_6631eval.scm",(void*)f_6631},
{"f_6635eval.scm",(void*)f_6635},
{"f_10965eval.scm",(void*)f_10965},
{"f_10960eval.scm",(void*)f_10960},
{"f_10962eval.scm",(void*)f_10962},
{"f_6642eval.scm",(void*)f_6642},
{"f_10944eval.scm",(void*)f_10944},
{"f_10950eval.scm",(void*)f_10950},
{"f_10947eval.scm",(void*)f_10947},
{"f_6980eval.scm",(void*)f_6980},
{"f_10893eval.scm",(void*)f_10893},
{"f_10907eval.scm",(void*)f_10907},
{"f_10940eval.scm",(void*)f_10940},
{"f_10936eval.scm",(void*)f_10936},
{"f_10924eval.scm",(void*)f_10924},
{"f_10928eval.scm",(void*)f_10928},
{"f_10901eval.scm",(void*)f_10901},
{"f_7691eval.scm",(void*)f_7691},
{"f_10772eval.scm",(void*)f_10772},
{"f_10809eval.scm",(void*)f_10809},
{"f_10818eval.scm",(void*)f_10818},
{"f_10837eval.scm",(void*)f_10837},
{"f_10841eval.scm",(void*)f_10841},
{"f_10827eval.scm",(void*)f_10827},
{"f_10824eval.scm",(void*)f_10824},
{"f_10775eval.scm",(void*)f_10775},
{"f_7694eval.scm",(void*)f_7694},
{"f_7752eval.scm",(void*)f_7752},
{"f_10770eval.scm",(void*)f_10770},
{"f_8078eval.scm",(void*)f_8078},
{"f_8082eval.scm",(void*)f_8082},
{"f_10766eval.scm",(void*)f_10766},
{"f_8085eval.scm",(void*)f_8085},
{"f_8089eval.scm",(void*)f_8089},
{"f_10669eval.scm",(void*)f_10669},
{"f_10675eval.scm",(void*)f_10675},
{"f_10691eval.scm",(void*)f_10691},
{"f_10694eval.scm",(void*)f_10694},
{"f_10729eval.scm",(void*)f_10729},
{"f_10732eval.scm",(void*)f_10732},
{"f_10716eval.scm",(void*)f_10716},
{"f_10719eval.scm",(void*)f_10719},
{"f_10726eval.scm",(void*)f_10726},
{"f_8772eval.scm",(void*)f_8772},
{"f_10641eval.scm",(void*)f_10641},
{"f_8775eval.scm",(void*)f_8775},
{"f_10598eval.scm",(void*)f_10598},
{"f_10620eval.scm",(void*)f_10620},
{"f_8778eval.scm",(void*)f_8778},
{"f_10401eval.scm",(void*)f_10401},
{"f_10407eval.scm",(void*)f_10407},
{"f_10423eval.scm",(void*)f_10423},
{"f_10499eval.scm",(void*)f_10499},
{"f_10556eval.scm",(void*)f_10556},
{"f_10502eval.scm",(void*)f_10502},
{"f_10529eval.scm",(void*)f_10529},
{"f_10462eval.scm",(void*)f_10462},
{"f_10481eval.scm",(void*)f_10481},
{"f_10453eval.scm",(void*)f_10453},
{"f_8781eval.scm",(void*)f_8781},
{"f_10298eval.scm",(void*)f_10298},
{"f_10308eval.scm",(void*)f_10308},
{"f_10321eval.scm",(void*)f_10321},
{"f_10337eval.scm",(void*)f_10337},
{"f_10375eval.scm",(void*)f_10375},
{"f_10373eval.scm",(void*)f_10373},
{"f_10365eval.scm",(void*)f_10365},
{"f_10319eval.scm",(void*)f_10319},
{"f_8784eval.scm",(void*)f_8784},
{"f_10245eval.scm",(void*)f_10245},
{"f_10255eval.scm",(void*)f_10255},
{"f_10258eval.scm",(void*)f_10258},
{"f_10263eval.scm",(void*)f_10263},
{"f_10288eval.scm",(void*)f_10288},
{"f_8787eval.scm",(void*)f_8787},
{"f_10175eval.scm",(void*)f_10175},
{"f_10185eval.scm",(void*)f_10185},
{"f_10188eval.scm",(void*)f_10188},
{"f_10235eval.scm",(void*)f_10235},
{"f_10199eval.scm",(void*)f_10199},
{"f_10221eval.scm",(void*)f_10221},
{"f_10207eval.scm",(void*)f_10207},
{"f_10203eval.scm",(void*)f_10203},
{"f_8790eval.scm",(void*)f_8790},
{"f_10056eval.scm",(void*)f_10056},
{"f_10060eval.scm",(void*)f_10060},
{"f_10063eval.scm",(void*)f_10063},
{"f_10066eval.scm",(void*)f_10066},
{"f_10157eval.scm",(void*)f_10157},
{"f_10073eval.scm",(void*)f_10073},
{"f_10096eval.scm",(void*)f_10096},
{"f_10110eval.scm",(void*)f_10110},
{"f_10108eval.scm",(void*)f_10108},
{"f_8793eval.scm",(void*)f_8793},
{"f_9764eval.scm",(void*)f_9764},
{"f_9974eval.scm",(void*)f_9974},
{"f_9978eval.scm",(void*)f_9978},
{"f_9999eval.scm",(void*)f_9999},
{"f_10041eval.scm",(void*)f_10041},
{"f_9777eval.scm",(void*)f_9777},
{"f_9965eval.scm",(void*)f_9965},
{"f_9969eval.scm",(void*)f_9969},
{"f_9948eval.scm",(void*)f_9948},
{"f_9952eval.scm",(void*)f_9952},
{"f_9937eval.scm",(void*)f_9937},
{"f_9929eval.scm",(void*)f_9929},
{"f_9918eval.scm",(void*)f_9918},
{"f_9884eval.scm",(void*)f_9884},
{"f_9865eval.scm",(void*)f_9865},
{"f_9838eval.scm",(void*)f_9838},
{"f_9795eval.scm",(void*)f_9795},
{"f_9791eval.scm",(void*)f_9791},
{"f_9767eval.scm",(void*)f_9767},
{"f_9775eval.scm",(void*)f_9775},
{"f_8796eval.scm",(void*)f_8796},
{"f_9754eval.scm",(void*)f_9754},
{"f_8799eval.scm",(void*)f_8799},
{"f_8803eval.scm",(void*)f_8803},
{"f_9751eval.scm",(void*)f_9751},
{"f_8810eval.scm",(void*)f_8810},
{"f_9187eval.scm",(void*)f_9187},
{"f_9609eval.scm",(void*)f_9609},
{"f_9727eval.scm",(void*)f_9727},
{"f_9730eval.scm",(void*)f_9730},
{"f_9717eval.scm",(void*)f_9717},
{"f_9612eval.scm",(void*)f_9612},
{"f_9616eval.scm",(void*)f_9616},
{"f_9627eval.scm",(void*)f_9627},
{"f_9270eval.scm",(void*)f_9270},
{"f_9590eval.scm",(void*)f_9590},
{"f_9594eval.scm",(void*)f_9594},
{"f_9603eval.scm",(void*)f_9603},
{"f_9601eval.scm",(void*)f_9601},
{"f_9273eval.scm",(void*)f_9273},
{"f_9584eval.scm",(void*)f_9584},
{"f_9276eval.scm",(void*)f_9276},
{"f_9578eval.scm",(void*)f_9578},
{"f_9279eval.scm",(void*)f_9279},
{"f_9569eval.scm",(void*)f_9569},
{"f_9576eval.scm",(void*)f_9576},
{"f_9559eval.scm",(void*)f_9559},
{"f_9544eval.scm",(void*)f_9544},
{"f_9548eval.scm",(void*)f_9548},
{"f_9553eval.scm",(void*)f_9553},
{"f_9557eval.scm",(void*)f_9557},
{"f_9522eval.scm",(void*)f_9522},
{"f_9526eval.scm",(void*)f_9526},
{"f_9531eval.scm",(void*)f_9531},
{"f_9535eval.scm",(void*)f_9535},
{"f_9542eval.scm",(void*)f_9542},
{"f_9496eval.scm",(void*)f_9496},
{"f_9502eval.scm",(void*)f_9502},
{"f_9506eval.scm",(void*)f_9506},
{"f_9520eval.scm",(void*)f_9520},
{"f_9509eval.scm",(void*)f_9509},
{"f_9516eval.scm",(void*)f_9516},
{"f_9480eval.scm",(void*)f_9480},
{"f_9486eval.scm",(void*)f_9486},
{"f_9494eval.scm",(void*)f_9494},
{"f_9443eval.scm",(void*)f_9443},
{"f_9447eval.scm",(void*)f_9447},
{"f_9452eval.scm",(void*)f_9452},
{"f_9456eval.scm",(void*)f_9456},
{"f_9478eval.scm",(void*)f_9478},
{"f_9474eval.scm",(void*)f_9474},
{"f_9470eval.scm",(void*)f_9470},
{"f_9459eval.scm",(void*)f_9459},
{"f_9466eval.scm",(void*)f_9466},
{"f_9417eval.scm",(void*)f_9417},
{"f_9423eval.scm",(void*)f_9423},
{"f_9427eval.scm",(void*)f_9427},
{"f_9441eval.scm",(void*)f_9441},
{"f_9430eval.scm",(void*)f_9430},
{"f_9437eval.scm",(void*)f_9437},
{"f_9404eval.scm",(void*)f_9404},
{"f_9378eval.scm",(void*)f_9378},
{"f_9382eval.scm",(void*)f_9382},
{"f_9387eval.scm",(void*)f_9387},
{"f_9391eval.scm",(void*)f_9391},
{"f_9402eval.scm",(void*)f_9402},
{"f_9398eval.scm",(void*)f_9398},
{"f_9362eval.scm",(void*)f_9362},
{"f_9368eval.scm",(void*)f_9368},
{"f_9376eval.scm",(void*)f_9376},
{"f_9350eval.scm",(void*)f_9350},
{"f_9356eval.scm",(void*)f_9356},
{"f_9360eval.scm",(void*)f_9360},
{"f_9341eval.scm",(void*)f_9341},
{"f_9345eval.scm",(void*)f_9345},
{"f_9282eval.scm",(void*)f_9282},
{"f_9292eval.scm",(void*)f_9292},
{"f_9317eval.scm",(void*)f_9317},
{"f_9329eval.scm",(void*)f_9329},
{"f_9335eval.scm",(void*)f_9335},
{"f_9323eval.scm",(void*)f_9323},
{"f_9298eval.scm",(void*)f_9298},
{"f_9304eval.scm",(void*)f_9304},
{"f_9308eval.scm",(void*)f_9308},
{"f_9311eval.scm",(void*)f_9311},
{"f_9315eval.scm",(void*)f_9315},
{"f_9290eval.scm",(void*)f_9290},
{"f_9195eval.scm",(void*)f_9195},
{"f_9205eval.scm",(void*)f_9205},
{"f_9208eval.scm",(void*)f_9208},
{"f_9222eval.scm",(void*)f_9222},
{"f_9240eval.scm",(void*)f_9240},
{"f_9209eval.scm",(void*)f_9209},
{"f_9189eval.scm",(void*)f_9189},
{"f_8831eval.scm",(void*)f_8831},
{"f_8890eval.scm",(void*)f_8890},
{"f_8893eval.scm",(void*)f_8893},
{"f_9172eval.scm",(void*)f_9172},
{"f_9176eval.scm",(void*)f_9176},
{"f_9180eval.scm",(void*)f_9180},
{"f_8975eval.scm",(void*)f_8975},
{"f_8981eval.scm",(void*)f_8981},
{"f_9153eval.scm",(void*)f_9153},
{"f_9159eval.scm",(void*)f_9159},
{"f_8988eval.scm",(void*)f_8988},
{"f_8991eval.scm",(void*)f_8991},
{"f_8994eval.scm",(void*)f_8994},
{"f_9148eval.scm",(void*)f_9148},
{"f_9003eval.scm",(void*)f_9003},
{"f_9006eval.scm",(void*)f_9006},
{"f_9021eval.scm",(void*)f_9021},
{"f_9039eval.scm",(void*)f_9039},
{"f_9102eval.scm",(void*)f_9102},
{"f_9055eval.scm",(void*)f_9055},
{"f_9060eval.scm",(void*)f_9060},
{"f_9064eval.scm",(void*)f_9064},
{"f_9067eval.scm",(void*)f_9067},
{"f_9079eval.scm",(void*)f_9079},
{"f_9082eval.scm",(void*)f_9082},
{"f_9070eval.scm",(void*)f_9070},
{"f_9043eval.scm",(void*)f_9043},
{"f_9025eval.scm",(void*)f_9025},
{"f_9028eval.scm",(void*)f_9028},
{"f_9012eval.scm",(void*)f_9012},
{"f_8910eval.scm",(void*)f_8910},
{"f_8915eval.scm",(void*)f_8915},
{"f_8918eval.scm",(void*)f_8918},
{"f_8923eval.scm",(void*)f_8923},
{"f_8930eval.scm",(void*)f_8930},
{"f_8970eval.scm",(void*)f_8970},
{"f_8933eval.scm",(void*)f_8933},
{"f_8945eval.scm",(void*)f_8945},
{"f_8954eval.scm",(void*)f_8954},
{"f_8948eval.scm",(void*)f_8948},
{"f_8936eval.scm",(void*)f_8936},
{"f_8939eval.scm",(void*)f_8939},
{"f_8901eval.scm",(void*)f_8901},
{"f_8895eval.scm",(void*)f_8895},
{"f_8861eval.scm",(void*)f_8861},
{"f_8871eval.scm",(void*)f_8871},
{"f_8876eval.scm",(void*)f_8876},
{"f_8849eval.scm",(void*)f_8849},
{"f_8855eval.scm",(void*)f_8855},
{"f_8834eval.scm",(void*)f_8834},
{"f_8843eval.scm",(void*)f_8843},
{"f_8838eval.scm",(void*)f_8838},
{"f_8828eval.scm",(void*)f_8828},
{"f_8812eval.scm",(void*)f_8812},
{"f_8826eval.scm",(void*)f_8826},
{"f_8823eval.scm",(void*)f_8823},
{"f_8816eval.scm",(void*)f_8816},
{"f_8380eval.scm",(void*)f_8380},
{"f_8517eval.scm",(void*)f_8517},
{"f_8522eval.scm",(void*)f_8522},
{"f_8740eval.scm",(void*)f_8740},
{"f_8721eval.scm",(void*)f_8721},
{"f_8667eval.scm",(void*)f_8667},
{"f_8538eval.scm",(void*)f_8538},
{"f_8543eval.scm",(void*)f_8543},
{"f_8562eval.scm",(void*)f_8562},
{"f_8488eval.scm",(void*)f_8488},
{"f_8494eval.scm",(void*)f_8494},
{"f_8426eval.scm",(void*)f_8426},
{"f_8430eval.scm",(void*)f_8430},
{"f_8438eval.scm",(void*)f_8438},
{"f_8461eval.scm",(void*)f_8461},
{"f_8383eval.scm",(void*)f_8383},
{"f_8390eval.scm",(void*)f_8390},
{"f_8395eval.scm",(void*)f_8395},
{"f_8399eval.scm",(void*)f_8399},
{"f_8424eval.scm",(void*)f_8424},
{"f_8413eval.scm",(void*)f_8413},
{"f_8417eval.scm",(void*)f_8417},
{"f_8406eval.scm",(void*)f_8406},
{"f_8344eval.scm",(void*)f_8344},
{"f_8366eval.scm",(void*)f_8366},
{"f_8336eval.scm",(void*)f_8336},
{"f_8282eval.scm",(void*)f_8282},
{"f_8286eval.scm",(void*)f_8286},
{"f_8289eval.scm",(void*)f_8289},
{"f_8292eval.scm",(void*)f_8292},
{"f_8295eval.scm",(void*)f_8295},
{"f_8298eval.scm",(void*)f_8298},
{"f_8301eval.scm",(void*)f_8301},
{"f_8304eval.scm",(void*)f_8304},
{"f_8307eval.scm",(void*)f_8307},
{"f_8310eval.scm",(void*)f_8310},
{"f_8261eval.scm",(void*)f_8261},
{"f_8265eval.scm",(void*)f_8265},
{"f_8268eval.scm",(void*)f_8268},
{"f_8237eval.scm",(void*)f_8237},
{"f_8243eval.scm",(void*)f_8243},
{"f_8253eval.scm",(void*)f_8253},
{"f_8114eval.scm",(void*)f_8114},
{"f_8172eval.scm",(void*)f_8172},
{"f_8223eval.scm",(void*)f_8223},
{"f_8182eval.scm",(void*)f_8182},
{"f_8184eval.scm",(void*)f_8184},
{"f_8208eval.scm",(void*)f_8208},
{"f_8194eval.scm",(void*)f_8194},
{"f_8155eval.scm",(void*)f_8155},
{"f_8120eval.scm",(void*)f_8120},
{"f_8136eval.scm",(void*)f_8136},
{"f_8142eval.scm",(void*)f_8142},
{"f_8133eval.scm",(void*)f_8133},
{"f_8095eval.scm",(void*)f_8095},
{"f_8099eval.scm",(void*)f_8099},
{"f_8062eval.scm",(void*)f_8062},
{"f_8064eval.scm",(void*)f_8064},
{"f_8068eval.scm",(void*)f_8068},
{"f_8027eval.scm",(void*)f_8027},
{"f_8031eval.scm",(void*)f_8031},
{"f_8038eval.scm",(void*)f_8038},
{"f_7986eval.scm",(void*)f_7986},
{"f_8016eval.scm",(void*)f_8016},
{"f_8003eval.scm",(void*)f_8003},
{"f_7983eval.scm",(void*)f_7983},
{"f_7867eval.scm",(void*)f_7867},
{"f_7958eval.scm",(void*)f_7958},
{"f_7968eval.scm",(void*)f_7968},
{"f_7956eval.scm",(void*)f_7956},
{"f_7885eval.scm",(void*)f_7885},
{"f_7909eval.scm",(void*)f_7909},
{"f_7928eval.scm",(void*)f_7928},
{"f_7903eval.scm",(void*)f_7903},
{"f_7759eval.scm",(void*)f_7759},
{"f_7769eval.scm",(void*)f_7769},
{"f_7774eval.scm",(void*)f_7774},
{"f_7801eval.scm",(void*)f_7801},
{"f_7834eval.scm",(void*)f_7834},
{"f_7795eval.scm",(void*)f_7795},
{"f_7696eval.scm",(void*)f_7696},
{"f_7700eval.scm",(void*)f_7700},
{"f_7708eval.scm",(void*)f_7708},
{"f_7728eval.scm",(void*)f_7728},
{"f_7655eval.scm",(void*)f_7655},
{"f_7684eval.scm",(void*)f_7684},
{"f_7670eval.scm",(void*)f_7670},
{"f_7256eval.scm",(void*)f_7256},
{"f_7531eval.scm",(void*)f_7531},
{"f_7540eval.scm",(void*)f_7540},
{"f_7566eval.scm",(void*)f_7566},
{"f_7568eval.scm",(void*)f_7568},
{"f_7601eval.scm",(void*)f_7601},
{"f_7591eval.scm",(void*)f_7591},
{"f_7586eval.scm",(void*)f_7586},
{"f_7280eval.scm",(void*)f_7280},
{"f_7290eval.scm",(void*)f_7290},
{"f_7424eval.scm",(void*)f_7424},
{"f_7505eval.scm",(void*)f_7505},
{"f_7436eval.scm",(void*)f_7436},
{"f_7451eval.scm",(void*)f_7451},
{"f_7471eval.scm",(void*)f_7471},
{"f_7469eval.scm",(void*)f_7469},
{"f_7455eval.scm",(void*)f_7455},
{"f_7447eval.scm",(void*)f_7447},
{"f_7366eval.scm",(void*)f_7366},
{"f_7384eval.scm",(void*)f_7384},
{"f_7392eval.scm",(void*)f_7392},
{"f_7380eval.scm",(void*)f_7380},
{"f_7339eval.scm",(void*)f_7339},
{"f_7302eval.scm",(void*)f_7302},
{"f_7326eval.scm",(void*)f_7326},
{"f_7322eval.scm",(void*)f_7322},
{"f_7314eval.scm",(void*)f_7314},
{"f_7305eval.scm",(void*)f_7305},
{"f_7259eval.scm",(void*)f_7259},
{"f_7274eval.scm",(void*)f_7274},
{"f_7268eval.scm",(void*)f_7268},
{"f_7207eval.scm",(void*)f_7207},
{"f_7213eval.scm",(void*)f_7213},
{"f_7227eval.scm",(void*)f_7227},
{"f_7230eval.scm",(void*)f_7230},
{"f_7237eval.scm",(void*)f_7237},
{"f_7200eval.scm",(void*)f_7200},
{"f_7169eval.scm",(void*)f_7169},
{"f_7173eval.scm",(void*)f_7173},
{"f_7198eval.scm",(void*)f_7198},
{"f_7176eval.scm",(void*)f_7176},
{"f_7194eval.scm",(void*)f_7194},
{"f_7179eval.scm",(void*)f_7179},
{"f_7186eval.scm",(void*)f_7186},
{"f_7156eval.scm",(void*)f_7156},
{"f_7162eval.scm",(void*)f_7162},
{"f_7142eval.scm",(void*)f_7142},
{"f_7153eval.scm",(void*)f_7153},
{"f_7125eval.scm",(void*)f_7125},
{"f_7131eval.scm",(void*)f_7131},
{"f_7135eval.scm",(void*)f_7135},
{"f_7060eval.scm",(void*)f_7060},
{"f_7123eval.scm",(void*)f_7123},
{"f_7064eval.scm",(void*)f_7064},
{"f_7067eval.scm",(void*)f_7067},
{"f_7085eval.scm",(void*)f_7085},
{"f_7091eval.scm",(void*)f_7091},
{"f_6983eval.scm",(void*)f_6983},
{"f_7057eval.scm",(void*)f_7057},
{"f_7050eval.scm",(void*)f_7050},
{"f_7017eval.scm",(void*)f_7017},
{"f_7019eval.scm",(void*)f_7019},
{"f_7032eval.scm",(void*)f_7032},
{"f_6986eval.scm",(void*)f_6986},
{"f_6990eval.scm",(void*)f_6990},
{"f_7010eval.scm",(void*)f_7010},
{"f_6996eval.scm",(void*)f_6996},
{"f_7006eval.scm",(void*)f_7006},
{"f_6999eval.scm",(void*)f_6999},
{"f_6832eval.scm",(void*)f_6832},
{"f_6925eval.scm",(void*)f_6925},
{"f_6942eval.scm",(void*)f_6942},
{"f_6950eval.scm",(void*)f_6950},
{"f_6842eval.scm",(void*)f_6842},
{"f_6847eval.scm",(void*)f_6847},
{"f_6886eval.scm",(void*)f_6886},
{"f_6873eval.scm",(void*)f_6873},
{"f_6835eval.scm",(void*)f_6835},
{"f_6776eval.scm",(void*)f_6776},
{"f_6785eval.scm",(void*)f_6785},
{"f_6823eval.scm",(void*)f_6823},
{"f_6803eval.scm",(void*)f_6803},
{"f_6750eval.scm",(void*)f_6750},
{"f_6754eval.scm",(void*)f_6754},
{"f_6764eval.scm",(void*)f_6764},
{"f_6644eval.scm",(void*)f_6644},
{"f_6648eval.scm",(void*)f_6648},
{"f_6740eval.scm",(void*)f_6740},
{"f_6744eval.scm",(void*)f_6744},
{"f_6657eval.scm",(void*)f_6657},
{"f_6726eval.scm",(void*)f_6726},
{"f_6722eval.scm",(void*)f_6722},
{"f_6660eval.scm",(void*)f_6660},
{"f_6709eval.scm",(void*)f_6709},
{"f_6712eval.scm",(void*)f_6712},
{"f_6715eval.scm",(void*)f_6715},
{"f_6663eval.scm",(void*)f_6663},
{"f_6668eval.scm",(void*)f_6668},
{"f_6702eval.scm",(void*)f_6702},
{"f_6681eval.scm",(void*)f_6681},
{"f_6684eval.scm",(void*)f_6684},
{"f_6579eval.scm",(void*)f_6579},
{"f_6622eval.scm",(void*)f_6622},
{"f_6583eval.scm",(void*)f_6583},
{"f_6619eval.scm",(void*)f_6619},
{"f_6586eval.scm",(void*)f_6586},
{"f_6616eval.scm",(void*)f_6616},
{"f_6589eval.scm",(void*)f_6589},
{"f_6608eval.scm",(void*)f_6608},
{"f_6602eval.scm",(void*)f_6602},
{"f_6594eval.scm",(void*)f_6594},
{"f_6521eval.scm",(void*)f_6521},
{"f_6571eval.scm",(void*)f_6571},
{"f_6535eval.scm",(void*)f_6535},
{"f_6543eval.scm",(void*)f_6543},
{"f_6527eval.scm",(void*)f_6527},
{"f_6477eval.scm",(void*)f_6477},
{"f_6513eval.scm",(void*)f_6513},
{"f_6491eval.scm",(void*)f_6491},
{"f_6483eval.scm",(void*)f_6483},
{"f_6090eval.scm",(void*)f_6090},
{"f_6432eval.scm",(void*)f_6432},
{"f_6427eval.scm",(void*)f_6427},
{"f_6092eval.scm",(void*)f_6092},
{"f_6426eval.scm",(void*)f_6426},
{"f_6096eval.scm",(void*)f_6096},
{"f_6360eval.scm",(void*)f_6360},
{"f_6375eval.scm",(void*)f_6375},
{"f_6378eval.scm",(void*)f_6378},
{"f_6381eval.scm",(void*)f_6381},
{"f_6387eval.scm",(void*)f_6387},
{"f_6390eval.scm",(void*)f_6390},
{"f_6396eval.scm",(void*)f_6396},
{"f_6099eval.scm",(void*)f_6099},
{"f_6351eval.scm",(void*)f_6351},
{"f_6342eval.scm",(void*)f_6342},
{"f_6345eval.scm",(void*)f_6345},
{"f_6105eval.scm",(void*)f_6105},
{"f_6327eval.scm",(void*)f_6327},
{"f_6299eval.scm",(void*)f_6299},
{"f_6323eval.scm",(void*)f_6323},
{"f_6319eval.scm",(void*)f_6319},
{"f_6315eval.scm",(void*)f_6315},
{"f_6108eval.scm",(void*)f_6108},
{"f_6116eval.scm",(void*)f_6116},
{"f_6286eval.scm",(void*)f_6286},
{"f_6120eval.scm",(void*)f_6120},
{"f_6271eval.scm",(void*)f_6271},
{"f_6144eval.scm",(void*)f_6144},
{"f_6148eval.scm",(void*)f_6148},
{"f_6262eval.scm",(void*)f_6262},
{"f_6156eval.scm",(void*)f_6156},
{"f_6160eval.scm",(void*)f_6160},
{"f_6256eval.scm",(void*)f_6256},
{"f_6163eval.scm",(void*)f_6163},
{"f_6166eval.scm",(void*)f_6166},
{"f_6171eval.scm",(void*)f_6171},
{"f_6181eval.scm",(void*)f_6181},
{"f_6227eval.scm",(void*)f_6227},
{"f_6236eval.scm",(void*)f_6236},
{"f_6240eval.scm",(void*)f_6240},
{"f_6193eval.scm",(void*)f_6193},
{"f_6200eval.scm",(void*)f_6200},
{"f_6211eval.scm",(void*)f_6211},
{"f_6222eval.scm",(void*)f_6222},
{"f_6215eval.scm",(void*)f_6215},
{"f_6205eval.scm",(void*)f_6205},
{"f_6184eval.scm",(void*)f_6184},
{"f_6191eval.scm",(void*)f_6191},
{"f_6153eval.scm",(void*)f_6153},
{"f_6130eval.scm",(void*)f_6130},
{"f_6121eval.scm",(void*)f_6121},
{"f_6111eval.scm",(void*)f_6111},
{"f_6044eval.scm",(void*)f_6044},
{"f_6054eval.scm",(void*)f_6054},
{"f_5969eval.scm",(void*)f_5969},
{"f_5981eval.scm",(void*)f_5981},
{"f_5994eval.scm",(void*)f_5994},
{"f_5976eval.scm",(void*)f_5976},
{"f_5964eval.scm",(void*)f_5964},
{"f_5880eval.scm",(void*)f_5880},
{"f_5893eval.scm",(void*)f_5893},
{"f_5926eval.scm",(void*)f_5926},
{"f_5907eval.scm",(void*)f_5907},
{"f_5883eval.scm",(void*)f_5883},
{"f_5866eval.scm",(void*)f_5866},
{"f_5874eval.scm",(void*)f_5874},
{"f_5878eval.scm",(void*)f_5878},
{"f_3663eval.scm",(void*)f_3663},
{"f_5611eval.scm",(void*)f_5611},
{"f_5615eval.scm",(void*)f_5615},
{"f_5828eval.scm",(void*)f_5828},
{"f_5804eval.scm",(void*)f_5804},
{"f_5805eval.scm",(void*)f_5805},
{"f_5816eval.scm",(void*)f_5816},
{"f_5822eval.scm",(void*)f_5822},
{"f_5820eval.scm",(void*)f_5820},
{"f_5761eval.scm",(void*)f_5761},
{"f_5764eval.scm",(void*)f_5764},
{"f_5767eval.scm",(void*)f_5767},
{"f_5770eval.scm",(void*)f_5770},
{"f_5771eval.scm",(void*)f_5771},
{"f_5782eval.scm",(void*)f_5782},
{"f_5786eval.scm",(void*)f_5786},
{"f_5790eval.scm",(void*)f_5790},
{"f_5794eval.scm",(void*)f_5794},
{"f_5797eval.scm",(void*)f_5797},
{"f_5719eval.scm",(void*)f_5719},
{"f_5722eval.scm",(void*)f_5722},
{"f_5725eval.scm",(void*)f_5725},
{"f_5726eval.scm",(void*)f_5726},
{"f_5737eval.scm",(void*)f_5737},
{"f_5741eval.scm",(void*)f_5741},
{"f_5745eval.scm",(void*)f_5745},
{"f_5748eval.scm",(void*)f_5748},
{"f_5684eval.scm",(void*)f_5684},
{"f_5687eval.scm",(void*)f_5687},
{"f_5688eval.scm",(void*)f_5688},
{"f_5699eval.scm",(void*)f_5699},
{"f_5703eval.scm",(void*)f_5703},
{"f_5706eval.scm",(void*)f_5706},
{"f_5656eval.scm",(void*)f_5656},
{"f_5657eval.scm",(void*)f_5657},
{"f_5668eval.scm",(void*)f_5668},
{"f_5671eval.scm",(void*)f_5671},
{"f_5637eval.scm",(void*)f_5637},
{"f_5647eval.scm",(void*)f_5647},
{"f_5585eval.scm",(void*)f_5585},
{"f_3891eval.scm",(void*)f_3891},
{"f_3961eval.scm",(void*)f_3961},
{"f_4017eval.scm",(void*)f_4017},
{"f_4046eval.scm",(void*)f_4046},
{"f_4052eval.scm",(void*)f_4052},
{"f_5418eval.scm",(void*)f_5418},
{"f_5405eval.scm",(void*)f_5405},
{"f_5366eval.scm",(void*)f_5366},
{"f_5355eval.scm",(void*)f_5355},
{"f_5317eval.scm",(void*)f_5317},
{"f_5311eval.scm",(void*)f_5311},
{"f_5265eval.scm",(void*)f_5265},
{"f_5287eval.scm",(void*)f_5287},
{"f_5295eval.scm",(void*)f_5295},
{"f_5277eval.scm",(void*)f_5277},
{"f_5259eval.scm",(void*)f_5259},
{"f_5235eval.scm",(void*)f_5235},
{"f_5242eval.scm",(void*)f_5242},
{"f_5204eval.scm",(void*)f_5204},
{"f_5207eval.scm",(void*)f_5207},
{"f_5210eval.scm",(void*)f_5210},
{"f_5229eval.scm",(void*)f_5229},
{"f_5227eval.scm",(void*)f_5227},
{"f_5217eval.scm",(void*)f_5217},
{"f_4802eval.scm",(void*)f_4802},
{"f_5139eval.scm",(void*)f_5139},
{"f_5150eval.scm",(void*)f_5150},
{"f_5144eval.scm",(void*)f_5144},
{"f_4814eval.scm",(void*)f_4814},
{"f_4819eval.scm",(void*)f_4819},
{"f_5128eval.scm",(void*)f_5128},
{"f_5122eval.scm",(void*)f_5122},
{"f_4826eval.scm",(void*)f_4826},
{"f_5084eval.scm",(void*)f_5084},
{"f_5090eval.scm",(void*)f_5090},
{"f_5114eval.scm",(void*)f_5114},
{"f_5061eval.scm",(void*)f_5061},
{"f_5067eval.scm",(void*)f_5067},
{"f_5552eval.scm",(void*)f_5552},
{"f_5083eval.scm",(void*)f_5083},
{"f_5079eval.scm",(void*)f_5079},
{"f_5039eval.scm",(void*)f_5039},
{"f_5045eval.scm",(void*)f_5045},
{"f_5057eval.scm",(void*)f_5057},
{"f_5020eval.scm",(void*)f_5020},
{"f_5026eval.scm",(void*)f_5026},
{"f_4992eval.scm",(void*)f_4992},
{"f_4998eval.scm",(void*)f_4998},
{"f_4973eval.scm",(void*)f_4973},
{"f_4979eval.scm",(void*)f_4979},
{"f_4945eval.scm",(void*)f_4945},
{"f_4951eval.scm",(void*)f_4951},
{"f_4926eval.scm",(void*)f_4926},
{"f_4932eval.scm",(void*)f_4932},
{"f_4898eval.scm",(void*)f_4898},
{"f_4904eval.scm",(void*)f_4904},
{"f_4879eval.scm",(void*)f_4879},
{"f_4885eval.scm",(void*)f_4885},
{"f_4855eval.scm",(void*)f_4855},
{"f_4861eval.scm",(void*)f_4861},
{"f_4836eval.scm",(void*)f_4836},
{"f_4842eval.scm",(void*)f_4842},
{"f_4464eval.scm",(void*)f_4464},
{"f_4789eval.scm",(void*)f_4789},
{"f_4473eval.scm",(void*)f_4473},
{"f_4783eval.scm",(void*)f_4783},
{"f_4777eval.scm",(void*)f_4777},
{"f_4479eval.scm",(void*)f_4479},
{"f_4761eval.scm",(void*)f_4761},
{"f_4714eval.scm",(void*)f_4714},
{"f_4715eval.scm",(void*)f_4715},
{"f_4719eval.scm",(void*)f_4719},
{"f_4731eval.scm",(void*)f_4731},
{"f_4756eval.scm",(void*)f_4756},
{"f_4722eval.scm",(void*)f_4722},
{"f_4638eval.scm",(void*)f_4638},
{"f_4699eval.scm",(void*)f_4699},
{"f_4641eval.scm",(void*)f_4641},
{"f_4647eval.scm",(void*)f_4647},
{"f_4683eval.scm",(void*)f_4683},
{"f_4650eval.scm",(void*)f_4650},
{"f_4651eval.scm",(void*)f_4651},
{"f_4667eval.scm",(void*)f_4667},
{"f_4671eval.scm",(void*)f_4671},
{"f_4675eval.scm",(void*)f_4675},
{"f_4679eval.scm",(void*)f_4679},
{"f_4571eval.scm",(void*)f_4571},
{"f_4617eval.scm",(void*)f_4617},
{"f_4574eval.scm",(void*)f_4574},
{"f_4580eval.scm",(void*)f_4580},
{"f_4581eval.scm",(void*)f_4581},
{"f_4597eval.scm",(void*)f_4597},
{"f_4601eval.scm",(void*)f_4601},
{"f_4605eval.scm",(void*)f_4605},
{"f_4522eval.scm",(void*)f_4522},
{"f_4550eval.scm",(void*)f_4550},
{"f_4525eval.scm",(void*)f_4525},
{"f_4526eval.scm",(void*)f_4526},
{"f_4542eval.scm",(void*)f_4542},
{"f_4546eval.scm",(void*)f_4546},
{"f_4488eval.scm",(void*)f_4488},
{"f_4489eval.scm",(void*)f_4489},
{"f_4505eval.scm",(void*)f_4505},
{"f_4358eval.scm",(void*)f_4358},
{"f_4372eval.scm",(void*)f_4372},
{"f_4376eval.scm",(void*)f_4376},
{"f_4415eval.scm",(void*)f_4415},
{"f_4423eval.scm",(void*)f_4423},
{"f_4388eval.scm",(void*)f_4388},
{"f_4391eval.scm",(void*)f_4391},
{"f_4407eval.scm",(void*)f_4407},
{"f_4398eval.scm",(void*)f_4398},
{"f_4406eval.scm",(void*)f_4406},
{"f_4443eval.scm",(void*)f_4443},
{"f_4451eval.scm",(void*)f_4451},
{"f_4430eval.scm",(void*)f_4430},
{"f_4442eval.scm",(void*)f_4442},
{"f_4366eval.scm",(void*)f_4366},
{"f_4250eval.scm",(void*)f_4250},
{"f_4309eval.scm",(void*)f_4309},
{"f_4312eval.scm",(void*)f_4312},
{"f_4315eval.scm",(void*)f_4315},
{"f_4316eval.scm",(void*)f_4316},
{"f_4320eval.scm",(void*)f_4320},
{"f_4323eval.scm",(void*)f_4323},
{"f_4287eval.scm",(void*)f_4287},
{"f_4290eval.scm",(void*)f_4290},
{"f_4291eval.scm",(void*)f_4291},
{"f_4295eval.scm",(void*)f_4295},
{"f_4193eval.scm",(void*)f_4193},
{"f_4196eval.scm",(void*)f_4196},
{"f_4199eval.scm",(void*)f_4199},
{"f_4202eval.scm",(void*)f_4202},
{"f_4203eval.scm",(void*)f_4203},
{"f_4210eval.scm",(void*)f_4210},
{"f_4183eval.scm",(void*)f_4183},
{"f_4149eval.scm",(void*)f_4149},
{"f_4143eval.scm",(void*)f_4143},
{"f_4144eval.scm",(void*)f_4144},
{"f_4067eval.scm",(void*)f_4067},
{"f_4127eval.scm",(void*)f_4127},
{"f_4125eval.scm",(void*)f_4125},
{"f_4117eval.scm",(void*)f_4117},
{"f_4109eval.scm",(void*)f_4109},
{"f_4101eval.scm",(void*)f_4101},
{"f_4093eval.scm",(void*)f_4093},
{"f_4085eval.scm",(void*)f_4085},
{"f_4077eval.scm",(void*)f_4077},
{"f_4018eval.scm",(void*)f_4018},
{"f_4007eval.scm",(void*)f_4007},
{"f_4005eval.scm",(void*)f_4005},
{"f_3994eval.scm",(void*)f_3994},
{"f_3992eval.scm",(void*)f_3992},
{"f_3984eval.scm",(void*)f_3984},
{"f_3976eval.scm",(void*)f_3976},
{"f_3968eval.scm",(void*)f_3968},
{"f_3909eval.scm",(void*)f_3909},
{"f_3934eval.scm",(void*)f_3934},
{"f_3922eval.scm",(void*)f_3922},
{"f_3925eval.scm",(void*)f_3925},
{"f_3926eval.scm",(void*)f_3926},
{"f_3951eval.scm",(void*)f_3951},
{"f_3942eval.scm",(void*)f_3942},
{"f_3903eval.scm",(void*)f_3903},
{"f_3885eval.scm",(void*)f_3885},
{"f_3879eval.scm",(void*)f_3879},
{"f_3873eval.scm",(void*)f_3873},
{"f_3820eval.scm",(void*)f_3820},
{"f_3824eval.scm",(void*)f_3824},
{"f_3871eval.scm",(void*)f_3871},
{"f_3839eval.scm",(void*)f_3839},
{"f_3848eval.scm",(void*)f_3848},
{"f_3708eval.scm",(void*)f_3708},
{"f_3720eval.scm",(void*)f_3720},
{"f_3714eval.scm",(void*)f_3714},
{"f_3666eval.scm",(void*)f_3666},
{"f_3672eval.scm",(void*)f_3672},
{"f_3790eval.scm",(void*)f_3790},
{"f_3619eval.scm",(void*)f_3619},
{"f_3638eval.scm",(void*)f_3638},
{"f_3650eval.scm",(void*)f_3650},
{"f_3653eval.scm",(void*)f_3653},
{"f_3656eval.scm",(void*)f_3656},
{"f_3646eval.scm",(void*)f_3646},
{"f_3625eval.scm",(void*)f_3625},
{"f_3559eval.scm",(void*)f_3559},
{"f_3563eval.scm",(void*)f_3563},
{"f_3571eval.scm",(void*)f_3571},
{"f_3513eval.scm",(void*)f_3513},
{"f_3519eval.scm",(void*)f_3519},
{"f_3538eval.scm",(void*)f_3538},
{"f_3529eval.scm",(void*)f_3529},
{"f_3458eval.scm",(void*)f_3458},
{"f_3462eval.scm",(void*)f_3462},
{"f_3470eval.scm",(void*)f_3470},
{"f_3413eval.scm",(void*)f_3413},
{"f_3417eval.scm",(void*)f_3417},
{"f_3426eval.scm",(void*)f_3426},
{"f_3398eval.scm",(void*)f_3398},
{"f_3338eval.scm",(void*)f_3338},
{"f_3393eval.scm",(void*)f_3393},
{"f_3341eval.scm",(void*)f_3341},
{"f_3247eval.scm",(void*)f_3247},
{"f_3336eval.scm",(void*)f_3336},
{"f_3250eval.scm",(void*)f_3250},
{"f_3305eval.scm",(void*)f_3305},
{"f_2764eval.scm",(void*)f_2764},
{"f_3202eval.scm",(void*)f_3202},
{"f_3197eval.scm",(void*)f_3197},
{"f_2766eval.scm",(void*)f_2766},
{"f_2949eval.scm",(void*)f_2949},
{"f_2955eval.scm",(void*)f_2955},
{"f_2989eval.scm",(void*)f_2989},
{"f_3161eval.scm",(void*)f_3161},
{"f_3147eval.scm",(void*)f_3147},
{"f_3154eval.scm",(void*)f_3154},
{"f_3119eval.scm",(void*)f_3119},
{"f_3001eval.scm",(void*)f_3001},
{"f_3006eval.scm",(void*)f_3006},
{"f_3019eval.scm",(void*)f_3019},
{"f_3071eval.scm",(void*)f_3071},
{"f_3053eval.scm",(void*)f_3053},
{"f_3064eval.scm",(void*)f_3064},
{"f_2769eval.scm",(void*)f_2769},
{"f_2851eval.scm",(void*)f_2851},
{"f_2941eval.scm",(void*)f_2941},
{"f_2929eval.scm",(void*)f_2929},
{"f_2862eval.scm",(void*)f_2862},
{"f_2927eval.scm",(void*)f_2927},
{"f_2919eval.scm",(void*)f_2919},
{"f_2870eval.scm",(void*)f_2870},
{"f_2913eval.scm",(void*)f_2913},
{"f_2917eval.scm",(void*)f_2917},
{"f_2880eval.scm",(void*)f_2880},
{"f_2884eval.scm",(void*)f_2884},
{"f_2905eval.scm",(void*)f_2905},
{"f_2903eval.scm",(void*)f_2903},
{"f_2878eval.scm",(void*)f_2878},
{"f_2874eval.scm",(void*)f_2874},
{"f_2866eval.scm",(void*)f_2866},
{"f_2781eval.scm",(void*)f_2781},
{"f_2800eval.scm",(void*)f_2800},
{"f_2811eval.scm",(void*)f_2811},
{"f_2819eval.scm",(void*)f_2819},
{"f_2807eval.scm",(void*)f_2807},
{"f_2245eval.scm",(void*)f_2245},
{"f_2267eval.scm",(void*)f_2267},
{"f_2707eval.scm",(void*)f_2707},
{"f_2645eval.scm",(void*)f_2645},
{"f_2626eval.scm",(void*)f_2626},
{"f_2580eval.scm",(void*)f_2580},
{"f_2583eval.scm",(void*)f_2583},
{"f_2562eval.scm",(void*)f_2562},
{"f_2543eval.scm",(void*)f_2543},
{"f_2511eval.scm",(void*)f_2511},
{"f_2490eval.scm",(void*)f_2490},
{"f_2281eval.scm",(void*)f_2281},
{"f_2483eval.scm",(void*)f_2483},
{"f_2426eval.scm",(void*)f_2426},
{"f_2479eval.scm",(void*)f_2479},
{"f_2453eval.scm",(void*)f_2453},
{"f_2424eval.scm",(void*)f_2424},
{"f_2285eval.scm",(void*)f_2285},
{"f_2297eval.scm",(void*)f_2297},
{"f_2376eval.scm",(void*)f_2376},
{"f_2372eval.scm",(void*)f_2372},
{"f_2353eval.scm",(void*)f_2353},
{"f_2288eval.scm",(void*)f_2288},
{"f_2248eval.scm",(void*)f_2248},
{"f_2202eval.scm",(void*)f_2202},
{"f_2208eval.scm",(void*)f_2208},
{"f_2227eval.scm",(void*)f_2227},
{"f_2186eval.scm",(void*)f_2186},
{"f_2150eval.scm",(void*)f_2150},
{"f_2159eval.scm",(void*)f_2159},
{"f_2171eval.scm",(void*)f_2171},
{"f_2165eval.scm",(void*)f_2165},
{"f_2143eval.scm",(void*)f_2143},
{"f_2140eval.scm",(void*)f_2140},
{"f_2137eval.scm",(void*)f_2137},
{"f_1795eval.scm",(void*)f_1795},
{"f_2077eval.scm",(void*)f_2077},
{"f_2083eval.scm",(void*)f_2083},
{"f_2090eval.scm",(void*)f_2090},
{"f_2004eval.scm",(void*)f_2004},
{"f_2016eval.scm",(void*)f_2016},
{"f_2064eval.scm",(void*)f_2064},
{"f_2058eval.scm",(void*)f_2058},
{"f_2038eval.scm",(void*)f_2038},
{"f_1944eval.scm",(void*)f_1944},
{"f_1964eval.scm",(void*)f_1964},
{"f_1974eval.scm",(void*)f_1974},
{"f_1958eval.scm",(void*)f_1958},
{"f_1798eval.scm",(void*)f_1798},
{"f_1807eval.scm",(void*)f_1807},
{"f_1920eval.scm",(void*)f_1920},
{"f_1932eval.scm",(void*)f_1932},
{"f_1938eval.scm",(void*)f_1938},
{"f_1926eval.scm",(void*)f_1926},
{"f_1813eval.scm",(void*)f_1813},
{"f_1819eval.scm",(void*)f_1819},
{"f_1830eval.scm",(void*)f_1830},
{"f_1847eval.scm",(void*)f_1847},
{"f_1866eval.scm",(void*)f_1866},
{"f_1877eval.scm",(void*)f_1877},
{"f_1841eval.scm",(void*)f_1841},
{"f_1827eval.scm",(void*)f_1827},
{"f_1805eval.scm",(void*)f_1805},
{"f_1789eval.scm",(void*)f_1789},
{"f_1774eval.scm",(void*)f_1774},
{"f_1781eval.scm",(void*)f_1781},
{"f_1764eval.scm",(void*)f_1764},
{"f_1772eval.scm",(void*)f_1772},
{"f_1748eval.scm",(void*)f_1748},
{"f_1754eval.scm",(void*)f_1754},
{"f_1732eval.scm",(void*)f_1732},
{"f_1738eval.scm",(void*)f_1738},
{"f_1685eval.scm",(void*)f_1685},
{"f_1689eval.scm",(void*)f_1689},
{"f_1695eval.scm",(void*)f_1695},
{"f_1698eval.scm",(void*)f_1698},
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
