/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:18
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: c-backend.scm -output-file c-backend.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[929];


C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8738)
static void C_ccall f_8738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8742)
static void C_ccall f_8742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8734)
static void C_ccall f_8734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8063)
static void C_fcall f_8063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8084)
static void C_fcall f_8084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8591)
static void C_fcall f_8591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8533)
static void C_fcall f_8533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8497)
static void C_fcall f_8497(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8462)
static void C_fcall f_8462(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8414)
static void C_fcall f_8414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8366)
static void C_fcall f_8366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8318)
static void C_fcall f_8318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8283)
static void C_fcall f_8283(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8247)
static void C_fcall f_8247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8211)
static void C_fcall f_8211(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8189)
static void C_fcall f_8189(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8184)
static void C_fcall f_8184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8179)
static void C_fcall f_8179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7999)
static void C_fcall f_7999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7200)
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7230)
static void C_fcall f_7230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7257)
static void C_fcall f_7257(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7443)
static void C_fcall f_7443(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7840)
static void C_fcall f_7840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7807)
static void C_fcall f_7807(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7775)
static void C_fcall f_7775(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7740)
static void C_fcall f_7740(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7670)
static void C_fcall f_7670(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7625)
static void C_fcall f_7625(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7593)
static void C_fcall f_7593(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7561)
static void C_fcall f_7561(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7529)
static void C_fcall f_7529(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7497)
static void C_fcall f_7497(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7475)
static void C_fcall f_7475(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_fcall f_7202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6108)
static void C_fcall f_6108(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6198)
static void C_fcall f_6198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6210)
static void C_fcall f_6210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6306)
static void C_fcall f_6306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_fcall f_6938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6954)
static void C_ccall f_6954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6958)
static void C_fcall f_6958(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6971)
static void C_ccall f_6971(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6892)
static void C_fcall f_6892(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6905)
static void C_ccall f_6905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6842)
static void C_fcall f_6842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6792)
static void C_fcall f_6792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6753)
static void C_fcall f_6753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6763)
static void C_ccall f_6763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6714)
static void C_fcall f_6714(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6724)
static void C_ccall f_6724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6675)
static void C_fcall f_6675(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6685)
static void C_ccall f_6685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_fcall f_6636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6646)
static void C_ccall f_6646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6576)
static void C_fcall f_6576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6597)
static void C_ccall f_6597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6589)
static void C_ccall f_6589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6537)
static void C_fcall f_6537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6547)
static void C_ccall f_6547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6501)
static void C_fcall f_6501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6465)
static void C_fcall f_6465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_fcall f_6429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6393)
static void C_fcall f_6393(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6367)
static void C_fcall f_6367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6375)
static void C_ccall f_6375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6358)
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6353)
static void C_fcall f_6353(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6038)
static void C_fcall f_6038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6033)
static void C_fcall f_6033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5970)
static void C_ccall f_5970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5985)
static void C_ccall f_5985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5988)
static void C_ccall f_5988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5996)
static void C_ccall f_5996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5991)
static void C_ccall f_5991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5577)
static void C_ccall f_5577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5964)
static void C_ccall f_5964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5907)
static void C_ccall f_5907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_ccall f_5947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5925)
static void C_ccall f_5925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5614)
static void C_fcall f_5614(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5623)
static void C_fcall f_5623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_fcall f_5647(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5687)
static void C_fcall f_5687(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_ccall f_5375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5384)
static void C_ccall f_5384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5564)
static void C_ccall f_5564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5411)
static void C_ccall f_5411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5542)
static void C_ccall f_5542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5524)
static void C_ccall f_5524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5332)
static void C_ccall f_5332(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5291)
static void C_fcall f_5291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5243)
static void C_ccall f_5243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5163)
static void C_fcall f_5163(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5192)
static void C_fcall f_5192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5195)
static void C_fcall f_5195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5179)
static void C_fcall f_5179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5081)
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5085)
static void C_ccall f_5085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5099)
static void C_fcall f_5099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5061)
static void C_ccall f_5061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4234)
static void C_fcall f_4234(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4259)
static void C_ccall f_4259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_fcall f_4262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4304)
static void C_ccall f_4304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4997)
static void C_ccall f_4997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_ccall f_4307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4313)
static void C_ccall f_4313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_fcall f_4944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4316)
static void C_ccall f_4316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_fcall f_4328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4849)
static void C_fcall f_4849(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_fcall f_4870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_fcall f_4813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_fcall f_4789(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_fcall f_4734(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4680)
static void C_fcall f_4680(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4670)
static void C_ccall f_4670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4635)
static void C_fcall f_4635(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_fcall f_4360(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4476)
static void C_ccall f_4476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_fcall f_3599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3503)
static void C_ccall f_3503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_fcall f_3412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_fcall f_3418(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4172)
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3868)
static void C_fcall f_3868(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3873)
static void C_fcall f_3873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3915)
static void C_ccall f_3915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3905)
static void C_ccall f_3905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_fcall f_3786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_fcall f_3449(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4059)
static void C_fcall f_4059(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_fcall f_4083(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4102)
static void C_fcall f_4102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4109)
static void C_ccall f_4109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_fcall f_4151(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4161)
static void C_ccall f_4161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_fcall f_3126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_fcall f_3312(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_fcall f_3315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_fcall f_3361(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3327)
static void C_ccall f_3327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_ccall f_3330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3167)
static void C_ccall f_3167(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_fcall f_3129(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_fcall f_2875(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_fcall f_2913(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_fcall f_2934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_fcall f_2999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2987)
static void C_ccall f_2987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_fcall f_2848(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2726)
static void C_fcall f_2726(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2774)
static void C_ccall f_2774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1227)
static void C_fcall f_1227(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2668)
static void C_fcall f_2668(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2678)
static void C_ccall f_2678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1230)
static void C_fcall f_1230(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2639)
static void C_ccall f_2639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_fcall f_2569(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_fcall f_1858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2121)
static void C_ccall f_2121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_fcall f_1864(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2057)
static void C_fcall f_2057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2044)
static void C_ccall f_2044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1994)
static void C_ccall f_1994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1997)
static void C_ccall f_1997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2015)
static void C_fcall f_2015(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1812)
static void C_ccall f_1812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1733)
static void C_ccall f_1733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_ccall f_1595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_ccall f_1563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_ccall f_1409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1207)
static void C_fcall f_1207(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1185)
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1149)
static void C_fcall f_1149(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_8063)
static void C_fcall trf_8063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8063(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8063(t0,t1);}

C_noret_decl(trf_8084)
static void C_fcall trf_8084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8084(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8084(t0,t1);}

C_noret_decl(trf_8591)
static void C_fcall trf_8591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8591(t0,t1);}

C_noret_decl(trf_8533)
static void C_fcall trf_8533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8533(t0,t1);}

C_noret_decl(trf_8497)
static void C_fcall trf_8497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8497(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8497(t0,t1);}

C_noret_decl(trf_8462)
static void C_fcall trf_8462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8462(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8462(t0,t1);}

C_noret_decl(trf_8414)
static void C_fcall trf_8414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8414(t0,t1);}

C_noret_decl(trf_8366)
static void C_fcall trf_8366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8366(t0,t1);}

C_noret_decl(trf_8318)
static void C_fcall trf_8318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8318(t0,t1);}

C_noret_decl(trf_8283)
static void C_fcall trf_8283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8283(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8283(t0,t1);}

C_noret_decl(trf_8247)
static void C_fcall trf_8247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8247(t0,t1);}

C_noret_decl(trf_8211)
static void C_fcall trf_8211(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8211(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8211(t0,t1);}

C_noret_decl(trf_8189)
static void C_fcall trf_8189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8189(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8189(t0,t1);}

C_noret_decl(trf_8184)
static void C_fcall trf_8184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8184(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8184(t0,t1);}

C_noret_decl(trf_8179)
static void C_fcall trf_8179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8179(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8179(t0,t1);}

C_noret_decl(trf_7999)
static void C_fcall trf_7999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7999(t0,t1);}

C_noret_decl(trf_7230)
static void C_fcall trf_7230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7230(t0,t1);}

C_noret_decl(trf_7257)
static void C_fcall trf_7257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7257(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7257(t0,t1);}

C_noret_decl(trf_7443)
static void C_fcall trf_7443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7443(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7443(t0,t1);}

C_noret_decl(trf_7840)
static void C_fcall trf_7840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7840(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7840(t0,t1);}

C_noret_decl(trf_7807)
static void C_fcall trf_7807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7807(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7807(t0,t1);}

C_noret_decl(trf_7775)
static void C_fcall trf_7775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7775(t0,t1);}

C_noret_decl(trf_7740)
static void C_fcall trf_7740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7740(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7740(t0,t1);}

C_noret_decl(trf_7670)
static void C_fcall trf_7670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7670(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7670(t0,t1);}

C_noret_decl(trf_7625)
static void C_fcall trf_7625(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7625(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7625(t0,t1);}

C_noret_decl(trf_7593)
static void C_fcall trf_7593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7593(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7593(t0,t1);}

C_noret_decl(trf_7561)
static void C_fcall trf_7561(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7561(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7561(t0,t1);}

C_noret_decl(trf_7529)
static void C_fcall trf_7529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7529(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7529(t0,t1);}

C_noret_decl(trf_7497)
static void C_fcall trf_7497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7497(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7497(t0,t1);}

C_noret_decl(trf_7475)
static void C_fcall trf_7475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7475(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7475(t0,t1);}

C_noret_decl(trf_7202)
static void C_fcall trf_7202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7202(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7202(t0,t1);}

C_noret_decl(trf_6108)
static void C_fcall trf_6108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6108(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6108(t0,t1);}

C_noret_decl(trf_6198)
static void C_fcall trf_6198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6198(t0,t1);}

C_noret_decl(trf_6210)
static void C_fcall trf_6210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6210(t0,t1);}

C_noret_decl(trf_6306)
static void C_fcall trf_6306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6306(t0,t1);}

C_noret_decl(trf_6938)
static void C_fcall trf_6938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6938(t0,t1);}

C_noret_decl(trf_6958)
static void C_fcall trf_6958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6958(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6958(t0,t1);}

C_noret_decl(trf_6892)
static void C_fcall trf_6892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6892(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6892(t0,t1);}

C_noret_decl(trf_6842)
static void C_fcall trf_6842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6842(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6842(t0,t1);}

C_noret_decl(trf_6792)
static void C_fcall trf_6792(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6792(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6792(t0,t1);}

C_noret_decl(trf_6753)
static void C_fcall trf_6753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6753(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6753(t0,t1);}

C_noret_decl(trf_6714)
static void C_fcall trf_6714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6714(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6714(t0,t1);}

C_noret_decl(trf_6675)
static void C_fcall trf_6675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6675(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6675(t0,t1);}

C_noret_decl(trf_6636)
static void C_fcall trf_6636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6636(t0,t1);}

C_noret_decl(trf_6576)
static void C_fcall trf_6576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6576(t0,t1);}

C_noret_decl(trf_6537)
static void C_fcall trf_6537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6537(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6537(t0,t1);}

C_noret_decl(trf_6501)
static void C_fcall trf_6501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6501(t0,t1);}

C_noret_decl(trf_6465)
static void C_fcall trf_6465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6465(t0,t1);}

C_noret_decl(trf_6429)
static void C_fcall trf_6429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6429(t0,t1);}

C_noret_decl(trf_6393)
static void C_fcall trf_6393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6393(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6393(t0,t1);}

C_noret_decl(trf_6367)
static void C_fcall trf_6367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6367(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6367(t0,t1,t2);}

C_noret_decl(trf_6358)
static void C_fcall trf_6358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6358(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6358(t0,t1,t2);}

C_noret_decl(trf_6353)
static void C_fcall trf_6353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6353(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6353(t0,t1);}

C_noret_decl(trf_6038)
static void C_fcall trf_6038(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6038(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6038(t0,t1,t2);}

C_noret_decl(trf_6033)
static void C_fcall trf_6033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6033(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6033(t0,t1);}

C_noret_decl(trf_5614)
static void C_fcall trf_5614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5614(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5614(t0,t1);}

C_noret_decl(trf_5623)
static void C_fcall trf_5623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5623(t0,t1);}

C_noret_decl(trf_5647)
static void C_fcall trf_5647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5647(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5647(t0,t1);}

C_noret_decl(trf_5687)
static void C_fcall trf_5687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5687(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5687(t0,t1);}

C_noret_decl(trf_5291)
static void C_fcall trf_5291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5291(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5291(t0,t1);}

C_noret_decl(trf_5163)
static void C_fcall trf_5163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5163(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5163(t0,t1,t2);}

C_noret_decl(trf_5192)
static void C_fcall trf_5192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5192(t0,t1);}

C_noret_decl(trf_5195)
static void C_fcall trf_5195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5195(t0,t1);}

C_noret_decl(trf_5179)
static void C_fcall trf_5179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5179(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5179(t0,t1);}

C_noret_decl(trf_5099)
static void C_fcall trf_5099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5099(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5099(t0,t1,t2);}

C_noret_decl(trf_4234)
static void C_fcall trf_4234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4234(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4234(t0,t1);}

C_noret_decl(trf_4262)
static void C_fcall trf_4262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4262(t0,t1);}

C_noret_decl(trf_4944)
static void C_fcall trf_4944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4944(t0,t1);}

C_noret_decl(trf_4328)
static void C_fcall trf_4328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4328(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4328(t0,t1);}

C_noret_decl(trf_4906)
static void C_fcall trf_4906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4906(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4906(t0,t1,t2,t3);}

C_noret_decl(trf_4849)
static void C_fcall trf_4849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4849(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4849(t0,t1);}

C_noret_decl(trf_4870)
static void C_fcall trf_4870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4870(t0,t1);}

C_noret_decl(trf_4813)
static void C_fcall trf_4813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4813(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4813(t0,t1);}

C_noret_decl(trf_4780)
static void C_fcall trf_4780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4780(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4780(t0,t1);}

C_noret_decl(trf_4789)
static void C_fcall trf_4789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4789(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4789(t0,t1);}

C_noret_decl(trf_4734)
static void C_fcall trf_4734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4734(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4734(t0,t1);}

C_noret_decl(trf_4680)
static void C_fcall trf_4680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4680(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4680(t0,t1,t2,t3);}

C_noret_decl(trf_4635)
static void C_fcall trf_4635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4635(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4635(t0,t1,t2,t3);}

C_noret_decl(trf_4360)
static void C_fcall trf_4360(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4360(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4360(t0,t1);}

C_noret_decl(trf_4420)
static void C_fcall trf_4420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4420(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4420(t0,t1,t2,t3);}

C_noret_decl(trf_3599)
static void C_fcall trf_3599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3599(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3599(t0,t1,t2,t3);}

C_noret_decl(trf_3412)
static void C_fcall trf_3412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3412(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3412(t0,t1);}

C_noret_decl(trf_3418)
static void C_fcall trf_3418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3418(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3418(t0,t1,t2,t3);}

C_noret_decl(trf_4163)
static void C_fcall trf_4163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4163(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4163(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4172)
static void C_fcall trf_4172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4172(t0,t1,t2,t3);}

C_noret_decl(trf_4191)
static void C_fcall trf_4191(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4191(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4191(t0,t1,t2);}

C_noret_decl(trf_3722)
static void C_fcall trf_3722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3722(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3722(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3868)
static void C_fcall trf_3868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3868(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3868(t0,t1);}

C_noret_decl(trf_3873)
static void C_fcall trf_3873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3873(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3873(t0,t1,t2,t3);}

C_noret_decl(trf_3892)
static void C_fcall trf_3892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3892(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3892(t0,t1,t2);}

C_noret_decl(trf_3786)
static void C_fcall trf_3786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3786(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3786(t0,t1);}

C_noret_decl(trf_3449)
static void C_fcall trf_3449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3449(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3449(t0,t1);}

C_noret_decl(trf_4059)
static void C_fcall trf_4059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4059(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4059(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4083)
static void C_fcall trf_4083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4083(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4083(t0,t1,t2,t3);}

C_noret_decl(trf_4102)
static void C_fcall trf_4102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4102(t0,t1);}

C_noret_decl(trf_4151)
static void C_fcall trf_4151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4151(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4151(t0,t1,t2,t3);}

C_noret_decl(trf_3126)
static void C_fcall trf_3126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3126(t0,t1);}

C_noret_decl(trf_3312)
static void C_fcall trf_3312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3312(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3312(t0,t1);}

C_noret_decl(trf_3315)
static void C_fcall trf_3315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3315(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3315(t0,t1);}

C_noret_decl(trf_3361)
static void C_fcall trf_3361(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3361(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3361(t0,t1);}

C_noret_decl(trf_3165)
static void C_fcall trf_3165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3165(t0,t1,t2);}

C_noret_decl(trf_3129)
static void C_fcall trf_3129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3129(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3129(t0,t1);}

C_noret_decl(trf_3142)
static void C_fcall trf_3142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3142(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3142(t0,t1,t2,t3);}

C_noret_decl(trf_2875)
static void C_fcall trf_2875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2875(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2875(t0,t1);}

C_noret_decl(trf_2913)
static void C_fcall trf_2913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2913(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2913(t0,t1);}

C_noret_decl(trf_2934)
static void C_fcall trf_2934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2934(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2934(t0,t1);}

C_noret_decl(trf_2999)
static void C_fcall trf_2999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2999(t0,t1);}

C_noret_decl(trf_2848)
static void C_fcall trf_2848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2848(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2848(t0,t1);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2700(t0,t1);}

C_noret_decl(trf_2726)
static void C_fcall trf_2726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2726(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2726(t0,t1);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2703(t0,t1);}

C_noret_decl(trf_1227)
static void C_fcall trf_1227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1227(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1227(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2668)
static void C_fcall trf_2668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2668(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2668(t0,t1,t2,t3);}

C_noret_decl(trf_1230)
static void C_fcall trf_1230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1230(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1230(t0,t1,t2,t3);}

C_noret_decl(trf_2569)
static void C_fcall trf_2569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2569(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2569(t0,t1,t2,t3);}

C_noret_decl(trf_1858)
static void C_fcall trf_1858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1858(t0,t1);}

C_noret_decl(trf_1864)
static void C_fcall trf_1864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1864(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1864(t0,t1);}

C_noret_decl(trf_2057)
static void C_fcall trf_2057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2057(t0,t1);}

C_noret_decl(trf_2015)
static void C_fcall trf_2015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2015(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2015(t0,t1);}

C_noret_decl(trf_1396)
static void C_fcall trf_1396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1396(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1396(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1207)
static void C_fcall trf_1207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1207(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1207(t0,t1);}

C_noret_decl(trf_1185)
static void C_fcall trf_1185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1185(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1185(t0,t1,t2);}

C_noret_decl(trf_1149)
static void C_fcall trf_1149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1149(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1149(t0,t1,t2,t3);}

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
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
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
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(18);
if(!C_demand(18)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2346)){
C_save(t1);
C_rereclaim2(2346*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(18);
C_initialize_lf(lf,929);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_static_lambda_info(C_heaptop,10,"(a1080 x7)");
lf[5]=C_h_intern(&lf[5],12,"\003sysfor-each");
lf[6]=C_static_lambda_info(C_heaptop,24,"(##compiler#gen . data6)");
lf[7]=C_h_intern(&lf[7],17,"\010compilergen-list");
lf[8]=C_static_lambda_info(C_heaptop,10,"(a1101 x9)");
lf[9]=C_h_intern(&lf[9],11,"intersperse");
lf[10]=C_static_lambda_info(C_heaptop,26,"(##compiler#gen-list lst8)");
lf[11]=C_h_intern(&lf[11],31,"\010compilercompute-namespace-size");
lf[12]=C_static_lambda_info(C_heaptop,39,"(##compiler#compute-namespace-size n10)");
lf[13]=C_h_intern(&lf[13],18,"\010compilerunique-id");
lf[14]=C_h_intern(&lf[14],29,"\010compilerquick-namespace-list");
lf[15]=C_h_intern(&lf[15],35,"\010compilersetup-quick-namespace-list");
lf[16]=C_h_intern(&lf[16],6,"append");
lf[17]=C_static_lambda_info(C_heaptop,12,"(a1125 ns11)");
lf[18]=C_h_intern(&lf[18],24,"\010compilernamespace-table");
lf[19]=C_static_lambda_info(C_heaptop,39,"(##compiler#setup-quick-namespace-list)");
lf[20]=C_h_intern(&lf[20],25,"\010compilernamespace-lookup");
lf[21]=C_h_intern(&lf[21],13,"\010compilerbomb");
lf[22]=C_static_string(C_heaptop,23,"symbol not in namespace");
lf[23]=C_h_intern(&lf[23],4,"cdar");
lf[24]=C_static_lambda_info(C_heaptop,19,"(loop nslist14 i15)");
lf[25]=C_static_lambda_info(C_heaptop,35,"(##compiler#namespace-lookup sym12)");
lf[26]=C_h_intern(&lf[26],22,"\010compilergenerate-code");
lf[27]=C_static_string(C_heaptop,17,"can\047t find lambda");
lf[28]=C_h_intern(&lf[28],17,"lambda-literal-id");
lf[29]=C_static_lambda_info(C_heaptop,12,"(a1196 ll44)");
lf[30]=C_h_intern(&lf[30],4,"find");
lf[31]=C_static_lambda_info(C_heaptop,18,"(find-lambda id41)");
lf[32]=C_h_intern(&lf[32],16,"string-translate");
lf[33]=C_static_string(C_heaptop,1,"\134");
lf[34]=C_static_string(C_heaptop,1,"/");
lf[35]=C_h_intern(&lf[35],8,"->string");
lf[36]=C_static_lambda_info(C_heaptop,14,"(slashify s45)");
lf[37]=C_h_intern(&lf[37],14,"\004coreimmediate");
lf[38]=C_h_intern(&lf[38],4,"bool");
lf[39]=C_static_string(C_heaptop,13,"C_SCHEME_TRUE");
lf[40]=C_static_string(C_heaptop,14,"C_SCHEME_FALSE");
lf[41]=C_h_intern(&lf[41],4,"char");
lf[42]=C_static_string(C_heaptop,17,"C_make_character(");
lf[43]=C_h_intern(&lf[43],3,"nil");
lf[44]=C_static_string(C_heaptop,20,"C_SCHEME_END_OF_LIST");
lf[45]=C_h_intern(&lf[45],3,"fix");
lf[46]=C_static_string(C_heaptop,6,"C_fix(");
lf[47]=C_h_intern(&lf[47],3,"eof");
lf[48]=C_static_string(C_heaptop,20,"C_SCHEME_END_OF_FILE");
lf[49]=C_static_string(C_heaptop,13,"bad immediate");
lf[50]=C_h_intern(&lf[50],12,"\004coreliteral");
lf[51]=C_static_string(C_heaptop,3,"lf[");
lf[52]=C_h_intern(&lf[52],2,"if");
lf[53]=C_static_string(C_heaptop,5,"else{");
lf[54]=C_static_string(C_heaptop,3,")){");
lf[55]=C_static_string(C_heaptop,11,"if(C_truep(");
lf[56]=C_h_intern(&lf[56],9,"\004coreproc");
lf[57]=C_static_string(C_heaptop,8,"(C_word)");
lf[58]=C_h_intern(&lf[58],9,"\004corebind");
lf[59]=C_static_lambda_info(C_heaptop,23,"(loop bs70 i71 count72)");
lf[60]=C_h_intern(&lf[60],8,"\004coreref");
lf[61]=C_static_string(C_heaptop,2,")[");
lf[62]=C_static_string(C_heaptop,10,"((C_word*)");
lf[63]=C_h_intern(&lf[63],10,"\004coreunbox");
lf[64]=C_static_string(C_heaptop,4,")[1]");
lf[65]=C_static_string(C_heaptop,10,"((C_word*)");
lf[66]=C_h_intern(&lf[66],13,"\004coreupdate_i");
lf[67]=C_static_string(C_heaptop,17,"C_set_block_item(");
lf[68]=C_h_intern(&lf[68],11,"\004coreupdate");
lf[69]=C_static_string(C_heaptop,2,")+");
lf[70]=C_static_string(C_heaptop,1,",");
lf[71]=C_static_string(C_heaptop,20,"C_mutate(((C_word *)");
lf[72]=C_h_intern(&lf[72],16,"\004coreupdatebox_i");
lf[73]=C_static_string(C_heaptop,3,",0,");
lf[74]=C_static_string(C_heaptop,17,"C_set_block_item(");
lf[75]=C_h_intern(&lf[75],14,"\004coreupdatebox");
lf[76]=C_static_string(C_heaptop,4,")+1,");
lf[77]=C_static_string(C_heaptop,20,"C_mutate(((C_word *)");
lf[78]=C_h_intern(&lf[78],12,"\004coreclosure");
lf[79]=C_static_string(C_heaptop,17,"tmp=(C_word)a,a+=");
lf[80]=C_static_string(C_heaptop,5,",tmp)");
lf[81]=C_static_string(C_heaptop,2,"a[");
lf[82]=C_static_string(C_heaptop,2,"]=");
lf[83]=C_static_lambda_info(C_heaptop,15,"(a1635 x98 j99)");
lf[84]=C_h_intern(&lf[84],8,"for-each");
lf[85]=C_h_intern(&lf[85],4,"iota");
lf[86]=C_static_string(C_heaptop,19,"(*a=C_CLOSURE_TYPE|");
lf[87]=C_h_intern(&lf[87],8,"\004corebox");
lf[88]=C_static_string(C_heaptop,24,",tmp=(C_word)a,a+=2,tmp)");
lf[89]=C_static_string(C_heaptop,25,"(*a=C_VECTOR_TYPE|1,a[1]=");
lf[90]=C_h_intern(&lf[90],10,"\004corelocal");
lf[91]=C_h_intern(&lf[91],13,"\004coresetlocal");
lf[92]=C_h_intern(&lf[92],11,"\004coreglobal");
lf[93]=C_static_string(C_heaptop,3,"lf[");
lf[94]=C_static_string(C_heaptop,1,"]");
lf[95]=C_static_string(C_heaptop,15,"C_retrieve2(lf[");
lf[96]=C_static_string(C_heaptop,2,"],");
lf[97]=C_h_intern(&lf[97],21,"\010compilerc-ify-string");
lf[98]=C_h_intern(&lf[98],14,"symbol->string");
lf[99]=C_static_string(C_heaptop,14,"*((C_word*)lf[");
lf[100]=C_static_string(C_heaptop,4,"]+1)");
lf[101]=C_static_string(C_heaptop,14,"C_retrieve(lf[");
lf[102]=C_static_string(C_heaptop,2,"])");
lf[103]=C_h_intern(&lf[103],14,"\004coresetglobal");
lf[104]=C_static_string(C_heaptop,13,"C_mutate(&lf[");
lf[105]=C_static_string(C_heaptop,2,"],");
lf[106]=C_static_string(C_heaptop,21,"C_mutate((C_word*)lf[");
lf[107]=C_static_string(C_heaptop,4,"]+1,");
lf[108]=C_h_intern(&lf[108],16,"\004coresetglobal_i");
lf[109]=C_static_string(C_heaptop,3,"lf[");
lf[110]=C_static_string(C_heaptop,2,"]=");
lf[111]=C_static_string(C_heaptop,20,"C_set_block_item(lf[");
lf[112]=C_static_string(C_heaptop,4,"],0,");
lf[113]=C_h_intern(&lf[113],14,"\004coreundefined");
lf[114]=C_static_string(C_heaptop,18,"C_SCHEME_UNDEFINED");
lf[115]=C_h_intern(&lf[115],9,"\004corecall");
lf[116]=C_static_string(C_heaptop,2,");");
lf[117]=C_static_string(C_heaptop,3,",0,");
lf[118]=C_static_string(C_heaptop,10,"goto loop;");
lf[119]=C_static_string(C_heaptop,2,"c=");
lf[120]=C_static_string(C_heaptop,2,"=t");
lf[121]=C_static_lambda_info(C_heaptop,21,"(a1923 from149 to150)");
lf[122]=C_static_lambda_info(C_heaptop,20,"(a1933 arg145 tr146)");
lf[123]=C_h_intern(&lf[123],26,"lambda-literal-temporaries");
lf[124]=C_static_string(C_heaptop,2,");");
lf[125]=C_h_intern(&lf[125],22,"lambda-literal-looping");
lf[126]=C_static_string(C_heaptop,2,");");
lf[127]=C_static_string(C_heaptop,2,")(");
lf[128]=C_static_string(C_heaptop,2,",t");
lf[129]=C_h_intern(&lf[129],6,"unsafe");
lf[130]=C_static_string(C_heaptop,20,"(void*)(*((C_word*)t");
lf[131]=C_static_string(C_heaptop,4,"+1))");
lf[132]=C_static_string(C_heaptop,17,"C_retrieve_proc(t");
lf[133]=C_static_string(C_heaptop,1,")");
lf[134]=C_h_intern(&lf[134],19,"no-procedure-checks");
lf[135]=C_static_string(C_heaptop,8,"((C_proc");
lf[136]=C_static_string(C_heaptop,1,")");
lf[137]=C_h_intern(&lf[137],24,"\010compileremit-trace-info");
lf[138]=C_static_string(C_heaptop,9,"C_trace(\042");
lf[139]=C_static_string(C_heaptop,3,"\042);");
lf[140]=C_static_string(C_heaptop,3,"/* ");
lf[141]=C_static_string(C_heaptop,3," */");
lf[142]=C_h_intern(&lf[142],17,"string-translate*");
tmp=C_static_string(C_heaptop,2,"*/");
C_save(tmp);
tmp=C_static_string(C_heaptop,3,"* /");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[143]=C_h_pair(C_restore,tmp);
lf[144]=C_h_intern(&lf[144],23,"\010compileremit-line-info");
lf[145]=C_static_string(C_heaptop,6,"#line ");
lf[146]=C_static_string(C_heaptop,2," \042");
lf[147]=C_static_string(C_heaptop,1,"\042");
lf[148]=C_h_intern(&lf[148],27,"lambda-literal-closure-size");
lf[149]=C_h_intern(&lf[149],28,"\010compilersource-info->string");
lf[150]=C_h_intern(&lf[150],12,"\004corerecurse");
lf[151]=C_static_string(C_heaptop,10,"goto loop;");
lf[152]=C_static_string(C_heaptop,2,"=t");
lf[153]=C_static_lambda_info(C_heaptop,21,"(a2184 from183 to184)");
lf[154]=C_static_lambda_info(C_heaptop,20,"(a2194 arg179 tr180)");
lf[155]=C_static_string(C_heaptop,3,"t0,");
lf[156]=C_h_intern(&lf[156],16,"\004coredirect_call");
lf[157]=C_static_string(C_heaptop,9,"C_a_i(&a,");
lf[158]=C_h_intern(&lf[158],13,"\004corecallunit");
lf[159]=C_static_string(C_heaptop,2,");");
lf[160]=C_static_string(C_heaptop,2,"C_");
lf[161]=C_static_string(C_heaptop,10,"_toplevel(");
lf[162]=C_static_string(C_heaptop,20,",C_SCHEME_UNDEFINED,");
lf[163]=C_h_intern(&lf[163],11,"\004corereturn");
lf[164]=C_static_string(C_heaptop,2,");");
lf[165]=C_static_string(C_heaptop,7,"return(");
lf[166]=C_h_intern(&lf[166],11,"\004coreinline");
lf[167]=C_static_string(C_heaptop,8,"(C_word)");
lf[168]=C_h_intern(&lf[168],20,"\004coreinline_allocate");
lf[169]=C_static_string(C_heaptop,8,"(C_word)");
lf[170]=C_static_string(C_heaptop,4,"(&a,");
lf[171]=C_h_intern(&lf[171],15,"\004coreinline_ref");
lf[172]=C_h_intern(&lf[172],34,"\010compilerforeign-result-conversion");
lf[173]=C_static_string(C_heaptop,1,"a");
lf[174]=C_h_intern(&lf[174],18,"\004coreinline_update");
lf[175]=C_static_string(C_heaptop,21,"),C_SCHEME_UNDEFINED)");
lf[176]=C_static_string(C_heaptop,2,"=(");
lf[177]=C_h_intern(&lf[177],36,"\010compilerforeign-argument-conversion");
lf[178]=C_h_intern(&lf[178],33,"\010compilerforeign-type-declaration");
lf[179]=C_static_string(C_heaptop,0,"");
lf[180]=C_h_intern(&lf[180],19,"\004coreinline_loc_ref");
lf[181]=C_static_string(C_heaptop,3,")))");
lf[182]=C_static_string(C_heaptop,3,"*((");
lf[183]=C_static_string(C_heaptop,17,"*)C_data_pointer(");
lf[184]=C_static_string(C_heaptop,0,"");
lf[185]=C_static_string(C_heaptop,1,"a");
lf[186]=C_h_intern(&lf[186],22,"\004coreinline_loc_update");
lf[187]=C_static_string(C_heaptop,21,"),C_SCHEME_UNDEFINED)");
lf[188]=C_static_string(C_heaptop,3,"))=");
lf[189]=C_static_string(C_heaptop,4,"((*(");
lf[190]=C_static_string(C_heaptop,17,"*)C_data_pointer(");
lf[191]=C_static_string(C_heaptop,0,"");
lf[192]=C_h_intern(&lf[192],11,"\004coreswitch");
lf[193]=C_static_string(C_heaptop,8,"default:");
lf[194]=C_static_string(C_heaptop,5,"case ");
lf[195]=C_static_lambda_info(C_heaptop,18,"(do228 j230 ps231)");
lf[196]=C_static_string(C_heaptop,2,"){");
lf[197]=C_static_string(C_heaptop,7,"switch(");
lf[198]=C_h_intern(&lf[198],9,"\004corecond");
lf[199]=C_static_string(C_heaptop,2,")\077");
lf[200]=C_static_string(C_heaptop,9,"(C_truep(");
lf[201]=C_static_string(C_heaptop,8,"bad form");
lf[202]=C_static_lambda_info(C_heaptop,14,"(expr n52 i53)");
lf[203]=C_static_lambda_info(C_heaptop,13,"(a2673 xs250)");
lf[204]=C_h_intern(&lf[204],13,"pair-for-each");
lf[205]=C_static_lambda_info(C_heaptop,24,"(expr-args args248 i249)");
lf[206]=C_static_lambda_info(C_heaptop,32,"(expression node47 temps48 ll49)");
lf[207]=C_h_intern(&lf[207],13,"string-append");
lf[208]=C_static_string(C_heaptop,1,"0");
lf[209]=C_static_lambda_info(C_heaptop,11,"(pad0 n259)");
lf[210]=C_h_intern(&lf[210],30,"\010compilerexternal-protos-first");
lf[211]=C_h_intern(&lf[211],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[212]=C_h_intern(&lf[212],22,"foreign-callback-stubs");
lf[213]=C_h_intern(&lf[213],29,"\010compilerforeign-declarations");
lf[214]=C_static_lambda_info(C_heaptop,15,"(a2778 decl267)");
lf[215]=C_static_string(C_heaptop,2,"*/");
lf[216]=C_static_string(C_heaptop,10,"#include \042");
lf[217]=C_h_intern(&lf[217],28,"\010compilertarget-include-file");
lf[218]=C_static_string(C_heaptop,1,"\042");
lf[219]=C_h_intern(&lf[219],18,"\010compilerunit-name");
lf[220]=C_static_string(C_heaptop,9,"   unit: ");
lf[221]=C_h_intern(&lf[221],19,"\010compilerused-units");
lf[222]=C_static_string(C_heaptop,15,"   used units: ");
lf[223]=C_h_intern(&lf[223],27,"\010compilercompiler-arguments");
lf[224]=C_static_string(C_heaptop,18,"/* Generated from ");
lf[225]=C_static_string(C_heaptop,24," by the CHICKEN compiler");
lf[226]=C_static_string(C_heaptop,48,"   http://www.call-with-current-continuation.org");
lf[227]=C_static_string(C_heaptop,3,"   ");
lf[228]=C_static_string(C_heaptop,3,"   ");
lf[229]=C_static_string(C_heaptop,17,"   command line: ");
lf[230]=C_h_intern(&lf[230],15,"chicken-version");
lf[231]=C_h_intern(&lf[231],15,"\003sysmatch-error");
lf[232]=C_h_intern(&lf[232],18,"\003sysdecode-seconds");
lf[233]=C_h_intern(&lf[233],15,"current-seconds");
lf[234]=C_static_lambda_info(C_heaptop,8,"(header)");
lf[235]=C_static_string(C_heaptop,23,"static C_TLS C_word lf[");
lf[236]=C_static_string(C_heaptop,2,"];");
lf[237]=C_static_string(C_heaptop,15,"C_noret_decl(C_");
lf[238]=C_static_string(C_heaptop,10,"_toplevel)");
lf[239]=C_static_string(C_heaptop,30,"C_externimport void C_ccall C_");
lf[240]=C_static_string(C_heaptop,46,"_toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[241]=C_static_lambda_info(C_heaptop,13,"(a2868 uu278)");
lf[242]=C_static_string(C_heaptop,43,"static C_PTABLE_ENTRY *create_ptable(void);");
lf[243]=C_static_lambda_info(C_heaptop,14,"(declarations)");
lf[244]=C_static_string(C_heaptop,10,") C_noret;");
lf[245]=C_h_intern(&lf[245],9,"make-list");
lf[246]=C_static_string(C_heaptop,7,",C_word");
lf[247]=C_static_string(C_heaptop,29,"typedef void (C_cdecl *C_proc");
lf[248]=C_static_string(C_heaptop,8,")(C_word");
lf[249]=C_static_lambda_info(C_heaptop,12,"(a2886 s315)");
lf[250]=C_h_intern(&lf[250],4,"none");
lf[251]=C_static_string(C_heaptop,9,",C_word t");
lf[252]=C_static_string(C_heaptop,10,") C_noret;");
lf[253]=C_static_string(C_heaptop,13,"C_noret_decl(");
lf[254]=C_static_string(C_heaptop,1,")");
lf[255]=C_static_string(C_heaptop,20,"static void C_ccall ");
lf[256]=C_static_string(C_heaptop,2,"r(");
lf[257]=C_static_string(C_heaptop,14,",...) C_noret;");
lf[258]=C_static_string(C_heaptop,8," C_noret");
lf[259]=C_static_string(C_heaptop,9,"C_word *a");
lf[260]=C_static_string(C_heaptop,9,"C_word c,");
lf[261]=C_h_intern(&lf[261],8,"toplevel");
lf[262]=C_static_string(C_heaptop,2,"C_");
lf[263]=C_static_string(C_heaptop,28,"C_externexport void C_ccall ");
lf[264]=C_h_intern(&lf[264],27,"\010compileremit-unsafe-marker");
lf[265]=C_static_string(C_heaptop,49,"C_externexport void C_dynamic_and_unsafe(void) {}");
lf[266]=C_static_string(C_heaptop,15,"C_noret_decl(C_");
lf[267]=C_static_string(C_heaptop,1,")");
lf[268]=C_static_string(C_heaptop,9,"_toplevel");
lf[269]=C_static_string(C_heaptop,8,"toplevel");
lf[270]=C_static_string(C_heaptop,8,"C_fcall ");
lf[271]=C_static_string(C_heaptop,8,"C_ccall ");
lf[272]=C_static_string(C_heaptop,7,"C_word ");
lf[273]=C_static_string(C_heaptop,5,"void ");
lf[274]=C_static_string(C_heaptop,7,"static ");
lf[275]=C_static_string(C_heaptop,13,"C_noret_decl(");
lf[276]=C_static_string(C_heaptop,1,")");
lf[277]=C_h_intern(&lf[277],21,"small-parameter-limit");
lf[278]=C_h_intern(&lf[278],11,"lset-adjoin");
lf[279]=C_h_intern(&lf[279],1,"=");
lf[280]=C_static_lambda_info(C_heaptop,12,"(a3075 s292)");
lf[281]=C_h_intern(&lf[281],32,"lambda-literal-callee-signatures");
lf[282]=C_h_intern(&lf[282],24,"lambda-literal-allocated");
lf[283]=C_h_intern(&lf[283],21,"lambda-literal-direct");
lf[284]=C_h_intern(&lf[284],33,"lambda-literal-rest-argument-mode");
lf[285]=C_h_intern(&lf[285],28,"lambda-literal-rest-argument");
lf[286]=C_h_intern(&lf[286],27,"\010compilermake-variable-list");
lf[287]=C_static_string(C_heaptop,1,"t");
lf[288]=C_h_intern(&lf[288],27,"lambda-literal-customizable");
lf[289]=C_h_intern(&lf[289],29,"lambda-literal-argument-count");
lf[290]=C_static_lambda_info(C_heaptop,13,"(a2902 ll282)");
lf[291]=C_static_lambda_info(C_heaptop,12,"(prototypes)");
lf[292]=C_static_string(C_heaptop,16,"C_adjust_stack(-");
lf[293]=C_static_string(C_heaptop,2,");");
lf[294]=C_static_string(C_heaptop,8,"C_word t");
lf[295]=C_static_string(C_heaptop,8,"=C_pick(");
lf[296]=C_static_string(C_heaptop,2,");");
lf[297]=C_static_lambda_info(C_heaptop,17,"(do326 i328 j329)");
lf[298]=C_static_lambda_info(C_heaptop,14,"(restore n325)");
lf[299]=C_static_string(C_heaptop,3,");}");
lf[300]=C_h_intern(&lf[300],27,"\010compilermake-argument-list");
lf[301]=C_static_string(C_heaptop,1,"t");
lf[302]=C_static_string(C_heaptop,4,"(k)(");
lf[303]=C_static_string(C_heaptop,6,"(a,n);");
lf[304]=C_static_string(C_heaptop,7,"_vector");
lf[305]=C_static_string(C_heaptop,15,"=C_restore_rest");
lf[306]=C_static_string(C_heaptop,15,"a=C_alloc(n+1);");
lf[307]=C_static_string(C_heaptop,15,"a=C_alloc(n*3);");
lf[308]=C_static_string(C_heaptop,18,"n=C_rest_count(0);");
lf[309]=C_static_string(C_heaptop,7,"(C_proc");
lf[310]=C_static_string(C_heaptop,4," k){");
lf[311]=C_static_string(C_heaptop,6,"int n;");
lf[312]=C_static_string(C_heaptop,11,"C_word *a,t");
lf[313]=C_static_string(C_heaptop,32,"C_regparm static void C_fcall tr");
lf[314]=C_static_string(C_heaptop,7,"(C_proc");
lf[315]=C_static_string(C_heaptop,22," k) C_regparm C_noret;");
lf[316]=C_static_string(C_heaptop,0,"");
lf[317]=C_static_string(C_heaptop,0,"");
lf[318]=C_static_string(C_heaptop,15,"C_noret_decl(tr");
lf[319]=C_static_string(C_heaptop,1,")");
lf[320]=C_static_string(C_heaptop,22,"static void C_fcall tr");
lf[321]=C_static_lambda_info(C_heaptop,13,"(f_3167 n334)");
lf[322]=C_static_lambda_info(C_heaptop,18,"(emitter vflag333)");
lf[323]=C_static_string(C_heaptop,3,");}");
lf[324]=C_static_string(C_heaptop,1,"t");
lf[325]=C_static_string(C_heaptop,4,"(k)(");
lf[326]=C_static_string(C_heaptop,32,"C_regparm static void C_fcall tr");
lf[327]=C_static_string(C_heaptop,7,"(C_proc");
lf[328]=C_static_string(C_heaptop,4," k){");
lf[329]=C_static_string(C_heaptop,15,"C_noret_decl(tr");
lf[330]=C_static_string(C_heaptop,1,")");
lf[331]=C_static_string(C_heaptop,22,"static void C_fcall tr");
lf[332]=C_static_string(C_heaptop,7,"(C_proc");
lf[333]=C_static_string(C_heaptop,22," k) C_regparm C_noret;");
lf[334]=C_static_lambda_info(C_heaptop,12,"(a3263 n366)");
lf[335]=C_static_string(C_heaptop,3,");}");
lf[336]=C_static_string(C_heaptop,1,"t");
lf[337]=C_static_string(C_heaptop,32,"C_regparm static void C_fcall tr");
lf[338]=C_static_string(C_heaptop,14,"(void *dummy){");
lf[339]=C_static_string(C_heaptop,15,"C_noret_decl(tr");
lf[340]=C_static_string(C_heaptop,1,")");
lf[341]=C_static_string(C_heaptop,22,"static void C_fcall tr");
lf[342]=C_static_string(C_heaptop,32,"(void *dummy) C_regparm C_noret;");
lf[343]=C_h_intern(&lf[343],6,"vector");
lf[344]=C_h_intern(&lf[344],23,"lambda-literal-external");
lf[345]=C_static_lambda_info(C_heaptop,13,"(a3292 ll348)");
lf[346]=C_static_lambda_info(C_heaptop,13,"(trampolines)");
lf[347]=C_h_intern(&lf[347],14,"\003syscopy-bytes");
lf[348]=C_h_intern(&lf[348],11,"make-string");
lf[349]=C_static_lambda_info(C_heaptop,44,"(string-like-substring s441 start442 end443)");
lf[350]=C_static_string(C_heaptop,2,");");
lf[351]=C_static_lambda_info(C_heaptop,22,"(do429 i431 offset432)");
lf[352]=C_static_string(C_heaptop,10,"C_heaptop,");
lf[353]=C_h_intern(&lf[353],6,"modulo");
lf[354]=C_h_intern(&lf[354],3,"fx/");
lf[355]=C_static_lambda_info(C_heaptop,51,"(gen-string-like-lit to422 lit423 conser424 top425)");
lf[356]=C_static_string(C_heaptop,29,"type of literal not supported");
lf[357]=C_static_lambda_info(C_heaptop,20,"(bad-literal lit383)");
lf[358]=C_h_intern(&lf[358],6,"flonum");
lf[359]=C_h_intern(&lf[359],11,"number-type");
lf[360]=C_static_string(C_heaptop,20,"=C_flonum(C_heaptop,");
lf[361]=C_static_string(C_heaptop,2,");");
lf[362]=C_static_string(C_heaptop,7,"=C_fix(");
lf[363]=C_static_string(C_heaptop,2,");");
lf[364]=C_h_intern(&lf[364],19,"\003sysundefined-value");
lf[365]=C_static_string(C_heaptop,20,"=C_SCHEME_UNDEFINED;");
lf[366]=C_h_intern(&lf[366],6,"fixnum");
lf[367]=C_static_string(C_heaptop,7,"=C_fix(");
lf[368]=C_static_string(C_heaptop,2,");");
lf[369]=C_h_intern(&lf[369],16,"compiler-warning");
lf[370]=C_h_intern(&lf[370],4,"type");
lf[371]=C_static_string(C_heaptop,50,"coerced inexact literal number `~S\047 to fixnum `~S\047");
lf[372]=C_h_intern(&lf[372],11,"\003sysflo2fix");
lf[373]=C_static_string(C_heaptop,31,"=C_flonum(C_heaptop, C_strtod(\042");
lf[374]=C_static_string(C_heaptop,10,"\042, NULL));");
lf[375]=C_static_string(C_heaptop,20,"=C_flonum(C_heaptop,");
lf[376]=C_static_string(C_heaptop,2,");");
lf[377]=C_static_string(C_heaptop,13,"C_SCHEME_TRUE");
lf[378]=C_static_string(C_heaptop,14,"C_SCHEME_FALSE");
lf[379]=C_static_string(C_heaptop,18,"=C_make_character(");
lf[380]=C_static_string(C_heaptop,2,");");
lf[381]=C_static_string(C_heaptop,22,"=C_SCHEME_END_OF_LIST;");
lf[382]=C_static_string(C_heaptop,15,"C_static_string");
lf[383]=C_static_string(C_heaptop,20,"C_static_lambda_info");
lf[384]=C_static_string(C_heaptop,2,");");
lf[385]=C_static_string(C_heaptop,7,"C_drop(");
lf[386]=C_static_string(C_heaptop,2,");");
lf[387]=C_static_string(C_heaptop,8,",C_pick(");
lf[388]=C_static_lambda_info(C_heaptop,12,"(do405 k407)");
lf[389]=C_static_string(C_heaptop,10,"=C_h_list(");
lf[390]=C_static_string(C_heaptop,12,"C_save(tmp);");
lf[391]=C_static_string(C_heaptop,3,"tmp");
lf[392]=C_static_lambda_info(C_heaptop,21,"(do401 len403 lst404)");
lf[393]=C_static_string(C_heaptop,25,"=C_h_pair(C_restore,tmp);");
lf[394]=C_static_string(C_heaptop,3,"tmp");
lf[395]=C_static_string(C_heaptop,12,"C_save(tmp);");
lf[396]=C_static_string(C_heaptop,3,"tmp");
lf[397]=C_static_string(C_heaptop,10,"C_h_vector");
lf[398]=C_static_string(C_heaptop,15,"C_h_intern_in(&");
lf[399]=C_static_string(C_heaptop,7,",stable");
lf[400]=C_static_string(C_heaptop,2,");");
lf[401]=C_static_string(C_heaptop,22,"C_intern_in(C_heaptop,");
lf[402]=C_static_string(C_heaptop,7,",stable");
lf[403]=C_static_string(C_heaptop,2,");");
lf[404]=C_static_string(C_heaptop,12,"C_h_intern(&");
lf[405]=C_static_string(C_heaptop,2,");");
lf[406]=C_static_string(C_heaptop,19,"C_intern(C_heaptop,");
lf[407]=C_static_string(C_heaptop,2,");");
lf[408]=C_static_string(C_heaptop,1,"=");
lf[409]=C_static_string(C_heaptop,13,"C_pbytevector");
lf[410]=C_static_string(C_heaptop,12,"C_bytevector");
lf[411]=C_static_string(C_heaptop,13,"C_h_structure");
lf[412]=C_h_intern(&lf[412],15,"\003sysbytevector\077");
lf[413]=C_h_intern(&lf[413],32,"\010compilerblock-variable-literal\077");
lf[414]=C_static_lambda_info(C_heaptop,28,"(gen-lit lit393 to394 lf395)");
lf[415]=C_static_string(C_heaptop,2,");");
lf[416]=C_static_string(C_heaptop,7,"C_drop(");
lf[417]=C_static_string(C_heaptop,2,");");
lf[418]=C_static_string(C_heaptop,8,",C_pick(");
lf[419]=C_static_lambda_info(C_heaptop,12,"(do455 j457)");
lf[420]=C_static_string(C_heaptop,12,"C_save(tmp);");
lf[421]=C_static_string(C_heaptop,3,"tmp");
lf[422]=C_static_lambda_info(C_heaptop,17,"(do451 j453 n454)");
lf[423]=C_static_lambda_info(C_heaptop,44,"(gen-vector-like-lit to447 lit448 conser449)");
lf[424]=C_h_intern(&lf[424],7,"sprintf");
lf[425]=C_static_string(C_heaptop,6,"lf[~s]");
lf[426]=C_static_lambda_info(C_heaptop,20,"(do377 i379 lits380)");
lf[427]=C_static_lambda_info(C_heaptop,15,"(literal-frame)");
lf[428]=C_h_intern(&lf[428],25,"\010compilerwords-per-flonum");
lf[429]=C_h_intern(&lf[429],6,"reduce");
lf[430]=C_h_intern(&lf[430],1,"+");
lf[431]=C_h_intern(&lf[431],7,"\003sysmap");
lf[432]=C_h_intern(&lf[432],12,"vector->list");
lf[433]=C_h_intern(&lf[433],14,"\010compilerwords");
lf[434]=C_static_lambda_info(C_heaptop,16,"(loop i387 s388)");
lf[435]=C_h_intern(&lf[435],19,"\010compilerimmediate\077");
lf[436]=C_static_lambda_info(C_heaptop,21,"(literal-size lit384)");
lf[437]=C_h_intern(&lf[437],19,"lambda-literal-body");
lf[438]=C_static_string(C_heaptop,18,"C_word *a=C_alloc(");
lf[439]=C_static_string(C_heaptop,2,");");
lf[440]=C_static_string(C_heaptop,8,"C_word t");
lf[441]=C_static_lambda_info(C_heaptop,17,"(do547 i549 j550)");
lf[442]=C_static_string(C_heaptop,11,"C_word tmp;");
lf[443]=C_static_string(C_heaptop,9,",C_word t");
lf[444]=C_static_string(C_heaptop,2,"){");
lf[445]=C_static_string(C_heaptop,20,"static void C_ccall ");
lf[446]=C_static_string(C_heaptop,2,"r(");
lf[447]=C_static_string(C_heaptop,2,",t");
lf[448]=C_static_string(C_heaptop,4,");}}");
lf[449]=C_static_string(C_heaptop,1,"t");
lf[450]=C_static_string(C_heaptop,2,"r(");
lf[451]=C_h_intern(&lf[451],4,"list");
lf[452]=C_static_string(C_heaptop,1,"t");
lf[453]=C_static_string(C_heaptop,35,"=C_restore_rest(a,C_rest_count(0));");
lf[454]=C_static_string(C_heaptop,1,"t");
lf[455]=C_static_string(C_heaptop,42,"=C_restore_rest_vector(a,C_rest_count(0));");
lf[456]=C_static_string(C_heaptop,3,");}");
lf[457]=C_static_string(C_heaptop,5,"else{");
lf[458]=C_static_string(C_heaptop,13,"a=C_alloc((c-");
lf[459]=C_static_string(C_heaptop,5,")*3);");
lf[460]=C_static_string(C_heaptop,8,",(void*)");
lf[461]=C_static_string(C_heaptop,1,"r");
lf[462]=C_static_string(C_heaptop,18,"C_save_and_reclaim");
lf[463]=C_static_string(C_heaptop,9,"C_reclaim");
lf[464]=C_static_string(C_heaptop,10,"((void*)tr");
lf[465]=C_static_string(C_heaptop,3,");}");
lf[466]=C_static_string(C_heaptop,5,",NULL");
lf[467]=C_static_string(C_heaptop,8,",(void*)");
lf[468]=C_static_string(C_heaptop,18,"C_save_and_reclaim");
lf[469]=C_static_string(C_heaptop,9,"C_reclaim");
lf[470]=C_static_string(C_heaptop,10,"((void*)tr");
lf[471]=C_static_string(C_heaptop,18,"C_register_lf2(lf,");
lf[472]=C_static_string(C_heaptop,18,",create_ptable());");
lf[473]=C_static_string(C_heaptop,19,"C_initialize_lf(lf,");
lf[474]=C_static_string(C_heaptop,2,");");
lf[475]=C_static_string(C_heaptop,10,"a=C_alloc(");
lf[476]=C_static_string(C_heaptop,2,");");
lf[477]=C_static_string(C_heaptop,15,"if(!C_demand_2(");
lf[478]=C_static_string(C_heaptop,3,")){");
lf[479]=C_static_string(C_heaptop,11,"C_save(t1);");
lf[480]=C_static_string(C_heaptop,13,"C_rereclaim2(");
lf[481]=C_static_string(C_heaptop,20,"*sizeof(C_word), 1);");
lf[482]=C_static_string(C_heaptop,14,"t1=C_restore;}");
lf[483]=C_static_string(C_heaptop,24,"C_check_nursery_minimum(");
lf[484]=C_static_string(C_heaptop,2,");");
lf[485]=C_static_string(C_heaptop,13,"if(!C_demand(");
lf[486]=C_static_string(C_heaptop,3,")){");
lf[487]=C_static_string(C_heaptop,11,"C_save(t1);");
lf[488]=C_static_string(C_heaptop,44,"C_reclaim((void*)toplevel_trampoline,NULL);}");
lf[489]=C_static_string(C_heaptop,23,"toplevel_initialized=1;");
lf[490]=C_h_intern(&lf[490],26,"\010compilertarget-stack-size");
lf[491]=C_static_string(C_heaptop,15,"C_resize_stack(");
lf[492]=C_static_string(C_heaptop,2,");");
lf[493]=C_h_intern(&lf[493],30,"\010compilertarget-heap-shrinkage");
lf[494]=C_static_string(C_heaptop,17,"C_heap_shrinkage=");
lf[495]=C_h_intern(&lf[495],27,"\010compilertarget-heap-growth");
lf[496]=C_static_string(C_heaptop,14,"C_heap_growth=");
lf[497]=C_h_intern(&lf[497],33,"\010compilertarget-initial-heap-size");
lf[498]=C_static_string(C_heaptop,26,"C_set_or_change_heap_size(");
lf[499]=C_static_string(C_heaptop,4,",1);");
lf[500]=C_h_intern(&lf[500],25,"\010compilertarget-heap-size");
lf[501]=C_static_string(C_heaptop,26,"C_set_or_change_heap_size(");
lf[502]=C_static_string(C_heaptop,4,",1);");
lf[503]=C_static_string(C_heaptop,23,"C_heap_size_is_fixed=1;");
lf[504]=C_h_intern(&lf[504],40,"\010compilerdisable-stack-overflow-checking");
lf[505]=C_static_string(C_heaptop,27,"C_disable_overflow_check=1;");
lf[506]=C_static_string(C_heaptop,6,"stable");
lf[507]=C_static_string(C_heaptop,21,"=C_new_symbol_table(\042");
lf[508]=C_static_string(C_heaptop,2,"\042,");
lf[509]=C_static_string(C_heaptop,2,");");
lf[510]=C_h_intern(&lf[510],4,"caar");
lf[511]=C_static_lambda_info(C_heaptop,18,"(do505 i507 ns508)");
lf[512]=C_static_string(C_heaptop,10,"C_word *a;");
lf[513]=C_static_string(C_heaptop,59,"if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[514]=C_static_string(C_heaptop,30,"else C_toplevel_entry(C_text(\042");
lf[515]=C_static_string(C_heaptop,4,"\042));");
lf[516]=C_static_lambda_info(C_heaptop,19,"(a4669 lit503 n504)");
lf[517]=C_h_intern(&lf[517],4,"fold");
lf[518]=C_static_string(C_heaptop,22,"C_SYMBOL_TABLE *stable");
lf[519]=C_static_lambda_info(C_heaptop,18,"(do495 i497 ns498)");
lf[520]=C_static_string(C_heaptop,29,"if(!C_demand(c*C_SIZEOF_PAIR+");
lf[521]=C_static_string(C_heaptop,3,")){");
lf[522]=C_h_intern(&lf[522],28,"\010compilerinsert-timer-checks");
lf[523]=C_static_string(C_heaptop,22,"C_check_for_interrupt;");
lf[524]=C_static_string(C_heaptop,5,"if(c<");
lf[525]=C_static_string(C_heaptop,21,") C_bad_min_argc_2(c,");
lf[526]=C_static_string(C_heaptop,5,",t0);");
lf[527]=C_h_intern(&lf[527],14,"no-argc-checks");
lf[528]=C_static_string(C_heaptop,4,",c2,");
lf[529]=C_static_string(C_heaptop,2,");");
lf[530]=C_static_string(C_heaptop,1,"c");
lf[531]=C_static_string(C_heaptop,12,"C_save_rest(");
lf[532]=C_static_string(C_heaptop,15,"C_word *a,c2=c;");
lf[533]=C_static_string(C_heaptop,10,"va_list v;");
lf[534]=C_static_string(C_heaptop,22,"if(!C_stack_probe(a)){");
lf[535]=C_static_string(C_heaptop,23,"if(!C_stack_probe(&a)){");
lf[536]=C_static_string(C_heaptop,22,"C_check_for_interrupt;");
lf[537]=C_static_string(C_heaptop,5,"if(c<");
lf[538]=C_static_string(C_heaptop,21,") C_bad_min_argc_2(c,");
lf[539]=C_static_string(C_heaptop,5,",t0);");
lf[540]=C_static_string(C_heaptop,6,"if(c!=");
lf[541]=C_static_string(C_heaptop,17,") C_bad_argc_2(c,");
lf[542]=C_static_string(C_heaptop,5,",t0);");
lf[543]=C_static_string(C_heaptop,10,"C_word *a;");
lf[544]=C_static_string(C_heaptop,5,"loop:");
lf[545]=C_static_string(C_heaptop,10,"a=C_alloc(");
lf[546]=C_static_string(C_heaptop,2,");");
lf[547]=C_static_string(C_heaptop,10,"C_word ab[");
lf[548]=C_static_string(C_heaptop,8,"],*a=ab;");
lf[549]=C_static_string(C_heaptop,14,"C_stack_check;");
lf[550]=C_static_string(C_heaptop,5,"loop:");
lf[551]=C_static_string(C_heaptop,10,"C_word *a;");
lf[552]=C_static_string(C_heaptop,8,"C_word t");
lf[553]=C_static_string(C_heaptop,8,"C_word t");
lf[554]=C_static_lambda_info(C_heaptop,17,"(do489 i491 j492)");
lf[555]=C_static_string(C_heaptop,11,"C_word tmp;");
lf[556]=C_static_string(C_heaptop,2,"){");
lf[557]=C_static_string(C_heaptop,4,",...");
lf[558]=C_static_string(C_heaptop,9,"C_word *a");
lf[559]=C_static_string(C_heaptop,9,"C_word c,");
lf[560]=C_static_string(C_heaptop,33,"C_noret_decl(toplevel_trampoline)");
lf[561]=C_static_string(C_heaptop,71,"static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;");
lf[562]=C_static_string(C_heaptop,63,"C_regparm static void C_fcall toplevel_trampoline(void *dummy){");
lf[563]=C_static_string(C_heaptop,2,"C_");
lf[564]=C_static_string(C_heaptop,34,"(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[565]=C_static_string(C_heaptop,15,"void C_ccall C_");
lf[566]=C_static_string(C_heaptop,18,"C_main_entry_point");
lf[567]=C_static_string(C_heaptop,40,"static C_TLS int toplevel_initialized=0;");
lf[568]=C_static_string(C_heaptop,8,"C_fcall ");
lf[569]=C_static_string(C_heaptop,8,"C_ccall ");
lf[570]=C_static_string(C_heaptop,7,"C_word ");
lf[571]=C_static_string(C_heaptop,5,"void ");
lf[572]=C_static_string(C_heaptop,7,"static ");
lf[573]=C_static_string(C_heaptop,3,"/* ");
lf[574]=C_static_string(C_heaptop,3," */");
lf[575]=C_h_intern(&lf[575],16,"\010compilercleanup");
lf[576]=C_h_intern(&lf[576],18,"\010compilerdebugging");
lf[577]=C_h_intern(&lf[577],1,"o");
lf[578]=C_static_string(C_heaptop,32,"dropping unused closure argument");
lf[579]=C_static_string(C_heaptop,9,"_toplevel");
lf[580]=C_static_string(C_heaptop,8,"toplevel");
lf[581]=C_static_string(C_heaptop,1,"t");
lf[582]=C_static_string(C_heaptop,1,"t");
lf[583]=C_h_intern(&lf[583],18,"\010compilerreal-name");
lf[584]=C_static_lambda_info(C_heaptop,13,"(a4239 ll464)");
lf[585]=C_static_lambda_info(C_heaptop,12,"(procedures)");
lf[586]=C_static_string(C_heaptop,17,"/* end of file */");
lf[587]=C_h_intern(&lf[587],25,"emit-procedure-table-info");
lf[588]=C_h_intern(&lf[588],31,"generate-foreign-callback-stubs");
lf[589]=C_h_intern(&lf[589],31,"\010compilergenerate-foreign-stubs");
lf[590]=C_h_intern(&lf[590],29,"\010compilerforeign-lambda-stubs");
lf[591]=C_h_intern(&lf[591],36,"\010compilergenerate-external-variables");
lf[592]=C_h_intern(&lf[592],27,"\010compilerexternal-variables");
lf[593]=C_h_intern(&lf[593],1,"p");
lf[594]=C_static_string(C_heaptop,24,"code generation phase...");
lf[595]=C_static_lambda_info(C_heaptop,82,"(##compiler#generate-code literals17 lambdas18 out19 source-file20 dynamic21 db2"
"2)");
lf[596]=C_static_string(C_heaptop,1,"{");
lf[597]=C_static_string(C_heaptop,23,"#ifdef C_ENABLE_PTABLES");
lf[598]=C_static_string(C_heaptop,14,"return ptable;");
lf[599]=C_static_string(C_heaptop,5,"#else");
lf[600]=C_static_string(C_heaptop,12,"return NULL;");
lf[601]=C_static_string(C_heaptop,6,"#endif");
lf[602]=C_static_string(C_heaptop,1,"}");
lf[603]=C_static_string(C_heaptop,42,"static C_PTABLE_ENTRY *create_ptable(void)");
lf[604]=C_static_string(C_heaptop,6,"#endif");
lf[605]=C_static_string(C_heaptop,13,"{NULL,NULL}};");
lf[606]=C_static_string(C_heaptop,2,"C_");
lf[607]=C_static_string(C_heaptop,11,"_toplevel},");
lf[608]=C_static_string(C_heaptop,12,"C_toplevel},");
lf[609]=C_static_string(C_heaptop,2,"},");
lf[610]=C_static_string(C_heaptop,2,"{\042");
lf[611]=C_static_string(C_heaptop,9,"\042,(void*)");
lf[612]=C_static_lambda_info(C_heaptop,13,"(do619 ll621)");
lf[613]=C_static_string(C_heaptop,23,"#ifdef C_ENABLE_PTABLES");
lf[614]=C_static_string(C_heaptop,29,"static C_PTABLE_ENTRY ptable[");
lf[615]=C_static_string(C_heaptop,5,"] = {");
lf[616]=C_static_lambda_info(C_heaptop,44,"(emit-procedure-table-info lambdas617 sf618)");
lf[617]=C_h_intern(&lf[617],11,"string-copy");
lf[618]=C_static_lambda_info(C_heaptop,11,"(loop i634)");
lf[619]=C_static_lambda_info(C_heaptop,25,"(##compiler#cleanup s630)");
lf[620]=C_static_string(C_heaptop,7,"C_word ");
lf[621]=C_static_lambda_info(C_heaptop,12,"(a5248 i647)");
lf[622]=C_h_intern(&lf[622],13,"list-tabulate");
lf[623]=C_static_lambda_info(C_heaptop,46,"(##compiler#make-variable-list n645 prefix646)");
lf[624]=C_static_lambda_info(C_heaptop,12,"(a5264 i650)");
lf[625]=C_static_lambda_info(C_heaptop,46,"(##compiler#make-argument-list n648 prefix649)");
lf[626]=C_static_string(C_heaptop,0,"");
lf[627]=C_static_string(C_heaptop,7,"static ");
lf[628]=C_static_lambda_info(C_heaptop,15,"(a5283 g652653)");
lf[629]=C_static_lambda_info(C_heaptop,48,"(##compiler#generate-external-variables vars651)");
lf[630]=C_h_intern(&lf[630],41,"\010compilergenerate-foreign-callback-header");
lf[631]=C_static_string(C_heaptop,15,"C_externexport ");
lf[632]=C_static_lambda_info(C_heaptop,15,"(a5331 stub662)");
lf[633]=C_static_lambda_info(C_heaptop,63,"(##compiler#generate-foreign-callback-stub-prototypes stubs661)");
lf[634]=C_static_string(C_heaptop,38,"C_k=C_restore_callback_continuation();");
lf[635]=C_static_string(C_heaptop,20,"C_kontinue(C_k,C_r);");
lf[636]=C_static_string(C_heaptop,20,"C_kontinue(C_k,C_r);");
lf[637]=C_static_string(C_heaptop,11,"return C_r;");
lf[638]=C_static_string(C_heaptop,13,"#undef return");
lf[639]=C_static_string(C_heaptop,9,"C_return:");
lf[640]=C_static_string(C_heaptop,38,"C_k=C_restore_callback_continuation();");
lf[641]=C_static_string(C_heaptop,20,"C_kontinue(C_k,C_r);");
lf[642]=C_static_string(C_heaptop,20,"C_kontinue(C_k,C_r);");
lf[643]=C_static_string(C_heaptop,11,"return C_r;");
lf[644]=C_static_string(C_heaptop,2,");");
lf[645]=C_h_intern(&lf[645],4,"void");
lf[646]=C_static_string(C_heaptop,1,"t");
lf[647]=C_static_string(C_heaptop,4,"C_r=");
lf[648]=C_static_string(C_heaptop,51,"int C_dummy=C_save_callback_continuation(&C_a,C_k);");
lf[649]=C_static_string(C_heaptop,2,"=(");
lf[650]=C_static_string(C_heaptop,3,"C_a");
lf[651]=C_static_string(C_heaptop,2,");");
lf[652]=C_static_string(C_heaptop,0,"");
lf[653]=C_static_string(C_heaptop,3,"t~a");
lf[654]=C_static_lambda_info(C_heaptop,32,"(a5511 type682 index683 name684)");
lf[655]=C_static_string(C_heaptop,50,"C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;");
lf[656]=C_static_string(C_heaptop,2,"){");
lf[657]=C_static_string(C_heaptop,10,") C_noret;");
lf[658]=C_static_string(C_heaptop,20,"static void C_ccall ");
lf[659]=C_static_string(C_heaptop,37,"(C_word C_c,C_word C_self,C_word C_k,");
lf[660]=C_static_string(C_heaptop,12,") C_regparm;");
lf[661]=C_static_string(C_heaptop,32,"C_regparm static C_word C_fcall ");
lf[662]=C_static_string(C_heaptop,13,"C_noret_decl(");
lf[663]=C_static_string(C_heaptop,1,")");
lf[664]=C_static_string(C_heaptop,20,"static void C_ccall ");
lf[665]=C_static_string(C_heaptop,37,"(C_word C_c,C_word C_self,C_word C_k,");
lf[666]=C_static_string(C_heaptop,22,"static C_word C_fcall ");
lf[667]=C_static_string(C_heaptop,34,"#define return(x) C_cblock C_r = (");
lf[668]=C_static_string(C_heaptop,33,"(x))); goto C_return; C_cblockend");
lf[669]=C_static_string(C_heaptop,8,"/* from ");
lf[670]=C_static_string(C_heaptop,3," */");
lf[671]=C_h_intern(&lf[671],21,"foreign-stub-callback");
lf[672]=C_h_intern(&lf[672],16,"foreign-stub-cps");
lf[673]=C_static_string(C_heaptop,3,"C_a");
lf[674]=C_h_intern(&lf[674],27,"foreign-stub-argument-names");
lf[675]=C_h_intern(&lf[675],17,"foreign-stub-body");
lf[676]=C_h_intern(&lf[676],17,"foreign-stub-name");
lf[677]=C_h_intern(&lf[677],24,"foreign-stub-return-type");
lf[678]=C_static_string(C_heaptop,12,"C_word C_buf");
lf[679]=C_static_string(C_heaptop,3,"C_a");
lf[680]=C_h_intern(&lf[680],27,"foreign-stub-argument-types");
lf[681]=C_h_intern(&lf[681],19,"\010compilerreal-name2");
lf[682]=C_h_intern(&lf[682],15,"foreign-stub-id");
lf[683]=C_static_lambda_info(C_heaptop,15,"(a5349 stub667)");
lf[684]=C_static_lambda_info(C_heaptop,50,"(##compiler#generate-foreign-stubs stubs665 db666)");
lf[685]=C_h_intern(&lf[685],5,"float");
lf[686]=C_static_string(C_heaptop,2,"+3");
lf[687]=C_h_intern(&lf[687],8,"c-string");
lf[688]=C_h_intern(&lf[688],9,"c-string*");
lf[689]=C_static_string(C_heaptop,4,"+2+(");
lf[690]=C_static_string(C_heaptop,33,"==NULL\0771:C_bytestowords(C_strlen(");
lf[691]=C_static_string(C_heaptop,3,")))");
lf[692]=C_h_intern(&lf[692],16,"nonnull-c-string");
lf[693]=C_static_string(C_heaptop,27,"+2+C_bytestowords(C_strlen(");
lf[694]=C_static_string(C_heaptop,2,"))");
lf[695]=C_h_intern(&lf[695],3,"ref");
lf[696]=C_static_string(C_heaptop,2,"+3");
lf[697]=C_h_intern(&lf[697],5,"const");
lf[698]=C_h_intern(&lf[698],7,"pointer");
lf[699]=C_h_intern(&lf[699],9,"c-pointer");
lf[700]=C_h_intern(&lf[700],15,"nonnull-pointer");
lf[701]=C_h_intern(&lf[701],17,"nonnull-c-pointer");
lf[702]=C_h_intern(&lf[702],8,"function");
lf[703]=C_h_intern(&lf[703],8,"instance");
lf[704]=C_h_intern(&lf[704],16,"nonnull-instance");
lf[705]=C_h_intern(&lf[705],12,"instance-ref");
lf[706]=C_h_intern(&lf[706],18,"\003syshash-table-ref");
lf[707]=C_h_intern(&lf[707],27,"\010compilerforeign-type-table");
lf[708]=C_h_intern(&lf[708],17,"nonnull-c-string*");
lf[709]=C_h_intern(&lf[709],6,"symbol");
lf[710]=C_h_intern(&lf[710],6,"double");
lf[711]=C_h_intern(&lf[711],16,"unsigned-integer");
lf[712]=C_h_intern(&lf[712],18,"unsigned-integer32");
lf[713]=C_h_intern(&lf[713],4,"long");
lf[714]=C_h_intern(&lf[714],7,"integer");
lf[715]=C_h_intern(&lf[715],9,"integer32");
lf[716]=C_h_intern(&lf[716],13,"unsigned-long");
lf[717]=C_h_intern(&lf[717],6,"number");
lf[718]=C_h_intern(&lf[718],9,"integer64");
lf[719]=C_h_intern(&lf[719],3,"int");
lf[720]=C_h_intern(&lf[720],5,"int32");
lf[721]=C_h_intern(&lf[721],5,"short");
lf[722]=C_h_intern(&lf[722],14,"unsigned-short");
lf[723]=C_h_intern(&lf[723],13,"scheme-object");
lf[724]=C_h_intern(&lf[724],13,"unsigned-char");
lf[725]=C_h_intern(&lf[725],12,"unsigned-int");
lf[726]=C_h_intern(&lf[726],14,"unsigned-int32");
lf[727]=C_h_intern(&lf[727],4,"byte");
lf[728]=C_h_intern(&lf[728],13,"unsigned-byte");
lf[729]=C_static_lambda_info(C_heaptop,35,"(compute-size type714 var715 ns716)");
lf[730]=C_static_string(C_heaptop,2,";}");
lf[731]=C_static_string(C_heaptop,27,"C_callback_wrapper((void *)");
lf[732]=C_static_string(C_heaptop,7,"return ");
lf[733]=C_static_string(C_heaptop,2,"x=");
lf[734]=C_static_string(C_heaptop,2,");");
lf[735]=C_static_string(C_heaptop,10,"C_save(x);");
lf[736]=C_static_string(C_heaptop,1,"a");
lf[737]=C_static_lambda_info(C_heaptop,17,"(a5948 v793 t794)");
lf[738]=C_static_string(C_heaptop,34,"C_callback_adjust_stack_limits(a);");
lf[739]=C_static_string(C_heaptop,21,"C_word x, *a=C_alloc(");
lf[740]=C_static_string(C_heaptop,2,");");
lf[741]=C_static_string(C_heaptop,0,"");
lf[742]=C_static_string(C_heaptop,8,"/* from ");
lf[743]=C_static_string(C_heaptop,3," */");
lf[744]=C_static_string(C_heaptop,1,"0");
lf[745]=C_static_string(C_heaptop,1,"t");
lf[746]=C_h_intern(&lf[746],36,"foreign-callback-stub-argument-types");
lf[747]=C_h_intern(&lf[747],33,"foreign-callback-stub-return-type");
lf[748]=C_h_intern(&lf[748],24,"foreign-callback-stub-id");
lf[749]=C_static_lambda_info(C_heaptop,15,"(a5582 stub706)");
lf[750]=C_static_lambda_info(C_heaptop,48,"(generate-foreign-callback-stubs stubs704 db705)");
lf[751]=C_static_lambda_info(C_heaptop,19,"(a5995 vs813 ts814)");
lf[752]=C_static_string(C_heaptop,0,"");
lf[753]=C_static_string(C_heaptop,1,"t");
lf[754]=C_h_intern(&lf[754],32,"foreign-callback-stub-qualifiers");
lf[755]=C_h_intern(&lf[755],26,"foreign-callback-stub-name");
lf[756]=C_static_lambda_info(C_heaptop,60,"(##compiler#generate-foreign-callback-header cls805 stub806)");
lf[757]=C_h_intern(&lf[757],4,"quit");
lf[758]=C_static_string(C_heaptop,25,"illegal foreign type `~A\047");
lf[759]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[760]=C_static_string(C_heaptop,1," ");
lf[761]=C_static_lambda_info(C_heaptop,11,"(str ts822)");
lf[762]=C_static_string(C_heaptop,6,"C_word");
lf[763]=C_static_string(C_heaptop,4,"char");
lf[764]=C_static_string(C_heaptop,13,"unsigned char");
lf[765]=C_static_string(C_heaptop,12,"unsigned int");
lf[766]=C_static_string(C_heaptop,5,"C_u32");
lf[767]=C_static_string(C_heaptop,3,"int");
lf[768]=C_static_string(C_heaptop,5,"C_s32");
lf[769]=C_static_string(C_heaptop,5,"C_s64");
lf[770]=C_static_string(C_heaptop,5,"short");
lf[771]=C_static_string(C_heaptop,4,"long");
lf[772]=C_static_string(C_heaptop,14,"unsigned short");
lf[773]=C_static_string(C_heaptop,13,"unsigned long");
lf[774]=C_static_string(C_heaptop,5,"float");
lf[775]=C_static_string(C_heaptop,6,"double");
lf[776]=C_static_string(C_heaptop,6,"void *");
lf[777]=C_h_intern(&lf[777],11,"byte-vector");
lf[778]=C_static_string(C_heaptop,15,"unsigned char *");
lf[779]=C_h_intern(&lf[779],9,"u16vector");
lf[780]=C_h_intern(&lf[780],17,"nonnull-u16vector");
lf[781]=C_static_string(C_heaptop,16,"unsigned short *");
lf[782]=C_h_intern(&lf[782],8,"s8vector");
lf[783]=C_h_intern(&lf[783],16,"nonnull-s8vector");
lf[784]=C_static_string(C_heaptop,6,"char *");
lf[785]=C_h_intern(&lf[785],9,"u32vector");
lf[786]=C_h_intern(&lf[786],17,"nonnull-u32vector");
lf[787]=C_static_string(C_heaptop,14,"unsigned int *");
lf[788]=C_h_intern(&lf[788],9,"s16vector");
lf[789]=C_h_intern(&lf[789],17,"nonnull-s16vector");
lf[790]=C_static_string(C_heaptop,7,"short *");
lf[791]=C_h_intern(&lf[791],9,"s32vector");
lf[792]=C_h_intern(&lf[792],17,"nonnull-s32vector");
lf[793]=C_static_string(C_heaptop,5,"int *");
lf[794]=C_h_intern(&lf[794],9,"f32vector");
lf[795]=C_h_intern(&lf[795],17,"nonnull-f32vector");
lf[796]=C_static_string(C_heaptop,7,"float *");
lf[797]=C_h_intern(&lf[797],9,"f64vector");
lf[798]=C_h_intern(&lf[798],17,"nonnull-f64vector");
lf[799]=C_static_string(C_heaptop,8,"double *");
lf[800]=C_static_string(C_heaptop,6,"char *");
lf[801]=C_static_string(C_heaptop,4,"void");
lf[802]=C_static_lambda_info(C_heaptop,6,"(g896)");
lf[803]=C_static_string(C_heaptop,1,"*");
lf[804]=C_static_lambda_info(C_heaptop,15,"(g893 cname901)");
lf[805]=C_static_string(C_heaptop,1,"*");
lf[806]=C_static_lambda_info(C_heaptop,15,"(g883 ptype903)");
lf[807]=C_static_string(C_heaptop,1,"&");
lf[808]=C_h_intern(&lf[808],8,"template");
lf[809]=C_static_string(C_heaptop,1,"<");
lf[810]=C_static_string(C_heaptop,2,"> ");
lf[811]=C_h_intern(&lf[811],18,"string-intersperse");
lf[812]=C_static_string(C_heaptop,1,",");
lf[813]=C_static_string(C_heaptop,0,"");
lf[814]=C_static_lambda_info(C_heaptop,15,"(a6602 g907908)");
lf[815]=C_static_string(C_heaptop,0,"");
lf[816]=C_static_string(C_heaptop,6,"const ");
lf[817]=C_h_intern(&lf[817],6,"struct");
lf[818]=C_static_string(C_heaptop,7,"struct ");
lf[819]=C_static_string(C_heaptop,1," ");
lf[820]=C_h_intern(&lf[820],5,"union");
lf[821]=C_static_string(C_heaptop,6,"union ");
lf[822]=C_static_string(C_heaptop,1," ");
lf[823]=C_h_intern(&lf[823],4,"enum");
lf[824]=C_static_string(C_heaptop,5,"enum ");
lf[825]=C_static_string(C_heaptop,1," ");
lf[826]=C_static_string(C_heaptop,1,"&");
lf[827]=C_static_string(C_heaptop,0,"");
lf[828]=C_static_string(C_heaptop,3," (*");
lf[829]=C_static_string(C_heaptop,2,")(");
lf[830]=C_static_string(C_heaptop,1,")");
lf[831]=C_static_string(C_heaptop,1,",");
lf[832]=C_h_intern(&lf[832],3,"...");
lf[833]=C_static_string(C_heaptop,3,"...");
lf[834]=C_static_string(C_heaptop,0,"");
lf[835]=C_static_lambda_info(C_heaptop,13,"(a6970 at921)");
lf[836]=C_static_string(C_heaptop,0,"");
lf[837]=C_h_intern(&lf[837],19,"nonnull-byte-vector");
lf[838]=C_h_intern(&lf[838],8,"u8vector");
lf[839]=C_h_intern(&lf[839],16,"nonnull-u8vector");
lf[840]=C_h_intern(&lf[840],14,"scheme-pointer");
lf[841]=C_h_intern(&lf[841],22,"nonnull-scheme-pointer");
lf[842]=C_static_lambda_info(C_heaptop,55,"(##compiler#foreign-type-declaration type818 target819)");
lf[843]=C_static_string(C_heaptop,34,"illegal foreign argument type `~A\047");
lf[844]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[845]=C_static_string(C_heaptop,1,"(");
lf[846]=C_static_string(C_heaptop,25,"C_character_code((C_word)");
lf[847]=C_static_string(C_heaptop,8,"C_unfix(");
lf[848]=C_static_string(C_heaptop,8,"C_unfix(");
lf[849]=C_static_string(C_heaptop,24,"(unsigned short)C_unfix(");
lf[850]=C_static_string(C_heaptop,23,"C_num_to_unsigned_long(");
lf[851]=C_static_string(C_heaptop,11,"C_c_double(");
lf[852]=C_static_string(C_heaptop,13,"C_num_to_int(");
lf[853]=C_static_string(C_heaptop,15,"C_num_to_int64(");
lf[854]=C_static_string(C_heaptop,14,"C_num_to_long(");
lf[855]=C_static_string(C_heaptop,22,"C_num_to_unsigned_int(");
lf[856]=C_static_string(C_heaptop,23,"C_data_pointer_or_null(");
lf[857]=C_static_string(C_heaptop,15,"C_data_pointer(");
lf[858]=C_static_string(C_heaptop,20,"C_c_pointer_or_null(");
lf[859]=C_static_string(C_heaptop,15,"C_c_pointer_nn(");
lf[860]=C_static_string(C_heaptop,23,"C_c_bytevector_or_null(");
lf[861]=C_static_string(C_heaptop,15,"C_c_bytevector(");
lf[862]=C_static_string(C_heaptop,21,"C_c_u8vector_or_null(");
lf[863]=C_static_string(C_heaptop,13,"C_c_u8vector(");
lf[864]=C_static_string(C_heaptop,22,"C_c_u16vector_or_null(");
lf[865]=C_static_string(C_heaptop,14,"C_c_u16vector(");
lf[866]=C_static_string(C_heaptop,22,"C_c_u32vector_or_null(");
lf[867]=C_static_string(C_heaptop,14,"C_c_u32vector(");
lf[868]=C_static_string(C_heaptop,21,"C_c_s8vector_or_null(");
lf[869]=C_static_string(C_heaptop,13,"C_c_s8vector(");
lf[870]=C_static_string(C_heaptop,22,"C_c_s16vector_or_null(");
lf[871]=C_static_string(C_heaptop,14,"C_c_s16vector(");
lf[872]=C_static_string(C_heaptop,22,"C_c_s32vector_or_null(");
lf[873]=C_static_string(C_heaptop,14,"C_c_s32vector(");
lf[874]=C_static_string(C_heaptop,22,"C_c_f32vector_or_null(");
lf[875]=C_static_string(C_heaptop,14,"C_c_f32vector(");
lf[876]=C_static_string(C_heaptop,22,"C_c_f64vector_or_null(");
lf[877]=C_static_string(C_heaptop,14,"C_c_f64vector(");
lf[878]=C_static_string(C_heaptop,17,"C_string_or_null(");
lf[879]=C_static_string(C_heaptop,11,"C_c_string(");
lf[880]=C_static_string(C_heaptop,8,"C_truep(");
lf[881]=C_static_lambda_info(C_heaptop,6,"(g967)");
lf[882]=C_static_string(C_heaptop,20,"C_c_pointer_or_null(");
lf[883]=C_static_string(C_heaptop,15,"C_c_pointer_nn(");
lf[884]=C_static_string(C_heaptop,20,"C_c_pointer_or_null(");
lf[885]=C_static_string(C_heaptop,15,"C_c_pointer_nn(");
lf[886]=C_static_string(C_heaptop,20,"C_c_pointer_or_null(");
lf[887]=C_static_string(C_heaptop,13,"C_num_to_int(");
lf[888]=C_static_string(C_heaptop,2,"*(");
lf[889]=C_static_string(C_heaptop,16,")C_c_pointer_nn(");
lf[890]=C_static_string(C_heaptop,1,"*");
lf[891]=C_static_string(C_heaptop,2,"*(");
lf[892]=C_static_string(C_heaptop,17,"*)C_c_pointer_nn(");
lf[893]=C_static_lambda_info(C_heaptop,48,"(##compiler#foreign-argument-conversion type922)");
lf[894]=C_static_string(C_heaptop,32,"illegal foreign return type `~A\047");
lf[895]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[896]=C_static_string(C_heaptop,25,"C_make_character((C_word)");
lf[897]=C_static_string(C_heaptop,14,"C_fix((C_word)");
lf[898]=C_static_string(C_heaptop,37,"C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[899]=C_static_string(C_heaptop,13,"C_fix((short)");
lf[900]=C_static_string(C_heaptop,21,"C_fix(0xffff&(C_word)");
lf[901]=C_static_string(C_heaptop,12,"C_fix((char)");
lf[902]=C_static_string(C_heaptop,19,"C_fix(0xff&(C_word)");
lf[903]=C_static_string(C_heaptop,13,"C_flonum(&~a,");
lf[904]=C_static_string(C_heaptop,13,"C_number(&~a,");
lf[905]=C_static_string(C_heaptop,22,"C_mpointer(&~a,(void*)");
lf[906]=C_static_string(C_heaptop,31,"C_mpointer_or_false(&~a,(void*)");
lf[907]=C_static_string(C_heaptop,17,"C_int_to_num(&~a,");
lf[908]=C_static_string(C_heaptop,26,"C_unsigned_int_to_num(&~a,");
lf[909]=C_static_string(C_heaptop,18,"C_long_to_num(&~a,");
lf[910]=C_static_string(C_heaptop,27,"C_unsigned_long_to_num(&~a,");
lf[911]=C_static_string(C_heaptop,10,"C_mk_bool(");
lf[912]=C_static_string(C_heaptop,9,"((C_word)");
lf[913]=C_static_lambda_info(C_heaptop,7,"(g1030)");
lf[914]=C_static_string(C_heaptop,31,"C_mpointer_or_false(&~a,(void*)");
lf[915]=C_static_lambda_info(C_heaptop,7,"(g1027)");
lf[916]=C_static_string(C_heaptop,22,"C_mpointer(&~A,(void*)");
lf[917]=C_static_lambda_info(C_heaptop,7,"(g1021)");
lf[918]=C_static_string(C_heaptop,23,"C_mpointer(&~A,(void*)&");
lf[919]=C_static_string(C_heaptop,31,"C_mpointer_or_false(&~A,(void*)");
lf[920]=C_static_string(C_heaptop,22,"C_mpointer(&~A,(void*)");
lf[921]=C_static_string(C_heaptop,23,"C_mpointer(&~A,(void*)&");
lf[922]=C_static_string(C_heaptop,22,"C_mpointer(&~a,(void*)");
lf[923]=C_static_string(C_heaptop,17,"C_int_to_num(&~a,");
lf[924]=C_static_lambda_info(C_heaptop,54,"(##compiler#foreign-result-conversion type986 dest987)");
lf[925]=C_h_intern(&lf[925],29,"\010compilerstring->c-identifier");
lf[926]=C_static_string(C_heaptop,8,"C_~X_~A_");
lf[927]=C_h_intern(&lf[927],6,"random");
lf[928]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,929,create_ptable());
t2=C_set_block_item(lf[0],0,C_SCHEME_FALSE);
t3=C_mutate((C_word*)lf[1]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1075,a[2]=lf[6],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1096,a[2]=lf[10],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1112,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1117,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8734,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8738,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 114  random */
t9=C_retrieve(lf[927]);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,C_fix(16777216));}

/* k8736 */
static void C_ccall f_8738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8742,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 114  current-seconds */
t3=C_retrieve(lf[233]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8740 in k8736 */
static void C_ccall f_8742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 114  sprintf */
t2=C_retrieve(lf[424]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[926],((C_word*)t0)[2],t1);}

/* k8732 */
static void C_ccall f_8734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 113  ##compiler#string->c-identifier */
t2=C_retrieve(lf[925]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1115 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1117,2,t0,t1);}
t2=C_mutate((C_word*)lf[13]+1,t1);
t3=C_set_block_item(lf[14],0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1120,a[2]=lf[19],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=lf[25],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1182,a[2]=lf[595],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[587]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5081,a[2]=lf[616],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[575]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5154,a[2]=lf[619],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[286]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5243,a[2]=lf[623],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[300]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5259,a[2]=lf[625],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[591]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5275,a[2]=lf[629],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[211]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5326,a[2]=lf[633],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[589]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5344,a[2]=lf[684],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[588]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5577,a[2]=lf[750],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[630]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5966,a[2]=lf[756],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6031,a[2]=lf[842],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[177]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7200,a[2]=lf[893],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[172]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7997,a[2]=lf[924],tmp=(C_word)a,a+=3,tmp));
t19=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,C_SCHEME_UNDEFINED);}

/* ##compiler#foreign-result-conversion in k1115 */
static void C_ccall f_7997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7997,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7999,a[2]=t2,a[3]=lf[895],tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(C_word)C_eqp(t5,lf[41]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t5,lf[724]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[896]);}
else{
t8=(C_word)C_eqp(t5,lf[719]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t5,lf[720]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[897]);}
else{
t10=(C_word)C_eqp(t5,lf[725]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t5,lf[726]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[898]);}
else{
t12=(C_word)C_eqp(t5,lf[721]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[899]);}
else{
t13=(C_word)C_eqp(t5,lf[722]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[900]);}
else{
t14=(C_word)C_eqp(t5,lf[727]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[901]);}
else{
t15=(C_word)C_eqp(t5,lf[728]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[902]);}
else{
t16=(C_word)C_eqp(t5,lf[685]);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8063,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t16)){
t18=t17;
f_8063(t18,t16);}
else{
t18=(C_word)C_eqp(t5,lf[710]);
t19=t17;
f_8063(t19,(C_truep(t18)?t18:(C_word)C_eqp(t5,lf[718])));}}}}}}}}}

/* k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8063,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1369 sprintf */
t2=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[6],lf[903],((C_word*)t0)[5]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[717]);
if(C_truep(t2)){
/* c-backend.scm: 1370 sprintf */
t3=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],lf[904],((C_word*)t0)[5]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[692]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_8084(t5,t3);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[687]);
if(C_truep(t5)){
t6=t4;
f_8084(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[701]);
if(C_truep(t6)){
t7=t4;
f_8084(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[688]);
if(C_truep(t7)){
t8=t4;
f_8084(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[708]);
t9=t4;
f_8084(t9,(C_truep(t8)?t8:(C_word)C_eqp(((C_word*)t0)[4],lf[709])));}}}}}}}

/* k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8084(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8084,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1372 sprintf */
t2=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[6],lf[905],((C_word*)t0)[5]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[699]);
if(C_truep(t2)){
/* c-backend.scm: 1373 sprintf */
t3=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],lf[906],((C_word*)t0)[5]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[714]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[4],lf[715]));
if(C_truep(t4)){
/* c-backend.scm: 1374 sprintf */
t5=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[6],lf[907],((C_word*)t0)[5]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[711]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[4],lf[712]));
if(C_truep(t6)){
/* c-backend.scm: 1375 sprintf */
t7=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[6],lf[908],((C_word*)t0)[5]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[713]);
if(C_truep(t7)){
/* c-backend.scm: 1376 sprintf */
t8=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t8))(4,t8,((C_word*)t0)[6],lf[909],((C_word*)t0)[5]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[716]);
if(C_truep(t8)){
/* c-backend.scm: 1377 sprintf */
t9=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t9))(4,t9,((C_word*)t0)[6],lf[910],((C_word*)t0)[5]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[38]);
if(C_truep(t9)){
t10=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[911]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[645]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[4],lf[723]));
if(C_truep(t11)){
t12=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[912]);}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm: 1381 ##sys#hash-table-ref */
t13=C_retrieve(lf[706]);
((C_proc4)C_retrieve_proc(t13))(4,t13,t12,C_retrieve(lf[707]),((C_word*)t0)[3]);}
else{
t13=t12;
f_8156(2,t13,C_SCHEME_FALSE);}}}}}}}}}}

/* k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_ccall f_8156(C_word c,C_word t0,C_word t1){
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
C_word ab[72],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8156,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* c-backend.scm: 1383 ##compiler#foreign-result-conversion */
t4=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[5],t3,((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8179,a[2]=((C_word*)t0)[2],a[3]=lf[913],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8184,a[2]=((C_word*)t0)[4],a[3]=lf[915],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8189,a[2]=((C_word*)t0)[4],a[3]=lf[917],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_eqp(t5,lf[700]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8211,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cddr(((C_word*)t0)[3]);
t10=t7;
f_8211(t10,(C_word)C_i_nullp(t9));}
else{
t9=t7;
f_8211(t9,C_SCHEME_FALSE);}}
else{
t7=(C_word)C_i_car(((C_word*)t0)[3]);
t8=(C_word)C_eqp(t7,lf[701]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8247,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t10=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cddr(((C_word*)t0)[3]);
t12=t9;
f_8247(t12,(C_word)C_i_nullp(t11));}
else{
t11=t9;
f_8247(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_i_car(((C_word*)t0)[3]);
t10=(C_word)C_eqp(t9,lf[695]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8283,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t12=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t12))){
t13=(C_word)C_i_cddr(((C_word*)t0)[3]);
t14=t11;
f_8283(t14,(C_word)C_i_nullp(t13));}
else{
t13=t11;
f_8283(t13,C_SCHEME_FALSE);}}
else{
t11=(C_word)C_i_car(((C_word*)t0)[3]);
t12=(C_word)C_eqp(t11,lf[703]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8318,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t14=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t14))){
t15=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t15))){
t16=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t17=t13;
f_8318(t17,(C_word)C_i_nullp(t16));}
else{
t16=t13;
f_8318(t16,C_SCHEME_FALSE);}}
else{
t15=t13;
f_8318(t15,C_SCHEME_FALSE);}}
else{
t13=(C_word)C_i_car(((C_word*)t0)[3]);
t14=(C_word)C_eqp(t13,lf[704]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8366,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t16=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t16))){
t17=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t17))){
t18=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t19=t15;
f_8366(t19,(C_word)C_i_nullp(t18));}
else{
t18=t15;
f_8366(t18,C_SCHEME_FALSE);}}
else{
t17=t15;
f_8366(t17,C_SCHEME_FALSE);}}
else{
t15=(C_word)C_i_car(((C_word*)t0)[3]);
t16=(C_word)C_eqp(t15,lf[705]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8414,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t18=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t18))){
t19=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t19))){
t20=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t21=t17;
f_8414(t21,(C_word)C_i_nullp(t20));}
else{
t20=t17;
f_8414(t20,C_SCHEME_FALSE);}}
else{
t19=t17;
f_8414(t19,C_SCHEME_FALSE);}}
else{
t17=(C_word)C_i_car(((C_word*)t0)[3]);
t18=(C_word)C_eqp(t17,lf[697]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8462,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t20=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t20))){
t21=(C_word)C_i_cddr(((C_word*)t0)[3]);
t22=t19;
f_8462(t22,(C_word)C_i_nullp(t21));}
else{
t21=t19;
f_8462(t21,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_i_car(((C_word*)t0)[3]);
t20=(C_word)C_eqp(t19,lf[698]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8497,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t22=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t22))){
t23=(C_word)C_i_cddr(((C_word*)t0)[3]);
t24=t21;
f_8497(t24,(C_word)C_i_nullp(t23));}
else{
t23=t21;
f_8497(t23,C_SCHEME_FALSE);}}
else{
t21=(C_word)C_i_car(((C_word*)t0)[3]);
t22=(C_word)C_eqp(t21,lf[699]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8533,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t24=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t24))){
t25=(C_word)C_i_cddr(((C_word*)t0)[3]);
t26=t23;
f_8533(t26,(C_word)C_i_nullp(t25));}
else{
t25=t23;
f_8533(t25,C_SCHEME_FALSE);}}
else{
t23=(C_word)C_i_car(((C_word*)t0)[3]);
t24=(C_word)C_eqp(t23,lf[702]);
if(C_truep(t24)){
t25=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t25))){
t26=(C_word)C_i_cadr(((C_word*)t0)[3]);
t27=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* c-backend.scm: 1385 sprintf */
t28=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t28))(4,t28,((C_word*)t0)[5],lf[922],((C_word*)t0)[4]);}
else{
/* c-backend.scm: 1385 g1030 */
t26=t2;
f_8179(t26,((C_word*)t0)[5]);}}
else{
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8591,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t26=(C_word)C_i_car(((C_word*)t0)[3]);
t27=(C_word)C_eqp(t26,lf[823]);
if(C_truep(t27)){
t28=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t28))){
t29=(C_word)C_i_cddr(((C_word*)t0)[3]);
t30=t25;
f_8591(t30,(C_word)C_i_nullp(t29));}
else{
t29=t25;
f_8591(t29,C_SCHEME_FALSE);}}
else{
t28=t25;
f_8591(t28,C_SCHEME_FALSE);}}}}}}}}}}}}
else{
/* c-backend.scm: 1385 g1030 */
t5=t2;
f_8179(t5,((C_word*)t0)[5]);}}
else{
/* c-backend.scm: 1402 err */
t2=((C_word*)t0)[2];
f_7999(t2,((C_word*)t0)[5]);}}}

/* k8589 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 sprintf */
t3=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],lf[923],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8531 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 g1027 */
t3=((C_word*)t0)[4];
f_8184(t3,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[3]);}}

/* k8495 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8497(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 g1027 */
t3=((C_word*)t0)[4];
f_8184(t3,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[3]);}}

/* k8460 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8462(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 ##compiler#foreign-result-conversion */
t3=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8412 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 sprintf */
t4=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[4],lf[921],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8364 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 sprintf */
t4=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[4],lf[920],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8316 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 sprintf */
t4=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[4],lf[919],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8281 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8283(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1389 sprintf */
t3=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],lf[918],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[4]);}}

/* k8245 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 g1021 */
t3=((C_word*)t0)[4];
f_8189(t3,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[3]);}}

/* k8209 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8211(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1385 g1021 */
t3=((C_word*)t0)[4];
f_8189(t3,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1385 g1030 */
t2=((C_word*)t0)[2];
f_8179(t2,((C_word*)t0)[3]);}}

/* g1021 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8189(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8189,NULL,2,t0,t1);}
/* c-backend.scm: 1387 sprintf */
t2=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[916],((C_word*)t0)[2]);}

/* g1027 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8184,NULL,2,t0,t1);}
/* c-backend.scm: 1398 sprintf */
t2=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[914],((C_word*)t0)[2]);}

/* g1030 in k8154 in k8082 in k8061 in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_8179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8179,NULL,2,t0,t1);}
/* c-backend.scm: 1401 err */
t2=((C_word*)t0)[2];
f_7999(t2,t1);}

/* err in ##compiler#foreign-result-conversion in k1115 */
static void C_fcall f_7999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7999,NULL,2,t0,t1);}
/* c-backend.scm: 1360 quit */
t2=C_retrieve(lf[757]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[894],((C_word*)t0)[2]);}

/* ##compiler#foreign-argument-conversion in k1115 */
static void C_ccall f_7200(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7200,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7202,a[2]=t2,a[3]=lf[844],tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_eqp(t4,lf[723]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[845]);}
else{
t6=(C_word)C_eqp(t4,lf[41]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t4,lf[724]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[846]);}
else{
t8=(C_word)C_eqp(t4,lf[727]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7230,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_7230(t10,t8);}
else{
t10=(C_word)C_eqp(t4,lf[719]);
if(C_truep(t10)){
t11=t9;
f_7230(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[725]);
if(C_truep(t11)){
t12=t9;
f_7230(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[726]);
t13=t9;
f_7230(t13,(C_truep(t12)?t12:(C_word)C_eqp(t4,lf[728])));}}}}}}

/* k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7230(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7230,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[847]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[721]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[848]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[722]);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[849]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[716]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[850]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[710]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_7257(t7,t5);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[717]);
t8=t6;
f_7257(t8,(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[685])));}}}}}}

/* k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7257(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7257,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[851]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[714]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[4],lf[715]));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[852]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[718]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[853]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[713]);
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[854]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[711]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[4],lf[712]));
if(C_truep(t7)){
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[855]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[698]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(((C_word*)t0)[4],lf[840]));
if(C_truep(t9)){
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[856]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[700]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[4],lf[841]));
if(C_truep(t11)){
t12=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[857]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[4],lf[699]);
if(C_truep(t12)){
t13=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[858]);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[4],lf[701]);
if(C_truep(t13)){
t14=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[859]);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[4],lf[777]);
if(C_truep(t14)){
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[860]);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[4],lf[837]);
if(C_truep(t15)){
t16=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[861]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[4],lf[838]);
if(C_truep(t16)){
t17=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[862]);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[4],lf[839]);
if(C_truep(t17)){
t18=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[863]);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[4],lf[779]);
if(C_truep(t18)){
t19=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[864]);}
else{
t19=(C_word)C_eqp(((C_word*)t0)[4],lf[780]);
if(C_truep(t19)){
t20=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[865]);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[4],lf[785]);
if(C_truep(t20)){
t21=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[866]);}
else{
t21=(C_word)C_eqp(((C_word*)t0)[4],lf[786]);
if(C_truep(t21)){
t22=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[867]);}
else{
t22=(C_word)C_eqp(((C_word*)t0)[4],lf[782]);
if(C_truep(t22)){
t23=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[868]);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[4],lf[783]);
if(C_truep(t23)){
t24=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[869]);}
else{
t24=(C_word)C_eqp(((C_word*)t0)[4],lf[788]);
if(C_truep(t24)){
t25=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[870]);}
else{
t25=(C_word)C_eqp(((C_word*)t0)[4],lf[789]);
if(C_truep(t25)){
t26=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[871]);}
else{
t26=(C_word)C_eqp(((C_word*)t0)[4],lf[791]);
if(C_truep(t26)){
t27=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[872]);}
else{
t27=(C_word)C_eqp(((C_word*)t0)[4],lf[792]);
if(C_truep(t27)){
t28=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[873]);}
else{
t28=(C_word)C_eqp(((C_word*)t0)[4],lf[794]);
if(C_truep(t28)){
t29=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[874]);}
else{
t29=(C_word)C_eqp(((C_word*)t0)[4],lf[795]);
if(C_truep(t29)){
t30=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[875]);}
else{
t30=(C_word)C_eqp(((C_word*)t0)[4],lf[797]);
if(C_truep(t30)){
t31=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[876]);}
else{
t31=(C_word)C_eqp(((C_word*)t0)[4],lf[798]);
if(C_truep(t31)){
t32=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[877]);}
else{
t32=(C_word)C_eqp(((C_word*)t0)[4],lf[687]);
t33=(C_truep(t32)?t32:(C_word)C_eqp(((C_word*)t0)[4],lf[688]));
if(C_truep(t33)){
t34=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[878]);}
else{
t34=(C_word)C_eqp(((C_word*)t0)[4],lf[692]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_7443(t36,t34);}
else{
t36=(C_word)C_eqp(((C_word*)t0)[4],lf[708]);
t37=t35;
f_7443(t37,(C_truep(t36)?t36:(C_word)C_eqp(((C_word*)t0)[4],lf[709])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7443(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7443,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[879]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[38]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[880]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm: 1339 ##sys#hash-table-ref */
t4=C_retrieve(lf[706]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[707]),((C_word*)t0)[3]);}
else{
t4=t3;
f_7452(2,t4,C_SCHEME_FALSE);}}}}

/* k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7452,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* c-backend.scm: 1341 ##compiler#foreign-argument-conversion */
t4=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[4],t3);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[2],a[3]=lf[881],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_eqp(t3,lf[698]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7497,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_cddr(((C_word*)t0)[3]);
t8=t5;
f_7497(t8,(C_word)C_i_nullp(t7));}
else{
t7=t5;
f_7497(t7,C_SCHEME_FALSE);}}
else{
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_eqp(t5,lf[699]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7529,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cddr(((C_word*)t0)[3]);
t10=t7;
f_7529(t10,(C_word)C_i_nullp(t9));}
else{
t9=t7;
f_7529(t9,C_SCHEME_FALSE);}}
else{
t7=(C_word)C_i_car(((C_word*)t0)[3]);
t8=(C_word)C_eqp(t7,lf[700]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7561,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t10=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cddr(((C_word*)t0)[3]);
t12=t9;
f_7561(t12,(C_word)C_i_nullp(t11));}
else{
t11=t9;
f_7561(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_i_car(((C_word*)t0)[3]);
t10=(C_word)C_eqp(t9,lf[701]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7593,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t12))){
t13=(C_word)C_i_cddr(((C_word*)t0)[3]);
t14=t11;
f_7593(t14,(C_word)C_i_nullp(t13));}
else{
t13=t11;
f_7593(t13,C_SCHEME_FALSE);}}
else{
t11=(C_word)C_i_car(((C_word*)t0)[3]);
t12=(C_word)C_eqp(t11,lf[703]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7625,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t14=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t14))){
t15=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t15))){
t16=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t17=t13;
f_7625(t17,(C_word)C_i_nullp(t16));}
else{
t16=t13;
f_7625(t16,C_SCHEME_FALSE);}}
else{
t15=t13;
f_7625(t15,C_SCHEME_FALSE);}}
else{
t13=(C_word)C_i_car(((C_word*)t0)[3]);
t14=(C_word)C_eqp(t13,lf[704]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7670,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t16=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t16))){
t17=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t17))){
t18=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t19=t15;
f_7670(t19,(C_word)C_i_nullp(t18));}
else{
t18=t15;
f_7670(t18,C_SCHEME_FALSE);}}
else{
t17=t15;
f_7670(t17,C_SCHEME_FALSE);}}
else{
t15=(C_word)C_i_car(((C_word*)t0)[3]);
t16=(C_word)C_eqp(t15,lf[702]);
if(C_truep(t16)){
t17=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t17))){
t18=(C_word)C_i_cadr(((C_word*)t0)[3]);
t19=(C_word)C_i_cddr(((C_word*)t0)[3]);
t20=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[886]);}
else{
/* c-backend.scm: 1343 g967 */
t18=t2;
f_7475(t18,((C_word*)t0)[4]);}}
else{
t17=(C_word)C_i_car(((C_word*)t0)[3]);
t18=(C_word)C_eqp(t17,lf[697]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7740,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t20=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t20))){
t21=(C_word)C_i_cddr(((C_word*)t0)[3]);
t22=t19;
f_7740(t22,(C_word)C_i_nullp(t21));}
else{
t21=t19;
f_7740(t21,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_i_car(((C_word*)t0)[3]);
t20=(C_word)C_eqp(t19,lf[823]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7775,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t22=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t22))){
t23=(C_word)C_i_cddr(((C_word*)t0)[3]);
t24=t21;
f_7775(t24,(C_word)C_i_nullp(t23));}
else{
t23=t21;
f_7775(t23,C_SCHEME_FALSE);}}
else{
t21=(C_word)C_i_car(((C_word*)t0)[3]);
t22=(C_word)C_eqp(t21,lf[695]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7807,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t24=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t24))){
t25=(C_word)C_i_cddr(((C_word*)t0)[3]);
t26=t23;
f_7807(t26,(C_word)C_i_nullp(t25));}
else{
t25=t23;
f_7807(t25,C_SCHEME_FALSE);}}
else{
t23=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7840,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t24=(C_word)C_i_car(((C_word*)t0)[3]);
t25=(C_word)C_eqp(t24,lf[705]);
if(C_truep(t25)){
t26=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t26))){
t27=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t27))){
t28=(C_word)C_i_cdddr(((C_word*)t0)[3]);
t29=t23;
f_7840(t29,(C_word)C_i_nullp(t28));}
else{
t28=t23;
f_7840(t28,C_SCHEME_FALSE);}}
else{
t27=t23;
f_7840(t27,C_SCHEME_FALSE);}}
else{
t26=t23;
f_7840(t26,C_SCHEME_FALSE);}}}}}}}}}}}}
else{
/* c-backend.scm: 1343 g967 */
t3=t2;
f_7475(t3,((C_word*)t0)[4]);}}
else{
/* c-backend.scm: 1354 err */
t2=((C_word*)t0)[2];
f_7202(t2,((C_word*)t0)[4]);}}}

/* k7838 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7840(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
/* c-backend.scm: 1343 string-append */
t4=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[3],lf[891],t2,lf[892]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7805 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7807(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7807,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7817,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1343 ##compiler#foreign-type-declaration */
t4=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,lf[890]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7815 in k7805 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_ccall f_7817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1343 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[888],t1,lf[889]);}

/* k7773 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[887]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7738 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7740(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 1343 ##compiler#foreign-argument-conversion */
t3=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7668 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7670(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[885]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7623 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[884]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7591 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7593(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[883]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7559 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7561(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[883]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7527 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7529(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[882]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* k7495 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7497(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[882]);}
else{
/* c-backend.scm: 1343 g967 */
t2=((C_word*)t0)[2];
f_7475(t2,((C_word*)t0)[3]);}}

/* g967 in k7450 in k7441 in k7255 in k7228 in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7475(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7475,NULL,2,t0,t1);}
/* c-backend.scm: 1353 err */
t2=((C_word*)t0)[2];
f_7202(t2,t1);}

/* err in ##compiler#foreign-argument-conversion in k1115 */
static void C_fcall f_7202(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7202,NULL,2,t0,t1);}
/* c-backend.scm: 1300 quit */
t2=C_retrieve(lf[757]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[843],((C_word*)t0)[2]);}

/* ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6031,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6033,a[2]=t2,a[3]=lf[759],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6038,a[2]=t3,a[3]=lf[761],tmp=(C_word)a,a+=4,tmp);
t6=t2;
t7=(C_word)C_eqp(t6,lf[723]);
if(C_truep(t7)){
/* c-backend.scm: 1225 str */
t8=t5;
f_6038(t8,t1,lf[762]);}
else{
t8=(C_word)C_eqp(t6,lf[41]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t6,lf[727]));
if(C_truep(t9)){
/* c-backend.scm: 1226 str */
t10=t5;
f_6038(t10,t1,lf[763]);}
else{
t10=(C_word)C_eqp(t6,lf[724]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t6,lf[728]));
if(C_truep(t11)){
/* c-backend.scm: 1227 str */
t12=t5;
f_6038(t12,t1,lf[764]);}
else{
t12=(C_word)C_eqp(t6,lf[725]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(t6,lf[711]));
if(C_truep(t13)){
/* c-backend.scm: 1228 str */
t14=t5;
f_6038(t14,t1,lf[765]);}
else{
t14=(C_word)C_eqp(t6,lf[726]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t6,lf[712]));
if(C_truep(t15)){
/* c-backend.scm: 1229 str */
t16=t5;
f_6038(t16,t1,lf[766]);}
else{
t16=(C_word)C_eqp(t6,lf[719]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6108,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_6108(t18,t16);}
else{
t18=(C_word)C_eqp(t6,lf[714]);
t19=t17;
f_6108(t19,(C_truep(t18)?t18:(C_word)C_eqp(t6,lf[38])));}}}}}}}

/* k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6108(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6108,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1230 str */
t2=((C_word*)t0)[7];
f_6038(t2,((C_word*)t0)[6],lf[767]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[720]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[715]));
if(C_truep(t3)){
/* c-backend.scm: 1231 str */
t4=((C_word*)t0)[7];
f_6038(t4,((C_word*)t0)[6],lf[768]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[718]);
if(C_truep(t4)){
/* c-backend.scm: 1232 str */
t5=((C_word*)t0)[7];
f_6038(t5,((C_word*)t0)[6],lf[769]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[721]);
if(C_truep(t5)){
/* c-backend.scm: 1233 str */
t6=((C_word*)t0)[7];
f_6038(t6,((C_word*)t0)[6],lf[770]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[713]);
if(C_truep(t6)){
/* c-backend.scm: 1234 str */
t7=((C_word*)t0)[7];
f_6038(t7,((C_word*)t0)[6],lf[771]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[722]);
if(C_truep(t7)){
/* c-backend.scm: 1235 str */
t8=((C_word*)t0)[7];
f_6038(t8,((C_word*)t0)[6],lf[772]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[716]);
if(C_truep(t8)){
/* c-backend.scm: 1236 str */
t9=((C_word*)t0)[7];
f_6038(t9,((C_word*)t0)[6],lf[773]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[685]);
if(C_truep(t9)){
/* c-backend.scm: 1237 str */
t10=((C_word*)t0)[7];
f_6038(t10,((C_word*)t0)[6],lf[774]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[710]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[5],lf[717]));
if(C_truep(t11)){
/* c-backend.scm: 1238 str */
t12=((C_word*)t0)[7];
f_6038(t12,((C_word*)t0)[6],lf[775]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[698]);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t12)){
t14=t13;
f_6198(t14,t12);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[700]);
if(C_truep(t14)){
t15=t13;
f_6198(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[5],lf[699]);
if(C_truep(t15)){
t16=t13;
f_6198(t16,t15);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[5],lf[701]);
if(C_truep(t16)){
t17=t13;
f_6198(t17,t16);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[5],lf[840]);
t18=t13;
f_6198(t18,(C_truep(t17)?t17:(C_word)C_eqp(((C_word*)t0)[5],lf[841])));}}}}}}}}}}}}}}

/* k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6198,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1241 str */
t2=((C_word*)t0)[7];
f_6038(t2,((C_word*)t0)[6],lf[776]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[777]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_6210(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[837]);
if(C_truep(t4)){
t5=t3;
f_6210(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[838]);
t6=t3;
f_6210(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[839])));}}}}

/* k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6210(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6210,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1242 str */
t2=((C_word*)t0)[7];
f_6038(t2,((C_word*)t0)[6],lf[778]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[779]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[780]));
if(C_truep(t3)){
/* c-backend.scm: 1243 str */
t4=((C_word*)t0)[7];
f_6038(t4,((C_word*)t0)[6],lf[781]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[782]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[783]));
if(C_truep(t5)){
/* c-backend.scm: 1244 str */
t6=((C_word*)t0)[7];
f_6038(t6,((C_word*)t0)[6],lf[784]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[785]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[786]));
if(C_truep(t7)){
/* c-backend.scm: 1245 str */
t8=((C_word*)t0)[7];
f_6038(t8,((C_word*)t0)[6],lf[787]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[788]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(((C_word*)t0)[5],lf[789]));
if(C_truep(t9)){
/* c-backend.scm: 1246 str */
t10=((C_word*)t0)[7];
f_6038(t10,((C_word*)t0)[6],lf[790]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[791]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[5],lf[792]));
if(C_truep(t11)){
/* c-backend.scm: 1247 str */
t12=((C_word*)t0)[7];
f_6038(t12,((C_word*)t0)[6],lf[793]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[794]);
t13=(C_truep(t12)?t12:(C_word)C_eqp(((C_word*)t0)[5],lf[795]));
if(C_truep(t13)){
/* c-backend.scm: 1248 str */
t14=((C_word*)t0)[7];
f_6038(t14,((C_word*)t0)[6],lf[796]);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[797]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(((C_word*)t0)[5],lf[798]));
if(C_truep(t15)){
/* c-backend.scm: 1249 str */
t16=((C_word*)t0)[7];
f_6038(t16,((C_word*)t0)[6],lf[799]);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[5],lf[692]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_6306(t18,t16);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[5],lf[687]);
if(C_truep(t18)){
t19=t17;
f_6306(t19,t18);}
else{
t19=(C_word)C_eqp(((C_word*)t0)[5],lf[708]);
if(C_truep(t19)){
t20=t17;
f_6306(t20,t19);}
else{
t20=(C_word)C_eqp(((C_word*)t0)[5],lf[688]);
t21=t17;
f_6306(t21,(C_truep(t20)?t20:(C_word)C_eqp(((C_word*)t0)[5],lf[709])));}}}}}}}}}}}}

/* k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6306(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6306,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1250 str */
t2=((C_word*)t0)[7];
f_6038(t2,((C_word*)t0)[6],lf[800]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[645]);
if(C_truep(t2)){
/* c-backend.scm: 1251 str */
t3=((C_word*)t0)[7];
f_6038(t3,((C_word*)t0)[6],lf[801]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* c-backend.scm: 1253 ##sys#hash-table-ref */
t4=C_retrieve(lf[706]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[707]),((C_word*)t0)[3]);}
else{
t4=t3;
f_6321(2,t4,C_SCHEME_FALSE);}}}}

/* k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
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
C_word ab[96],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6321,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* c-backend.scm: 1255 ##compiler#foreign-type-declaration */
t4=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[6],t3,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[4]))){
/* c-backend.scm: 1256 str */
t2=((C_word*)t0)[3];
f_6038(t2,((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6353,a[2]=((C_word*)t0)[2],a[3]=lf[802],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[5],a[3]=lf[804],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6367,a[2]=((C_word*)t0)[5],a[3]=lf[806],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(C_word)C_eqp(t5,lf[698]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6393,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cddr(((C_word*)t0)[4]);
t10=t7;
f_6393(t10,(C_word)C_i_nullp(t9));}
else{
t9=t7;
f_6393(t9,C_SCHEME_FALSE);}}
else{
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_eqp(t7,lf[699]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6429,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cddr(((C_word*)t0)[4]);
t12=t9;
f_6429(t12,(C_word)C_i_nullp(t11));}
else{
t11=t9;
f_6429(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_i_car(((C_word*)t0)[4]);
t10=(C_word)C_eqp(t9,lf[700]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6465,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t12=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t12))){
t13=(C_word)C_i_cddr(((C_word*)t0)[4]);
t14=t11;
f_6465(t14,(C_word)C_i_nullp(t13));}
else{
t13=t11;
f_6465(t13,C_SCHEME_FALSE);}}
else{
t11=(C_word)C_i_car(((C_word*)t0)[4]);
t12=(C_word)C_eqp(t11,lf[701]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6501,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t14=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t14))){
t15=(C_word)C_i_cddr(((C_word*)t0)[4]);
t16=t13;
f_6501(t16,(C_word)C_i_nullp(t15));}
else{
t15=t13;
f_6501(t15,C_SCHEME_FALSE);}}
else{
t13=(C_word)C_i_car(((C_word*)t0)[4]);
t14=(C_word)C_eqp(t13,lf[695]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6537,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t16=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t16))){
t17=(C_word)C_i_cddr(((C_word*)t0)[4]);
t18=t15;
f_6537(t18,(C_word)C_i_nullp(t17));}
else{
t17=t15;
f_6537(t17,C_SCHEME_FALSE);}}
else{
t15=(C_word)C_i_car(((C_word*)t0)[4]);
t16=(C_word)C_eqp(t15,lf[808]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6576,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t18=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t18))){
t19=(C_word)C_i_cddr(((C_word*)t0)[4]);
t20=t17;
f_6576(t20,(C_word)C_i_listp(t19));}
else{
t19=t17;
f_6576(t19,C_SCHEME_FALSE);}}
else{
t17=(C_word)C_i_car(((C_word*)t0)[4]);
t18=(C_word)C_eqp(t17,lf[697]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6636,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t20=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t20))){
t21=(C_word)C_i_cddr(((C_word*)t0)[4]);
t22=t19;
f_6636(t22,(C_word)C_i_nullp(t21));}
else{
t21=t19;
f_6636(t21,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_i_car(((C_word*)t0)[4]);
t20=(C_word)C_eqp(t19,lf[817]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6675,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t22=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t22))){
t23=(C_word)C_i_cddr(((C_word*)t0)[4]);
t24=t21;
f_6675(t24,(C_word)C_i_nullp(t23));}
else{
t23=t21;
f_6675(t23,C_SCHEME_FALSE);}}
else{
t21=(C_word)C_i_car(((C_word*)t0)[4]);
t22=(C_word)C_eqp(t21,lf[820]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6714,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t24=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t24))){
t25=(C_word)C_i_cddr(((C_word*)t0)[4]);
t26=t23;
f_6714(t26,(C_word)C_i_nullp(t25));}
else{
t25=t23;
f_6714(t25,C_SCHEME_FALSE);}}
else{
t23=(C_word)C_i_car(((C_word*)t0)[4]);
t24=(C_word)C_eqp(t23,lf[823]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6753,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t26=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t26))){
t27=(C_word)C_i_cddr(((C_word*)t0)[4]);
t28=t25;
f_6753(t28,(C_word)C_i_nullp(t27));}
else{
t27=t25;
f_6753(t27,C_SCHEME_FALSE);}}
else{
t25=(C_word)C_i_car(((C_word*)t0)[4]);
t26=(C_word)C_eqp(t25,lf[703]);
if(C_truep(t26)){
t27=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6792,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t28=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t28))){
t29=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t29))){
t30=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t31=t27;
f_6792(t31,(C_word)C_i_nullp(t30));}
else{
t30=t27;
f_6792(t30,C_SCHEME_FALSE);}}
else{
t29=t27;
f_6792(t29,C_SCHEME_FALSE);}}
else{
t27=(C_word)C_i_car(((C_word*)t0)[4]);
t28=(C_word)C_eqp(t27,lf[704]);
if(C_truep(t28)){
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6842,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t30=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t30))){
t31=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t31))){
t32=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t33=t29;
f_6842(t33,(C_word)C_i_nullp(t32));}
else{
t32=t29;
f_6842(t32,C_SCHEME_FALSE);}}
else{
t31=t29;
f_6842(t31,C_SCHEME_FALSE);}}
else{
t29=(C_word)C_i_car(((C_word*)t0)[4]);
t30=(C_word)C_eqp(t29,lf[705]);
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6892,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t32=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t32))){
t33=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t33))){
t34=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t35=t31;
f_6892(t35,(C_word)C_i_nullp(t34));}
else{
t34=t31;
f_6892(t34,C_SCHEME_FALSE);}}
else{
t33=t31;
f_6892(t33,C_SCHEME_FALSE);}}
else{
t31=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6938,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t32=(C_word)C_i_car(((C_word*)t0)[4]);
t33=(C_word)C_eqp(t32,lf[702]);
if(C_truep(t33)){
t34=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t34))){
t35=(C_word)C_i_cddr(((C_word*)t0)[4]);
t36=t31;
f_6938(t36,(C_word)C_i_pairp(t35));}
else{
t35=t31;
f_6938(t35,C_SCHEME_FALSE);}}
else{
t34=t31;
f_6938(t34,C_SCHEME_FALSE);}}}}}}}}}}}}}}}
else{
/* c-backend.scm: 1258 g896 */
t5=t2;
f_6353(t5,((C_word*)t0)[6]);}}
else{
/* c-backend.scm: 1294 err */
t2=((C_word*)t0)[2];
f_6033(t2,((C_word*)t0)[6]);}}}}

/* k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6938,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6954,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1258 ##compiler#foreign-type-declaration */
t6=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,lf[836]);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6952 in k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6958,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(C_word)C_i_car(((C_word*)t0)[2]);
if(C_truep(t3)){
t4=(C_word)C_i_stringp(t3);
t5=t2;
f_6958(t5,(C_truep(t4)?t3:C_SCHEME_FALSE));}
else{
t4=t2;
f_6958(t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6958(t3,C_SCHEME_FALSE);}}

/* k6956 in k6952 in k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6958(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6958,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[827]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6965,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6969,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6971,a[2]=lf[835],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[431]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a6970 in k6956 in k6952 in k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6971(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6971,3,t0,t1,t2);}
t3=(C_word)C_eqp(lf[832],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[833]);}
else{
/* c-backend.scm: 1258 ##compiler#foreign-type-declaration */
t4=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[834]);}}

/* k6967 in k6956 in k6952 in k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-intersperse */
t2=C_retrieve(lf[811]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[831]);}

/* k6963 in k6956 in k6952 in k6936 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[828],((C_word*)t0)[2],lf[829],t1,lf[830]);}

/* k6890 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6892(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6892,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6905,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1258 ->string */
t5=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6903 in k6890 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[826],((C_word*)t0)[2]);}

/* k6840 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g893 */
t4=((C_word*)t0)[4];
f_6358(t4,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6790 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g893 */
t4=((C_word*)t0)[4];
f_6358(t4,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6751 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6753(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6753,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6763,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1258 ->string */
t4=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6761 in k6751 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[824],t1,lf[825],((C_word*)t0)[2]);}

/* k6712 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6714(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6714,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6724,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1258 ->string */
t4=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6722 in k6712 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[821],t1,lf[822],((C_word*)t0)[2]);}

/* k6673 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6675(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6675,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1258 ->string */
t4=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6683 in k6673 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],lf[818],t1,lf[819],((C_word*)t0)[2]);}

/* k6634 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6636(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6636,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6646,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1258 ##compiler#foreign-type-declaration */
t4=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6644 in k6634 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[816],t1);}

/* k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6576,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6589,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6593,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1258 ##compiler#foreign-type-declaration */
t6=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,lf[815]);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6591 in k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6597,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6601,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6603,a[2]=lf[814],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[431]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a6602 in k6591 in k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6603,3,t0,t1,t2);}
/* ##compiler#foreign-type-declaration */
t3=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,lf[813]);}

/* k6599 in k6591 in k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-intersperse */
t2=C_retrieve(lf[811]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[812]);}

/* k6595 in k6591 in k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[809],t1,lf[810]);}

/* k6587 in k6574 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1258 str */
t2=((C_word*)t0)[3];
f_6038(t2,((C_word*)t0)[2],t1);}

/* k6535 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6537(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6537,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6547,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1262 string-append */
t4=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[807],((C_word*)t0)[3]);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[4]);}}

/* k6545 in k6535 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1262 ##compiler#foreign-type-declaration */
t2=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6499 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g883 */
t3=((C_word*)t0)[4];
f_6367(t3,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6463 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g883 */
t3=((C_word*)t0)[4];
f_6367(t3,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6427 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g883 */
t3=((C_word*)t0)[4];
f_6367(t3,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* k6391 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6393(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* c-backend.scm: 1258 g883 */
t3=((C_word*)t0)[4];
f_6367(t3,((C_word*)t0)[3],t2);}
else{
/* c-backend.scm: 1258 g896 */
t2=((C_word*)t0)[2];
f_6353(t2,((C_word*)t0)[3]);}}

/* g883 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6367,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6375,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1260 string-append */
t4=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[805],((C_word*)t0)[2]);}

/* k6373 in g883 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1260 ##compiler#foreign-type-declaration */
t2=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g893 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6358(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6358,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6366,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1274 ->string */
t4=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k6364 in g893 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1274 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[803],((C_word*)t0)[2]);}

/* g896 in k6319 in k6304 in k6208 in k6196 in k6106 in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6353(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6353,NULL,2,t0,t1);}
/* c-backend.scm: 1293 err */
t2=((C_word*)t0)[2];
f_6033(t2,t1);}

/* str in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6038(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6038,NULL,3,t0,t1,t2);}
/* c-backend.scm: 1223 string-append */
t3=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,t2,lf[760],((C_word*)t0)[2]);}

/* err in ##compiler#foreign-type-declaration in k1115 */
static void C_fcall f_6033(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6033,NULL,2,t0,t1);}
/* c-backend.scm: 1222 quit */
t2=C_retrieve(lf[757]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[758],((C_word*)t0)[2]);}

/* ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5966,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5970,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1204 foreign-callback-stub-name */
t5=C_retrieve(lf[755]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1205 foreign-callback-stub-qualifiers */
t3=C_retrieve(lf[754]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 1206 foreign-callback-stub-return-type */
t3=C_retrieve(lf[747]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5979,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 1207 foreign-callback-stub-argument-types */
t3=C_retrieve(lf[746]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5979,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5985,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 1209 ##compiler#make-argument-list */
t4=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,lf[753]);}

/* k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5988,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6029,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1210 ##compiler#foreign-type-declaration */
t4=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[752]);}

/* k6027 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1210 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t2))(10,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(32),t1,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2],C_make_character(40));}

/* k5986 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5991,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5996,a[2]=lf[751],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1211 pair-for-each */
t4=C_retrieve(lf[204]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5995 in k5986 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5996,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6000,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6017,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_car(t2);
/* c-backend.scm: 1213 ##compiler#foreign-type-declaration */
t8=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,t6,t7);}

/* k6015 in a5995 in k5986 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1213 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5998 in a5995 in k5986 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t2))){
/* c-backend.scm: 1214 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_make_character(44));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k5989 in k5986 in k5983 in k5977 in k5974 in k5971 in k5968 in ##compiler#generate-foreign-callback-header in k1115 */
static void C_ccall f_5991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1216 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5577(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5577,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5583,a[2]=t3,a[3]=lf[749],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5583,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1151 foreign-callback-stub-id */
t4=C_retrieve(lf[748]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1152 ##compiler#real-name2 */
t3=C_retrieve(lf[681]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5593,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1153 foreign-callback-stub-return-type */
t3=C_retrieve(lf[747]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 1154 foreign-callback-stub-argument-types */
t3=C_retrieve(lf[746]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}

/* k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5596,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 1156 ##compiler#make-argument-list */
t4=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,lf[745]);}

/* k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5602,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5604,a[2]=t3,a[3]=lf[729],tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 1183 fold */
t6=C_retrieve(lf[517]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,((C_word*)t3)[1],lf[744],((C_word*)t0)[4],t1);}

/* k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 1184 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5964,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1186 ##compiler#cleanup */
t4=C_retrieve(lf[575]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_5907(2,t3,C_SCHEME_UNDEFINED);}}

/* k5962 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1186 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[742],t1,lf[743]);}

/* k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 1187 ##compiler#generate-foreign-callback-header */
t3=C_retrieve(lf[630]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[741],((C_word*)t0)[2]);}

/* k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 1188 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,C_make_character(123),C_SCHEME_TRUE,lf[739],((C_word*)t0)[2],lf[740]);}

/* k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 1189 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[738]);}

/* k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5919,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=lf[737],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1190 for-each */
t4=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5948 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5949,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5957,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1192 ##compiler#foreign-result-conversion */
t5=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t3,lf[736]);}

/* k5955 in a5948 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1192 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[733],t1,((C_word*)t0)[2],lf[734],C_SCHEME_TRUE,lf[735]);}

/* k5917 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(lf[645],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t2;
f_5922(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5947,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1197 ##compiler#foreign-argument-conversion */
t5=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[4]);}}

/* k5945 in k5917 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1197 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[732],t1);}

/* k5920 in k5917 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5925,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1198 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,lf[731],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],C_make_character(41));}

/* k5923 in k5920 in k5917 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5928,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(lf[645],((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t2;
f_5928(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 1199 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,C_make_character(41));}}

/* k5926 in k5923 in k5920 in k5917 in k5914 in k5911 in k5908 in k5905 in k5902 in k5899 in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1200 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[730]);}

/* compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5604,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=(C_word)C_eqp(t5,lf[41]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5614,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t4,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_5614(t8,t6);}
else{
t8=(C_word)C_eqp(t5,lf[719]);
if(C_truep(t8)){
t9=t7;
f_5614(t9,t8);}
else{
t9=(C_word)C_eqp(t5,lf[720]);
if(C_truep(t9)){
t10=t7;
f_5614(t10,t9);}
else{
t10=(C_word)C_eqp(t5,lf[721]);
if(C_truep(t10)){
t11=t7;
f_5614(t11,t10);}
else{
t11=(C_word)C_eqp(t5,lf[38]);
if(C_truep(t11)){
t12=t7;
f_5614(t12,t11);}
else{
t12=(C_word)C_eqp(t5,lf[645]);
if(C_truep(t12)){
t13=t7;
f_5614(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[722]);
if(C_truep(t13)){
t14=t7;
f_5614(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[723]);
if(C_truep(t14)){
t15=t7;
f_5614(t15,t14);}
else{
t15=(C_word)C_eqp(t5,lf[724]);
if(C_truep(t15)){
t16=t7;
f_5614(t16,t15);}
else{
t16=(C_word)C_eqp(t5,lf[725]);
if(C_truep(t16)){
t17=t7;
f_5614(t17,t16);}
else{
t17=(C_word)C_eqp(t5,lf[726]);
if(C_truep(t17)){
t18=t7;
f_5614(t18,t17);}
else{
t18=(C_word)C_eqp(t5,lf[727]);
t19=t7;
f_5614(t19,(C_truep(t18)?t18:(C_word)C_eqp(t5,lf[728])));}}}}}}}}}}}}

/* k5612 in compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_fcall f_5614(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5614,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[685]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_5623(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[710]);
if(C_truep(t4)){
t5=t3;
f_5623(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[699]);
if(C_truep(t5)){
t6=t3;
f_5623(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[711]);
if(C_truep(t6)){
t7=t3;
f_5623(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[712]);
if(C_truep(t7)){
t8=t3;
f_5623(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[713]);
if(C_truep(t8)){
t9=t3;
f_5623(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[714]);
if(C_truep(t9)){
t10=t3;
f_5623(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[715]);
if(C_truep(t10)){
t11=t3;
f_5623(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[5],lf[716]);
if(C_truep(t11)){
t12=t3;
f_5623(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[701]);
if(C_truep(t12)){
t13=t3;
f_5623(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[5],lf[717]);
t14=t3;
f_5623(t14,(C_truep(t13)?t13:(C_word)C_eqp(((C_word*)t0)[5],lf[718])));}}}}}}}}}}}}

/* k5621 in k5612 in compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_fcall f_5623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5623,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1165 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],lf[686]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[687]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[688]));
if(C_truep(t3)){
/* c-backend.scm: 1167 string-append */
t4=*((C_word*)lf[207]+1);
((C_proc8)C_retrieve_proc(t4))(8,t4,((C_word*)t0)[7],((C_word*)t0)[6],lf[689],((C_word*)t0)[4],lf[690],((C_word*)t0)[4],lf[691]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[692]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=t5;
f_5647(t6,t4);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[708]);
t7=t5;
f_5647(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[709])));}}}}

/* k5645 in k5621 in k5612 in compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_fcall f_5647(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5647,NULL,2,t0,t1);}
if(C_truep(t1)){
/* c-backend.scm: 1169 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[693],((C_word*)t0)[4],lf[694]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
/* c-backend.scm: 1171 ##sys#hash-table-ref */
t3=C_retrieve(lf[706]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[707]),((C_word*)t0)[2]);}
else{
t3=t2;
f_5653(2,t3,C_SCHEME_FALSE);}}}

/* k5651 in k5645 in k5621 in k5612 in compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5653,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vectorp(t1);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(t1,C_fix(0)):t1);
/* c-backend.scm: 1173 compute-size */
t4=((C_word*)((C_word*)t0)[6])[1];
f_5604(5,t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[695]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_5687(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[698]);
if(C_truep(t5)){
t6=t4;
f_5687(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[699]);
if(C_truep(t6)){
t7=t4;
f_5687(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[700]);
if(C_truep(t7)){
t8=t4;
f_5687(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[701]);
if(C_truep(t8)){
t9=t4;
f_5687(t9,t8);}
else{
t9=(C_word)C_eqp(t2,lf[702]);
if(C_truep(t9)){
t10=t4;
f_5687(t10,t9);}
else{
t10=(C_word)C_eqp(t2,lf[703]);
if(C_truep(t10)){
t11=t4;
f_5687(t11,t10);}
else{
t11=(C_word)C_eqp(t2,lf[704]);
t12=t4;
f_5687(t12,(C_truep(t11)?t11:(C_word)C_eqp(t2,lf[705])));}}}}}}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}

/* k5685 in k5651 in k5645 in k5621 in k5612 in compute-size in k5600 in k5594 in k5591 in k5588 in k5585 in a5582 in generate-foreign-callback-stubs in k1115 */
static void C_fcall f_5687(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 1178 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],lf[696]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[697]);
if(C_truep(t2)){
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 1179 compute-size */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5604(5,t4,((C_word*)t0)[7],t3,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[6]);}}}

/* ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5344,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5350,a[2]=t3,a[3]=lf[683],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5350,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5354,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1086 foreign-stub-id */
t4=C_retrieve(lf[682]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1087 ##compiler#real-name2 */
t3=C_retrieve(lf[681]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5360,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1088 foreign-stub-argument-types */
t3=C_retrieve(lf[680]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5360,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1090 ##compiler#make-variable-list */
t5=C_retrieve(lf[286]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,lf[679]);}

/* k5573 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5575,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[678],t1);
/* c-backend.scm: 1090 intersperse */
t3=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,C_make_character(44));}

/* k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 1091 foreign-stub-return-type */
t3=C_retrieve(lf[677]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 1092 foreign-stub-name */
t3=C_retrieve(lf[676]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 1093 foreign-stub-body */
t3=C_retrieve(lf[675]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 1094 foreign-stub-argument-names */
t3=C_retrieve(lf[674]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5381,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_5381(2,t3,t1);}
else{
/* c-backend.scm: 1094 make-list */
t3=C_retrieve(lf[245]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm: 1095 ##compiler#foreign-result-conversion */
t3=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],lf[673]);}

/* k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm: 1096 foreign-stub-cps */
t3=C_retrieve(lf[672]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* c-backend.scm: 1097 foreign-stub-callback */
t3=C_retrieve(lf[671]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* c-backend.scm: 1098 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5564,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1100 ##compiler#cleanup */
t4=C_retrieve(lf[575]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_5396(2,t3,C_SCHEME_UNDEFINED);}}

/* k5562 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1100 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[669],t1,lf[670]);}

/* k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[12])){
/* c-backend.scm: 1101 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[667],((C_word*)t0)[6],lf[668]);}
else{
t3=t2;
f_5399(2,t3,C_SCHEME_UNDEFINED);}}

/* k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[10])){
/* c-backend.scm: 1103 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t3))(10,t3,t2,C_SCHEME_TRUE,lf[662],((C_word*)t0)[2],lf[663],C_SCHEME_TRUE,lf[664],((C_word*)t0)[2],lf[665]);}
else{
/* c-backend.scm: 1105 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[666],((C_word*)t0)[2],C_make_character(40));}}

/* k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5408,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[10])){
/* c-backend.scm: 1108 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,lf[657],C_SCHEME_TRUE,lf[658],((C_word*)t0)[2],lf[659]);}
else{
/* c-backend.scm: 1109 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,lf[660],C_SCHEME_TRUE,lf[661],((C_word*)t0)[2],C_make_character(40));}}

/* k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5411,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 1111 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[656]);}

/* k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5417,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 1112 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[655]);}

/* k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5512,a[2]=lf[654],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1121 iota */
t5=C_retrieve(lf[85]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[6]);}

/* k5540 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1113 for-each */
t2=*((C_word*)lf[84]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a5511 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5512,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5520,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5532,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
/* c-backend.scm: 1118 symbol->string */
t7=*((C_word*)lf[98]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}
else{
/* c-backend.scm: 1118 sprintf */
t7=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,lf[653],t3);}}

/* k5530 in a5511 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1116 ##compiler#foreign-type-declaration */
t2=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5518 in a5511 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1119 ##compiler#foreign-type-declaration */
t3=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[652]);}

/* k5522 in k5518 in a5511 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5528,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1120 ##compiler#foreign-argument-conversion */
t3=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5526 in k5522 in k5518 in a5511 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1115 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc11)C_retrieve_proc(t2))(11,t2,((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[649],((C_word*)t0)[3],C_make_character(41),t1,lf[650],((C_word*)t0)[2],lf[651]);}

/* k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
/* c-backend.scm: 1122 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[648]);}
else{
t3=t2;
f_5423(2,t3,C_SCHEME_UNDEFINED);}}

/* k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5432,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1124 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,C_SCHEME_TRUE,((C_word*)t0)[8],C_SCHEME_TRUE,lf[639]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[645]);
if(C_truep(t4)){
/* c-backend.scm: 1135 ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,C_SCHEME_TRUE);}
else{
/* c-backend.scm: 1134 ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,C_SCHEME_TRUE,lf[647],((C_word*)t0)[2]);}}}

/* k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 1136 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_make_character(40));}

/* k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5494,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1137 ##compiler#make-argument-list */
t5=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[646]);}

/* k5492 in k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1137 intersperse */
t2=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k5488 in k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5457 in k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],lf[645]);
if(C_truep(t3)){
t4=t2;
f_5462(2,t4,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 1138 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,C_make_character(41));}}

/* k5460 in k5457 in k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1139 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[644]);}

/* k5463 in k5460 in k5457 in k5454 in k5451 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm: 1141 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[640],C_SCHEME_TRUE,lf[641]);}
else{
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 1143 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],lf[642]);}
else{
/* c-backend.scm: 1144 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[643]);}}}

/* k5430 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1126 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,lf[638],C_SCHEME_TRUE);}

/* k5433 in k5430 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm: 1128 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[634],C_SCHEME_TRUE,lf[635]);}
else{
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 1130 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[636]);}
else{
/* c-backend.scm: 1131 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[637]);}}}

/* k5424 in k5421 in k5418 in k5415 in k5412 in k5409 in k5406 in k5403 in k5400 in k5397 in k5394 in k5391 in k5388 in k5385 in k5382 in k5379 in k5376 in k5373 in k5370 in k5367 in k5364 in k5358 in k5355 in k5352 in a5349 in ##compiler#generate-foreign-stubs in k1115 */
static void C_ccall f_5426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1145 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* ##compiler#generate-foreign-callback-stub-prototypes in k1115 */
static void C_ccall f_5326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5326,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5332,a[2]=lf[632],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a5331 in ##compiler#generate-foreign-callback-stub-prototypes in k1115 */
static void C_ccall f_5332(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5332,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5336,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1078 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}

/* k5334 in a5331 in ##compiler#generate-foreign-callback-stub-prototypes in k1115 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5339,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1079 ##compiler#generate-foreign-callback-header */
t3=C_retrieve(lf[630]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[631],((C_word*)t0)[2]);}

/* k5337 in k5334 in a5331 in ##compiler#generate-foreign-callback-stub-prototypes in k1115 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1080 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* ##compiler#generate-external-variables in k1115 */
static void C_ccall f_5275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5275,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5279,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1065 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}

/* k5277 in ##compiler#generate-external-variables in k1115 */
static void C_ccall f_5279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5284,a[2]=lf[628],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a5283 in k5277 in ##compiler#generate-external-variables in k1115 */
static void C_ccall f_5284(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5284,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5291,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_vectorp(t2))){
t4=(C_word)C_i_vector_length(t2);
t5=t3;
f_5291(t5,(C_word)C_eqp(t4,C_fix(3)));}
else{
t4=t3;
f_5291(t4,C_SCHEME_FALSE);}}

/* k5289 in a5283 in k5277 in ##compiler#generate-external-variables in k1115 */
static void C_fcall f_5291(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5291,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
t3=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(1));
t4=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(2));
t5=(C_truep(t4)?lf[626]:lf[627]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5311,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1069 ##compiler#foreign-type-declaration */
t7=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t3,t2);}
else{
/* ##sys#match-error */
t2=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k5309 in k5289 in a5283 in k5277 in ##compiler#generate-external-variables in k1115 */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1069 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],t1,C_make_character(59));}

/* ##compiler#make-argument-list in k1115 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5259,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5265,a[2]=t3,a[3]=lf[624],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1057 list-tabulate */
t5=C_retrieve(lf[622]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t4);}

/* a5264 in ##compiler#make-argument-list in k1115 */
static void C_ccall f_5265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5265,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1059 number->string */
C_number_to_string(3,0,t3,t2);}

/* k5271 in a5264 in ##compiler#make-argument-list in k1115 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1059 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#make-variable-list in k1115 */
static void C_ccall f_5243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5243,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5249,a[2]=t3,a[3]=lf[621],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1052 list-tabulate */
t5=C_retrieve(lf[622]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t4);}

/* a5248 in ##compiler#make-variable-list in k1115 */
static void C_ccall f_5249(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5249,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5257,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1054 number->string */
C_number_to_string(3,0,t3,t2);}

/* k5255 in a5248 in ##compiler#make-variable-list in k1115 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1054 string-append */
t2=*((C_word*)lf[207]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[620],((C_word*)t0)[2],t1);}

/* ##compiler#cleanup in k1115 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5154,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_string_length(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5163,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=lf[618],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_5163(t9,t1,C_fix(0));}

/* loop in ##compiler#cleanup in k1115 */
static void C_fcall f_5163(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5163,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
t4=((C_word*)((C_word*)t0)[4])[1];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:((C_word*)t0)[3]));}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5179,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_fixnum_lessp(t4,C_make_character(32));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5192,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_5192(t8,t6);}
else{
t8=(C_word)C_fixnum_greaterp(t4,C_make_character(126));
if(C_truep(t8)){
t9=t7;
f_5192(t9,t8);}
else{
t9=(C_word)C_eqp(t4,C_make_character(42));
if(C_truep(t9)){
t10=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t11=t2;
if(C_truep((C_word)C_fixnum_lessp(t11,t10))){
t12=(C_word)C_fixnum_increase(t2);
t13=(C_word)C_i_string_ref(((C_word*)t0)[3],t12);
t14=t7;
f_5192(t14,(C_word)C_eqp(C_make_character(47),t13));}
else{
t12=t7;
f_5192(t12,C_SCHEME_FALSE);}}
else{
t10=t7;
f_5192(t10,C_SCHEME_FALSE);}}}}}

/* k5190 in loop in ##compiler#cleanup in k1115 */
static void C_fcall f_5192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5192,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5195,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=t2;
f_5195(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5202,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 1043 string-copy */
t4=C_retrieve(lf[617]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}}
else{
t2=((C_word*)t0)[6];
f_5179(t2,(C_truep(((C_word*)((C_word*)t0)[5])[1])?(C_word)C_i_string_set(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],((C_word*)t0)[2]):C_SCHEME_UNDEFINED));}}

/* k5200 in k5190 in loop in ##compiler#cleanup in k1115 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5195(t3,t2);}

/* k5193 in k5190 in loop in ##compiler#cleanup in k1115 */
static void C_fcall f_5195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
f_5179(t2,(C_word)C_i_string_set(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_make_character(126)));}

/* k5177 in loop in ##compiler#cleanup in k1115 */
static void C_fcall f_5179(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
/* c-backend.scm: 1046 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5163(t3,((C_word*)t0)[2],t2);}

/* emit-procedure-table-info in k1115 */
static void C_ccall f_5081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5081,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5085,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_length(t2);
t6=(C_word)C_fixnum_increase(t5);
/* c-backend.scm: 1008 ##compiler#gen */
t7=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t7))(9,t7,t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[613],C_SCHEME_TRUE,lf[614],t6,lf[615]);}

/* k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5088,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=lf[612],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_5099(t6,t2,((C_word*)t0)[2]);}

/* do619 in k5083 in emit-procedure-table-info in k1115 */
static void C_fcall f_5099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5099,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* c-backend.scm: 1012 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,C_SCHEME_TRUE,lf[605]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5112,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
/* c-backend.scm: 1013 lambda-literal-id */
t5=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}

/* k5110 in do619 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5115,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 1014 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,C_SCHEME_TRUE,lf[610],t1,((C_word*)t0)[2],lf[611]);}

/* k5113 in k5110 in do619 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(lf[261],((C_word*)t0)[2]);
if(C_truep(t3)){
if(C_truep(C_retrieve(lf[219]))){
/* c-backend.scm: 1017 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[606],C_retrieve(lf[219]),lf[607]);}
else{
/* c-backend.scm: 1018 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,lf[608]);}}
else{
/* c-backend.scm: 1019 ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],lf[609]);}}

/* k5116 in k5113 in k5110 in do619 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_5099(t3,((C_word*)t0)[2],t2);}

/* k5086 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1020 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[604]);}

/* k5089 in k5086 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1021 ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[603]);}

/* k5092 in k5089 in k5086 in k5083 in emit-procedure-table-info in k1115 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 1022 ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc15)C_retrieve_proc(t2))(15,t2,((C_word*)t0)[2],lf[596],C_SCHEME_TRUE,lf[597],C_SCHEME_TRUE,lf[598],C_SCHEME_TRUE,lf[599],C_SCHEME_TRUE,lf[600],C_SCHEME_TRUE,lf[601],C_SCHEME_TRUE,lf[602]);}

/* ##compiler#generate-code in k1115 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
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
C_word ab[86],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_1182,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1185,a[2]=t3,a[3]=lf[31],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1207,a[2]=lf[36],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1227,a[2]=t8,a[3]=t9,a[4]=lf[206],tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2700,a[2]=t5,a[3]=lf[234],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2848,a[2]=t2,a[3]=lf[243],tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2875,a[2]=t3,a[3]=lf[291],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=t3,a[3]=lf[346],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4151,a[2]=lf[349],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4059,a[2]=t15,a[3]=lf[355],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=lf[357],tmp=(C_word)a,a+=3,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3722,a[2]=t17,a[3]=t21,a[4]=t19,a[5]=t16,a[6]=lf[414],tmp=(C_word)a,a+=7,tmp));
t23=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4163,a[2]=t19,a[3]=lf[423],tmp=(C_word)a,a+=4,tmp));
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=t2,a[3]=t19,a[4]=lf[427],tmp=(C_word)a,a+=5,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3455,a[2]=t17,a[3]=t26,a[4]=lf[436],tmp=(C_word)a,a+=5,tmp));
t28=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4234,a[2]=t3,a[3]=t7,a[4]=t26,a[5]=t24,a[6]=t2,a[7]=t10,a[8]=lf[585],tmp=(C_word)a,a+=9,tmp);
t29=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5045,a[2]=t11,a[3]=t12,a[4]=t13,a[5]=t7,a[6]=t14,a[7]=t28,a[8]=t5,a[9]=t3,a[10]=t1,a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 990  ##compiler#debugging */
t30=C_retrieve(lf[576]);
((C_proc4)C_retrieve_proc(t30))(4,t30,t29,lf[593],lf[594]);}

/* k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5045,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1,((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 992  header */
t4=((C_word*)t0)[2];
f_2700(t4,t3);}

/* k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 993  declarations */
t3=((C_word*)t0)[2];
f_2848(t3,t2);}

/* k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5055,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 994  ##compiler#generate-external-variables */
t3=C_retrieve(lf[591]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[592]));}

/* k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 995  ##compiler#generate-foreign-stubs */
t3=C_retrieve(lf[589]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[590]),((C_word*)t0)[3]);}

/* k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5061,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 996  prototypes */
t3=((C_word*)t0)[2];
f_2875(t3,t2);}

/* k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5064,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 997  generate-foreign-callback-stubs */
t3=C_retrieve(lf[588]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[212]),((C_word*)t0)[2]);}

/* k5062 in k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5067,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 998  trampolines */
t3=((C_word*)t0)[2];
f_3126(t3,t2);}

/* k5065 in k5062 in k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 999  ##compiler#setup-quick-namespace-list */
t3=C_retrieve(lf[15]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k5068 in k5065 in k5062 in k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5073,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 1000 procedures */
t3=((C_word*)t0)[2];
f_4234(t3,t2);}

/* k5071 in k5068 in k5065 in k5062 in k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 1001 emit-procedure-table-info */
t3=C_retrieve(lf[587]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5074 in k5071 in k5068 in k5065 in k5062 in k5059 in k5056 in k5053 in k5050 in k5047 in k5043 in ##compiler#generate-code in k1115 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
/* c-backend.scm: 509  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,lf[586],C_SCHEME_TRUE);}

/* procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4234(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4234,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=lf[584],tmp=(C_word)a,a+=8,tmp);
/* for-each */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4240,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 805  lambda-literal-argument-count */
t4=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 806  lambda-literal-id */
t3=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}

/* k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 807  ##compiler#real-name */
t3=C_retrieve(lf[583]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4253,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 808  lambda-literal-allocated */
t3=C_retrieve(lf[282]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}

/* k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 809  lambda-literal-rest-argument */
t3=C_retrieve(lf[285]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}

/* k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4256,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm: 810  lambda-literal-customizable */
t5=C_retrieve(lf[288]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[8]);}

/* k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5042,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 811  lambda-literal-closure-size */
t4=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}
else{
t3=t2;
f_4262(t3,C_SCHEME_FALSE);}}

/* k5040 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4262(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4262,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_fix(1):C_fix(0));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[13],t2);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],tmp=(C_word)a,a+=16,tmp);
/* c-backend.scm: 813  ##compiler#make-variable-list */
t5=C_retrieve(lf[286]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[13],lf[582]);}

/* k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4271,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* c-backend.scm: 814  ##compiler#make-argument-list */
t3=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[13],lf[581]);}

/* k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4274,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cdr(((C_word*)t0)[2]):((C_word*)t0)[2]);
/* c-backend.scm: 815  intersperse */
t4=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_make_character(44));}

/* k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cdr(((C_word*)t0)[2]):((C_word*)t0)[2]);
/* c-backend.scm: 816  intersperse */
t4=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_make_character(44));}

/* k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* c-backend.scm: 817  lambda-literal-external */
t3=C_retrieve(lf[344]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[12]);}

/* k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
/* c-backend.scm: 818  lambda-literal-looping */
t3=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[13]);}

/* k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* c-backend.scm: 819  lambda-literal-direct */
t3=C_retrieve(lf[283]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[14]);}

/* k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* c-backend.scm: 820  lambda-literal-rest-argument-mode */
t3=C_retrieve(lf[284]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[15]);}

/* k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
/* c-backend.scm: 821  lambda-literal-temporaries */
t3=C_retrieve(lf[123]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[16]);}

/* k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4292,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_retrieve(lf[219]))){
/* c-backend.scm: 823  string-append */
t3=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve(lf[219]),lf[579]);}
else{
t3=t2;
f_4295(2,t3,lf[580]);}}

/* k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_4298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm: 825  ##compiler#debugging */
t3=C_retrieve(lf[576]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[577],lf[578],((C_word*)t0)[14]);}
else{
t3=t2;
f_4298(2,t3,C_SCHEME_UNDEFINED);}}

/* k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* c-backend.scm: 826  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4304,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5011,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 827  ##compiler#cleanup */
t4=C_retrieve(lf[575]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k5009 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_5011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 827  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],lf[573],t1,lf[574],C_SCHEME_TRUE);}

/* k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4307,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(C_word)C_eqp(lf[261],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 836  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[567]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[14],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 829  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[572]);}}

/* k4970 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(((C_word*)t0)[2])?lf[570]:lf[571]);
/* c-backend.scm: 830  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k4973 in k4970 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 832  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[568]);}
else{
/* c-backend.scm: 833  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[569]);}}

/* k4976 in k4973 in k4970 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 834  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4992 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4994,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4997,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[219]))){
t3=t2;
f_4997(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 838  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[566]);}}

/* k4995 in k4992 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 839  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc16)C_retrieve_proc(t2))(16,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[560],C_SCHEME_TRUE,lf[561],C_SCHEME_TRUE,lf[562],C_SCHEME_TRUE,lf[563],((C_word*)t0)[2],lf[564],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[565],((C_word*)t0)[2]);}

/* k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4307,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm: 844  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(40));}

/* k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=t2;
f_4313(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 845  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[559]);}}

/* k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4944,a[2]=t2,a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=(C_word)C_eqp(((C_word*)t0)[17],C_fix(0));
t5=t3;
f_4944(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_4944(t4,C_SCHEME_FALSE);}}

/* k4942 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4944,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 847  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[558]);}
else{
t2=((C_word*)t0)[2];
f_4316(2,t2,C_SCHEME_UNDEFINED);}}

/* k4945 in k4942 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm: 848  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=((C_word*)t0)[2];
f_4316(2,t2,C_SCHEME_UNDEFINED);}}

/* k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[15]);}

/* k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
/* c-backend.scm: 850  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[557]);}
else{
t3=t2;
f_4322(2,t3,C_SCHEME_UNDEFINED);}}

/* k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm: 851  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[556]);}

/* k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[13],lf[250]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[21],0,C_SCHEME_FALSE);
t5=t2;
f_4328(t5,t4);}
else{
t4=t2;
f_4328(t4,C_SCHEME_UNDEFINED);}}

/* k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4328,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* c-backend.scm: 853  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[555]);}

/* k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_4334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
/* c-backend.scm: 855  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[552],((C_word*)t0)[20],C_make_character(59));}
else{
t3=(C_truep(((C_word*)t0)[2])?(C_word)C_fixnum_decrease(((C_word*)t0)[20]):C_fix(0));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[16],t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4906,a[2]=t6,a[3]=lf[554],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4906(t8,t2,((C_word*)t0)[20],t4);}}

/* do489 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4906,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4916,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 859  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,C_SCHEME_TRUE,lf[553],t2,C_make_character(59));}}

/* k4914 in do489 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4906(t4,((C_word*)t0)[2],t2,t3);}

/* k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],a[13]=((C_word*)t0)[19],a[14]=((C_word*)t0)[20],a[15]=((C_word*)t0)[21],a[16]=((C_word*)t0)[22],tmp=(C_word)a,a+=17,tmp);
t3=(C_word)C_eqp(lf[261],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4680,a[2]=t6,a[3]=lf[519],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4680(t8,t4,C_fix(0),C_retrieve(lf[18]));}
else{
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[17],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 904  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_SCHEME_TRUE,lf[533]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[2],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[17],a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[9];
if(C_truep(t6)){
t7=t5;
f_4849(t7,C_SCHEME_FALSE);}
else{
t7=((C_word*)t0)[17];
t8=t5;
f_4849(t8,(C_word)C_fixnum_greaterp(t7,C_fix(0)));}}}}

/* k4847 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4849(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4849,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[5])){
/* c-backend.scm: 918  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t2))(10,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[543],C_SCHEME_TRUE,lf[544],C_SCHEME_TRUE,lf[545],((C_word*)t0)[3],lf[546]);}
else{
/* c-backend.scm: 921  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[547],((C_word*)t0)[3],lf[548]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4861(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 923  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[551]);}}}

/* k4859 in k4847 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 924  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[550]);}
else{
t3=t2;
f_4864(2,t3,C_SCHEME_UNDEFINED);}}

/* k4862 in k4859 in k4847 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_retrieve(lf[129]);
t4=t2;
f_4870(t4,(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_i_not(C_retrieve(lf[504]))));}
else{
t3=t2;
f_4870(t3,C_SCHEME_FALSE);}}

/* k4868 in k4862 in k4859 in k4847 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 926  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[549]);}
else{
t2=((C_word*)t0)[2];
f_4771(2,t2,C_SCHEME_UNDEFINED);}}

/* k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4813,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_retrieve(lf[129]);
if(C_truep(t4)){
t5=t3;
f_4813(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[527]);
t6=t3;
f_4813(t6,(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t4=t3;
f_4813(t4,C_SCHEME_FALSE);}}

/* k4811 in k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[250]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(2)))){
/* c-backend.scm: 930  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t4))(8,t4,((C_word*)t0)[2],C_SCHEME_TRUE,lf[537],((C_word*)t0)[3],lf[538],((C_word*)t0)[3],lf[539]);}
else{
t4=((C_word*)t0)[2];
f_4774(2,t4,C_SCHEME_UNDEFINED);}}
else{
/* c-backend.scm: 931  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t3))(8,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[540],((C_word*)t0)[3],lf[541],((C_word*)t0)[3],lf[542]);}}
else{
t2=((C_word*)t0)[2];
f_4774(2,t2,C_SCHEME_UNDEFINED);}}

/* k4772 in k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_4780(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[2])){
t4=t2;
f_4780(t4,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[4];
t5=t2;
f_4780(t5,(C_word)C_fixnum_greaterp(t4,C_fix(0)));}}}

/* k4778 in k4772 in k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4780(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4780,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[522]))){
/* c-backend.scm: 933  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[536]);}
else{
t3=t2;
f_4783(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[4];
f_4337(2,t2,C_SCHEME_UNDEFINED);}}

/* k4781 in k4778 in k4772 in k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[2];
t4=t2;
f_4789(t4,(C_word)C_fixnum_greaterp(t3,C_fix(0)));}
else{
t3=t2;
f_4789(t3,C_SCHEME_FALSE);}}

/* k4787 in k4781 in k4778 in k4772 in k4769 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4789(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 935  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[534]);}
else{
/* c-backend.scm: 936  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[535]);}}

/* k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 905  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[532]);}

/* k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 906  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[531]);}

/* k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t4=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* c-backend.scm: 908  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,C_make_character(116),t4);}
else{
/* c-backend.scm: 909  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,lf[530]);}}

/* k4714 in k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 910  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[528],((C_word*)t0)[3],lf[529]);}

/* k4717 in k4714 in k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve(lf[129]);
if(C_truep(t4)){
t5=t3;
f_4734(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[527]);
if(C_truep(t5)){
t6=t3;
f_4734(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)t0)[3];
t7=(C_word)C_fixnum_greaterp(t6,C_fix(2));
t8=t3;
f_4734(t8,(C_truep(t7)?(C_word)C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE));}}}

/* k4732 in k4717 in k4714 in k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4734(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 912  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[524],((C_word*)t0)[2],lf[525],((C_word*)t0)[2],lf[526]);}
else{
t2=((C_word*)t0)[3];
f_4722(2,t2,C_SCHEME_UNDEFINED);}}

/* k4720 in k4717 in k4714 in k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[522]))){
/* c-backend.scm: 913  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[523]);}
else{
t3=t2;
f_4725(2,t3,C_SCHEME_UNDEFINED);}}

/* k4723 in k4720 in k4717 in k4714 in k4711 in k4708 in k4705 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 914  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[520],((C_word*)t0)[2],lf[521]);}

/* do495 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4680(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4680,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4690,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 864  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,C_SCHEME_TRUE,lf[518],t2,C_make_character(59));}}

/* k4688 in do495 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4680(t4,((C_word*)t0)[2],t2,t3);}

/* k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4670,a[2]=((C_word*)t0)[2],a[3]=lf[516],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 865  fold */
t4=C_retrieve(lf[517]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,C_fix(0),((C_word*)t0)[7]);}

/* a4669 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4670(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4670,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4678,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 865  literal-size */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3455(3,t5,t4,t2);}

/* k4676 in a4669 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4563,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 867  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t4))(10,t4,t3,C_SCHEME_TRUE,lf[512],C_SCHEME_TRUE,lf[513],C_SCHEME_TRUE,lf[514],((C_word*)t0)[2],lf[515]);}

/* k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4635,a[2]=t4,a[3]=lf[511],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4635(t6,t2,C_fix(0),C_retrieve(lf[18]));}

/* do505 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4635(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4635,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4645,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4660,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 874  caar */
t6=*((C_word*)lf[510]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}}

/* k4658 in do505 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4664,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 874  cdar */
t4=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4666 in k4658 in do505 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 874  ##compiler#compute-namespace-size */
t2=*((C_word*)lf[11]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4662 in k4658 in do505 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 873  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t2))(10,t2,((C_word*)t0)[4],C_SCHEME_TRUE,lf[506],((C_word*)t0)[3],lf[507],((C_word*)t0)[2],lf[508],t1,lf[509]);}

/* k4643 in do505 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4635(t4,((C_word*)t0)[2],t2,t3);}

/* k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[504]))){
/* c-backend.scm: 876  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[505]);}
else{
t3=t2;
f_4569(2,t3,C_SCHEME_UNDEFINED);}}

/* k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[219]))){
t3=t2;
f_4572(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4603,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[497]))){
/* c-backend.scm: 879  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,C_SCHEME_TRUE,lf[498],C_retrieve(lf[497]),lf[499]);}
else{
if(C_truep(C_retrieve(lf[500]))){
/* c-backend.scm: 881  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t4))(8,t4,t3,C_SCHEME_TRUE,lf[501],C_retrieve(lf[500]),lf[502],C_SCHEME_TRUE,lf[503]);}
else{
t4=t3;
f_4603(2,t4,C_SCHEME_UNDEFINED);}}}}

/* k4601 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[495]))){
/* c-backend.scm: 884  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[496],C_retrieve(lf[495]),C_make_character(59));}
else{
t3=t2;
f_4606(2,t3,C_SCHEME_UNDEFINED);}}

/* k4604 in k4601 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[493]))){
/* c-backend.scm: 886  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[494],C_retrieve(lf[493]),C_make_character(59));}
else{
t3=t2;
f_4609(2,t3,C_SCHEME_UNDEFINED);}}

/* k4607 in k4604 in k4601 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve(lf[490]))){
/* c-backend.scm: 888  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[491],C_retrieve(lf[490]),lf[492]);}
else{
t2=((C_word*)t0)[2];
f_4572(2,t2,C_SCHEME_UNDEFINED);}}

/* k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 889  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc16)C_retrieve_proc(t3))(16,t3,t2,C_SCHEME_TRUE,lf[483],((C_word*)t0)[3],lf[484],C_SCHEME_TRUE,lf[485],((C_word*)t0)[3],lf[486],C_SCHEME_TRUE,lf[487],C_SCHEME_TRUE,lf[488],C_SCHEME_TRUE,lf[489]);}

/* k4573 in k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 894  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc14)C_retrieve_proc(t3))(14,t3,t2,C_SCHEME_TRUE,lf[477],((C_word*)t0)[2],lf[478],C_SCHEME_TRUE,lf[479],C_SCHEME_TRUE,lf[480],((C_word*)t0)[2],lf[481],C_SCHEME_TRUE,lf[482]);}

/* k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 898  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[475],((C_word*)t0)[2],lf[476]);}

/* k4579 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_4337(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 900  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,C_SCHEME_TRUE,lf[473],((C_word*)t0)[4],lf[474]);}}

/* k4588 in k4579 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4590,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 901  literal-frame */
t3=((C_word*)t0)[2];
f_3412(t3,t2);}

/* k4591 in k4588 in k4579 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4555 in k4552 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 902  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[471],((C_word*)t0)[2],lf[472]);}

/* k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4337(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4340,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[14],a[10]=t2,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t4=(C_word)C_eqp(lf[261],((C_word*)t0)[8]);
if(C_truep(t4)){
t5=t3;
f_4360(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)t0)[3];
if(C_truep(t5)){
t6=t3;
f_4360(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)((C_word*)t0)[15])[1];
if(C_truep(t6)){
t7=t3;
f_4360(t7,t6);}
else{
if(C_truep(((C_word*)t0)[2])){
t7=t3;
f_4360(t7,((C_word*)t0)[2]);}
else{
t7=((C_word*)t0)[11];
t8=t3;
f_4360(t8,(C_word)C_fixnum_greaterp(t7,C_fix(0)));}}}}}

/* k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4360(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4360,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[12])[1])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0));
t4=(C_truep(t3)?lf[462]:lf[463]);
/* c-backend.scm: 947  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t5))(7,t5,t2,C_SCHEME_TRUE,t4,lf[464],((C_word*)t0)[9],C_make_character(114));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0));
t4=(C_truep(t3)?lf[468]:lf[469]);
/* c-backend.scm: 973  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,C_SCHEME_TRUE,t4,lf[470]);}}
else{
t2=((C_word*)t0)[10];
f_4340(2,t2,C_SCHEME_UNDEFINED);}}

/* k4493 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* c-backend.scm: 975  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],lf[466]);}
else{
/* c-backend.scm: 976  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],lf[467],((C_word*)t0)[3]);}}

/* k4496 in k4493 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 978  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
t3=t2;
f_4501(2,t3,C_SCHEME_UNDEFINED);}}

/* k4508 in k4496 in k4493 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k4499 in k4496 in k4493 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 980  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[465]);}

/* k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[4],lf[343]);
if(C_truep(t3)){
/* c-backend.scm: 948  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,C_make_character(118));}
else{
t4=t2;
f_4369(2,t4,C_SCHEME_UNDEFINED);}}

/* k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 949  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[460],((C_word*)t0)[5],lf[461]);}

/* k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4476,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 951  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
t3=t2;
f_4375(2,t3,C_SCHEME_UNDEFINED);}}

/* k4474 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 953  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t3))(9,t3,t2,lf[456],C_SCHEME_TRUE,lf[457],C_SCHEME_TRUE,lf[458],((C_word*)t0)[6],lf[459]);}

/* k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],lf[451]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[2],C_SCHEME_FALSE));
if(C_truep(t4)){
/* c-backend.scm: 957  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t2,C_SCHEME_TRUE,lf[452],((C_word*)t0)[6],lf[453]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[2],lf[343]);
if(C_truep(t5)){
/* c-backend.scm: 958  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t6))(6,t6,t2,C_SCHEME_TRUE,lf[454],((C_word*)t0)[6],lf[455]);}
else{
t6=t2;
f_4381(2,t6,C_SCHEME_UNDEFINED);}}}

/* k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 959  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[450]);}

/* k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4449,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 960  ##compiler#make-argument-list */
t5=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[5],lf[449]);}

/* k4447 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 960  intersperse */
t2=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k4443 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 961  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[447],((C_word*)t0)[5],lf[448]);}

/* k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 963  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[445],((C_word*)t0)[2],lf[446]);}

/* k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 965  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[443],((C_word*)t0)[3],lf[444]);}

/* k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 966  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[442]);}

/* k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4420,a[2]=t5,a[3]=lf[441],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4420(t7,t2,t3,((C_word*)t0)[2]);}

/* do547 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4420,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4430,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 970  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,C_SCHEME_TRUE,lf[440],t2,C_make_character(59));}}

/* k4428 in do547 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4420(t4,((C_word*)t0)[2],t2,t3);}

/* k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4358 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
/* c-backend.scm: 971  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[2],C_SCHEME_TRUE,lf[438],((C_word*)t0)[3],lf[439]);}
else{
t3=((C_word*)t0)[2];
f_4340(2,t3,C_SCHEME_UNDEFINED);}}

/* k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 982  lambda-literal-body */
t4=C_retrieve(lf[437]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4348 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(C_word)C_fixnum_increase(((C_word*)t0)[5]):((C_word*)t0)[5]);
/* c-backend.scm: 981  expression */
t3=((C_word*)t0)[4];
f_1227(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k4341 in k4338 in k4335 in k4332 in k4329 in k4326 in k4323 in k4320 in k4317 in k4314 in k4311 in k4308 in k4305 in k4302 in k4299 in k4296 in k4293 in k4290 in k4287 in k4284 in k4281 in k4278 in k4275 in k4272 in k4269 in k4266 in k4260 in k4257 in k4254 in k4251 in k4248 in k4245 in k4242 in a4239 in procedures in ##compiler#generate-code in k1115 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 987  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3455,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 669  ##compiler#immediate? */
t4=C_retrieve(lf[435]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_i_numberp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[428]));}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[4]))){
t2=(C_word)C_fudge(C_fix(31));
t3=(C_truep(t2)?C_fix(1):C_fix(0));
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_plus(t3,C_fix(9)));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3503,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 673  literal-size */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3455(3,t4,t2,t3);}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[4]))){
t2=(C_word)C_i_vector_length(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3532,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 674  vector->list */
t6=*((C_word*)lf[432]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3546,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 675  ##compiler#block-variable-literal? */
t3=C_retrieve(lf[413]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}}}}}}}

/* k3544 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3546,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep((C_word)C_immp(((C_word*)t0)[4]))){
/* c-backend.scm: 676  bad-literal */
f_3449(((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3564,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 678  ##sys#bytevector? */
t3=*((C_word*)lf[412]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}}}}

/* k3562 in k3544 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3564,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_permanentp(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[5]);
/* c-backend.scm: 681  ##compiler#words */
t4=C_retrieve(lf[433]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[5]))){
t2=(C_word)C_block_size(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(C_fix(2),t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t2,a[6]=lf[434],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3599(t7,((C_word*)t0)[4],C_fix(0),t3);}
else{
/* c-backend.scm: 688  bad-literal */
f_3449(((C_word*)t0)[4],((C_word*)t0)[5]);}}}

/* loop in k3562 in k3544 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_fcall f_3599(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3599,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[5]))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_fixnum_increase(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3621,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(((C_word*)t0)[3],t2);
/* c-backend.scm: 687  literal-size */
t8=((C_word*)((C_word*)t0)[2])[1];
f_3455(3,t8,t6,t7);}}

/* k3619 in loop in k3562 in k3544 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],t1);
/* c-backend.scm: 687  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3599(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3575 in k3562 in k3544 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(C_fix(2),t1));}

/* k3538 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[431]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k3534 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 674  reduce */
t2=C_retrieve(lf[429]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],*((C_word*)lf[430]+1),C_fix(0),t1);}

/* k3530 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus((C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[2]),t1));}

/* k3501 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3503,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3507,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* c-backend.scm: 673  literal-size */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3455(3,t4,t2,t3);}

/* k3505 in k3501 in k3460 in literal-size in ##compiler#generate-code in k1115 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus((C_word)C_fixnum_plus(C_fix(3),((C_word*)t0)[2]),t1));}

/* literal-frame in ##compiler#generate-code in k1115 */
static void C_fcall f_3412(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3412,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3418,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[426],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3418(t5,t1,C_fix(0),((C_word*)t0)[2]);}

/* do377 in literal-frame in ##compiler#generate-code in k1115 */
static void C_fcall f_3418(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3418,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3428,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3447,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 663  sprintf */
t7=C_retrieve(lf[424]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,lf[425],t2);}}

/* k3445 in do377 in literal-frame in ##compiler#generate-code in k1115 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 663  gen-lit */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3722(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k3426 in do377 in literal-frame in ##compiler#generate-code in k1115 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3418(t4,((C_word*)t0)[2],t2,t3);}

/* gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4163(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4163,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_block_size(t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t7,a[5]=t4,a[6]=t2,a[7]=t5,a[8]=lf[422],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_4172(t9,t1,C_fix(0),t5);}

/* do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4172(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4172,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4182,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 795  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t6))(8,t6,t5,C_SCHEME_TRUE,((C_word*)t0)[6],C_make_character(61),((C_word*)t0)[5],C_make_character(40),((C_word*)t0)[7]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4214,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(((C_word*)t0)[3],t2);
/* c-backend.scm: 799  gen-lit */
t7=((C_word*)((C_word*)t0)[2])[1];
f_3722(t7,t5,t6,lf[421],C_SCHEME_FALSE);}}

/* k4212 in do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 800  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[420]);}

/* k4215 in k4212 in do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4172(t4,((C_word*)t0)[2],t2,t3);}

/* k4180 in do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4182,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4191,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=lf[419],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4191(t6,((C_word*)t0)[2],t2);}

/* do455 in k4180 in do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4191(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4191,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* c-backend.scm: 797  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t4))(7,t4,t1,lf[415],C_SCHEME_TRUE,lf[416],((C_word*)t0)[3],lf[417]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4204,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 798  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[418],t2,C_make_character(41));}}

/* k4202 in do455 in k4180 in do451 in gen-vector-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4191(t3,((C_word*)t0)[2],t2);}

/* gen-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_3722(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3722,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_fixnump(t2))){
t5=(C_word)C_eqp(lf[358],C_retrieve(lf[359]));
if(C_truep(t5)){
/* c-backend.scm: 708  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t6))(7,t6,t1,C_SCHEME_TRUE,t3,lf[360],t2,lf[361]);}
else{
/* c-backend.scm: 709  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t6))(7,t6,t1,C_SCHEME_TRUE,t3,lf[362],t2,lf[363]);}}
else{
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3744,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 710  ##compiler#block-variable-literal? */
t6=C_retrieve(lf[413]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}}

/* k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3744,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_retrieve(lf[364]);
t3=(C_word)C_eqp(((C_word*)t0)[8],t2);
if(C_truep(t3)){
/* c-backend.scm: 712  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[9],C_SCHEME_TRUE,((C_word*)t0)[7],lf[365]);}
else{
if(C_truep((C_word)C_i_numberp(((C_word*)t0)[8]))){
t4=(C_word)C_eqp(lf[366],C_retrieve(lf[359]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 715  ##sys#flo2fix */
t6=C_retrieve(lf[372]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[8]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3780,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 719  number->string */
C_number_to_string(3,0,t5,((C_word*)t0)[8]);}}
else{
if(C_truep((C_word)C_booleanp(((C_word*)t0)[8]))){
t4=(C_truep(((C_word*)t0)[8])?lf[377]:lf[378]);
/* c-backend.scm: 724  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t5))(7,t5,((C_word*)t0)[9],C_SCHEME_TRUE,((C_word*)t0)[7],C_make_character(61),t4,C_make_character(59));}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[8]))){
t4=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[8]));
/* c-backend.scm: 726  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t5))(7,t5,((C_word*)t0)[9],C_SCHEME_TRUE,((C_word*)t0)[7],lf[379],t4,lf[380]);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[8]))){
/* c-backend.scm: 728  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[9],C_SCHEME_TRUE,((C_word*)t0)[7],lf[381]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[8]))){
/* c-backend.scm: 729  gen-string-like-lit */
t4=((C_word*)t0)[6];
f_4059(t4,((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[8],lf[382],C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[8]))){
/* c-backend.scm: 730  gen-string-like-lit */
t4=((C_word*)t0)[6];
f_4059(t4,((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[8],lf[383],C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[8]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[8]))){
t5=(C_word)C_i_cdr(((C_word*)t0)[8]);
t6=t4;
f_3868(t6,(C_word)C_i_pairp(t5));}
else{
t5=t4;
f_3868(t5,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[8]))){
/* c-backend.scm: 747  gen-vector-like-lit */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4163(t4,((C_word*)t0)[9],((C_word*)t0)[7],((C_word*)t0)[8],lf[397]);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[8]))){
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 750  ##compiler#c-ify-string */
t6=C_retrieve(lf[97]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
if(C_truep((C_word)C_immp(((C_word*)t0)[8]))){
/* c-backend.scm: 761  bad-literal */
f_3449(((C_word*)t0)[9],((C_word*)t0)[8]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 762  ##sys#bytevector? */
t5=*((C_word*)lf[412]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[8]);}}}}}}}}}}}}}

/* k4027 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
if(C_truep((C_word)C_permanentp(((C_word*)t0)[7]))){
/* c-backend.scm: 764  gen-string-like-lit */
t2=((C_word*)t0)[6];
f_4059(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[7],lf[409],C_SCHEME_FALSE);}
else{
/* c-backend.scm: 765  gen-string-like-lit */
t2=((C_word*)t0)[6];
f_4059(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[7],lf[410],C_SCHEME_TRUE);}}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[7]))){
/* c-backend.scm: 766  gen-vector-like-lit */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4163(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[7],lf[411]);}
else{
/* c-backend.scm: 767  bad-literal */
f_3449(((C_word*)t0)[5],((C_word*)t0)[7]);}}}

/* k3982 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3990,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 752  ##compiler#namespace-lookup */
t4=C_retrieve(lf[20]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3988 in k3982 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 753  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[4],lf[408]);}

/* k3991 in k3988 in k3982 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[7])){
if(C_truep(((C_word*)t0)[6])){
/* c-backend.scm: 756  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc11)C_retrieve_proc(t2))(11,t2,((C_word*)t0)[5],lf[398],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[399],((C_word*)t0)[7],lf[400]);}
else{
/* c-backend.scm: 757  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],lf[401],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[402],((C_word*)t0)[7],lf[403]);}}
else{
if(C_truep(((C_word*)t0)[6])){
/* c-backend.scm: 759  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[5],lf[404],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[405]);}
else{
/* c-backend.scm: 760  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[5],lf[406],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[407]);}}}

/* k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_3868(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3868,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3873,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=lf[392],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3873(t5,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3936,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* c-backend.scm: 743  gen-lit */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3722(t4,t2,t3,lf[396],C_SCHEME_FALSE);}}

/* k3934 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 744  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[395]);}

/* k3937 in k3934 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* c-backend.scm: 745  gen-lit */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3722(t4,t2,t3,lf[394],C_SCHEME_FALSE);}

/* k3940 in k3937 in k3934 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 746  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],lf[393]);}

/* do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_3873(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3873,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3883,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 736  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,C_SCHEME_TRUE,((C_word*)t0)[4],lf[389],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3915,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* c-backend.scm: 740  gen-lit */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3722(t6,t4,t5,lf[391],C_SCHEME_FALSE);}}

/* k3913 in do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3915,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 741  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[390]);}

/* k3916 in k3913 in do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3873(t4,((C_word*)t0)[2],t2,t3);}

/* k3881 in do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3883,2,t0,t1);}
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[3]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3892,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=lf[388],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3892(t6,((C_word*)t0)[2],t2);}

/* do405 in k3881 in do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3892,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* c-backend.scm: 738  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t4))(7,t4,t1,lf[384],C_SCHEME_TRUE,lf[385],((C_word*)t0)[3],lf[386]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3905,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 739  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[387],t2,C_make_character(41));}}

/* k3903 in do405 in k3881 in do401 in k3866 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3892(t3,((C_word*)t0)[2],t2);}

/* k3778 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_string_length(t1);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(1)))){
t4=(C_word)C_i_string_ref(t1,C_fix(1));
t5=t2;
f_3786(t5,(C_word)C_u_i_char_alphabeticp(t4));}
else{
t4=t2;
f_3786(t4,C_SCHEME_FALSE);}}

/* k3784 in k3778 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_3786(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 721  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],lf[373],((C_word*)t0)[2],lf[374]);}
else{
/* c-backend.scm: 722  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],lf[375],((C_word*)t0)[2],lf[376]);}}

/* k3769 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3774,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 716  compiler-warning */
t3=C_retrieve(lf[369]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,lf[370],lf[371],((C_word*)t0)[2],t1);}

/* k3772 in k3769 in k3742 in gen-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 717  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[4],C_SCHEME_TRUE,((C_word*)t0)[3],lf[367],((C_word*)t0)[2],lf[368]);}

/* bad-literal in ##compiler#generate-code in k1115 */
static void C_fcall f_3449(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3449,NULL,2,t1,t2);}
/* c-backend.scm: 666  ##compiler#bomb */
t3=C_retrieve(lf[21]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[356],t2);}

/* gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4059(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4059,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_block_size(t3);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4066,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 771  fx/ */
t8=*((C_word*)lf[354]+1);
((C_proc4)C_retrieve_proc(t8))(4,t8,t7,t6,C_fix(80));}

/* k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 772  modulo */
t3=*((C_word*)lf[353]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],C_fix(80));}

/* k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 773  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),((C_word*)t0)[2],C_make_character(40));}

/* k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 774  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[352]);}
else{
t3=t2;
f_4075(2,t3,C_SCHEME_UNDEFINED);}}

/* k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 775  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[7],C_make_character(44));}

/* k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4078,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4083,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=lf[351],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_4083(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4083(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4083,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4093,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_eqp(((C_word*)t0)[6],C_fix(0));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t6)){
t8=t7;
f_4102(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[3],C_fix(0));
t9=t7;
f_4102(t9,(C_word)C_i_not(t8));}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4123,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fixnum_plus(t3,C_fix(80));
/* c-backend.scm: 782  string-like-substring */
f_4151(t7,((C_word*)t0)[4],t3,t8);}}

/* k4140 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 782  ##compiler#c-ify-string */
t2=C_retrieve(lf[97]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4136 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 782  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k4121 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(80));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4083(t4,((C_word*)t0)[2],t2,t3);}

/* k4100 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_fcall f_4102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4102,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4109,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 780  string-like-substring */
f_4151(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
f_4093(2,t2,C_SCHEME_UNDEFINED);}}

/* k4111 in k4100 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 780  ##compiler#c-ify-string */
t2=C_retrieve(lf[97]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4107 in k4100 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 780  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4091 in do429 in k4076 in k4073 in k4070 in k4067 in k4064 in gen-string-like-lit in ##compiler#generate-code in k1115 */
static void C_ccall f_4093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 781  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[350]);}

/* string-like-substring in ##compiler#generate-code in k1115 */
static void C_fcall f_4151(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4151,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t4,t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4158,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 786  make-string */
t7=*((C_word*)lf[348]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}

/* k4156 in string-like-substring in ##compiler#generate-code in k1115 */
static void C_ccall f_4158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4161,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 787  ##sys#copy-bytes */
t3=C_retrieve(lf[347]);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k4159 in k4156 in string-like-substring in ##compiler#generate-code in k1115 */
static void C_ccall f_4161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3126(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3126,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3129,a[2]=lf[298],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3165,a[2]=t8,a[3]=lf[322],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3245,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t9,a[6]=t7,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3293,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t8,a[6]=lf[345],tmp=(C_word)a,a+=7,tmp);
/* for-each */
t12=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,((C_word*)t0)[2]);}

/* a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3293,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3297,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 622  lambda-literal-argument-count */
t4=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3297,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 623  lambda-literal-rest-argument */
t5=C_retrieve(lf[285]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 624  lambda-literal-rest-argument-mode */
t3=C_retrieve(lf[284]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 625  lambda-literal-id */
t3=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 626  lambda-literal-customizable */
t3=C_retrieve(lf[288]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3410,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 627  lambda-literal-closure-size */
t4=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_3312(t3,C_SCHEME_FALSE);}}

/* k3408 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3312(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3312(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3312,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(C_word)C_fixnum_decrease(((C_word*)((C_word*)t0)[10])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[10])+1,t3);
t5=t2;
f_3315(t5,t4);}
else{
t3=t2;
f_3315(t3,C_SCHEME_UNDEFINED);}}

/* k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3315(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3315,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm: 629  lambda-literal-direct */
t3=C_retrieve(lf[283]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3321,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[12];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
if(C_truep(((C_word*)t0)[11])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3327,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 631  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc11)C_retrieve_proc(t3))(11,t3,t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[339],((C_word*)t0)[9],lf[340],C_SCHEME_TRUE,lf[341],((C_word*)t0)[9],lf[342]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_3355(2,t3,((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3399,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 639  lambda-literal-allocated */
t4=C_retrieve(lf[282]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}}}}

/* k3397 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_3355(2,t3,t2);}
else{
/* c-backend.scm: 639  lambda-literal-external */
t3=C_retrieve(lf[344]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k3353 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3355,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_eqp(((C_word*)t0)[8],lf[250]);
t4=t2;
f_3361(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_3361(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3359 in k3353 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3361(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3361,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[343]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3371,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 642  lset-adjoin */
t4=C_retrieve(lf[278]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[279]+1),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 643  lset-adjoin */
t4=C_retrieve(lf[278]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[279]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 644  lset-adjoin */
t3=C_retrieve(lf[278]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[279]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[4])[1]);}}

/* k3377 in k3359 in k3353 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3373 in k3359 in k3353 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3369 in k3359 in k3353 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 633  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[337],((C_word*)t0)[3],lf[338]);}

/* k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 634  restore */
f_3129(t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k3331 in k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 635  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k3334 in k3331 in k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3339,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 636  ##compiler#make-argument-list */
t3=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],lf[336]);}

/* k3337 in k3334 in k3331 in k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3349,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 637  intersperse */
t4=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t1,C_make_character(44));}

/* k3347 in k3337 in k3334 in k3331 in k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k3340 in k3337 in k3334 in k3331 in k3328 in k3325 in k3319 in k3313 in k3310 in k3307 in k3304 in k3301 in k3298 in k3295 in a3292 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 638  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[335]);}

/* k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[3],a[3]=lf[334],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 648  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc13)C_retrieve_proc(t4))(13,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[329],t2,lf[330],C_SCHEME_TRUE,lf[331],t2,lf[332],t2,lf[333]);}

/* k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 650  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t3))(8,t3,t2,C_SCHEME_TRUE,lf[326],((C_word*)t0)[3],lf[327],((C_word*)t0)[3],lf[328]);}

/* k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3274,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 651  restore */
f_3129(t2,((C_word*)t0)[3]);}

/* k3272 in k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 652  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[325],((C_word*)t0)[2],C_make_character(44));}

/* k3275 in k3272 in k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3280,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3291,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 653  ##compiler#make-argument-list */
t5=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[324]);}

/* k3289 in k3275 in k3272 in k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 653  intersperse */
t2=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k3285 in k3275 in k3272 in k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k3278 in k3275 in k3272 in k3269 in k3266 in a3263 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 654  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[323]);}

/* k3246 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3262,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 656  emitter */
t4=((C_word*)t0)[3];
f_3165(t4,t3,C_SCHEME_FALSE);}

/* k3260 in k3246 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k3249 in k3246 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 657  emitter */
t3=((C_word*)t0)[2];
f_3165(t3,t2,C_SCHEME_TRUE);}

/* k3256 in k3249 in k3246 in k3243 in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* emitter in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3165(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3165,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3167,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[321],tmp=(C_word)a,a+=5,tmp));}

/* f_3167 in emitter in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3167(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3167,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[316]);
t5=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[317]);
/* c-backend.scm: 600  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc14)C_retrieve_proc(t6))(14,t6,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[318],t2,C_make_character(114),t4,lf[319],C_SCHEME_TRUE,lf[320],t2,C_make_character(114),t5);}

/* k3169 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 602  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[314],((C_word*)t0)[4],lf[315]);}

/* k3172 in k3169 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 603  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[313],((C_word*)t0)[4],C_make_character(114));}

/* k3175 in k3172 in k3169 */
static void C_ccall f_3177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* c-backend.scm: 604  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(118));}
else{
t3=t2;
f_3180(2,t3,C_SCHEME_UNDEFINED);}}

/* k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3180,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 605  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc11)C_retrieve_proc(t3))(11,t3,t2,lf[309],((C_word*)t0)[4],lf[310],C_SCHEME_TRUE,lf[311],C_SCHEME_TRUE,lf[312],((C_word*)t0)[4],C_make_character(59));}

/* k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 608  restore */
f_3129(t2,((C_word*)t0)[4]);}

/* k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 609  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[308]);}

/* k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3189,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 611  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[306]);}
else{
/* c-backend.scm: 612  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[307]);}}

/* k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 613  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[305]);}

/* k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3195,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 614  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[304]);}
else{
t3=t2;
f_3198(2,t3,C_SCHEME_UNDEFINED);}}

/* k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 615  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[303]);}

/* k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 616  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_SCHEME_TRUE,lf[302]);}

/* k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
/* c-backend.scm: 617  ##compiler#make-argument-list */
t6=C_retrieve(lf[300]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,lf[301]);}

/* k3216 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 617  intersperse */
t2=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k3212 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k3205 in k3202 in k3199 in k3196 in k3193 in k3190 in k3187 in k3184 in k3181 in k3178 in k3175 in k3172 in k3169 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 618  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[299]);}

/* restore in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3129(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3129,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3133,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_difference(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3142,a[2]=t6,a[3]=lf[297],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3142(t8,t3,t4,C_fix(0));}

/* do326 in restore in trampolines in ##compiler#generate-code in k1115 */
static void C_fcall f_3142(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3142,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3152,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 595  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t5))(8,t5,t4,C_SCHEME_TRUE,lf[294],t2,lf[295],t3,lf[296]);}}

/* k3150 in do326 in restore in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3142(t4,((C_word*)t0)[2],t2,t3);}

/* k3131 in restore in trampolines in ##compiler#generate-code in k1115 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 596  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[292],((C_word*)t0)[2],lf[293]);}

/* prototypes in ##compiler#generate-code in k1115 */
static void C_fcall f_2875(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2875,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 524  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_SCHEME_TRUE);}

/* k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[3],a[3]=lf[290],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2903(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2903,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2907,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 527  lambda-literal-argument-count */
t4=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 528  lambda-literal-customizable */
t3=C_retrieve(lf[288]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 529  lambda-literal-closure-size */
t4=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_2913(t3,C_SCHEME_FALSE);}}

/* k3122 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2913(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_fcall f_2913(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2913,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3110,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(t1)?(C_word)C_fixnum_decrease(((C_word*)t0)[5]):((C_word*)t0)[5]);
/* c-backend.scm: 530  ##compiler#make-variable-list */
t5=C_retrieve(lf[286]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,lf[287]);}

/* k3108 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 530  intersperse */
t2=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(44));}

/* k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 531  lambda-literal-id */
t3=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 532  lambda-literal-rest-argument */
t3=C_retrieve(lf[285]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 533  lambda-literal-rest-argument-mode */
t3=C_retrieve(lf[284]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 534  lambda-literal-direct */
t3=C_retrieve(lf[283]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 535  lambda-literal-allocated */
t3=C_retrieve(lf[282]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[8];
t4=C_retrieve(lf[277]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3102,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
/* c-backend.scm: 537  lset-adjoin */
t7=C_retrieve(lf[278]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,*((C_word*)lf[279]+1),((C_word*)((C_word*)t0)[3])[1],t6);}
else{
t5=t2;
f_2934(t5,C_SCHEME_UNDEFINED);}}

/* k3100 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2934(t3,t2);}

/* k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_fcall f_2934(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2934,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* c-backend.scm: 538  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[3],a[3]=lf[280],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3095,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 543  lambda-literal-callee-signatures */
t5=C_retrieve(lf[281]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k3093 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3075 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3076,3,t0,t1,t2);}
t3=t2;
t4=C_retrieve(lf[277]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3087,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_increase(t2);
/* c-backend.scm: 542  lset-adjoin */
t7=C_retrieve(lf[278]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,*((C_word*)lf[279]+1),((C_word*)((C_word*)t0)[2])[1],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k3085 in a3075 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_eqp(lf[261],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[219]))){
/* c-backend.scm: 553  string-append */
t5=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[219]),lf[268]);}
else{
t5=t4;
f_3052(2,t5,lf[269]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 545  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,lf[275],((C_word*)t0)[5],lf[276],C_SCHEME_TRUE);}}

/* k3025 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 546  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[274]);}

/* k3028 in k3025 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(((C_word*)t0)[2])?lf[272]:lf[273]);
/* c-backend.scm: 547  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k3031 in k3028 in k3025 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* c-backend.scm: 549  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[270]);}
else{
/* c-backend.scm: 550  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[271]);}}

/* k3034 in k3031 in k3028 in k3025 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 551  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3050 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3052,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 554  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,lf[266],t1,lf[267],C_SCHEME_TRUE);}

/* k3053 in k3050 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[264]))){
/* c-backend.scm: 556  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[265],C_SCHEME_TRUE);}
else{
t3=t2;
f_3058(2,t3,C_SCHEME_UNDEFINED);}}

/* k3056 in k3053 in k3050 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3058,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 557  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[263]);}

/* k3059 in k3056 in k3053 in k3050 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 558  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[262],((C_word*)t0)[2]);}

/* k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 559  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(40));}

/* k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_2949(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 560  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[260]);}}

/* k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2999,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_2999(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_2999(t4,C_SCHEME_FALSE);}}

/* k2997 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_fcall f_2999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2999,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 562  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[259]);}
else{
t2=((C_word*)t0)[2];
f_2952(2,t2,C_SCHEME_UNDEFINED);}}

/* k3000 in k2997 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm: 563  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=((C_word*)t0)[2];
f_2952(2,t2,C_SCHEME_UNDEFINED);}}

/* k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2955,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 566  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[257]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 574  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(41));}}

/* k2985 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_2990(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 576  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[258]);}}

/* k2988 in k2985 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 577  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k2959 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[250]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 569  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t4))(10,t4,t3,C_SCHEME_TRUE,lf[253],((C_word*)t0)[2],lf[254],C_SCHEME_TRUE,lf[255],((C_word*)t0)[2],lf[256]);}}

/* k2968 in k2959 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k2971 in k2968 in k2959 in k2953 in k2950 in k2947 in k2944 in k2941 in k2938 in k2935 in k2932 in k2929 in k2926 in k2923 in k2920 in k2917 in k2914 in k2911 in k2908 in k2905 in a2902 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* c-backend.scm: 572  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[251],t2,lf[252]);}

/* k2880 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2887,a[2]=lf[249],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[2])[1]);}

/* a2886 in k2880 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2887,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2891,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 581  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,C_SCHEME_TRUE,lf[247],t2,lf[248]);}

/* k2889 in a2886 in k2880 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 582  make-list */
t4=C_retrieve(lf[245]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[246]);}

/* k2899 in k2889 in a2886 in k2880 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k2892 in k2889 in a2886 in k2880 in k2877 in prototypes in ##compiler#generate-code in k1115 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 583  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[244]);}

/* declarations in ##compiler#generate-code in k1115 */
static void C_fcall f_2848(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2848,NULL,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2855,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 513  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[242]);}

/* k2853 in declarations in ##compiler#generate-code in k1115 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2869,a[2]=lf[241],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve(lf[221]));}

/* a2868 in k2853 in declarations in ##compiler#generate-code in k1115 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2869,3,t0,t1,t2);}
/* c-backend.scm: 516  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc10)C_retrieve_proc(t3))(10,t3,t1,C_SCHEME_TRUE,lf[237],t2,lf[238],C_SCHEME_TRUE,lf[239],t2,lf[240]);}

/* k2856 in k2853 in declarations in ##compiler#generate-code in k1115 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 520  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,((C_word*)t0)[2],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[235],((C_word*)t0)[3],lf[236]);}}

/* header in ##compiler#generate-code in k1115 */
static void C_fcall f_2700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2700,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=lf[209],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2720,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 486  current-seconds */
t5=C_retrieve(lf[233]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k2838 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 486  ##sys#decode-seconds */
t2=C_retrieve(lf[232]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_vectorp(t1))){
t3=(C_word)C_i_vector_length(t1);
t4=t2;
f_2726(t4,(C_word)C_eqp(t3,C_fix(10)));}
else{
t3=t2;
f_2726(t3,C_SCHEME_FALSE);}}

/* k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_fcall f_2726(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2726,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(2));
t4=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(3));
t5=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(4));
t6=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(5));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fixnum_plus(C_fix(1900),t6);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2803,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=(C_word)C_fixnum_increase(t5);
/* c-backend.scm: 490  pad0 */
f_2703(t9,t10);}
else{
/* ##sys#match-error */
t2=*((C_word*)lf[231]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[4],((C_word*)t0)[5]);}}

/* k2801 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 490  pad0 */
f_2703(t2,((C_word*)t0)[2]);}

/* k2805 in k2801 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 490  pad0 */
f_2703(t2,((C_word*)t0)[2]);}

/* k2809 in k2805 in k2801 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2815,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 490  pad0 */
f_2703(t2,((C_word*)t0)[2]);}

/* k2813 in k2809 in k2805 in k2801 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2819,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 491  chicken-version */
t3=C_retrieve(lf[230]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k2817 in k2813 in k2809 in k2805 in k2801 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 488  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc23)C_retrieve_proc(t2))(23,t2,((C_word*)t0)[8],lf[224],((C_word*)t0)[7],lf[225],C_SCHEME_TRUE,lf[226],C_SCHEME_TRUE,lf[227],((C_word*)t0)[6],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[3],C_make_character(58),((C_word*)t0)[2],C_SCHEME_TRUE,lf[228],t1,C_SCHEME_TRUE,lf[229]);}

/* k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 493  ##compiler#gen-list */
t3=*((C_word*)lf[7]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[223]));}

/* k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 494  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[219]))){
/* c-backend.scm: 495  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[220],C_retrieve(lf[219]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2792,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 497  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[222]);}}

/* k2790 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 498  ##compiler#gen-list */
t2=*((C_word*)lf[7]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve(lf[221]));}

/* k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 499  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc9)C_retrieve_proc(t3))(9,t3,t2,C_SCHEME_TRUE,lf[215],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[216],C_retrieve(lf[217]),lf[218]);}

/* k2754 in k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[210]))){
/* c-backend.scm: 501  ##compiler#generate-foreign-callback-stub-prototypes */
t3=C_retrieve(lf[211]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[212]));}
else{
t3=t2;
f_2759(2,t3,C_SCHEME_UNDEFINED);}}

/* k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[213])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2774,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 503  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}
else{
t3=t2;
f_2762(2,t3,C_SCHEME_UNDEFINED);}}

/* k2772 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=lf[214],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_retrieve(lf[213]));}

/* a2778 in k2772 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2779,3,t0,t1,t2);}
/* c-backend.scm: 504  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,C_SCHEME_TRUE,t2);}

/* k2760 in k2757 in k2754 in k2751 in k2748 in k2745 in k2742 in k2724 in k2718 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve(lf[210]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 506  ##compiler#generate-foreign-callback-stub-prototypes */
t2=C_retrieve(lf[211]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve(lf[212]));}}

/* pad0 in header in ##compiler#generate-code in k1115 */
static void C_fcall f_2703(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2703,NULL,2,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(10)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 484  number->string */
C_number_to_string(3,0,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k2715 in pad0 in header in ##compiler#generate-code in k1115 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 484  string-append */
t2=*((C_word*)lf[207]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[208],t1);}

/* expression in ##compiler#generate-code in k1115 */
static void C_fcall f_1227(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1227,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1230,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=t6,a[7]=lf[202],tmp=(C_word)a,a+=8,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2668,a[2]=t6,a[3]=lf[205],tmp=(C_word)a,a+=4,tmp));
/* c-backend.scm: 479  expr */
t11=((C_word*)t6)[1];
f_1230(t11,t1,t2,t3);}

/* expr-args in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_2668(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2668,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2674,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[203],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 473  pair-for-each */
t5=C_retrieve(lf[204]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t2);}

/* a2673 in expr-args in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2674,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2678,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;
f_2678(2,t5,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 475  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,C_make_character(44));}}

/* k2676 in a2673 in expr-args in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 476  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_1230(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[211],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1230,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[37]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=(C_word)C_eqp(t11,lf[38]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t7);
t14=(C_truep(t13)?lf[39]:lf[40]);
/* c-backend.scm: 163  ##compiler#gen */
t15=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t15))(3,t15,t1,t14);}
else{
t13=(C_word)C_eqp(t11,lf[41]);
if(C_truep(t13)){
t14=(C_word)C_i_cadr(t7);
t15=(C_word)C_fix((C_word)C_character_code(t14));
/* c-backend.scm: 164  ##compiler#gen */
t16=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t16))(5,t16,t1,lf[42],t15,C_make_character(41));}
else{
t14=(C_word)C_eqp(t11,lf[43]);
if(C_truep(t14)){
/* c-backend.scm: 165  ##compiler#gen */
t15=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t15))(3,t15,t1,lf[44]);}
else{
t15=(C_word)C_eqp(t11,lf[45]);
if(C_truep(t15)){
t16=(C_word)C_i_cadr(t7);
/* c-backend.scm: 166  ##compiler#gen */
t17=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t17))(5,t17,t1,lf[46],t16,C_make_character(41));}
else{
t16=(C_word)C_eqp(t11,lf[47]);
if(C_truep(t16)){
/* c-backend.scm: 167  ##compiler#gen */
t17=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t17))(3,t17,t1,lf[48]);}
else{
/* c-backend.scm: 168  ##compiler#bomb */
t17=C_retrieve(lf[21]);
((C_proc3)C_retrieve_proc(t17))(3,t17,t1,lf[49]);}}}}}}
else{
t11=(C_word)C_eqp(t9,lf[50]);
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
/* c-backend.scm: 170  ##compiler#gen */
t13=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t13))(5,t13,t1,lf[51],t12,C_make_character(93));}
else{
t12=(C_word)C_eqp(t9,lf[52]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1338,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 173  ##compiler#gen */
t14=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t14))(4,t14,t13,C_SCHEME_TRUE,lf[55]);}
else{
t13=(C_word)C_eqp(t9,lf[56]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t7);
/* c-backend.scm: 182  ##compiler#gen */
t15=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t15))(4,t15,t1,lf[57],t14);}
else{
t14=(C_word)C_eqp(t9,lf[58]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t7);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[6],a[3]=t17,a[4]=lf[59],tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_1396(t19,t1,t5,t3,t15);}
else{
t15=(C_word)C_eqp(t9,lf[60]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1447,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 194  ##compiler#gen */
t17=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t17))(3,t17,t16,lf[62]);}
else{
t16=(C_word)C_eqp(t9,lf[63]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1474,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 199  ##compiler#gen */
t18=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t18))(3,t18,t17,lf[65]);}
else{
t17=(C_word)C_eqp(t9,lf[66]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1493,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 204  ##compiler#gen */
t19=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t19))(3,t19,t18,lf[67]);}
else{
t18=(C_word)C_eqp(t9,lf[68]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1526,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 211  ##compiler#gen */
t20=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t20))(3,t20,t19,lf[71]);}
else{
t19=(C_word)C_eqp(t9,lf[72]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1563,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 218  ##compiler#gen */
t21=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t21))(3,t21,t20,lf[74]);}
else{
t20=(C_word)C_eqp(t9,lf[75]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1592,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 225  ##compiler#gen */
t22=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t22))(3,t22,t21,lf[77]);}
else{
t21=(C_word)C_eqp(t9,lf[78]);
if(C_truep(t21)){
t22=(C_word)C_i_car(t7);
t23=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1624,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=t22,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 233  ##compiler#gen */
t24=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t24))(5,t24,t23,lf[86],t22,C_make_character(44));}
else{
t22=(C_word)C_eqp(t9,lf[87]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1659,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 243  ##compiler#gen */
t24=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t24))(3,t24,t23,lf[89]);}
else{
t23=(C_word)C_eqp(t9,lf[90]);
if(C_truep(t23)){
t24=(C_word)C_i_car(t7);
/* c-backend.scm: 247  ##compiler#gen */
t25=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t25))(4,t25,t1,C_make_character(116),t24);}
else{
t24=(C_word)C_eqp(t9,lf[91]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1691,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t26=(C_word)C_i_car(t7);
/* c-backend.scm: 250  ##compiler#gen */
t27=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t27))(5,t27,t25,C_make_character(116),t26,C_make_character(61));}
else{
t25=(C_word)C_eqp(t9,lf[92]);
if(C_truep(t25)){
t26=(C_word)C_i_car(t7);
t27=(C_word)C_i_cadr(t7);
if(C_truep((C_word)C_i_caddr(t7))){
if(C_truep(t27)){
/* c-backend.scm: 259  ##compiler#gen */
t28=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t28))(5,t28,t1,lf[93],t26,lf[94]);}
else{
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1733,a[2]=t26,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1737,a[2]=t28,tmp=(C_word)a,a+=3,tmp);
t30=(C_word)C_i_cadddr(t7);
/* c-backend.scm: 260  symbol->string */
t31=*((C_word*)lf[98]+1);
((C_proc3)C_retrieve_proc(t31))(3,t31,t29,t30);}}
else{
if(C_truep(t27)){
/* c-backend.scm: 261  ##compiler#gen */
t28=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t28))(5,t28,t1,lf[99],t26,lf[100]);}
else{
/* c-backend.scm: 262  ##compiler#gen */
t28=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t28))(5,t28,t1,lf[101],t26,lf[102]);}}}
else{
t26=(C_word)C_eqp(t9,lf[103]);
if(C_truep(t26)){
t27=(C_word)C_i_car(t7);
t28=(C_word)C_i_cadr(t7);
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1765,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t28)){
/* c-backend.scm: 268  ##compiler#gen */
t30=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t30))(5,t30,t29,lf[104],t27,lf[105]);}
else{
/* c-backend.scm: 269  ##compiler#gen */
t30=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t30))(5,t30,t29,lf[106],t27,lf[107]);}}
else{
t27=(C_word)C_eqp(t9,lf[108]);
if(C_truep(t27)){
t28=(C_word)C_i_car(t7);
if(C_truep((C_word)C_i_cadr(t7))){
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1799,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 277  ##compiler#gen */
t30=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t30))(5,t30,t29,lf[109],t28,lf[110]);}
else{
t29=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1812,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 281  ##compiler#gen */
t30=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t30))(5,t30,t29,lf[111],t28,lf[112]);}}
else{
t28=(C_word)C_eqp(t9,lf[113]);
if(C_truep(t28)){
/* c-backend.scm: 285  ##compiler#gen */
t29=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t29))(3,t29,t1,lf[114]);}
else{
t29=(C_word)C_eqp(t9,lf[115]);
if(C_truep(t29)){
t30=(C_word)C_i_cdr(t5);
t31=(C_word)C_i_length(t30);
t32=t3;
t33=(C_word)C_fixnum_increase(t31);
t34=(C_word)C_i_cdr(t7);
t35=(C_word)C_i_pairp(t34);
t36=(C_truep(t35)?(C_word)C_i_cadr(t7):C_SCHEME_FALSE);
t37=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1855,a[2]=t35,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t36,a[6]=t32,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=t31,a[10]=t33,a[11]=t3,a[12]=t30,a[13]=((C_word*)t0)[5],a[14]=t1,a[15]=t5,a[16]=t7,tmp=(C_word)a,a+=17,tmp);
/* c-backend.scm: 294  ##compiler#source-info->string */
t38=C_retrieve(lf[149]);
((C_proc3)C_retrieve_proc(t38))(3,t38,t37,t36);}
else{
t30=(C_word)C_eqp(t9,lf[150]);
if(C_truep(t30)){
t31=(C_word)C_i_length(t5);
t32=(C_word)C_fixnum_increase(t31);
t33=(C_word)C_i_car(t7);
t34=(C_word)C_i_cadr(t7);
t35=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2228,a[2]=t34,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=t32,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=t31,a[10]=t1,a[11]=t33,tmp=(C_word)a,a+=12,tmp);
/* c-backend.scm: 356  lambda-literal-closure-size */
t36=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t36))(3,t36,t35,((C_word*)t0)[4]);}
else{
t31=(C_word)C_eqp(t9,lf[156]);
if(C_truep(t31)){
t32=(C_word)C_i_cdr(t5);
t33=(C_word)C_i_length(t32);
t34=(C_word)C_fixnum_increase(t33);
t35=(C_word)C_i_caddr(t7);
t36=(C_word)C_i_cadddr(t7);
t37=(C_word)C_eqp(t36,C_fix(0));
t38=(C_word)C_i_not(t37);
t39=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2313,a[2]=t35,a[3]=t36,a[4]=t38,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=t32,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 384  find-lambda */
t41=((C_word*)t0)[2];
f_1185(t41,t40,t35);}
else{
t32=(C_word)C_eqp(t9,lf[158]);
if(C_truep(t32)){
t33=(C_word)C_i_length(t5);
t34=(C_word)C_fixnum_plus(t33,C_fix(1));
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2336,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t36=(C_word)C_i_car(t7);
/* c-backend.scm: 401  ##compiler#gen */
t37=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t37))(8,t37,t35,C_SCHEME_TRUE,lf[160],t36,lf[161],t34,lf[162]);}
else{
t33=(C_word)C_eqp(t9,lf[163]);
if(C_truep(t33)){
t34=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2355,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 406  ##compiler#gen */
t35=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t35))(4,t35,t34,C_SCHEME_TRUE,lf[165]);}
else{
t34=(C_word)C_eqp(t9,lf[166]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2374,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t36=(C_word)C_i_car(t7);
/* c-backend.scm: 411  ##compiler#gen */
t37=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t37))(5,t37,t35,lf[167],t36,C_make_character(40));}
else{
t35=(C_word)C_eqp(t9,lf[168]);
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2393,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=(C_word)C_i_car(t7);
t38=(C_word)C_i_length(t5);
/* c-backend.scm: 416  ##compiler#gen */
t39=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t39))(6,t39,t36,lf[169],t37,lf[170],t38);}
else{
t36=(C_word)C_eqp(t9,lf[171]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2429,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t38=(C_word)C_i_cadr(t7);
/* c-backend.scm: 424  ##compiler#foreign-result-conversion */
t39=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t39))(4,t39,t37,t38,lf[173]);}
else{
t37=(C_word)C_eqp(t9,lf[174]);
if(C_truep(t37)){
t38=(C_word)C_i_cadr(t7);
t39=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2449,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t40=(C_word)C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2467,a[2]=t38,a[3]=t40,a[4]=t39,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 428  ##compiler#foreign-type-declaration */
t42=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t42))(4,t42,t41,t38,lf[179]);}
else{
t38=(C_word)C_eqp(t9,lf[180]);
if(C_truep(t38)){
t39=(C_word)C_i_car(t7);
t40=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2483,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t41=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2497,a[2]=t39,a[3]=t40,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 434  ##compiler#foreign-result-conversion */
t42=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t42))(4,t42,t41,t39,lf[185]);}
else{
t39=(C_word)C_eqp(t9,lf[186]);
if(C_truep(t39)){
t40=(C_word)C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2513,a[2]=t40,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t42=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=t41,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 440  ##compiler#foreign-type-declaration */
t43=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t43))(4,t43,t42,t40,lf[191]);}
else{
t40=(C_word)C_eqp(t9,lf[192]);
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2550,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 447  ##compiler#gen */
t42=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t42))(4,t42,t41,C_SCHEME_TRUE,lf[197]);}
else{
t41=(C_word)C_eqp(t9,lf[198]);
if(C_truep(t41)){
t42=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2633,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 462  ##compiler#gen */
t43=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t43))(3,t43,t42,lf[200]);}
else{
/* c-backend.scm: 470  ##compiler#bomb */
t42=C_retrieve(lf[21]);
((C_proc3)C_retrieve_proc(t42))(3,t42,t1,lf[201]);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 463  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2634 in k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 464  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[199]);}

/* k2637 in k2634 in k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 465  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2640 in k2637 in k2634 in k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 466  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(58));}

/* k2643 in k2640 in k2637 in k2634 in k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2648,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
/* c-backend.scm: 467  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2646 in k2643 in k2640 in k2637 in k2634 in k2631 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 468  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 448  expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1230(t4,t2,t3,((C_word*)t0)[3]);}

/* k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2556,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 449  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[196]);}

/* k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2556,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2569,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[195],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2569(t7,((C_word*)t0)[2],t2,t3);}

/* do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_2569(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2569,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 453  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,C_SCHEME_TRUE,lf[193]);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2592,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 456  ##compiler#gen */
t6=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,C_SCHEME_TRUE,lf[194]);}}

/* k2590 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
/* c-backend.scm: 457  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2593 in k2590 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 458  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(58));}

/* k2596 in k2593 in k2590 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2601,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* c-backend.scm: 459  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2599 in k2596 in k2593 in k2590 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_2569(t4,((C_word*)t0)[2],t2,t3);}

/* k2577 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 454  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2580 in k2577 in do228 in k2554 in k2551 in k2548 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 455  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* k2539 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 440  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[189],t1,lf[190]);}

/* k2511 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 441  expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1230(t4,t2,t3,((C_word*)t0)[3]);}

/* k2514 in k2511 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 442  ##compiler#foreign-argument-conversion */
t4=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2531 in k2514 in k2511 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 442  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[188],t1);}

/* k2517 in k2514 in k2511 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 443  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2520 in k2517 in k2514 in k2511 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 444  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[187]);}

/* k2495 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2501,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 434  ##compiler#foreign-type-declaration */
t3=C_retrieve(lf[178]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[184]);}

/* k2499 in k2495 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 434  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[182],t1,lf[183]);}

/* k2481 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 435  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2484 in k2481 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 436  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[181]);}

/* k2465 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2471,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 428  ##compiler#foreign-argument-conversion */
t3=C_retrieve(lf[177]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2469 in k2465 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 428  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[4],C_make_character(40),((C_word*)t0)[3],lf[176],((C_word*)t0)[2],C_make_character(41),t1);}

/* k2447 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 429  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2450 in k2447 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 430  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[175]);}

/* k2427 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[3]);
/* c-backend.scm: 424  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],t1,t2,C_make_character(41));}

/* k2391 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 419  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_make_character(44));}
else{
t3=t2;
f_2396(2,t3,C_SCHEME_UNDEFINED);}}

/* k2403 in k2391 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 420  expr-args */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2668(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2394 in k2391 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 421  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2372 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2377,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 412  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2375 in k2372 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 413  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2353 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 407  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k2356 in k2353 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 408  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[164]);}

/* k2334 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2339,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 402  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2337 in k2334 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 403  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[159]);}

/* k2315 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 384  lambda-literal-closure-size */
t2=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(C_word)C_i_car(((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 386  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],C_make_character(40));}

/* k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2294,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 388  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[157],((C_word*)t0)[2],C_make_character(41));}
else{
t3=t2;
f_2264(2,t3,C_SCHEME_UNDEFINED);}}

/* k2292 in k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_not(((C_word*)t0)[4]);
t3=(C_truep(t2)?t2:(C_word)C_i_pairp(((C_word*)t0)[3]));
if(C_truep(t3)){
/* c-backend.scm: 389  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],C_make_character(44));}
else{
t4=((C_word*)t0)[2];
f_2264(2,t4,C_SCHEME_UNDEFINED);}}

/* k2262 in k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2267,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_2267(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2282,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 391  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k2280 in k2262 in k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
/* c-backend.scm: 392  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(44));}
else{
t2=((C_word*)t0)[2];
f_2267(2,t2,C_SCHEME_UNDEFINED);}}

/* k2265 in k2262 in k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
/* c-backend.scm: 393  expr-args */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2668(t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=t2;
f_2270(2,t3,C_SCHEME_UNDEFINED);}}

/* k2268 in k2265 in k2262 in k2259 in k2311 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 394  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(((C_word*)t0)[11])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 358  lambda-literal-temporaries */
t4=C_retrieve(lf[123]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2212,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 371  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],C_make_character(40));}}

/* k2210 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2212,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2215,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_2215(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 372  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[155]);}}

/* k2213 in k2210 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 373  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2216 in k2213 in k2210 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 374  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_fixnum_plus(t1,((C_word*)t0)[2]);
/* c-backend.scm: 359  iota */
t4=C_retrieve(lf[85]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[6],t3,C_fix(1));}

/* k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[154],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 360  for-each */
t4=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[2],t1);}

/* a2194 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2195,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 362  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k2197 in a2194 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 363  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2200 in k2197 in a2194 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 364  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k2175 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2185,a[2]=lf[153],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 368  iota */
t5=C_retrieve(lf[85]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k2191 in k2175 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 366  for-each */
t2=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2184 in k2175 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2185,4,t0,t1,t2,t3);}
/* c-backend.scm: 367  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t4))(8,t4,t1,C_SCHEME_TRUE,C_make_character(116),t3,lf[152],t2,C_make_character(59));}

/* k2178 in k2175 in k2172 in k2169 in k2226 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 369  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[151]);}

/* k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1858,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_cddr(((C_word*)t0)[16]);
t4=(C_word)C_i_pairp(t3);
t5=t2;
f_1858(t5,(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[16]):C_SCHEME_FALSE));}
else{
t3=t2;
f_1858(t3,C_SCHEME_FALSE);}}

/* k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_1858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1858,NULL,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_cadddr(((C_word*)t0)[16]):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2121,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 297  find-lambda */
t6=((C_word*)t0)[2];
f_1185(t6,t5,t1);}
else{
t4=t3;
f_1864(t4,C_SCHEME_FALSE);}}

/* k2119 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 297  lambda-literal-closure-size */
t2=C_retrieve(lf[148]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2115 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1864(t2,(C_word)C_eqp(t1,C_fix(0)));}

/* k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_1864(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1864,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[144]))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2057,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_cadr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_numberp(t7))){
t8=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cdddr(((C_word*)t0)[4]);
t10=t5;
f_2057(t10,(C_word)C_i_nullp(t9));}
else{
t9=t5;
f_2057(t9,C_SCHEME_FALSE);}}
else{
t8=t5;
f_2057(t8,C_SCHEME_FALSE);}}
else{
t7=t5;
f_2057(t7,C_SCHEME_FALSE);}}
else{
t6=t5;
f_2057(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_2034(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_1870(2,t4,C_SCHEME_UNDEFINED);}}

/* k2055 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_2057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2057,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 303  slashify */
f_1207(t4,t2);}
else{
t2=((C_word*)t0)[3];
f_2034(2,t2,C_SCHEME_FALSE);}}

/* k2068 in k2055 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 303  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[3],C_SCHEME_TRUE,lf[145],((C_word*)t0)[2],lf[146],t1,lf[147]);}

/* k2032 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2034,2,t0,t1);}
if(C_truep(C_retrieve(lf[137]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2044,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 306  slashify */
f_1207(t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1225,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 151  ->string */
t5=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}}

/* k1223 in k2032 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 151  string-translate* */
t2=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[143]);}

/* k2049 in k2032 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 307  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[140],t1,lf[141]);}

/* k2042 in k2032 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 306  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[138],t1,lf[139]);}

/* k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[15],C_fix(1));
t3=(C_word)C_eqp(lf[56],t2);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[15],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t4);
/* c-backend.scm: 310  ##compiler#gen */
t7=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t7))(7,t7,t5,C_SCHEME_TRUE,t6,C_make_character(40),((C_word*)t0)[10],lf[117]);}
else{
if(C_truep(((C_word*)t0)[9])){
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1901,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1991,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 314  lambda-literal-id */
t6=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1994,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
/* c-backend.scm: 340  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],C_make_character(61));}}}

/* k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1994,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1997,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 341  expr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1230(t3,t2,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 342  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,C_make_character(59),C_SCHEME_TRUE,lf[135],((C_word*)t0)[4],lf[136]);}

/* k1998 in k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_retrieve(lf[129]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2015,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2015(t5,t3);}
else{
t5=C_retrieve(lf[134]);
t6=t4;
f_2015(t6,(C_truep(t5)?t5:(C_word)C_i_car(((C_word*)t0)[2])));}}

/* k2013 in k1998 in k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_2015(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* c-backend.scm: 345  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[130],((C_word*)t0)[2],lf[131]);}
else{
/* c-backend.scm: 346  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[132],((C_word*)t0)[2],lf[133]);}}

/* k2001 in k1998 in k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 347  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t3))(7,t3,t2,lf[127],((C_word*)t0)[3],lf[128],((C_word*)t0)[2],C_make_character(44));}

/* k2004 in k2001 in k1998 in k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 348  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2007 in k2004 in k2001 in k1998 in k1995 in k1992 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 349  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[126]);}

/* k1989 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
/* c-backend.scm: 315  lambda-literal-looping */
t3=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_1901(2,t3,C_SCHEME_FALSE);}}

/* k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1901,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
/* c-backend.scm: 316  lambda-literal-temporaries */
t3=C_retrieve(lf[123]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_1951(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 331  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}}

/* k1973 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 332  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1976 in k1973 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 333  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k1949 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* c-backend.scm: 334  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k1952 in k1949 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_1957(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 335  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_make_character(44));}}

/* k1955 in k1952 in k1949 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_1960(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 336  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_make_character(116),((C_word*)t0)[2],C_make_character(44));}}

/* k1958 in k1955 in k1952 in k1949 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 337  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1961 in k1958 in k1955 in k1952 in k1949 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 338  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[124]);}

/* k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_fixnum_plus(t1,((C_word*)t0)[6]);
/* c-backend.scm: 317  iota */
t4=C_retrieve(lf[85]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[5],t3,C_fix(1));}

/* k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[122],tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 318  for-each */
t4=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[2],t1);}

/* a1933 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1934,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1938,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 320  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k1936 in a1933 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 321  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1939 in k1936 in a1933 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 322  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k1908 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1924,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1932,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 326  iota */
t5=C_retrieve(lf[85]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k1930 in k1908 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 324  for-each */
t2=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1923 in k1908 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1924,4,t0,t1,t2,t3);}
/* c-backend.scm: 325  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc8)C_retrieve_proc(t4))(8,t4,t1,C_SCHEME_TRUE,C_make_character(116),t3,lf[120],t2,C_make_character(59));}

/* k1911 in k1908 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_1916(2,t3,C_SCHEME_UNDEFINED);}
else{
/* c-backend.scm: 327  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,C_SCHEME_TRUE,lf[119],((C_word*)t0)[2],C_make_character(59));}}

/* k1914 in k1911 in k1908 in k1905 in k1902 in k1899 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 328  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_SCHEME_TRUE,lf[118]);}

/* k1880 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1885,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 311  expr-args */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2668(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1883 in k1880 in k1868 in k1862 in k1856 in k1853 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 312  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[116]);}

/* k1810 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1815,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 282  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1813 in k1810 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 283  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1797 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 278  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1800 in k1797 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 279  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(59));}

/* k1763 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1765,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1768,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 270  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1766 in k1763 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 271  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1735 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 260  ##compiler#c-ify-string */
t2=C_retrieve(lf[97]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1731 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 260  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[3],lf[95],((C_word*)t0)[2],lf[96],t1,C_make_character(41));}

/* k1689 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 251  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1657 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 244  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1660 in k1657 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 245  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[88]);}

/* k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1636,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[83],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1650,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* c-backend.scm: 239  iota */
t5=C_retrieve(lf[85]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],C_fix(1),C_fix(1));}

/* k1648 in k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 234  for-each */
t2=*((C_word*)lf[84]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1635 in k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1636,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 236  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[81],t3,lf[82]);}

/* k1638 in a1635 in k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 237  expr */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1230(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1641 in k1638 in a1635 in k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 238  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(44));}

/* k1625 in k1622 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
/* c-backend.scm: 240  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[79],t2,lf[80]);}

/* k1590 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1595,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 226  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1593 in k1590 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 227  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[76]);}

/* k1596 in k1593 in k1590 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 228  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1599 in k1596 in k1593 in k1590 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 229  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1561 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 219  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1564 in k1561 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 220  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[73]);}

/* k1567 in k1564 in k1561 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1572,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 221  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1570 in k1567 in k1564 in k1561 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 222  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1524 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 212  expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1230(t4,t2,t3,((C_word*)t0)[3]);}

/* k1527 in k1524 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t3,C_fix(1));
/* c-backend.scm: 213  ##compiler#gen */
t5=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,lf[69],t4,lf[70]);}

/* k1530 in k1527 in k1524 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1535,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 214  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1533 in k1530 in k1527 in k1524 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 215  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1491 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* c-backend.scm: 205  expr */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1230(t4,t2,t3,((C_word*)t0)[3]);}

/* k1494 in k1491 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* c-backend.scm: 206  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,C_make_character(44),t3,C_make_character(44));}

/* k1497 in k1494 in k1491 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1499,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 207  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1500 in k1497 in k1494 in k1491 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 208  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(41));}

/* k1472 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 200  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1475 in k1472 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 201  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[64]);}

/* k1445 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 195  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1448 in k1445 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(t2,C_fix(1));
/* c-backend.scm: 196  ##compiler#gen */
t4=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[2],lf[61],t3,C_make_character(93));}

/* loop in expr in expression in ##compiler#generate-code in k1115 */
static void C_fcall f_1396(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1396,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep((C_word)C_fixnum_greaterp(t5,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* c-backend.scm: 187  ##compiler#gen */
t7=*((C_word*)lf[1]+1);
((C_proc6)C_retrieve_proc(t7))(6,t7,t6,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t6=(C_word)C_i_car(t2);
/* c-backend.scm: 191  expr */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1230(t7,t1,t6,t3);}}

/* k1404 in loop in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
/* c-backend.scm: 188  expr */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1230(t4,t2,t3,((C_word*)t0)[6]);}

/* k1407 in k1404 in loop in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 189  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(59));}

/* k1410 in k1407 in k1404 in loop in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
/* c-backend.scm: 190  loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1396(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* c-backend.scm: 174  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1339 in k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 175  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[54]);}

/* k1342 in k1339 in k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* c-backend.scm: 176  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1345 in k1342 in k1339 in k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* c-backend.scm: 177  ##compiler#gen */
t3=*((C_word*)lf[1]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,C_make_character(125),C_SCHEME_TRUE,lf[53]);}

/* k1348 in k1345 in k1342 in k1339 in k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
/* c-backend.scm: 178  expr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1230(t4,t2,t3,((C_word*)t0)[2]);}

/* k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in expr in expression in ##compiler#generate-code in k1115 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 179  ##compiler#gen */
t2=*((C_word*)lf[1]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(125));}

/* slashify in ##compiler#generate-code in k1115 */
static void C_fcall f_1207(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1207,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1215,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* c-backend.scm: 150  ->string */
t4=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1213 in slashify in ##compiler#generate-code in k1115 */
static void C_ccall f_1215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* c-backend.scm: 150  string-translate */
t2=C_retrieve(lf[32]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],t1,lf[33],lf[34]);}

/* find-lambda in ##compiler#generate-code in k1115 */
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1185,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1189,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1197,a[2]=t2,a[3]=lf[29],tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 147  find */
t5=C_retrieve(lf[30]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a1196 in find-lambda in ##compiler#generate-code in k1115 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1197,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 147  lambda-literal-id */
t4=C_retrieve(lf[28]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1203 in a1196 in find-lambda in ##compiler#generate-code in k1115 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* k1187 in find-lambda in ##compiler#generate-code in k1115 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* c-backend.scm: 148  ##compiler#bomb */
t2=C_retrieve(lf[21]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[27],((C_word*)t0)[2]);}}

/* ##compiler#namespace-lookup in k1115 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1137,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[14])))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1149,a[2]=t4,a[3]=t2,a[4]=lf[24],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1149(t6,t1,C_retrieve(lf[18]),C_fix(0));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* loop in ##compiler#namespace-lookup in k1115 */
static void C_fcall f_1149(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1149,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* c-backend.scm: 134  ##compiler#bomb */
t4=C_retrieve(lf[21]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[22],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1180,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* c-backend.scm: 135  cdar */
t5=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k1178 in loop in ##compiler#namespace-lookup in k1115 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],t1))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
/* c-backend.scm: 136  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1149(t4,((C_word*)t0)[5],t2,t3);}}

/* ##compiler#setup-quick-namespace-list in k1115 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1126,a[2]=lf[17],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_retrieve(lf[18]));}

/* a1125 in ##compiler#setup-quick-namespace-list in k1115 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1126,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(t2);
/* c-backend.scm: 128  append */
t5=*((C_word*)lf[16]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,C_retrieve(lf[14]));}

/* k1129 in a1125 in ##compiler#setup-quick-namespace-list in k1115 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[14]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#compute-namespace-size */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1112,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(37));}

/* ##compiler#gen-list */
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1096,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1102,a[2]=lf[8],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1110,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* c-backend.scm: 104  intersperse */
t5=C_retrieve(lf[9]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,C_make_character(32));}

/* k1108 in ##compiler#gen-list */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1101 in ##compiler#gen-list */
static void C_ccall f_1102(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1102,3,t0,t1,t2);}
/* c-backend.scm: 103  display */
t3=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,*((C_word*)lf[0]+1));}

/* ##compiler#gen */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1075r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1075r(t0,t1,t2);}}

static void C_ccall f_1075r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=lf[4],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a1080 in ##compiler#gen */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1081,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t3)){
/* c-backend.scm: 97   newline */
t4=*((C_word*)lf[2]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,*((C_word*)lf[0]+1));}
else{
/* c-backend.scm: 98   display */
t4=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,*((C_word*)lf[0]+1));}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[682] = {
{"toplevelc-backend.scm",(void*)C_backend_toplevel},
{"f_8738c-backend.scm",(void*)f_8738},
{"f_8742c-backend.scm",(void*)f_8742},
{"f_8734c-backend.scm",(void*)f_8734},
{"f_1117c-backend.scm",(void*)f_1117},
{"f_7997c-backend.scm",(void*)f_7997},
{"f_8063c-backend.scm",(void*)f_8063},
{"f_8084c-backend.scm",(void*)f_8084},
{"f_8156c-backend.scm",(void*)f_8156},
{"f_8591c-backend.scm",(void*)f_8591},
{"f_8533c-backend.scm",(void*)f_8533},
{"f_8497c-backend.scm",(void*)f_8497},
{"f_8462c-backend.scm",(void*)f_8462},
{"f_8414c-backend.scm",(void*)f_8414},
{"f_8366c-backend.scm",(void*)f_8366},
{"f_8318c-backend.scm",(void*)f_8318},
{"f_8283c-backend.scm",(void*)f_8283},
{"f_8247c-backend.scm",(void*)f_8247},
{"f_8211c-backend.scm",(void*)f_8211},
{"f_8189c-backend.scm",(void*)f_8189},
{"f_8184c-backend.scm",(void*)f_8184},
{"f_8179c-backend.scm",(void*)f_8179},
{"f_7999c-backend.scm",(void*)f_7999},
{"f_7200c-backend.scm",(void*)f_7200},
{"f_7230c-backend.scm",(void*)f_7230},
{"f_7257c-backend.scm",(void*)f_7257},
{"f_7443c-backend.scm",(void*)f_7443},
{"f_7452c-backend.scm",(void*)f_7452},
{"f_7840c-backend.scm",(void*)f_7840},
{"f_7807c-backend.scm",(void*)f_7807},
{"f_7817c-backend.scm",(void*)f_7817},
{"f_7775c-backend.scm",(void*)f_7775},
{"f_7740c-backend.scm",(void*)f_7740},
{"f_7670c-backend.scm",(void*)f_7670},
{"f_7625c-backend.scm",(void*)f_7625},
{"f_7593c-backend.scm",(void*)f_7593},
{"f_7561c-backend.scm",(void*)f_7561},
{"f_7529c-backend.scm",(void*)f_7529},
{"f_7497c-backend.scm",(void*)f_7497},
{"f_7475c-backend.scm",(void*)f_7475},
{"f_7202c-backend.scm",(void*)f_7202},
{"f_6031c-backend.scm",(void*)f_6031},
{"f_6108c-backend.scm",(void*)f_6108},
{"f_6198c-backend.scm",(void*)f_6198},
{"f_6210c-backend.scm",(void*)f_6210},
{"f_6306c-backend.scm",(void*)f_6306},
{"f_6321c-backend.scm",(void*)f_6321},
{"f_6938c-backend.scm",(void*)f_6938},
{"f_6954c-backend.scm",(void*)f_6954},
{"f_6958c-backend.scm",(void*)f_6958},
{"f_6971c-backend.scm",(void*)f_6971},
{"f_6969c-backend.scm",(void*)f_6969},
{"f_6965c-backend.scm",(void*)f_6965},
{"f_6892c-backend.scm",(void*)f_6892},
{"f_6905c-backend.scm",(void*)f_6905},
{"f_6842c-backend.scm",(void*)f_6842},
{"f_6792c-backend.scm",(void*)f_6792},
{"f_6753c-backend.scm",(void*)f_6753},
{"f_6763c-backend.scm",(void*)f_6763},
{"f_6714c-backend.scm",(void*)f_6714},
{"f_6724c-backend.scm",(void*)f_6724},
{"f_6675c-backend.scm",(void*)f_6675},
{"f_6685c-backend.scm",(void*)f_6685},
{"f_6636c-backend.scm",(void*)f_6636},
{"f_6646c-backend.scm",(void*)f_6646},
{"f_6576c-backend.scm",(void*)f_6576},
{"f_6593c-backend.scm",(void*)f_6593},
{"f_6603c-backend.scm",(void*)f_6603},
{"f_6601c-backend.scm",(void*)f_6601},
{"f_6597c-backend.scm",(void*)f_6597},
{"f_6589c-backend.scm",(void*)f_6589},
{"f_6537c-backend.scm",(void*)f_6537},
{"f_6547c-backend.scm",(void*)f_6547},
{"f_6501c-backend.scm",(void*)f_6501},
{"f_6465c-backend.scm",(void*)f_6465},
{"f_6429c-backend.scm",(void*)f_6429},
{"f_6393c-backend.scm",(void*)f_6393},
{"f_6367c-backend.scm",(void*)f_6367},
{"f_6375c-backend.scm",(void*)f_6375},
{"f_6358c-backend.scm",(void*)f_6358},
{"f_6366c-backend.scm",(void*)f_6366},
{"f_6353c-backend.scm",(void*)f_6353},
{"f_6038c-backend.scm",(void*)f_6038},
{"f_6033c-backend.scm",(void*)f_6033},
{"f_5966c-backend.scm",(void*)f_5966},
{"f_5970c-backend.scm",(void*)f_5970},
{"f_5973c-backend.scm",(void*)f_5973},
{"f_5976c-backend.scm",(void*)f_5976},
{"f_5979c-backend.scm",(void*)f_5979},
{"f_5985c-backend.scm",(void*)f_5985},
{"f_6029c-backend.scm",(void*)f_6029},
{"f_5988c-backend.scm",(void*)f_5988},
{"f_5996c-backend.scm",(void*)f_5996},
{"f_6017c-backend.scm",(void*)f_6017},
{"f_6000c-backend.scm",(void*)f_6000},
{"f_5991c-backend.scm",(void*)f_5991},
{"f_5577c-backend.scm",(void*)f_5577},
{"f_5583c-backend.scm",(void*)f_5583},
{"f_5587c-backend.scm",(void*)f_5587},
{"f_5590c-backend.scm",(void*)f_5590},
{"f_5593c-backend.scm",(void*)f_5593},
{"f_5596c-backend.scm",(void*)f_5596},
{"f_5602c-backend.scm",(void*)f_5602},
{"f_5901c-backend.scm",(void*)f_5901},
{"f_5904c-backend.scm",(void*)f_5904},
{"f_5964c-backend.scm",(void*)f_5964},
{"f_5907c-backend.scm",(void*)f_5907},
{"f_5910c-backend.scm",(void*)f_5910},
{"f_5913c-backend.scm",(void*)f_5913},
{"f_5916c-backend.scm",(void*)f_5916},
{"f_5949c-backend.scm",(void*)f_5949},
{"f_5957c-backend.scm",(void*)f_5957},
{"f_5919c-backend.scm",(void*)f_5919},
{"f_5947c-backend.scm",(void*)f_5947},
{"f_5922c-backend.scm",(void*)f_5922},
{"f_5925c-backend.scm",(void*)f_5925},
{"f_5928c-backend.scm",(void*)f_5928},
{"f_5604c-backend.scm",(void*)f_5604},
{"f_5614c-backend.scm",(void*)f_5614},
{"f_5623c-backend.scm",(void*)f_5623},
{"f_5647c-backend.scm",(void*)f_5647},
{"f_5653c-backend.scm",(void*)f_5653},
{"f_5687c-backend.scm",(void*)f_5687},
{"f_5344c-backend.scm",(void*)f_5344},
{"f_5350c-backend.scm",(void*)f_5350},
{"f_5354c-backend.scm",(void*)f_5354},
{"f_5357c-backend.scm",(void*)f_5357},
{"f_5360c-backend.scm",(void*)f_5360},
{"f_5575c-backend.scm",(void*)f_5575},
{"f_5366c-backend.scm",(void*)f_5366},
{"f_5369c-backend.scm",(void*)f_5369},
{"f_5372c-backend.scm",(void*)f_5372},
{"f_5375c-backend.scm",(void*)f_5375},
{"f_5378c-backend.scm",(void*)f_5378},
{"f_5381c-backend.scm",(void*)f_5381},
{"f_5384c-backend.scm",(void*)f_5384},
{"f_5387c-backend.scm",(void*)f_5387},
{"f_5390c-backend.scm",(void*)f_5390},
{"f_5393c-backend.scm",(void*)f_5393},
{"f_5564c-backend.scm",(void*)f_5564},
{"f_5396c-backend.scm",(void*)f_5396},
{"f_5399c-backend.scm",(void*)f_5399},
{"f_5402c-backend.scm",(void*)f_5402},
{"f_5405c-backend.scm",(void*)f_5405},
{"f_5408c-backend.scm",(void*)f_5408},
{"f_5411c-backend.scm",(void*)f_5411},
{"f_5414c-backend.scm",(void*)f_5414},
{"f_5417c-backend.scm",(void*)f_5417},
{"f_5542c-backend.scm",(void*)f_5542},
{"f_5512c-backend.scm",(void*)f_5512},
{"f_5532c-backend.scm",(void*)f_5532},
{"f_5520c-backend.scm",(void*)f_5520},
{"f_5524c-backend.scm",(void*)f_5524},
{"f_5528c-backend.scm",(void*)f_5528},
{"f_5420c-backend.scm",(void*)f_5420},
{"f_5423c-backend.scm",(void*)f_5423},
{"f_5453c-backend.scm",(void*)f_5453},
{"f_5456c-backend.scm",(void*)f_5456},
{"f_5494c-backend.scm",(void*)f_5494},
{"f_5490c-backend.scm",(void*)f_5490},
{"f_5459c-backend.scm",(void*)f_5459},
{"f_5462c-backend.scm",(void*)f_5462},
{"f_5465c-backend.scm",(void*)f_5465},
{"f_5432c-backend.scm",(void*)f_5432},
{"f_5435c-backend.scm",(void*)f_5435},
{"f_5426c-backend.scm",(void*)f_5426},
{"f_5326c-backend.scm",(void*)f_5326},
{"f_5332c-backend.scm",(void*)f_5332},
{"f_5336c-backend.scm",(void*)f_5336},
{"f_5339c-backend.scm",(void*)f_5339},
{"f_5275c-backend.scm",(void*)f_5275},
{"f_5279c-backend.scm",(void*)f_5279},
{"f_5284c-backend.scm",(void*)f_5284},
{"f_5291c-backend.scm",(void*)f_5291},
{"f_5311c-backend.scm",(void*)f_5311},
{"f_5259c-backend.scm",(void*)f_5259},
{"f_5265c-backend.scm",(void*)f_5265},
{"f_5273c-backend.scm",(void*)f_5273},
{"f_5243c-backend.scm",(void*)f_5243},
{"f_5249c-backend.scm",(void*)f_5249},
{"f_5257c-backend.scm",(void*)f_5257},
{"f_5154c-backend.scm",(void*)f_5154},
{"f_5163c-backend.scm",(void*)f_5163},
{"f_5192c-backend.scm",(void*)f_5192},
{"f_5202c-backend.scm",(void*)f_5202},
{"f_5195c-backend.scm",(void*)f_5195},
{"f_5179c-backend.scm",(void*)f_5179},
{"f_5081c-backend.scm",(void*)f_5081},
{"f_5085c-backend.scm",(void*)f_5085},
{"f_5099c-backend.scm",(void*)f_5099},
{"f_5112c-backend.scm",(void*)f_5112},
{"f_5115c-backend.scm",(void*)f_5115},
{"f_5118c-backend.scm",(void*)f_5118},
{"f_5088c-backend.scm",(void*)f_5088},
{"f_5091c-backend.scm",(void*)f_5091},
{"f_5094c-backend.scm",(void*)f_5094},
{"f_1182c-backend.scm",(void*)f_1182},
{"f_5045c-backend.scm",(void*)f_5045},
{"f_5049c-backend.scm",(void*)f_5049},
{"f_5052c-backend.scm",(void*)f_5052},
{"f_5055c-backend.scm",(void*)f_5055},
{"f_5058c-backend.scm",(void*)f_5058},
{"f_5061c-backend.scm",(void*)f_5061},
{"f_5064c-backend.scm",(void*)f_5064},
{"f_5067c-backend.scm",(void*)f_5067},
{"f_5070c-backend.scm",(void*)f_5070},
{"f_5073c-backend.scm",(void*)f_5073},
{"f_5076c-backend.scm",(void*)f_5076},
{"f_4234c-backend.scm",(void*)f_4234},
{"f_4240c-backend.scm",(void*)f_4240},
{"f_4244c-backend.scm",(void*)f_4244},
{"f_4247c-backend.scm",(void*)f_4247},
{"f_4250c-backend.scm",(void*)f_4250},
{"f_4253c-backend.scm",(void*)f_4253},
{"f_4256c-backend.scm",(void*)f_4256},
{"f_4259c-backend.scm",(void*)f_4259},
{"f_5042c-backend.scm",(void*)f_5042},
{"f_4262c-backend.scm",(void*)f_4262},
{"f_4268c-backend.scm",(void*)f_4268},
{"f_4271c-backend.scm",(void*)f_4271},
{"f_4274c-backend.scm",(void*)f_4274},
{"f_4277c-backend.scm",(void*)f_4277},
{"f_4280c-backend.scm",(void*)f_4280},
{"f_4283c-backend.scm",(void*)f_4283},
{"f_4286c-backend.scm",(void*)f_4286},
{"f_4289c-backend.scm",(void*)f_4289},
{"f_4292c-backend.scm",(void*)f_4292},
{"f_4295c-backend.scm",(void*)f_4295},
{"f_4298c-backend.scm",(void*)f_4298},
{"f_4301c-backend.scm",(void*)f_4301},
{"f_5011c-backend.scm",(void*)f_5011},
{"f_4304c-backend.scm",(void*)f_4304},
{"f_4972c-backend.scm",(void*)f_4972},
{"f_4975c-backend.scm",(void*)f_4975},
{"f_4978c-backend.scm",(void*)f_4978},
{"f_4994c-backend.scm",(void*)f_4994},
{"f_4997c-backend.scm",(void*)f_4997},
{"f_4307c-backend.scm",(void*)f_4307},
{"f_4310c-backend.scm",(void*)f_4310},
{"f_4313c-backend.scm",(void*)f_4313},
{"f_4944c-backend.scm",(void*)f_4944},
{"f_4947c-backend.scm",(void*)f_4947},
{"f_4316c-backend.scm",(void*)f_4316},
{"f_4319c-backend.scm",(void*)f_4319},
{"f_4322c-backend.scm",(void*)f_4322},
{"f_4325c-backend.scm",(void*)f_4325},
{"f_4328c-backend.scm",(void*)f_4328},
{"f_4331c-backend.scm",(void*)f_4331},
{"f_4906c-backend.scm",(void*)f_4906},
{"f_4916c-backend.scm",(void*)f_4916},
{"f_4334c-backend.scm",(void*)f_4334},
{"f_4849c-backend.scm",(void*)f_4849},
{"f_4861c-backend.scm",(void*)f_4861},
{"f_4864c-backend.scm",(void*)f_4864},
{"f_4870c-backend.scm",(void*)f_4870},
{"f_4771c-backend.scm",(void*)f_4771},
{"f_4813c-backend.scm",(void*)f_4813},
{"f_4774c-backend.scm",(void*)f_4774},
{"f_4780c-backend.scm",(void*)f_4780},
{"f_4783c-backend.scm",(void*)f_4783},
{"f_4789c-backend.scm",(void*)f_4789},
{"f_4707c-backend.scm",(void*)f_4707},
{"f_4710c-backend.scm",(void*)f_4710},
{"f_4713c-backend.scm",(void*)f_4713},
{"f_4716c-backend.scm",(void*)f_4716},
{"f_4719c-backend.scm",(void*)f_4719},
{"f_4734c-backend.scm",(void*)f_4734},
{"f_4722c-backend.scm",(void*)f_4722},
{"f_4725c-backend.scm",(void*)f_4725},
{"f_4680c-backend.scm",(void*)f_4680},
{"f_4690c-backend.scm",(void*)f_4690},
{"f_4554c-backend.scm",(void*)f_4554},
{"f_4670c-backend.scm",(void*)f_4670},
{"f_4678c-backend.scm",(void*)f_4678},
{"f_4557c-backend.scm",(void*)f_4557},
{"f_4563c-backend.scm",(void*)f_4563},
{"f_4635c-backend.scm",(void*)f_4635},
{"f_4660c-backend.scm",(void*)f_4660},
{"f_4668c-backend.scm",(void*)f_4668},
{"f_4664c-backend.scm",(void*)f_4664},
{"f_4645c-backend.scm",(void*)f_4645},
{"f_4566c-backend.scm",(void*)f_4566},
{"f_4569c-backend.scm",(void*)f_4569},
{"f_4603c-backend.scm",(void*)f_4603},
{"f_4606c-backend.scm",(void*)f_4606},
{"f_4609c-backend.scm",(void*)f_4609},
{"f_4572c-backend.scm",(void*)f_4572},
{"f_4575c-backend.scm",(void*)f_4575},
{"f_4578c-backend.scm",(void*)f_4578},
{"f_4581c-backend.scm",(void*)f_4581},
{"f_4590c-backend.scm",(void*)f_4590},
{"f_4593c-backend.scm",(void*)f_4593},
{"f_4337c-backend.scm",(void*)f_4337},
{"f_4360c-backend.scm",(void*)f_4360},
{"f_4495c-backend.scm",(void*)f_4495},
{"f_4498c-backend.scm",(void*)f_4498},
{"f_4510c-backend.scm",(void*)f_4510},
{"f_4501c-backend.scm",(void*)f_4501},
{"f_4366c-backend.scm",(void*)f_4366},
{"f_4369c-backend.scm",(void*)f_4369},
{"f_4372c-backend.scm",(void*)f_4372},
{"f_4476c-backend.scm",(void*)f_4476},
{"f_4375c-backend.scm",(void*)f_4375},
{"f_4378c-backend.scm",(void*)f_4378},
{"f_4381c-backend.scm",(void*)f_4381},
{"f_4384c-backend.scm",(void*)f_4384},
{"f_4449c-backend.scm",(void*)f_4449},
{"f_4445c-backend.scm",(void*)f_4445},
{"f_4387c-backend.scm",(void*)f_4387},
{"f_4390c-backend.scm",(void*)f_4390},
{"f_4393c-backend.scm",(void*)f_4393},
{"f_4396c-backend.scm",(void*)f_4396},
{"f_4399c-backend.scm",(void*)f_4399},
{"f_4402c-backend.scm",(void*)f_4402},
{"f_4420c-backend.scm",(void*)f_4420},
{"f_4430c-backend.scm",(void*)f_4430},
{"f_4405c-backend.scm",(void*)f_4405},
{"f_4340c-backend.scm",(void*)f_4340},
{"f_4350c-backend.scm",(void*)f_4350},
{"f_4343c-backend.scm",(void*)f_4343},
{"f_3455c-backend.scm",(void*)f_3455},
{"f_3462c-backend.scm",(void*)f_3462},
{"f_3546c-backend.scm",(void*)f_3546},
{"f_3564c-backend.scm",(void*)f_3564},
{"f_3599c-backend.scm",(void*)f_3599},
{"f_3621c-backend.scm",(void*)f_3621},
{"f_3577c-backend.scm",(void*)f_3577},
{"f_3540c-backend.scm",(void*)f_3540},
{"f_3536c-backend.scm",(void*)f_3536},
{"f_3532c-backend.scm",(void*)f_3532},
{"f_3503c-backend.scm",(void*)f_3503},
{"f_3507c-backend.scm",(void*)f_3507},
{"f_3412c-backend.scm",(void*)f_3412},
{"f_3418c-backend.scm",(void*)f_3418},
{"f_3447c-backend.scm",(void*)f_3447},
{"f_3428c-backend.scm",(void*)f_3428},
{"f_4163c-backend.scm",(void*)f_4163},
{"f_4172c-backend.scm",(void*)f_4172},
{"f_4214c-backend.scm",(void*)f_4214},
{"f_4217c-backend.scm",(void*)f_4217},
{"f_4182c-backend.scm",(void*)f_4182},
{"f_4191c-backend.scm",(void*)f_4191},
{"f_4204c-backend.scm",(void*)f_4204},
{"f_3722c-backend.scm",(void*)f_3722},
{"f_3744c-backend.scm",(void*)f_3744},
{"f_4029c-backend.scm",(void*)f_4029},
{"f_3984c-backend.scm",(void*)f_3984},
{"f_3990c-backend.scm",(void*)f_3990},
{"f_3993c-backend.scm",(void*)f_3993},
{"f_3868c-backend.scm",(void*)f_3868},
{"f_3936c-backend.scm",(void*)f_3936},
{"f_3939c-backend.scm",(void*)f_3939},
{"f_3942c-backend.scm",(void*)f_3942},
{"f_3873c-backend.scm",(void*)f_3873},
{"f_3915c-backend.scm",(void*)f_3915},
{"f_3918c-backend.scm",(void*)f_3918},
{"f_3883c-backend.scm",(void*)f_3883},
{"f_3892c-backend.scm",(void*)f_3892},
{"f_3905c-backend.scm",(void*)f_3905},
{"f_3780c-backend.scm",(void*)f_3780},
{"f_3786c-backend.scm",(void*)f_3786},
{"f_3771c-backend.scm",(void*)f_3771},
{"f_3774c-backend.scm",(void*)f_3774},
{"f_3449c-backend.scm",(void*)f_3449},
{"f_4059c-backend.scm",(void*)f_4059},
{"f_4066c-backend.scm",(void*)f_4066},
{"f_4069c-backend.scm",(void*)f_4069},
{"f_4072c-backend.scm",(void*)f_4072},
{"f_4075c-backend.scm",(void*)f_4075},
{"f_4078c-backend.scm",(void*)f_4078},
{"f_4083c-backend.scm",(void*)f_4083},
{"f_4142c-backend.scm",(void*)f_4142},
{"f_4138c-backend.scm",(void*)f_4138},
{"f_4123c-backend.scm",(void*)f_4123},
{"f_4102c-backend.scm",(void*)f_4102},
{"f_4113c-backend.scm",(void*)f_4113},
{"f_4109c-backend.scm",(void*)f_4109},
{"f_4093c-backend.scm",(void*)f_4093},
{"f_4151c-backend.scm",(void*)f_4151},
{"f_4158c-backend.scm",(void*)f_4158},
{"f_4161c-backend.scm",(void*)f_4161},
{"f_3126c-backend.scm",(void*)f_3126},
{"f_3293c-backend.scm",(void*)f_3293},
{"f_3297c-backend.scm",(void*)f_3297},
{"f_3300c-backend.scm",(void*)f_3300},
{"f_3303c-backend.scm",(void*)f_3303},
{"f_3306c-backend.scm",(void*)f_3306},
{"f_3309c-backend.scm",(void*)f_3309},
{"f_3410c-backend.scm",(void*)f_3410},
{"f_3312c-backend.scm",(void*)f_3312},
{"f_3315c-backend.scm",(void*)f_3315},
{"f_3321c-backend.scm",(void*)f_3321},
{"f_3399c-backend.scm",(void*)f_3399},
{"f_3355c-backend.scm",(void*)f_3355},
{"f_3361c-backend.scm",(void*)f_3361},
{"f_3379c-backend.scm",(void*)f_3379},
{"f_3375c-backend.scm",(void*)f_3375},
{"f_3371c-backend.scm",(void*)f_3371},
{"f_3327c-backend.scm",(void*)f_3327},
{"f_3330c-backend.scm",(void*)f_3330},
{"f_3333c-backend.scm",(void*)f_3333},
{"f_3336c-backend.scm",(void*)f_3336},
{"f_3339c-backend.scm",(void*)f_3339},
{"f_3349c-backend.scm",(void*)f_3349},
{"f_3342c-backend.scm",(void*)f_3342},
{"f_3245c-backend.scm",(void*)f_3245},
{"f_3264c-backend.scm",(void*)f_3264},
{"f_3268c-backend.scm",(void*)f_3268},
{"f_3271c-backend.scm",(void*)f_3271},
{"f_3274c-backend.scm",(void*)f_3274},
{"f_3277c-backend.scm",(void*)f_3277},
{"f_3291c-backend.scm",(void*)f_3291},
{"f_3287c-backend.scm",(void*)f_3287},
{"f_3280c-backend.scm",(void*)f_3280},
{"f_3248c-backend.scm",(void*)f_3248},
{"f_3262c-backend.scm",(void*)f_3262},
{"f_3251c-backend.scm",(void*)f_3251},
{"f_3258c-backend.scm",(void*)f_3258},
{"f_3165c-backend.scm",(void*)f_3165},
{"f_3167c-backend.scm",(void*)f_3167},
{"f_3171c-backend.scm",(void*)f_3171},
{"f_3174c-backend.scm",(void*)f_3174},
{"f_3177c-backend.scm",(void*)f_3177},
{"f_3180c-backend.scm",(void*)f_3180},
{"f_3183c-backend.scm",(void*)f_3183},
{"f_3186c-backend.scm",(void*)f_3186},
{"f_3189c-backend.scm",(void*)f_3189},
{"f_3192c-backend.scm",(void*)f_3192},
{"f_3195c-backend.scm",(void*)f_3195},
{"f_3198c-backend.scm",(void*)f_3198},
{"f_3201c-backend.scm",(void*)f_3201},
{"f_3204c-backend.scm",(void*)f_3204},
{"f_3218c-backend.scm",(void*)f_3218},
{"f_3214c-backend.scm",(void*)f_3214},
{"f_3207c-backend.scm",(void*)f_3207},
{"f_3129c-backend.scm",(void*)f_3129},
{"f_3142c-backend.scm",(void*)f_3142},
{"f_3152c-backend.scm",(void*)f_3152},
{"f_3133c-backend.scm",(void*)f_3133},
{"f_2875c-backend.scm",(void*)f_2875},
{"f_2879c-backend.scm",(void*)f_2879},
{"f_2903c-backend.scm",(void*)f_2903},
{"f_2907c-backend.scm",(void*)f_2907},
{"f_2910c-backend.scm",(void*)f_2910},
{"f_3124c-backend.scm",(void*)f_3124},
{"f_2913c-backend.scm",(void*)f_2913},
{"f_3110c-backend.scm",(void*)f_3110},
{"f_2916c-backend.scm",(void*)f_2916},
{"f_2919c-backend.scm",(void*)f_2919},
{"f_2922c-backend.scm",(void*)f_2922},
{"f_2925c-backend.scm",(void*)f_2925},
{"f_2928c-backend.scm",(void*)f_2928},
{"f_2931c-backend.scm",(void*)f_2931},
{"f_3102c-backend.scm",(void*)f_3102},
{"f_2934c-backend.scm",(void*)f_2934},
{"f_2937c-backend.scm",(void*)f_2937},
{"f_3095c-backend.scm",(void*)f_3095},
{"f_3076c-backend.scm",(void*)f_3076},
{"f_3087c-backend.scm",(void*)f_3087},
{"f_2940c-backend.scm",(void*)f_2940},
{"f_3027c-backend.scm",(void*)f_3027},
{"f_3030c-backend.scm",(void*)f_3030},
{"f_3033c-backend.scm",(void*)f_3033},
{"f_3036c-backend.scm",(void*)f_3036},
{"f_3052c-backend.scm",(void*)f_3052},
{"f_3055c-backend.scm",(void*)f_3055},
{"f_3058c-backend.scm",(void*)f_3058},
{"f_3061c-backend.scm",(void*)f_3061},
{"f_2943c-backend.scm",(void*)f_2943},
{"f_2946c-backend.scm",(void*)f_2946},
{"f_2949c-backend.scm",(void*)f_2949},
{"f_2999c-backend.scm",(void*)f_2999},
{"f_3002c-backend.scm",(void*)f_3002},
{"f_2952c-backend.scm",(void*)f_2952},
{"f_2955c-backend.scm",(void*)f_2955},
{"f_2987c-backend.scm",(void*)f_2987},
{"f_2990c-backend.scm",(void*)f_2990},
{"f_2961c-backend.scm",(void*)f_2961},
{"f_2970c-backend.scm",(void*)f_2970},
{"f_2973c-backend.scm",(void*)f_2973},
{"f_2882c-backend.scm",(void*)f_2882},
{"f_2887c-backend.scm",(void*)f_2887},
{"f_2891c-backend.scm",(void*)f_2891},
{"f_2901c-backend.scm",(void*)f_2901},
{"f_2894c-backend.scm",(void*)f_2894},
{"f_2848c-backend.scm",(void*)f_2848},
{"f_2855c-backend.scm",(void*)f_2855},
{"f_2869c-backend.scm",(void*)f_2869},
{"f_2858c-backend.scm",(void*)f_2858},
{"f_2700c-backend.scm",(void*)f_2700},
{"f_2840c-backend.scm",(void*)f_2840},
{"f_2720c-backend.scm",(void*)f_2720},
{"f_2726c-backend.scm",(void*)f_2726},
{"f_2803c-backend.scm",(void*)f_2803},
{"f_2807c-backend.scm",(void*)f_2807},
{"f_2811c-backend.scm",(void*)f_2811},
{"f_2815c-backend.scm",(void*)f_2815},
{"f_2819c-backend.scm",(void*)f_2819},
{"f_2744c-backend.scm",(void*)f_2744},
{"f_2747c-backend.scm",(void*)f_2747},
{"f_2750c-backend.scm",(void*)f_2750},
{"f_2792c-backend.scm",(void*)f_2792},
{"f_2753c-backend.scm",(void*)f_2753},
{"f_2756c-backend.scm",(void*)f_2756},
{"f_2759c-backend.scm",(void*)f_2759},
{"f_2774c-backend.scm",(void*)f_2774},
{"f_2779c-backend.scm",(void*)f_2779},
{"f_2762c-backend.scm",(void*)f_2762},
{"f_2703c-backend.scm",(void*)f_2703},
{"f_2717c-backend.scm",(void*)f_2717},
{"f_1227c-backend.scm",(void*)f_1227},
{"f_2668c-backend.scm",(void*)f_2668},
{"f_2674c-backend.scm",(void*)f_2674},
{"f_2678c-backend.scm",(void*)f_2678},
{"f_1230c-backend.scm",(void*)f_1230},
{"f_2633c-backend.scm",(void*)f_2633},
{"f_2636c-backend.scm",(void*)f_2636},
{"f_2639c-backend.scm",(void*)f_2639},
{"f_2642c-backend.scm",(void*)f_2642},
{"f_2645c-backend.scm",(void*)f_2645},
{"f_2648c-backend.scm",(void*)f_2648},
{"f_2550c-backend.scm",(void*)f_2550},
{"f_2553c-backend.scm",(void*)f_2553},
{"f_2556c-backend.scm",(void*)f_2556},
{"f_2569c-backend.scm",(void*)f_2569},
{"f_2592c-backend.scm",(void*)f_2592},
{"f_2595c-backend.scm",(void*)f_2595},
{"f_2598c-backend.scm",(void*)f_2598},
{"f_2601c-backend.scm",(void*)f_2601},
{"f_2579c-backend.scm",(void*)f_2579},
{"f_2582c-backend.scm",(void*)f_2582},
{"f_2541c-backend.scm",(void*)f_2541},
{"f_2513c-backend.scm",(void*)f_2513},
{"f_2516c-backend.scm",(void*)f_2516},
{"f_2533c-backend.scm",(void*)f_2533},
{"f_2519c-backend.scm",(void*)f_2519},
{"f_2522c-backend.scm",(void*)f_2522},
{"f_2497c-backend.scm",(void*)f_2497},
{"f_2501c-backend.scm",(void*)f_2501},
{"f_2483c-backend.scm",(void*)f_2483},
{"f_2486c-backend.scm",(void*)f_2486},
{"f_2467c-backend.scm",(void*)f_2467},
{"f_2471c-backend.scm",(void*)f_2471},
{"f_2449c-backend.scm",(void*)f_2449},
{"f_2452c-backend.scm",(void*)f_2452},
{"f_2429c-backend.scm",(void*)f_2429},
{"f_2393c-backend.scm",(void*)f_2393},
{"f_2405c-backend.scm",(void*)f_2405},
{"f_2396c-backend.scm",(void*)f_2396},
{"f_2374c-backend.scm",(void*)f_2374},
{"f_2377c-backend.scm",(void*)f_2377},
{"f_2355c-backend.scm",(void*)f_2355},
{"f_2358c-backend.scm",(void*)f_2358},
{"f_2336c-backend.scm",(void*)f_2336},
{"f_2339c-backend.scm",(void*)f_2339},
{"f_2317c-backend.scm",(void*)f_2317},
{"f_2313c-backend.scm",(void*)f_2313},
{"f_2261c-backend.scm",(void*)f_2261},
{"f_2294c-backend.scm",(void*)f_2294},
{"f_2264c-backend.scm",(void*)f_2264},
{"f_2282c-backend.scm",(void*)f_2282},
{"f_2267c-backend.scm",(void*)f_2267},
{"f_2270c-backend.scm",(void*)f_2270},
{"f_2228c-backend.scm",(void*)f_2228},
{"f_2212c-backend.scm",(void*)f_2212},
{"f_2215c-backend.scm",(void*)f_2215},
{"f_2218c-backend.scm",(void*)f_2218},
{"f_2171c-backend.scm",(void*)f_2171},
{"f_2174c-backend.scm",(void*)f_2174},
{"f_2195c-backend.scm",(void*)f_2195},
{"f_2199c-backend.scm",(void*)f_2199},
{"f_2202c-backend.scm",(void*)f_2202},
{"f_2177c-backend.scm",(void*)f_2177},
{"f_2193c-backend.scm",(void*)f_2193},
{"f_2185c-backend.scm",(void*)f_2185},
{"f_2180c-backend.scm",(void*)f_2180},
{"f_1855c-backend.scm",(void*)f_1855},
{"f_1858c-backend.scm",(void*)f_1858},
{"f_2121c-backend.scm",(void*)f_2121},
{"f_2117c-backend.scm",(void*)f_2117},
{"f_1864c-backend.scm",(void*)f_1864},
{"f_2057c-backend.scm",(void*)f_2057},
{"f_2070c-backend.scm",(void*)f_2070},
{"f_2034c-backend.scm",(void*)f_2034},
{"f_1225c-backend.scm",(void*)f_1225},
{"f_2051c-backend.scm",(void*)f_2051},
{"f_2044c-backend.scm",(void*)f_2044},
{"f_1870c-backend.scm",(void*)f_1870},
{"f_1994c-backend.scm",(void*)f_1994},
{"f_1997c-backend.scm",(void*)f_1997},
{"f_2000c-backend.scm",(void*)f_2000},
{"f_2015c-backend.scm",(void*)f_2015},
{"f_2003c-backend.scm",(void*)f_2003},
{"f_2006c-backend.scm",(void*)f_2006},
{"f_2009c-backend.scm",(void*)f_2009},
{"f_1991c-backend.scm",(void*)f_1991},
{"f_1901c-backend.scm",(void*)f_1901},
{"f_1975c-backend.scm",(void*)f_1975},
{"f_1978c-backend.scm",(void*)f_1978},
{"f_1951c-backend.scm",(void*)f_1951},
{"f_1954c-backend.scm",(void*)f_1954},
{"f_1957c-backend.scm",(void*)f_1957},
{"f_1960c-backend.scm",(void*)f_1960},
{"f_1963c-backend.scm",(void*)f_1963},
{"f_1904c-backend.scm",(void*)f_1904},
{"f_1907c-backend.scm",(void*)f_1907},
{"f_1934c-backend.scm",(void*)f_1934},
{"f_1938c-backend.scm",(void*)f_1938},
{"f_1941c-backend.scm",(void*)f_1941},
{"f_1910c-backend.scm",(void*)f_1910},
{"f_1932c-backend.scm",(void*)f_1932},
{"f_1924c-backend.scm",(void*)f_1924},
{"f_1913c-backend.scm",(void*)f_1913},
{"f_1916c-backend.scm",(void*)f_1916},
{"f_1882c-backend.scm",(void*)f_1882},
{"f_1885c-backend.scm",(void*)f_1885},
{"f_1812c-backend.scm",(void*)f_1812},
{"f_1815c-backend.scm",(void*)f_1815},
{"f_1799c-backend.scm",(void*)f_1799},
{"f_1802c-backend.scm",(void*)f_1802},
{"f_1765c-backend.scm",(void*)f_1765},
{"f_1768c-backend.scm",(void*)f_1768},
{"f_1737c-backend.scm",(void*)f_1737},
{"f_1733c-backend.scm",(void*)f_1733},
{"f_1691c-backend.scm",(void*)f_1691},
{"f_1659c-backend.scm",(void*)f_1659},
{"f_1662c-backend.scm",(void*)f_1662},
{"f_1624c-backend.scm",(void*)f_1624},
{"f_1650c-backend.scm",(void*)f_1650},
{"f_1636c-backend.scm",(void*)f_1636},
{"f_1640c-backend.scm",(void*)f_1640},
{"f_1643c-backend.scm",(void*)f_1643},
{"f_1627c-backend.scm",(void*)f_1627},
{"f_1592c-backend.scm",(void*)f_1592},
{"f_1595c-backend.scm",(void*)f_1595},
{"f_1598c-backend.scm",(void*)f_1598},
{"f_1601c-backend.scm",(void*)f_1601},
{"f_1563c-backend.scm",(void*)f_1563},
{"f_1566c-backend.scm",(void*)f_1566},
{"f_1569c-backend.scm",(void*)f_1569},
{"f_1572c-backend.scm",(void*)f_1572},
{"f_1526c-backend.scm",(void*)f_1526},
{"f_1529c-backend.scm",(void*)f_1529},
{"f_1532c-backend.scm",(void*)f_1532},
{"f_1535c-backend.scm",(void*)f_1535},
{"f_1493c-backend.scm",(void*)f_1493},
{"f_1496c-backend.scm",(void*)f_1496},
{"f_1499c-backend.scm",(void*)f_1499},
{"f_1502c-backend.scm",(void*)f_1502},
{"f_1474c-backend.scm",(void*)f_1474},
{"f_1477c-backend.scm",(void*)f_1477},
{"f_1447c-backend.scm",(void*)f_1447},
{"f_1450c-backend.scm",(void*)f_1450},
{"f_1396c-backend.scm",(void*)f_1396},
{"f_1406c-backend.scm",(void*)f_1406},
{"f_1409c-backend.scm",(void*)f_1409},
{"f_1412c-backend.scm",(void*)f_1412},
{"f_1338c-backend.scm",(void*)f_1338},
{"f_1341c-backend.scm",(void*)f_1341},
{"f_1344c-backend.scm",(void*)f_1344},
{"f_1347c-backend.scm",(void*)f_1347},
{"f_1350c-backend.scm",(void*)f_1350},
{"f_1353c-backend.scm",(void*)f_1353},
{"f_1207c-backend.scm",(void*)f_1207},
{"f_1215c-backend.scm",(void*)f_1215},
{"f_1185c-backend.scm",(void*)f_1185},
{"f_1197c-backend.scm",(void*)f_1197},
{"f_1205c-backend.scm",(void*)f_1205},
{"f_1189c-backend.scm",(void*)f_1189},
{"f_1137c-backend.scm",(void*)f_1137},
{"f_1149c-backend.scm",(void*)f_1149},
{"f_1180c-backend.scm",(void*)f_1180},
{"f_1120c-backend.scm",(void*)f_1120},
{"f_1126c-backend.scm",(void*)f_1126},
{"f_1131c-backend.scm",(void*)f_1131},
{"f_1112c-backend.scm",(void*)f_1112},
{"f_1096c-backend.scm",(void*)f_1096},
{"f_1110c-backend.scm",(void*)f_1110},
{"f_1102c-backend.scm",(void*)f_1102},
{"f_1075c-backend.scm",(void*)f_1075},
{"f_1081c-backend.scm",(void*)f_1081},
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
